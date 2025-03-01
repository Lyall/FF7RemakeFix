#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Item_SelectList

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Item_SelectList.MainMenu_Item_SelectList_C
// 0x0048 (0x03C8 - 0x0380)
class UMainMenu_Item_SelectList_C final : public UEndMainItemMenuList
{
public:
	class UWidgetAnimation*                       Menu_In;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Focus_Out;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenu_CategoryChangeBtn_C*          CategoryChangeBtn;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ListLight;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndVirtualScrollBox*                   MainMenu_Item_Scroll;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ScrollBarIcon1;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              ScrollBarIcon2;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_TitleValue;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Item_SelectList_C">();
	}
	static class UMainMenu_Item_SelectList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Item_SelectList_C>();
	}
};
static_assert(alignof(UMainMenu_Item_SelectList_C) == 0x000008, "Wrong alignment on UMainMenu_Item_SelectList_C");
static_assert(sizeof(UMainMenu_Item_SelectList_C) == 0x0003C8, "Wrong size on UMainMenu_Item_SelectList_C");
static_assert(offsetof(UMainMenu_Item_SelectList_C, Menu_In) == 0x000380, "Member 'UMainMenu_Item_SelectList_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, Focus_Out) == 0x000388, "Member 'UMainMenu_Item_SelectList_C::Focus_Out' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, CategoryChangeBtn) == 0x000390, "Member 'UMainMenu_Item_SelectList_C::CategoryChangeBtn' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, ListLight) == 0x000398, "Member 'UMainMenu_Item_SelectList_C::ListLight' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, MainMenu_Item_Scroll) == 0x0003A0, "Member 'UMainMenu_Item_SelectList_C::MainMenu_Item_Scroll' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, ScrollBarIcon1) == 0x0003A8, "Member 'UMainMenu_Item_SelectList_C::ScrollBarIcon1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, ScrollBarIcon2) == 0x0003B0, "Member 'UMainMenu_Item_SelectList_C::ScrollBarIcon2' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, Txt_Title) == 0x0003B8, "Member 'UMainMenu_Item_SelectList_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UMainMenu_Item_SelectList_C, Txt_TitleValue) == 0x0003C0, "Member 'UMainMenu_Item_SelectList_C::Txt_TitleValue' has a wrong offset!");

}

