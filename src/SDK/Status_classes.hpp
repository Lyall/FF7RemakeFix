#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Status

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Status.Status_C
// 0x0028 (0x03A0 - 0x0378)
class UStatus_C final : public UEndFieldStatusMenu
{
public:
	class UWidgetAnimation*                       Status_In;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGauge_Cell_C*                          Status_00;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGauge_Cell_C*                          Status_01;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGauge_Cell_C*                          Status_02;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatus_BtnGuide_C*                     Status_BtnGuide;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Status_C">();
	}
	static class UStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatus_C>();
	}
};
static_assert(alignof(UStatus_C) == 0x000008, "Wrong alignment on UStatus_C");
static_assert(sizeof(UStatus_C) == 0x0003A0, "Wrong size on UStatus_C");
static_assert(offsetof(UStatus_C, Status_In) == 0x000378, "Member 'UStatus_C::Status_In' has a wrong offset!");
static_assert(offsetof(UStatus_C, Status_00) == 0x000380, "Member 'UStatus_C::Status_00' has a wrong offset!");
static_assert(offsetof(UStatus_C, Status_01) == 0x000388, "Member 'UStatus_C::Status_01' has a wrong offset!");
static_assert(offsetof(UStatus_C, Status_02) == 0x000390, "Member 'UStatus_C::Status_02' has a wrong offset!");
static_assert(offsetof(UStatus_C, Status_BtnGuide) == 0x000398, "Member 'UStatus_C::Status_BtnGuide' has a wrong offset!");

}

