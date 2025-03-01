#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_BattleSetting_List2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_BattleSetting_List2.MainMenu_BattleSetting_List2_C
// 0x0030 (0x0390 - 0x0360)
class UMainMenu_BattleSetting_List2_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UEndImage*                              Dot_Bottom;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Dot_Top;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Bottom;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Top;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndVirtualScrollBox*                   SettingList;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu_BattleSetting_List2(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_BattleSetting_List2_C">();
	}
	static class UMainMenu_BattleSetting_List2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_BattleSetting_List2_C>();
	}
};
static_assert(alignof(UMainMenu_BattleSetting_List2_C) == 0x000008, "Wrong alignment on UMainMenu_BattleSetting_List2_C");
static_assert(sizeof(UMainMenu_BattleSetting_List2_C) == 0x000390, "Wrong size on UMainMenu_BattleSetting_List2_C");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, UberGraphFrame) == 0x000360, "Member 'UMainMenu_BattleSetting_List2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, Dot_Bottom) == 0x000368, "Member 'UMainMenu_BattleSetting_List2_C::Dot_Bottom' has a wrong offset!");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, Dot_Top) == 0x000370, "Member 'UMainMenu_BattleSetting_List2_C::Dot_Top' has a wrong offset!");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, Line_Bottom) == 0x000378, "Member 'UMainMenu_BattleSetting_List2_C::Line_Bottom' has a wrong offset!");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, Line_Top) == 0x000380, "Member 'UMainMenu_BattleSetting_List2_C::Line_Top' has a wrong offset!");
static_assert(offsetof(UMainMenu_BattleSetting_List2_C, SettingList) == 0x000388, "Member 'UMainMenu_BattleSetting_List2_C::SettingList' has a wrong offset!");

}

