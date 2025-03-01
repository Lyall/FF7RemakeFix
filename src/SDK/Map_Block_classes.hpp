#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Map_Block

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Map_Block.Map_Block_C
// 0x0018 (0x0378 - 0x0360)
class UMap_Block_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Menu_In;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_00;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Com_Base;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Map_Block_C">();
	}
	static class UMap_Block_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMap_Block_C>();
	}
};
static_assert(alignof(UMap_Block_C) == 0x000008, "Wrong alignment on UMap_Block_C");
static_assert(sizeof(UMap_Block_C) == 0x000378, "Wrong size on UMap_Block_C");
static_assert(offsetof(UMap_Block_C, Menu_In) == 0x000360, "Member 'UMap_Block_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMap_Block_C, Cursor_00) == 0x000368, "Member 'UMap_Block_C::Cursor_00' has a wrong offset!");
static_assert(offsetof(UMap_Block_C, Img_Com_Base) == 0x000370, "Member 'UMap_Block_C::Img_Com_Base' has a wrong offset!");

}

