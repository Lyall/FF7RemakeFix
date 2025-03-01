#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Map_Cursor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Map_Cursor.Map_Cursor_C
// 0x00A0 (0x0400 - 0x0360)
class UMap_Cursor_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Menu_In;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_11;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_12;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_13;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_14;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_21;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_22;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_23;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_24;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_00;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_9;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_10;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_11;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_12;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_13;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_14;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_15;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_16;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_17;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Map_Cursor(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Map_Cursor_C">();
	}
	static class UMap_Cursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMap_Cursor_C>();
	}
};
static_assert(alignof(UMap_Cursor_C) == 0x000008, "Wrong alignment on UMap_Cursor_C");
static_assert(sizeof(UMap_Cursor_C) == 0x000400, "Wrong size on UMap_Cursor_C");
static_assert(offsetof(UMap_Cursor_C, UberGraphFrame) == 0x000360, "Member 'UMap_Cursor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Menu_In) == 0x000368, "Member 'UMap_Cursor_C::Menu_In' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_11) == 0x000370, "Member 'UMap_Cursor_C::Cursor_11' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_12) == 0x000378, "Member 'UMap_Cursor_C::Cursor_12' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_13) == 0x000380, "Member 'UMap_Cursor_C::Cursor_13' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_14) == 0x000388, "Member 'UMap_Cursor_C::Cursor_14' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_21) == 0x000390, "Member 'UMap_Cursor_C::Cursor_21' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_22) == 0x000398, "Member 'UMap_Cursor_C::Cursor_22' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_23) == 0x0003A0, "Member 'UMap_Cursor_C::Cursor_23' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_24) == 0x0003A8, "Member 'UMap_Cursor_C::Cursor_24' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, Cursor_00) == 0x0003B0, "Member 'UMap_Cursor_C::Cursor_00' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_9) == 0x0003B8, "Member 'UMap_Cursor_C::EndImage_9' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_10) == 0x0003C0, "Member 'UMap_Cursor_C::EndImage_10' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_11) == 0x0003C8, "Member 'UMap_Cursor_C::EndImage_11' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_12) == 0x0003D0, "Member 'UMap_Cursor_C::EndImage_12' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_13) == 0x0003D8, "Member 'UMap_Cursor_C::EndImage_13' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_14) == 0x0003E0, "Member 'UMap_Cursor_C::EndImage_14' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_15) == 0x0003E8, "Member 'UMap_Cursor_C::EndImage_15' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_16) == 0x0003F0, "Member 'UMap_Cursor_C::EndImage_16' has a wrong offset!");
static_assert(offsetof(UMap_Cursor_C, EndImage_17) == 0x0003F8, "Member 'UMap_Cursor_C::EndImage_17' has a wrong offset!");

}

