#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Options_ControllerList

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Options_ControllerList.MainMenu_Options_ControllerList_C
// 0x0060 (0x03C0 - 0x0360)
class UMainMenu_Options_ControllerList_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_4;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_6;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Frame;                                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconBase;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconFrame;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconLeft;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              IconRight;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_B1;                                              // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              L_Top1;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Title_Icon;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Options_ControllerList_C">();
	}
	static class UMainMenu_Options_ControllerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Options_ControllerList_C>();
	}
};
static_assert(alignof(UMainMenu_Options_ControllerList_C) == 0x000008, "Wrong alignment on UMainMenu_Options_ControllerList_C");
static_assert(sizeof(UMainMenu_Options_ControllerList_C) == 0x0003C0, "Wrong size on UMainMenu_Options_ControllerList_C");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, Out) == 0x000360, "Member 'UMainMenu_Options_ControllerList_C::Out' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, In) == 0x000368, "Member 'UMainMenu_Options_ControllerList_C::In' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, EndImage_4) == 0x000370, "Member 'UMainMenu_Options_ControllerList_C::EndImage_4' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, EndImage_6) == 0x000378, "Member 'UMainMenu_Options_ControllerList_C::EndImage_6' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, Frame) == 0x000380, "Member 'UMainMenu_Options_ControllerList_C::Frame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, IconBase) == 0x000388, "Member 'UMainMenu_Options_ControllerList_C::IconBase' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, IconFrame) == 0x000390, "Member 'UMainMenu_Options_ControllerList_C::IconFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, IconLeft) == 0x000398, "Member 'UMainMenu_Options_ControllerList_C::IconLeft' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, IconRight) == 0x0003A0, "Member 'UMainMenu_Options_ControllerList_C::IconRight' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, L_B1) == 0x0003A8, "Member 'UMainMenu_Options_ControllerList_C::L_B1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, L_Top1) == 0x0003B0, "Member 'UMainMenu_Options_ControllerList_C::L_Top1' has a wrong offset!");
static_assert(offsetof(UMainMenu_Options_ControllerList_C, Title_Icon) == 0x0003B8, "Member 'UMainMenu_Options_ControllerList_C::Title_Icon' has a wrong offset!");

}

