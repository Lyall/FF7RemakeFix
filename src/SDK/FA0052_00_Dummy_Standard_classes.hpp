#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FA0052_00_Dummy_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FA0052_00_Dummy_Standard.FA0052_00_Dummy_Standard_C
// 0x0000 (0x22C0 - 0x22C0)
class AFA0052_00_Dummy_Standard_C final : public AEndCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FA0052_00_Dummy_Standard_C">();
	}
	static class AFA0052_00_Dummy_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFA0052_00_Dummy_Standard_C>();
	}
};
static_assert(alignof(AFA0052_00_Dummy_Standard_C) == 0x000010, "Wrong alignment on AFA0052_00_Dummy_Standard_C");
static_assert(sizeof(AFA0052_00_Dummy_Standard_C) == 0x0022C0, "Wrong size on AFA0052_00_Dummy_Standard_C");

}

