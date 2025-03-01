#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Command_Help

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Command_Help.Command_Help_C
// 0x0030 (0x0390 - 0x0360)
class UCommand_Help_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_Nut;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicGuide_Cell_C*                     BasicGuide_Cell;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Help;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Help;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Command_Help_C">();
	}
	static class UCommand_Help_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommand_Help_C>();
	}
};
static_assert(alignof(UCommand_Help_C) == 0x000008, "Wrong alignment on UCommand_Help_C");
static_assert(sizeof(UCommand_Help_C) == 0x000390, "Wrong size on UCommand_Help_C");
static_assert(offsetof(UCommand_Help_C, Out) == 0x000360, "Member 'UCommand_Help_C::Out' has a wrong offset!");
static_assert(offsetof(UCommand_Help_C, In) == 0x000368, "Member 'UCommand_Help_C::In' has a wrong offset!");
static_assert(offsetof(UCommand_Help_C, All_Nut) == 0x000370, "Member 'UCommand_Help_C::All_Nut' has a wrong offset!");
static_assert(offsetof(UCommand_Help_C, BasicGuide_Cell) == 0x000378, "Member 'UCommand_Help_C::BasicGuide_Cell' has a wrong offset!");
static_assert(offsetof(UCommand_Help_C, Img_Help) == 0x000380, "Member 'UCommand_Help_C::Img_Help' has a wrong offset!");
static_assert(offsetof(UCommand_Help_C, Txt_Help) == 0x000388, "Member 'UCommand_Help_C::Txt_Help' has a wrong offset!");

}

