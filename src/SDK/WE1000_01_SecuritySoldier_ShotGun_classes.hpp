#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WE1000_01_SecuritySoldier_ShotGun

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WE1000_01_SecuritySoldier_ShotGun.WE1000_01_SecuritySoldier_ShotGun_C
// 0x0018 (0x0ED0 - 0x0EB8)
class AWE1000_01_SecuritySoldier_ShotGun_C final : public AEndSkeletalMeshActor
{
public:
	uint8                                         Pad_EB8[0x8];                                      // 0x0EB8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UEndRagdollSEComponent*                 EndRagdollSE;                                      // 0x0EC0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndInstancedLightweightPhysicsComponent* WE9002_01_ShotGun_Cartridge;                       // 0x0EC8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WE1000_01_SecuritySoldier_ShotGun_C">();
	}
	static class AWE1000_01_SecuritySoldier_ShotGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWE1000_01_SecuritySoldier_ShotGun_C>();
	}
};
static_assert(alignof(AWE1000_01_SecuritySoldier_ShotGun_C) == 0x000008, "Wrong alignment on AWE1000_01_SecuritySoldier_ShotGun_C");
static_assert(sizeof(AWE1000_01_SecuritySoldier_ShotGun_C) == 0x000ED0, "Wrong size on AWE1000_01_SecuritySoldier_ShotGun_C");
static_assert(offsetof(AWE1000_01_SecuritySoldier_ShotGun_C, EndRagdollSE) == 0x000EC0, "Member 'AWE1000_01_SecuritySoldier_ShotGun_C::EndRagdollSE' has a wrong offset!");
static_assert(offsetof(AWE1000_01_SecuritySoldier_ShotGun_C, WE9002_01_ShotGun_Cartridge) == 0x000EC8, "Member 'AWE1000_01_SecuritySoldier_ShotGun_C::WE9002_01_ShotGun_Cartridge' has a wrong offset!");

}

