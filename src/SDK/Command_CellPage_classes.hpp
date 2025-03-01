#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Command_CellPage

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Command_CellPage.Command_CellPage_C
// 0x0038 (0x0398 - 0x0360)
class UCommand_CellPage_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       CellPage_L1_R0;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CellPage_L1_R1;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CellPage_L0_R1;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_Command_CellPage;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Arrow_L00;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Arrow_R00;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Pnl_CellPage;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Command_CellPage_C">();
	}
	static class UCommand_CellPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommand_CellPage_C>();
	}
};
static_assert(alignof(UCommand_CellPage_C) == 0x000008, "Wrong alignment on UCommand_CellPage_C");
static_assert(sizeof(UCommand_CellPage_C) == 0x000398, "Wrong size on UCommand_CellPage_C");
static_assert(offsetof(UCommand_CellPage_C, CellPage_L1_R0) == 0x000360, "Member 'UCommand_CellPage_C::CellPage_L1_R0' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, CellPage_L1_R1) == 0x000368, "Member 'UCommand_CellPage_C::CellPage_L1_R1' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, CellPage_L0_R1) == 0x000370, "Member 'UCommand_CellPage_C::CellPage_L0_R1' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, All_Command_CellPage) == 0x000378, "Member 'UCommand_CellPage_C::All_Command_CellPage' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, Img_Arrow_L00) == 0x000380, "Member 'UCommand_CellPage_C::Img_Arrow_L00' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, Img_Arrow_R00) == 0x000388, "Member 'UCommand_CellPage_C::Img_Arrow_R00' has a wrong offset!");
static_assert(offsetof(UCommand_CellPage_C, Pnl_CellPage) == 0x000390, "Member 'UCommand_CellPage_C::Pnl_CellPage' has a wrong offset!");

}

