#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Command_ShortCut_Cell_00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Command_ShortCut_Cell_00.Command_ShortCut_Cell_00_C
// 0x0078 (0x0410 - 0x0398)
class UCommand_ShortCut_Cell_00_C final : public UEndCmdShortcutCell
{
public:
	class UWidgetAnimation*                       Disabled;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Running;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Shift;                                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pressed;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             Btn;                                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndProgressBar*                        Gauge_00;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndProgressBar*                        Gauge_Ability_00;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_ATBCost_C*                        Icon_ATBCost;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Bar_ShortCut_01;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BtnBase_On;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Img_Effect_00;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_GaugeCharge;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_GaugeCover;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Number;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Symbol;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Command_ShortCut_Cell_00_C">();
	}
	static class UCommand_ShortCut_Cell_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommand_ShortCut_Cell_00_C>();
	}
};
static_assert(alignof(UCommand_ShortCut_Cell_00_C) == 0x000008, "Wrong alignment on UCommand_ShortCut_Cell_00_C");
static_assert(sizeof(UCommand_ShortCut_Cell_00_C) == 0x000410, "Wrong size on UCommand_ShortCut_Cell_00_C");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Disabled) == 0x000398, "Member 'UCommand_ShortCut_Cell_00_C::Disabled' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Running) == 0x0003A0, "Member 'UCommand_ShortCut_Cell_00_C::Running' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Shift) == 0x0003A8, "Member 'UCommand_ShortCut_Cell_00_C::Shift' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Pressed) == 0x0003B0, "Member 'UCommand_ShortCut_Cell_00_C::Pressed' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Btn) == 0x0003B8, "Member 'UCommand_ShortCut_Cell_00_C::Btn' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Gauge_00) == 0x0003C0, "Member 'UCommand_ShortCut_Cell_00_C::Gauge_00' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Gauge_Ability_00) == 0x0003C8, "Member 'UCommand_ShortCut_Cell_00_C::Gauge_Ability_00' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Icon_ATBCost) == 0x0003D0, "Member 'UCommand_ShortCut_Cell_00_C::Icon_ATBCost' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Img_Bar_ShortCut_01) == 0x0003D8, "Member 'UCommand_ShortCut_Cell_00_C::Img_Bar_ShortCut_01' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Img_BtnBase_On) == 0x0003E0, "Member 'UCommand_ShortCut_Cell_00_C::Img_BtnBase_On' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Img_Effect_00) == 0x0003E8, "Member 'UCommand_ShortCut_Cell_00_C::Img_Effect_00' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Ims_GaugeCharge) == 0x0003F0, "Member 'UCommand_ShortCut_Cell_00_C::Ims_GaugeCharge' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Ims_GaugeCover) == 0x0003F8, "Member 'UCommand_ShortCut_Cell_00_C::Ims_GaugeCover' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Txt_Number) == 0x000400, "Member 'UCommand_ShortCut_Cell_00_C::Txt_Number' has a wrong offset!");
static_assert(offsetof(UCommand_ShortCut_Cell_00_C, Txt_Symbol) == 0x000408, "Member 'UCommand_ShortCut_Cell_00_C::Txt_Symbol' has a wrong offset!");

}

