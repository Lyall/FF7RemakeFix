#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_Bucket_01_Physics

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass P_Bucket_01_Physics.P_Bucket_01_Physics_C
// 0x0000 (0x06B8 - 0x06B8)
class AP_Bucket_01_Physics_C final : public AEndEnvironmentPhysicsStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P_Bucket_01_Physics_C">();
	}
	static class AP_Bucket_01_Physics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AP_Bucket_01_Physics_C>();
	}
};
static_assert(alignof(AP_Bucket_01_Physics_C) == 0x000008, "Wrong alignment on AP_Bucket_01_Physics_C");
static_assert(sizeof(AP_Bucket_01_Physics_C) == 0x0006B8, "Wrong size on AP_Bucket_01_Physics_C");

}

