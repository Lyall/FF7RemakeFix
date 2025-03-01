#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_SaveLoad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_SaveLoad.MainMenu_SaveLoad_C
// 0x0018 (0x04E8 - 0x04D0)
class UMainMenu_SaveLoad_C final : public UEndMainSaveLoadTopMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Menu_In;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_LeftMenu_C*                   MainMenu_LeftMenu;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_MainMenu_SaveLoad(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_SaveLoad_C">();
	}
	static class UMainMenu_SaveLoad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_SaveLoad_C>();
	}
};
static_assert(alignof(UMainMenu_SaveLoad_C) == 0x000008, "Wrong alignment on UMainMenu_SaveLoad_C");
static_assert(sizeof(UMainMenu_SaveLoad_C) == 0x0004E8, "Wrong size on UMainMenu_SaveLoad_C");
static_assert(offsetof(UMainMenu_SaveLoad_C, UberGraphFrame) == 0x0004D0, "Member 'UMainMenu_SaveLoad_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_SaveLoad_C, Menu_In) == 0x0004D8, "Member 'UMainMenu_SaveLoad_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMainMenu_SaveLoad_C, MainMenu_LeftMenu) == 0x0004E0, "Member 'UMainMenu_SaveLoad_C::MainMenu_LeftMenu' has a wrong offset!");

}

