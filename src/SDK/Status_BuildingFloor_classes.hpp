#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Status_BuildingFloor

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Status_BuildingFloor.Status_BuildingFloor_C
// 0x0000 (0x0360 - 0x0360)
class UStatus_BuildingFloor_C final : public UEndUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Status_BuildingFloor_C">();
	}
	static class UStatus_BuildingFloor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatus_BuildingFloor_C>();
	}
};
static_assert(alignof(UStatus_BuildingFloor_C) == 0x000008, "Wrong alignment on UStatus_BuildingFloor_C");
static_assert(sizeof(UStatus_BuildingFloor_C) == 0x000360, "Wrong size on UStatus_BuildingFloor_C");

}

