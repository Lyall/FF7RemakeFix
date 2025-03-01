#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Icon_Item

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Icon_Item.MainMenu_Icon_Item_C
// 0x0008 (0x0368 - 0x0360)
class UMainMenu_Icon_Item_C final : public UEndUserWidget
{
public:
	class UEndImageSet*                           Icon_Item;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Icon_Item_C">();
	}
	static class UMainMenu_Icon_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Icon_Item_C>();
	}
};
static_assert(alignof(UMainMenu_Icon_Item_C) == 0x000008, "Wrong alignment on UMainMenu_Icon_Item_C");
static_assert(sizeof(UMainMenu_Icon_Item_C) == 0x000368, "Wrong size on UMainMenu_Icon_Item_C");
static_assert(offsetof(UMainMenu_Icon_Item_C, Icon_Item) == 0x000360, "Member 'UMainMenu_Icon_Item_C::Icon_Item' has a wrong offset!");

}

