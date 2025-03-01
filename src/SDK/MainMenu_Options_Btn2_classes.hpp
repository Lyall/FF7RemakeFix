#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Options_Btn2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Options_Btn2.MainMenu_Options_Btn2_C
// 0x0078 (0x03D8 - 0x0360)
class UMainMenu_Options_Btn2_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnHover;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_In;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base2;                                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             BattleSetting_Btn;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BtnBaseLeft;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BtnBaseRight;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BtnHoverBase;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              CenterLight;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame;                                             // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_AbilityName;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu_Options_Btn2(int32 EntryPoint);
	void BndEvt__BattleSetting_Btn_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BattleSetting_Btn_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Options_Btn2_C">();
	}
	static class UMainMenu_Options_Btn2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Options_Btn2_C>();
	}
};
static_assert(alignof(UMainMenu_Options_Btn2_C) == 0x000008, "Wrong alignment on UMainMenu_Options_Btn2_C");
static_assert(sizeof(UMainMenu_Options_Btn2_C) == 0x0003D8, "Wrong size on UMainMenu_Options_Btn2_C");
static_assert(offsetof(UMainMenu_Options_Btn2_C, UberGraphFrame) == 0x000360, "Member 'UMainMenu_Options_Btn2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Selected) == 0x000368, "Member 'UMainMenu_Options_Btn2_C::Selected' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Loop) == 0x000370, "Member 'UMainMenu_Options_Btn2_C::Loop' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, BtnHover) == 0x000378, "Member 'UMainMenu_Options_Btn2_C::BtnHover' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Menu_In) == 0x000380, "Member 'UMainMenu_Options_Btn2_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Base) == 0x000388, "Member 'UMainMenu_Options_Btn2_C::Base' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Base2) == 0x000390, "Member 'UMainMenu_Options_Btn2_C::Base2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, BattleSetting_Btn) == 0x000398, "Member 'UMainMenu_Options_Btn2_C::BattleSetting_Btn' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, BtnBaseLeft) == 0x0003A0, "Member 'UMainMenu_Options_Btn2_C::BtnBaseLeft' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, BtnBaseRight) == 0x0003A8, "Member 'UMainMenu_Options_Btn2_C::BtnBaseRight' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, BtnHoverBase) == 0x0003B0, "Member 'UMainMenu_Options_Btn2_C::BtnHoverBase' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, CenterLight) == 0x0003B8, "Member 'UMainMenu_Options_Btn2_C::CenterLight' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Frame) == 0x0003C0, "Member 'UMainMenu_Options_Btn2_C::Frame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Txt_AbilityName) == 0x0003C8, "Member 'UMainMenu_Options_Btn2_C::Txt_AbilityName' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_Btn2_C, Txt_Title) == 0x0003D0, "Member 'UMainMenu_Options_Btn2_C::Txt_Title' has a wrong offset!");

}

