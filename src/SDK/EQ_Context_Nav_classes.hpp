#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EQ_Context_Nav

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EQ_Context_Nav.EQ_Context_Nav_C
// 0x0000 (0x0030 - 0x0030)
class UEQ_Context_Nav_C final : public UEndBattleNavQueryContext
{
public:
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EQ_Context_Nav_C">();
	}
	static class UEQ_Context_Nav_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEQ_Context_Nav_C>();
	}
};
static_assert(alignof(UEQ_Context_Nav_C) == 0x000008, "Wrong alignment on UEQ_Context_Nav_C");
static_assert(sizeof(UEQ_Context_Nav_C) == 0x000030, "Wrong size on UEQ_Context_Nav_C");

}

