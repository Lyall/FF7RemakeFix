#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_IconListCell

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_IconListCell.MainMenu_IconListCell_C
// 0x0008 (0x0368 - 0x0360)
class UMainMenu_IconListCell_C final : public UEndUserWidget
{
public:
	class UEndImageSet*                           Icon;                                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_IconListCell_C">();
	}
	static class UMainMenu_IconListCell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_IconListCell_C>();
	}
};
static_assert(alignof(UMainMenu_IconListCell_C) == 0x000008, "Wrong alignment on UMainMenu_IconListCell_C");
static_assert(sizeof(UMainMenu_IconListCell_C) == 0x000368, "Wrong size on UMainMenu_IconListCell_C");
static_assert(offsetof(UMainMenu_IconListCell_C, Icon) == 0x000360, "Member 'UMainMenu_IconListCell_C::Icon' has a wrong offset!");

}

