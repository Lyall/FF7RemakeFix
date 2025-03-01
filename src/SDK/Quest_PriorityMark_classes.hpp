#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quest_PriorityMark

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Quest_PriorityMark.Quest_PriorityMark_C
// 0x0038 (0x0398 - 0x0360)
class UQuest_PriorityMark_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Loop_PlayerLoca;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Effect_00;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Effect_01;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Effect_02;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Map_PlayerLoca;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              PriorityIcon;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Quest_PriorityMark(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Quest_PriorityMark_C">();
	}
	static class UQuest_PriorityMark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuest_PriorityMark_C>();
	}
};
static_assert(alignof(UQuest_PriorityMark_C) == 0x000008, "Wrong alignment on UQuest_PriorityMark_C");
static_assert(sizeof(UQuest_PriorityMark_C) == 0x000398, "Wrong size on UQuest_PriorityMark_C");
static_assert(offsetof(UQuest_PriorityMark_C, UberGraphFrame) == 0x000360, "Member 'UQuest_PriorityMark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, Loop_PlayerLoca) == 0x000368, "Member 'UQuest_PriorityMark_C::Loop_PlayerLoca' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, Img_Effect_00) == 0x000370, "Member 'UQuest_PriorityMark_C::Img_Effect_00' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, Img_Effect_01) == 0x000378, "Member 'UQuest_PriorityMark_C::Img_Effect_01' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, Img_Effect_02) == 0x000380, "Member 'UQuest_PriorityMark_C::Img_Effect_02' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, Img_Map_PlayerLoca) == 0x000388, "Member 'UQuest_PriorityMark_C::Img_Map_PlayerLoca' has a wrong offset!");
static_assert(offsetof(UQuest_PriorityMark_C, PriorityIcon) == 0x000390, "Member 'UQuest_PriorityMark_C::PriorityIcon' has a wrong offset!");

}

