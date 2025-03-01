#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Materia_List_Cell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Materia_List_Cell.Materia_List_Cell_C
// 0x0090 (0x03F0 - 0x0360)
class UMateria_List_Cell_C final : public UEndUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       LinkUpgrade_PreView;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Upgrade_PreView;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnHover;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnHover_Loop;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnHover;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base00;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Arrow1;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Arrow2;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Light;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Selected;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Cursor_Waku;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Icon_Materia;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LightBase;                                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LightLine;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line;                                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndButton*                             Materia_Button;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Materia_List_Cell(int32 EntryPoint);
	void BndEvt__Materia_Button_K2Node_ComponentBoundEvent_121_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Materia_Button_K2Node_ComponentBoundEvent_137_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Materia_List_Cell_C">();
	}
	static class UMateria_List_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMateria_List_Cell_C>();
	}
};
static_assert(alignof(UMateria_List_Cell_C) == 0x000008, "Wrong alignment on UMateria_List_Cell_C");
static_assert(sizeof(UMateria_List_Cell_C) == 0x0003F0, "Wrong size on UMateria_List_Cell_C");
static_assert(offsetof(UMateria_List_Cell_C, UberGraphFrame) == 0x000360, "Member 'UMateria_List_Cell_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, LinkUpgrade_PreView) == 0x000368, "Member 'UMateria_List_Cell_C::LinkUpgrade_PreView' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Upgrade_PreView) == 0x000370, "Member 'UMateria_List_Cell_C::Upgrade_PreView' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Selected) == 0x000378, "Member 'UMateria_List_Cell_C::Selected' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, UnHover) == 0x000380, "Member 'UMateria_List_Cell_C::UnHover' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, BtnHover_Loop) == 0x000388, "Member 'UMateria_List_Cell_C::BtnHover_Loop' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, BtnHover) == 0x000390, "Member 'UMateria_List_Cell_C::BtnHover' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Base00) == 0x000398, "Member 'UMateria_List_Cell_C::Base00' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Cursor_Arrow1) == 0x0003A0, "Member 'UMateria_List_Cell_C::Cursor_Arrow1' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Cursor_Arrow2) == 0x0003A8, "Member 'UMateria_List_Cell_C::Cursor_Arrow2' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Cursor_Light) == 0x0003B0, "Member 'UMateria_List_Cell_C::Cursor_Light' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Cursor_Selected) == 0x0003B8, "Member 'UMateria_List_Cell_C::Cursor_Selected' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Cursor_Waku) == 0x0003C0, "Member 'UMateria_List_Cell_C::Cursor_Waku' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Icon_Materia) == 0x0003C8, "Member 'UMateria_List_Cell_C::Icon_Materia' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, LightBase) == 0x0003D0, "Member 'UMateria_List_Cell_C::LightBase' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, LightLine) == 0x0003D8, "Member 'UMateria_List_Cell_C::LightLine' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Line) == 0x0003E0, "Member 'UMateria_List_Cell_C::Line' has a wrong offset!");
static_assert(offsetof(UMateria_List_Cell_C, Materia_Button) == 0x0003E8, "Member 'UMateria_List_Cell_C::Materia_Button' has a wrong offset!");

}

