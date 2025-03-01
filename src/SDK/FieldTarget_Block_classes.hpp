#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FieldTarget_Block

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FieldTarget_Block.FieldTarget_Block_C
// 0x0028 (0x0388 - 0x0360)
class UFieldTarget_Block_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       In;                                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_BG_00;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Block_00;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Nut_BlockText;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Number;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FieldTarget_Block_C">();
	}
	static class UFieldTarget_Block_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFieldTarget_Block_C>();
	}
};
static_assert(alignof(UFieldTarget_Block_C) == 0x000008, "Wrong alignment on UFieldTarget_Block_C");
static_assert(sizeof(UFieldTarget_Block_C) == 0x000388, "Wrong size on UFieldTarget_Block_C");
static_assert(offsetof(UFieldTarget_Block_C, In) == 0x000360, "Member 'UFieldTarget_Block_C::In' has a wrong offset!");
static_assert(offsetof(UFieldTarget_Block_C, Img_BG_00) == 0x000368, "Member 'UFieldTarget_Block_C::Img_BG_00' has a wrong offset!");
static_assert(offsetof(UFieldTarget_Block_C, Img_Block_00) == 0x000370, "Member 'UFieldTarget_Block_C::Img_Block_00' has a wrong offset!");
static_assert(offsetof(UFieldTarget_Block_C, Nut_BlockText) == 0x000378, "Member 'UFieldTarget_Block_C::Nut_BlockText' has a wrong offset!");
static_assert(offsetof(UFieldTarget_Block_C, Txt_Number) == 0x000380, "Member 'UFieldTarget_Block_C::Txt_Number' has a wrong offset!");

}

