#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_EquipSelect_Cell_03bg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_EquipSelect_Cell_03bg.MainMenu_EquipSelect_Cell_03bg_C
// 0x0010 (0x0370 - 0x0360)
class UMainMenu_EquipSelect_Cell_03bg_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UEndImage*                              EndImage_0;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__MainMenu_Btn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainMenu_Btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_MainMenu_EquipSelect_Cell_03bg(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_EquipSelect_Cell_03bg_C">();
	}
	static class UMainMenu_EquipSelect_Cell_03bg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_EquipSelect_Cell_03bg_C>();
	}
};
static_assert(alignof(UMainMenu_EquipSelect_Cell_03bg_C) == 0x000008, "Wrong alignment on UMainMenu_EquipSelect_Cell_03bg_C");
static_assert(sizeof(UMainMenu_EquipSelect_Cell_03bg_C) == 0x000370, "Wrong size on UMainMenu_EquipSelect_Cell_03bg_C");
static_assert(offsetof(UMainMenu_EquipSelect_Cell_03bg_C, UberGraphFrame) == 0x000360, "Member 'UMainMenu_EquipSelect_Cell_03bg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_EquipSelect_Cell_03bg_C, EndImage_0) == 0x000368, "Member 'UMainMenu_EquipSelect_Cell_03bg_C::EndImage_0' has a wrong offset!");

}

