#include "stdafx.h"
#include "helper.hpp"

#include "SDK/Engine_classes.hpp"
#include "SDK/EndGame_classes.hpp"
#include "SDK/Loca_Loading_classes.hpp"
#include "SDK/Pause_00_classes.hpp"
#include "SDK/BattleTips_classes.hpp"
#include "SDK/Com_Window_01_classes.hpp"

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <inipp/inipp.h>
#include <safetyhook.hpp>

#define spdlog_confparse(var) spdlog::info("Config Parse: {}: {}", #var, var)

HMODULE exeModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Fix details
std::string sFixName = "FF7RemakeFix";
std::string sFixVersion = "0.0.1";
std::filesystem::path sFixPath;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::string sLogFile = sFixName + ".log";
std::filesystem::path sExePath;
std::string sExeName;

// Aspect ratio / FOV / HUD
std::pair DesktopDimensions = { 0,0 };
const float fPi = 3.1415926535f;
const float fNativeAspect = 1.777777791f;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDWidthOffset;
float fHUDHeight;
float fHUDHeightOffset;
float fHUDScale;

// Ini variables
int iCustomResX;
int iCustomResY;
bool bFixAspect;
bool bFixHUD;
float fHUDResScale;
bool bFixMovies;
bool bAutoVignette;
float fVignetteStrength;

// Variables
int iCurrentResX;
int iCurrentResY;
bool bMovieIsPlaying;
int iRenderTargetX = 3840;
int iRenderTargetY = 2160;
int iScreenMode;
bool bHUDNeedsResize;

void Logging()
{
    // Get path to DLL
    WCHAR dllPath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, dllPath, MAX_PATH);
    sFixPath = dllPath;
    sFixPath = sFixPath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(exeModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // Spdlog initialisation
    try {
        logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
        spdlog::set_default_logger(logger);
        spdlog::flush_on(spdlog::level::debug);

        spdlog::info("----------");
        spdlog::info("{:s} v{:s} loaded.", sFixName.c_str(), sFixVersion.c_str());
        spdlog::info("----------");
        spdlog::info("Log file: {}", sFixPath.string() + sLogFile);
        spdlog::info("----------");
        spdlog::info("Module Name: {0:s}", sExeName.c_str());
        spdlog::info("Module Path: {0:s}", sExePath.string());
        spdlog::info("Module Address: 0x{0:x}", (uintptr_t)exeModule);
        spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(exeModule));
        spdlog::info("----------");
    }
    catch (const spdlog::spdlog_ex& ex) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        FreeLibraryAndExitThread(thisModule, 1);
    }
}

void Configuration()
{
    // Inipp initialisation
    std::ifstream iniFile(sFixPath / sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVersion.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sFixPath.string().c_str() << std::endl;
        spdlog::shutdown();
        FreeLibraryAndExitThread(thisModule, 1);
    }
    else {
        spdlog::info("Config file: {}", sFixPath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Parse config
    ini.strip_trailing_comments();
    spdlog::info("----------");

    // Load settings from ini
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);

    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix HUD"], "ResScale", fHUDResScale);
    inipp::get_value(ini.sections["Fix Movies"], "Enabled", bFixMovies);

    inipp::get_value(ini.sections["Vignette"], "Auto", bAutoVignette);
    inipp::get_value(ini.sections["Vignette"], "Strength", fVignetteStrength);

    // Clamp settings to avoid breaking things
    fHUDResScale = std::clamp(fHUDResScale, 0.00f, 3.00f);

    // Log ini parse
    spdlog_confparse(iCustomResX);
    spdlog_confparse(iCustomResY);
    spdlog_confparse(bFixAspect);
    spdlog_confparse(bFixHUD);
    spdlog_confparse(fHUDResScale);
    spdlog_confparse(bFixMovies);
    spdlog_confparse(bAutoVignette);
    spdlog_confparse(fVignetteStrength);

    spdlog::info("----------");
}

void CalculateAspectRatio(bool bLog)
{
    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // Log details about current resolution
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("Current Resolution: Resolution: {:d}x{:d}", iCurrentResX, iCurrentResY);
        spdlog::info("Current Resolution: iScreenMode: {}", iScreenMode);
        spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
        spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
        spdlog::info("----------");
    }

    // Signal for HUD resize
    bHUDNeedsResize = true;
}

void CalculateHUD(bool bLog)
{
    const int MAX_RENDER_TARGET_SIZE = 16384;
    float ResScale = 1.00f;

    if (fHUDResScale == 0.00f) {
        // Calculate a suggested resolution scale
        if (fAspectRatio > fNativeAspect)
            ResScale = fAspectMultiplier;
        else if (fAspectRatio < fNativeAspect)
            ResScale = 1.00f / fAspectMultiplier;
    }
    else {
        // Apply user-defined resolution scale
        ResScale = fHUDResScale;
    }

    // Set render target dimensions
    if (fAspectRatio > fNativeAspect) {
        iRenderTargetX = iCurrentResX;
        iRenderTargetY = static_cast<int>(iCurrentResX / fNativeAspect);
    }
    else if (fAspectRatio < fNativeAspect) {
        iRenderTargetX = static_cast<int>(iCurrentResY * fNativeAspect);
        iRenderTargetY = iCurrentResY;
    }

    // Apply resolution scale
    iRenderTargetX = static_cast<int>(iRenderTargetX * ResScale);
    iRenderTargetY = static_cast<int>(iRenderTargetY * ResScale);

    // Don't allow resolution of render target to exceed 8192 on X/Y axis so that people don't kill performance and thrash VRAM
    if (iRenderTargetX > MAX_RENDER_TARGET_SIZE || iRenderTargetY > MAX_RENDER_TARGET_SIZE) {
        float scaleFactorX = static_cast<float>(MAX_RENDER_TARGET_SIZE) / iRenderTargetX;
        float scaleFactorY = static_cast<float>(MAX_RENDER_TARGET_SIZE) / iRenderTargetY;

        float clampedResScale = std::min(scaleFactorX, scaleFactorY);

        iRenderTargetX = static_cast<int>(iRenderTargetX * clampedResScale);
        iRenderTargetY = static_cast<int>(iRenderTargetY * clampedResScale);
    }

    // Calculate HUD size and offsets to position HUD within render target
    if (fAspectRatio > fNativeAspect) {
        fHUDWidth = std::ceilf((static_cast<float>(iRenderTargetX) / fAspectRatio) * fNativeAspect);
        fHUDHeight = std::ceilf(static_cast<float>(iRenderTargetX) / fAspectRatio);

        fHUDWidthOffset = (static_cast<float>(iRenderTargetX) - fHUDWidth) / 2.00f;
        fHUDHeightOffset = (static_cast<float>(iRenderTargetY) - fHUDHeight) / 2.00f;
    }
    else if (fAspectRatio < fNativeAspect) {
        fHUDWidth = std::ceilf(static_cast<float>(iRenderTargetY) * fAspectRatio);
        fHUDHeight = std::ceilf((static_cast<float>(iRenderTargetY) * fAspectRatio) / fNativeAspect);

        fHUDWidthOffset = (static_cast<float>(iRenderTargetX) - fHUDWidth) / 2.00f;
        fHUDHeightOffset = (static_cast<float>(iRenderTargetY) - fHUDHeight) / 2.00f;
    }

    // Calculate HUD scale
    fHUDScale = std::ceilf((fHUDHeight / 1080.00f) * 1000.00f) / 1000.00f;
    fHUDScale += 0.001f; // fudgey

    // Log details about current HUD size
    if (bLog) {
        spdlog::info("----------");
        spdlog::info("HUD: Resolution: {}x{} - ResScale: {}", iRenderTargetX, iRenderTargetY, ResScale);
        spdlog::info("HUD: fHUDWidth: {}", fHUDWidth);
        spdlog::info("HUD: fHUDHeight: {}", fHUDHeight);
        spdlog::info("HUD: fHUDWidthOffset: {}", fHUDWidthOffset);
        spdlog::info("HUD: fHUDHeightOffset: {}", fHUDHeightOffset);
        spdlog::info("HUD: fHUDScale: {}", fHUDScale);
        spdlog::info("----------");
    }

    // Signal that HUD resize is done
    bHUDNeedsResize = false;
}

void UpdateOffsets()
{
    // GObjects
    std::uint8_t* GObjectsScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? 48 8B ?? ?? ?? ?? ?? 48 8D ?? ?? 48 85 ?? 74 ?? 44 39 ?? ?? 75 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), GObjectsScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GObjectsAddr = Memory::GetAbsolute(GObjectsScanResult + 0x7);
        SDK::Offsets::GObjects = static_cast<UC::uint32>(GObjectsAddr - (std::uint8_t*)exeModule);
        spdlog::info("Offsets: GObjects: Offset: {:x}", SDK::Offsets::GObjects);
    }
    else {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }


    // GNames
    std::uint8_t* GNamesScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? ?? ?? 33 ?? 8B ?? 85 ?? 75 ?? 48 89 ?? ?? ?? ?? ?? EB ??");
    if (GNamesScanResult) {
        spdlog::info("Offsets: GNames: Address is {:s}+{:x}", sExeName.c_str(), GNamesScanResult - (std::uint8_t*)exeModule);
        std::uint8_t* GNamesAddr = Memory::GetAbsolute(GNamesScanResult + 0x3);
        SDK::Offsets::GNames = static_cast<UC::uint32>(GNamesAddr - (std::uint8_t*)exeModule);
        spdlog::info("Offsets: GNames: Offset: {:x}", SDK::Offsets::GNames);
    }
    else {
        spdlog::error("Offsets: GNames: Pattern scan failed.");
    }

    // ProcessEvent
    std::uint8_t* ProcessEventScanResult = Memory::PatternScan(exeModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 48 63 ?? ?? 45 33 ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), ProcessEventScanResult - (std::uint8_t*)exeModule);
        SDK::Offsets::ProcessEvent = static_cast<UC::uint32>(ProcessEventScanResult - (std::uint8_t*)exeModule);
        spdlog::info("Offsets: ProcessEvent: Offset: {:x}", SDK::Offsets::ProcessEvent);
    }
    else {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void Resolution()
{
    // Grab desktop resolution/aspect just in case
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();

    // Replace 3840x2160 with custom resolution
    std::uint8_t* ResolutionListScanResult = Memory::PatternScan(exeModule, "C7 ?? ?? ?? 00 0F 00 00 C7 ?? ?? ?? 70 08 00 00");
    if (ResolutionListScanResult) {
        spdlog::info("Resolution List: Address is {:s}+{:x}", sExeName.c_str(), ResolutionListScanResult - (std::uint8_t*)exeModule);
        if (iCustomResX <= 0 || iCustomResY <= 0) {
            Memory::Write(ResolutionListScanResult + 0x4, DesktopDimensions.first);
            Memory::Write(ResolutionListScanResult + 0xC, DesktopDimensions.second);
            spdlog::info("Resolution List: Replaced 3840x2160 with {}x{}", DesktopDimensions.first, DesktopDimensions.second);
        }
        else {
            Memory::Write(ResolutionListScanResult + 0x4, iCustomResX);
            Memory::Write(ResolutionListScanResult + 0xC, iCustomResY);
            spdlog::info("Resolution List: Replaced 3840x2160 with {}x{}", iCustomResX, iCustomResY);
        }
    }
    else {
        spdlog::error("Resolution List: Pattern scan failed.");
    }

    // Current Resolution
    std::uint8_t* CurrentResolutionScanResult = Memory::PatternScan(exeModule, "89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? C6 ?? ?? ?? ?? ?? 00 88 ?? ?? ?? ?? ?? 48 85 ?? 74 ??");
    if (CurrentResolutionScanResult) {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), CurrentResolutionScanResult - (std::uint8_t*)exeModule);
        static SafetyHookMid CurrentResolutionMidHook{};
        CurrentResolutionMidHook = safetyhook::create_mid(CurrentResolutionScanResult,
            [](SafetyHookContext& ctx) {
                int iResX = static_cast<int>(ctx.rdx);
                int iResY = static_cast<int>(ctx.r8);

                iScreenMode = static_cast<int>(ctx.r9);

                if (iResX != iCurrentResX || iResY != iCurrentResY) {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio(true);
                }
            });
    }
    else {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectRatioFOV()
{
    if (bFixAspect) {
        // Aspect Ratio / FOV
        std::uint8_t* AspectRatioFOVScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 8B ?? ?? 33 ?? ?? ?? ?? ?? 83 ?? 01");
        if (AspectRatioFOVScanResult) {
            spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), AspectRatioFOVScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectRatioFOVScanResult,
                [](SafetyHookContext& ctx) {
                    // Fix vert- FOV
                    if (fAspectRatio > fNativeAspect)
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                });

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioFOVScanResult + 0xB,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying && fAspectRatio != fNativeAspect)
                        ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
        }
        else {
            spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
        }
    }
}

void HUD()
{
    if (bFixHUD) {
        // HUD: Render target
        std::uint8_t* HUDRenderTargetScanResult = Memory::PatternScan(exeModule, "89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 4C 8D ?? ?? 0F 10 ?? ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 48 89 ?? ?? ?? 89 ?? ??");
        if (HUDRenderTargetScanResult) {
            spdlog::info("HUD: Render Target: Address is {:s}+{:x}", sExeName.c_str(), HUDRenderTargetScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDRenderTargetMidHook{};
            HUDRenderTargetMidHook = safetyhook::create_mid(HUDRenderTargetScanResult + 0x6,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        // Calculate new HUD size if resolution changed
                        if (bHUDNeedsResize) {
                            CalculateHUD(true);
                        }

                        // Set render target dimensions 
                        *reinterpret_cast<int*>(ctx.rdi + 0x240) = iRenderTargetX;
                        *reinterpret_cast<int*>(ctx.rdi + 0x244) = iRenderTargetY;
                    }
                });
        }
        else {
            spdlog::error("HUD: Render Target: Pattern scan failed.");
        }

        // HUD: Constraints
        std::uint8_t* HUDConstraintsScanResult = Memory::PatternScan(exeModule, "0F 10 ?? 0F 11 ?? 48 85 ?? 74 ?? 48 83 ?? ?? ?? ?? ?? 00 74 ??");
        if (HUDConstraintsScanResult) {
            spdlog::info("HUD: Constraints: Address is {:s}+{:x}", sExeName.c_str(), HUDConstraintsScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDConstraintsMidHook{};
            HUDConstraintsMidHook = safetyhook::create_mid(HUDConstraintsScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        // Set HUD constraints 
                        *reinterpret_cast<int*>(ctx.rax + 0x8) = iRenderTargetX;
                        *reinterpret_cast<int*>(ctx.rax + 0xC) = iRenderTargetY;
                    }
                });
        }
        else {
            spdlog::error("HUD: Constraints: Pattern scan failed.");
        }

        // HUD: Size
        std::uint8_t* HUDSizeScanResult = Memory::PatternScan(exeModule, "0F 11 ?? ?? ?? 44 0F ?? ?? ?? ?? F2 44 ?? ?? ?? ?? ?? 48 89 ?? ?? ?? 48 89 ?? ?? ??");
        if (HUDSizeScanResult) {
            spdlog::info("HUD: Size: Address is {:s}+{:x}", sExeName.c_str(), HUDSizeScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDSizeMidHook{};
            HUDSizeMidHook = safetyhook::create_mid(HUDSizeScanResult,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying && fAspectRatio != fNativeAspect) {
                        ctx.xmm7.f32[3] = fHUDScale;
                        ctx.xmm8.f32[2] = fHUDScale;
                        ctx.xmm8.f32[3] = fHUDWidthOffset;
                        ctx.xmm9.f32[0] = fHUDHeightOffset;
                    }
                });
        }
        else {
            spdlog::error("HUD: Size: Pattern scan failed.");
        }

        // HUD: Map
        std::uint8_t* HUDMapUpperScanResult = Memory::PatternScan(exeModule, "F3 0F ?? ?? ?? 49 8B ?? ?? ?? ?? ?? F3 44 ?? ?? ?? F3 44 ?? ?? ?? ?? F3 45 ?? ?? ?? 48 8B ??");
        if (HUDMapUpperScanResult) {
            spdlog::info("HUD: Map: Upper: Address is {:s}+{:x}", sExeName.c_str(), HUDMapUpperScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDMapUpperMidHook{};
            HUDMapUpperMidHook = safetyhook::create_mid(HUDMapUpperScanResult,
                [](SafetyHookContext& ctx) {
                    if (fAspectRatio != fNativeAspect) {
                        ctx.xmm0.f32[0] = fHUDScale;
                    }
                });
        }
        else {
            spdlog::error("HUD: Map: Pattern scan failed.");
        }

        // HUD: Movie
        std::uint8_t* MovieViewportScanResult = Memory::PatternScan(exeModule, "0F ?? ?? ?? ?? ?? ?? B8 ?? ?? ?? ?? BA ?? ?? ?? ?? 41 ?? ?? 0F ?? ?? 41 ?? ??");
        if (MovieViewportScanResult) {
            spdlog::info("HUD: Movie: Viewport: Address is {:s}+{:x}", sExeName.c_str(), MovieViewportScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid MovieViewportMidHook{};
            MovieViewportMidHook = safetyhook::create_mid(MovieViewportScanResult + 0x7,
                [](SafetyHookContext& ctx) {
                    if ((ctx.rflags & (1ULL << 6)) == 0)
                        bMovieIsPlaying = true;
                    else
                        bMovieIsPlaying = false;

                    if (bMovieIsPlaying && ctx.rdi) {
                        if (fAspectRatio > fNativeAspect)
                            *reinterpret_cast<int*>(ctx.rdi + 0x88) = (int)ceilf(iCurrentResY * fNativeAspect);
                        else if (fAspectRatio < fNativeAspect)
                            *reinterpret_cast<int*>(ctx.rdi + 0x8C) = (int)ceilf(iCurrentResX / fNativeAspect);
                    }
                });
        }
        else {
            spdlog::error("HUD: Movie: Pattern scan failed.");
        }

        /*
        // Fades
        std::uint8_t* HUDFadesScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? ?? ?? F2 0F ?? ?? ?? 0F ?? ?? C6 ?? ?? 01 4C ?? ?? ?? ?? ?? ?? 0F ?? ?? ??");
        if (HUDFadesScanResult) {
            spdlog::info("HUD: Fades: Address is {:s}+{:x}", sExeName.c_str(), HUDFadesScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDFadesSizeMidHook{};
            HUDFadesSizeMidHook = safetyhook::create_mid(HUDFadesScanResult,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying) {
                        if (fAspectRatio > fNativeAspect)
                            ctx.xmm0.f32[0] = (ctx.xmm0.f32[1] * fAspectRatio);
                        else if (fAspectRatio < fNativeAspect)
                            ctx.xmm0.f32[1] = (ctx.xmm0.f32[0] / fAspectRatio);
                    }
                });

            static SafetyHookMid HUDFadesOffsetMidHook{};
            HUDFadesOffsetMidHook = safetyhook::create_mid(HUDFadesScanResult,
                [](SafetyHookContext& ctx) {
                    if (!bMovieIsPlaying) {
                        if (fAspectRatio > fNativeAspect)
                            ctx.xmm0.f32[0] = 0.00f;
                        else if (fAspectRatio < fNativeAspect)
                            ctx.xmm0.f32[1] = 0.00f;
                    }
                });
        }
        else {
            spdlog::error("HUD: Fades: Pattern scan failed.");
        }
        */

        // HUD Widgets
        std::uint8_t* HUDWidgetsScanResult = Memory::PatternScan(exeModule, "48 8D ?? ?? ?? ?? ?? 89 ?? ?? 48 89 ?? ?? ?? 41 ?? 03 00 00 00 0F 28 ?? ?? ??");
        if (HUDWidgetsScanResult) {
            static SDK::UObject* obj = nullptr;
            static SDK::UObject* oldObj = nullptr;

            static std::string objName;
            static std::string objOldName;

            static SDK::ULoca_Loading_C* UMGLoading = nullptr;
            static SDK::UEndUserWidget* UMGColiseum = nullptr;
            static SDK::UPause_00_C* UMGPause = nullptr;
            static SDK::UBattleTips_C* UMGBattleTips = nullptr;
            static SDK::UCom_Window_01_C* UMGComWindow = nullptr;

            spdlog::info("HUD: Widgets: Address is {:s}+{:x}", sExeName.c_str(), HUDWidgetsScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid HUDWidgetsMidHook{};
            HUDWidgetsMidHook = safetyhook::create_mid(Memory::GetAbsolute(HUDWidgetsScanResult + 0x3),
                [](SafetyHookContext& ctx) {
                    SDK::UObject* obj = (SDK::UObject*)ctx.rcx;

                    // Check if object has changed
                    if (obj != oldObj) {
                        oldObj = obj;

                        // Only store the name of the object when it has changed
                        objName = obj->GetName();

                        // "MainMenu_Base_Test_C", main menu background
                        if (objName.contains("MainMenu_Base_Test_C")) {
                            if (fAspectRatio > fNativeAspect) {
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B0) = -(fHUDWidthOffset / fHUDWidth);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B4) = 0.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B8) = 1.00f + (fHUDWidthOffset / fHUDWidth);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1BC) = 1.00f;
                            }
                            else if (fAspectRatio < fNativeAspect) {
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B0) = 0.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B4) = -(fHUDHeightOffset / fHUDHeight);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B8) = 1.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1BC) = 1.00f + (fHUDHeightOffset / fHUDHeight);
                            }
                        }

                        // "Pause_00_C", "simple" pause menu
                        if (objName.contains("Pause_00_C") && UMGPause != obj) {
                            #ifdef _DEBUG
                            spdlog::info("HUD: Widgets: Pause Menu: {}", objName);
                            spdlog::info("HUD: Widgets: Pause Menu: Address: {:x}", (uintptr_t)obj);
                            #endif

                            // Cache address
                            UMGPause = (SDK::UPause_00_C*)obj;

                            // Get panel slots
                            SDK::UEndCanvasPanelSlot* bg1Slot = (SDK::UEndCanvasPanelSlot*)UMGPause->Img_BG->Slot;
                            SDK::UEndCanvasPanelSlot* bg2Slot = (SDK::UEndCanvasPanelSlot*)UMGPause->Img_BG2->Slot;

                            // Create offsets
                            SDK::FMargin bg1offsets = bg1Slot->GetOffsets();
                            SDK::FMargin bg2offsets = bg2Slot->GetOffsets();

                            // Adjust offsets to allow backgrounds to fill the screen
                            if (fAspectRatio > fNativeAspect) {
                                bg1offsets.RIGHT = 1080.00f * fAspectRatio;
                                bg2offsets.RIGHT = 1080.00f * fAspectRatio;
                            }
                            else if (fAspectRatio < fNativeAspect) {
                                bg1offsets.Bottom = 1920.00f / fAspectRatio;
                                bg2offsets.Bottom = 1920.00f / fAspectRatio;
                            }

                            // Set adjusted offsets
                            bg1Slot->SetOffsets(bg1offsets);
                            bg2Slot->SetOffsets(bg2offsets);
                        }

                        // "Com_Window_01_C", menu dialog window
                        if (objName.contains("Com_Window_01_C") && UMGComWindow != obj) {
                            #ifdef _DEBUG
                            spdlog::info("HUD: Widgets: Com Window: {}", objName);
                            spdlog::info("HUD: Widgets: Com Window: Address: {:x}", (uintptr_t)obj);
                            #endif

                            // Cache address
                            UMGComWindow = (SDK::UCom_Window_01_C*)obj;

                            // Adjust to span the screen
                            if (fAspectRatio > fNativeAspect) {
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B0) = -(fHUDWidthOffset / fHUDWidth);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B4) = 0.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B8) = 1.00f + (fHUDWidthOffset / fHUDWidth);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1BC) = 1.00f;
                            }
                            else if (fAspectRatio < fNativeAspect) {
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B0) = 0.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B4) = -(fHUDHeightOffset / fHUDHeight);
                                *reinterpret_cast<float*>(ctx.rcx + 0x1B8) = 1.00f;
                                *reinterpret_cast<float*>(ctx.rcx + 0x1BC) = 1.00f + (fHUDHeightOffset / fHUDHeight);
                            }
                        }

                        // "BattleTips_C", tutorial windows
                        if (objName.contains("BattleTips_C") && UMGBattleTips != obj) {
                            #ifdef _DEBUG
                            spdlog::info("HUD: Widgets: Battle Tips: {}", objName);
                            spdlog::info("HUD: Widgets: Battle Tips: Address: {:x}", (uintptr_t)obj);
                            #endif

                            // Cache address
                            UMGBattleTips = (SDK::UBattleTips_C*)obj;

                            // Adjust background to span the screen
                            if (UMGBattleTips->Img_BlackFilter) {
                                if (fAspectRatio > fNativeAspect)
                                    UMGBattleTips->Img_BlackFilter->SetRenderScale(SDK::FVector2D(fAspectMultiplier, 1.00f));
                                else if (fAspectRatio < fNativeAspect)
                                    UMGBattleTips->Img_BlackFilter->SetRenderScale(SDK::FVector2D(1.00f, 1.00f / fAspectMultiplier));
                            }
                        }

                        // "Loca_Loading_C", loading screens
                        if (objName.contains("Loca_Loading_C") && UMGLoading != obj) {
                            #ifdef _DEBUG
                            spdlog::info("HUD: Widgets: Loading: {}", objName);
                            spdlog::info("HUD: Widgets: Loading: Address: {:x}", (uintptr_t)obj);
                            #endif

                            UMGLoading = (SDK::ULoca_Loading_C*)obj;

                            auto rw = (SDK::UEndCanvasPanel*)UMGLoading->WidgetTree->RootWidget;
                            auto slot = (SDK::UEndCanvasPanelSlot*)rw->Slots[2];
                        }

                        // "Coliseum_Top_C", battle arena
                        if (objName.contains("Coliseum_Top_C") && UMGColiseum != obj) {
                            #ifdef _DEBUG
                            spdlog::info("HUD: Widgets: Coliseum: {}", objName);
                            spdlog::info("HUD: Widgets: Coliseum: Address: {:x}", (uintptr_t)obj);
                            #endif

                            UMGColiseum = (SDK::UEndUserWidget*)obj;

                            // TODO
                        }
                    }
                });
        }
        else {
            spdlog::error("HUD: Widgets: Pattern scan failed.");
        }
    }
}

void Graphics()
{
    if (bAutoVignette || fVignetteStrength != 1.00f) {
        // Post processing 
        std::uint8_t* PostProcessingScanResult = Memory::PatternScan(exeModule, "89 ?? ?? ?? ?? ?? 83 ?? ?? ?? ?? ?? FE 48 8B ?? ?? ?? 48 83 ?? ?? 5F C3");
        if (PostProcessingScanResult) {
            spdlog::info("Post Processing: Address is {:s}+{:x}", sExeName.c_str(), PostProcessingScanResult - (std::uint8_t*)exeModule);
            static SafetyHookMid PostProcessingMidHook{};
            PostProcessingMidHook = safetyhook::create_mid(PostProcessingScanResult + 0xD,
                [](SafetyHookContext& ctx) {
                    SDK::FPostProcessSettings* PP = (SDK::FPostProcessSettings*)ctx.rbx;

                    if (!bAutoVignette && fVignetteStrength != 1.00f)
                        PP->VignetteIntensity = fVignetteStrength;
                    else if (bAutoVignette && fAspectRatio > fNativeAspect)
                        PP->VignetteIntensity = 1.00f / fAspectMultiplier;
                });
        }
        else {
            spdlog::error("Post Processing: Pattern scan failed.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    Configuration();
    UpdateOffsets();
    Resolution();
    AspectRatioFOV();
    HUD();
    Graphics();

    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH: {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle) {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST);
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}