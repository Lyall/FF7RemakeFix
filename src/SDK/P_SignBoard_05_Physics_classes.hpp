#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_SignBoard_05_Physics

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass P_SignBoard_05_Physics.P_SignBoard_05_Physics_C
// 0x0000 (0x06B8 - 0x06B8)
class AP_SignBoard_05_Physics_C final : public AEndEnvironmentPhysicsStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P_SignBoard_05_Physics_C">();
	}
	static class AP_SignBoard_05_Physics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AP_SignBoard_05_Physics_C>();
	}
};
static_assert(alignof(AP_SignBoard_05_Physics_C) == 0x000008, "Wrong alignment on AP_SignBoard_05_Physics_C");
static_assert(sizeof(AP_SignBoard_05_Physics_C) == 0x0006B8, "Wrong size on AP_SignBoard_05_Physics_C");

}

