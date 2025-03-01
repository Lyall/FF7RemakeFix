#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleText_Sub

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleText_Sub.BattleText_Sub_C
// 0x0048 (0x0438 - 0x03F0)
class UBattleText_Sub_C final : public UEndDamageSubText
{
public:
	class UWidgetAnimation*                       Linkage_In;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_Out;                                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal_In;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_BattleText_Sub;                                // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBorder*                             All_Nut_BattleText_Sub;                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Effect_03;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Pnl_BattleText_Sub;                                // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Sub;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleText_Sub_C">();
	}
	static class UBattleText_Sub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleText_Sub_C>();
	}
};
static_assert(alignof(UBattleText_Sub_C) == 0x000008, "Wrong alignment on UBattleText_Sub_C");
static_assert(sizeof(UBattleText_Sub_C) == 0x000438, "Wrong size on UBattleText_Sub_C");
static_assert(offsetof(UBattleText_Sub_C, Linkage_In) == 0x0003F0, "Member 'UBattleText_Sub_C::Linkage_In' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Loop) == 0x0003F8, "Member 'UBattleText_Sub_C::Loop' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Normal_Out) == 0x000400, "Member 'UBattleText_Sub_C::Normal_Out' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Normal_In) == 0x000408, "Member 'UBattleText_Sub_C::Normal_In' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, All_BattleText_Sub) == 0x000410, "Member 'UBattleText_Sub_C::All_BattleText_Sub' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, All_Nut_BattleText_Sub) == 0x000418, "Member 'UBattleText_Sub_C::All_Nut_BattleText_Sub' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Img_Effect_03) == 0x000420, "Member 'UBattleText_Sub_C::Img_Effect_03' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Pnl_BattleText_Sub) == 0x000428, "Member 'UBattleText_Sub_C::Pnl_BattleText_Sub' has a wrong offset!");
static_assert(offsetof(UBattleText_Sub_C, Txt_Sub) == 0x000430, "Member 'UBattleText_Sub_C::Txt_Sub' has a wrong offset!");

}

