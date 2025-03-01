#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_DLC_Top

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_DLC_Top.MainMenu_DLC_Top_C
// 0x0028 (0x04E8 - 0x04C0)
class UMainMenu_DLC_Top_C final : public UEndMainDlcTopMenu
{
public:
	class UWidgetAnimation*                       Change_In;                                         // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_Out;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu_In;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LeftLine;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTiledImage*                         ListBg2;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_DLC_Top_C">();
	}
	static class UMainMenu_DLC_Top_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_DLC_Top_C>();
	}
};
static_assert(alignof(UMainMenu_DLC_Top_C) == 0x000008, "Wrong alignment on UMainMenu_DLC_Top_C");
static_assert(sizeof(UMainMenu_DLC_Top_C) == 0x0004E8, "Wrong size on UMainMenu_DLC_Top_C");
static_assert(offsetof(UMainMenu_DLC_Top_C, Change_In) == 0x0004C0, "Member 'UMainMenu_DLC_Top_C::Change_In' has a wrong offset!");
static_assert(offsetof(UMainMenu_DLC_Top_C, Change_Out) == 0x0004C8, "Member 'UMainMenu_DLC_Top_C::Change_Out' has a wrong offset!");
static_assert(offsetof(UMainMenu_DLC_Top_C, Menu_In) == 0x0004D0, "Member 'UMainMenu_DLC_Top_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMainMenu_DLC_Top_C, LeftLine) == 0x0004D8, "Member 'UMainMenu_DLC_Top_C::LeftLine' has a wrong offset!");
static_assert(offsetof(UMainMenu_DLC_Top_C, ListBg2) == 0x0004E0, "Member 'UMainMenu_DLC_Top_C::ListBg2' has a wrong offset!");

}

