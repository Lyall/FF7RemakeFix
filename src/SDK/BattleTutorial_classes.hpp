#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTutorial

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleTutorial.BattleTutorial_C
// 0x0038 (0x0398 - 0x0360)
class UBattleTutorial_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_BattleTutorial;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_Nut_BattleTutorial;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Line;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBorder*                             Nut_Guidline;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Guidline;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTutorial_C">();
	}
	static class UBattleTutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTutorial_C>();
	}
};
static_assert(alignof(UBattleTutorial_C) == 0x000008, "Wrong alignment on UBattleTutorial_C");
static_assert(sizeof(UBattleTutorial_C) == 0x000398, "Wrong size on UBattleTutorial_C");
static_assert(offsetof(UBattleTutorial_C, Out) == 0x000360, "Member 'UBattleTutorial_C::Out' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, In) == 0x000368, "Member 'UBattleTutorial_C::In' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, All_BattleTutorial) == 0x000370, "Member 'UBattleTutorial_C::All_BattleTutorial' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, All_Nut_BattleTutorial) == 0x000378, "Member 'UBattleTutorial_C::All_Nut_BattleTutorial' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, Img_Line) == 0x000380, "Member 'UBattleTutorial_C::Img_Line' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, Nut_Guidline) == 0x000388, "Member 'UBattleTutorial_C::Nut_Guidline' has a wrong offset!");
static_assert(offsetof(UBattleTutorial_C, Txt_Guidline) == 0x000390, "Member 'UBattleTutorial_C::Txt_Guidline' has a wrong offset!");

}

