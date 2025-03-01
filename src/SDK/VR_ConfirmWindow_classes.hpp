#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VR_ConfirmWindow

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VR_ConfirmWindow.VR_ConfirmWindow_C
// 0x00E8 (0x04E8 - 0x0400)
class UVR_ConfirmWindow_C final : public UEndColosseumConfirmWindow
{
public:
	class UWidgetAnimation*                       Confirm_Continue;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Confirm_Retire;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Confirm_Retry;                                     // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Confirm_Start;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseC1;                                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseC2;                                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BaseC3;                                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_4;                                        // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_5;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_6;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_7;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame;                                             // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              FrameC1;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              FrameC2;                                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              FrameC3;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconBase;                                          // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconFrame;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconLeft;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconRight;                                         // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_B1;                                              // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_B2;                                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_Top1;                                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_Top2;                                            // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Title_Icon;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Num1;                                          // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Num2;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Num3;                                          // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VR_ConfirmWindow_C">();
	}
	static class UVR_ConfirmWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVR_ConfirmWindow_C>();
	}
};
static_assert(alignof(UVR_ConfirmWindow_C) == 0x000008, "Wrong alignment on UVR_ConfirmWindow_C");
static_assert(sizeof(UVR_ConfirmWindow_C) == 0x0004E8, "Wrong size on UVR_ConfirmWindow_C");
static_assert(offsetof(UVR_ConfirmWindow_C, Confirm_Continue) == 0x000400, "Member 'UVR_ConfirmWindow_C::Confirm_Continue' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Confirm_Retire) == 0x000408, "Member 'UVR_ConfirmWindow_C::Confirm_Retire' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Confirm_Retry) == 0x000410, "Member 'UVR_ConfirmWindow_C::Confirm_Retry' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Confirm_Start) == 0x000418, "Member 'UVR_ConfirmWindow_C::Confirm_Start' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Out) == 0x000420, "Member 'UVR_ConfirmWindow_C::Out' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, In) == 0x000428, "Member 'UVR_ConfirmWindow_C::In' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, BaseC1) == 0x000430, "Member 'UVR_ConfirmWindow_C::BaseC1' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, BaseC2) == 0x000438, "Member 'UVR_ConfirmWindow_C::BaseC2' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, BaseC3) == 0x000440, "Member 'UVR_ConfirmWindow_C::BaseC3' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, EndImage_4) == 0x000448, "Member 'UVR_ConfirmWindow_C::EndImage_4' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, EndImage_5) == 0x000450, "Member 'UVR_ConfirmWindow_C::EndImage_5' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, EndImage_6) == 0x000458, "Member 'UVR_ConfirmWindow_C::EndImage_6' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, EndImage_7) == 0x000460, "Member 'UVR_ConfirmWindow_C::EndImage_7' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Frame) == 0x000468, "Member 'UVR_ConfirmWindow_C::Frame' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, FrameC1) == 0x000470, "Member 'UVR_ConfirmWindow_C::FrameC1' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, FrameC2) == 0x000478, "Member 'UVR_ConfirmWindow_C::FrameC2' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, FrameC3) == 0x000480, "Member 'UVR_ConfirmWindow_C::FrameC3' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, IconBase) == 0x000488, "Member 'UVR_ConfirmWindow_C::IconBase' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, IconFrame) == 0x000490, "Member 'UVR_ConfirmWindow_C::IconFrame' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, IconLeft) == 0x000498, "Member 'UVR_ConfirmWindow_C::IconLeft' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, IconRight) == 0x0004A0, "Member 'UVR_ConfirmWindow_C::IconRight' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, L_B1) == 0x0004A8, "Member 'UVR_ConfirmWindow_C::L_B1' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, L_B2) == 0x0004B0, "Member 'UVR_ConfirmWindow_C::L_B2' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, L_Top1) == 0x0004B8, "Member 'UVR_ConfirmWindow_C::L_Top1' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, L_Top2) == 0x0004C0, "Member 'UVR_ConfirmWindow_C::L_Top2' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Title_Icon) == 0x0004C8, "Member 'UVR_ConfirmWindow_C::Title_Icon' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Txt_Num1) == 0x0004D0, "Member 'UVR_ConfirmWindow_C::Txt_Num1' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Txt_Num2) == 0x0004D8, "Member 'UVR_ConfirmWindow_C::Txt_Num2' has a wrong offset!");
static_assert(offsetof(UVR_ConfirmWindow_C, Txt_Num3) == 0x0004E0, "Member 'UVR_ConfirmWindow_C::Txt_Num3' has a wrong offset!");

}

