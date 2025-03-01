#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Foot

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Foot.MainMenu_Foot_C
// 0x0010 (0x0370 - 0x0360)
class UMainMenu_Foot_C final : public UEndUserWidget
{
public:
	class UEndImage*                              Icon_Giru;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Time;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Foot_C">();
	}
	static class UMainMenu_Foot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Foot_C>();
	}
};
static_assert(alignof(UMainMenu_Foot_C) == 0x000008, "Wrong alignment on UMainMenu_Foot_C");
static_assert(sizeof(UMainMenu_Foot_C) == 0x000370, "Wrong size on UMainMenu_Foot_C");
static_assert(offsetof(UMainMenu_Foot_C, Icon_Giru) == 0x000360, "Member 'UMainMenu_Foot_C::Icon_Giru' has a wrong offset!");
static_assert(offsetof(UMainMenu_Foot_C, Icon_Time) == 0x000368, "Member 'UMainMenu_Foot_C::Icon_Time' has a wrong offset!");

}

