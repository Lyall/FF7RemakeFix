#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pause_00

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Pause_00.Pause_00_C
// 0x0068 (0x0478 - 0x0410)
class UPause_00_C final : public UEndPauseMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       In;                                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_00;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_01;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Enki_L;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Enki_R;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Light_Center;                               // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Light_L;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_Light_R;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Gradation_Bottom;                                  // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BG;                                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BG2;                                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Pause;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Pause_00(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pause_00_C">();
	}
	static class UPause_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPause_00_C>();
	}
};
static_assert(alignof(UPause_00_C) == 0x000008, "Wrong alignment on UPause_00_C");
static_assert(sizeof(UPause_00_C) == 0x000478, "Wrong size on UPause_00_C");
static_assert(offsetof(UPause_00_C, UberGraphFrame) == 0x000410, "Member 'UPause_00_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPause_00_C, In) == 0x000418, "Member 'UPause_00_C::In' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_00) == 0x000420, "Member 'UPause_00_C::Effect_00' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_01) == 0x000428, "Member 'UPause_00_C::Effect_01' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_Enki_L) == 0x000430, "Member 'UPause_00_C::Effect_Enki_L' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_Enki_R) == 0x000438, "Member 'UPause_00_C::Effect_Enki_R' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_Light_Center) == 0x000440, "Member 'UPause_00_C::Effect_Light_Center' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_Light_L) == 0x000448, "Member 'UPause_00_C::Effect_Light_L' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Effect_Light_R) == 0x000450, "Member 'UPause_00_C::Effect_Light_R' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Gradation_Bottom) == 0x000458, "Member 'UPause_00_C::Gradation_Bottom' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Img_BG) == 0x000460, "Member 'UPause_00_C::Img_BG' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Img_BG2) == 0x000468, "Member 'UPause_00_C::Img_BG2' has a wrong offset!");
static_assert(offsetof(UPause_00_C, Txt_Pause) == 0x000470, "Member 'UPause_00_C::Txt_Pause' has a wrong offset!");

}

