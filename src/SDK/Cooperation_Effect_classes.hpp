#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cooperation_Effect

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cooperation_Effect.Cooperation_Effect_C
// 0x0020 (0x0380 - 0x0360)
class UCooperation_Effect_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Loop;                                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Frame;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Effect_00;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Effect_01;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cooperation_Effect_C">();
	}
	static class UCooperation_Effect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCooperation_Effect_C>();
	}
};
static_assert(alignof(UCooperation_Effect_C) == 0x000008, "Wrong alignment on UCooperation_Effect_C");
static_assert(sizeof(UCooperation_Effect_C) == 0x000380, "Wrong size on UCooperation_Effect_C");
static_assert(offsetof(UCooperation_Effect_C, Loop) == 0x000360, "Member 'UCooperation_Effect_C::Loop' has a wrong offset!");
static_assert(offsetof(UCooperation_Effect_C, Img_Frame) == 0x000368, "Member 'UCooperation_Effect_C::Img_Frame' has a wrong offset!");
static_assert(offsetof(UCooperation_Effect_C, Ims_Effect_00) == 0x000370, "Member 'UCooperation_Effect_C::Ims_Effect_00' has a wrong offset!");
static_assert(offsetof(UCooperation_Effect_C, Ims_Effect_01) == 0x000378, "Member 'UCooperation_Effect_C::Ims_Effect_01' has a wrong offset!");

}

