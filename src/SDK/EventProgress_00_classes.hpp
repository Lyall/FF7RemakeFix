#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventProgress_00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventProgress_00.EventProgress_00_C
// 0x0098 (0x0400 - 0x0368)
class UEventProgress_00_C final : public UEndEventProgressDisplay
{
public:
	class UWidgetAnimation*                       TurnBackAlert_Loop;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       TurnBackAlert_Out;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       TurnBackAlert_In;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       BattleReport_Color2;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       BattleReport_Color;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       SubQuest_Color;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       SideStory_Color;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       ChildStory_Color;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       MainStory_Color;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Update_C*                         Icon_Update;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_AlertEffect;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_AlertLine;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_AlertLineBG;                                   // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BottomBase_00;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_TopBase_00;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Effect_00;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Icon;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventProgress_00_C">();
	}
	static class UEventProgress_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventProgress_00_C>();
	}
};
static_assert(alignof(UEventProgress_00_C) == 0x000008, "Wrong alignment on UEventProgress_00_C");
static_assert(sizeof(UEventProgress_00_C) == 0x000400, "Wrong size on UEventProgress_00_C");
static_assert(offsetof(UEventProgress_00_C, TurnBackAlert_Loop) == 0x000368, "Member 'UEventProgress_00_C::TurnBackAlert_Loop' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, TurnBackAlert_Out) == 0x000370, "Member 'UEventProgress_00_C::TurnBackAlert_Out' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, TurnBackAlert_In) == 0x000378, "Member 'UEventProgress_00_C::TurnBackAlert_In' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, BattleReport_Color2) == 0x000380, "Member 'UEventProgress_00_C::BattleReport_Color2' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, BattleReport_Color) == 0x000388, "Member 'UEventProgress_00_C::BattleReport_Color' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, SubQuest_Color) == 0x000390, "Member 'UEventProgress_00_C::SubQuest_Color' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, SideStory_Color) == 0x000398, "Member 'UEventProgress_00_C::SideStory_Color' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, ChildStory_Color) == 0x0003A0, "Member 'UEventProgress_00_C::ChildStory_Color' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, MainStory_Color) == 0x0003A8, "Member 'UEventProgress_00_C::MainStory_Color' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Out) == 0x0003B0, "Member 'UEventProgress_00_C::Out' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, In) == 0x0003B8, "Member 'UEventProgress_00_C::In' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Icon_Update) == 0x0003C0, "Member 'UEventProgress_00_C::Icon_Update' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Img_AlertEffect) == 0x0003C8, "Member 'UEventProgress_00_C::Img_AlertEffect' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Img_AlertLine) == 0x0003D0, "Member 'UEventProgress_00_C::Img_AlertLine' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Img_AlertLineBG) == 0x0003D8, "Member 'UEventProgress_00_C::Img_AlertLineBG' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Img_BottomBase_00) == 0x0003E0, "Member 'UEventProgress_00_C::Img_BottomBase_00' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Img_TopBase_00) == 0x0003E8, "Member 'UEventProgress_00_C::Img_TopBase_00' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Ims_Effect_00) == 0x0003F0, "Member 'UEventProgress_00_C::Ims_Effect_00' has a wrong offset!");
static_assert(offsetof(UEventProgress_00_C, Ims_Icon) == 0x0003F8, "Member 'UEventProgress_00_C::Ims_Icon' has a wrong offset!");

}

