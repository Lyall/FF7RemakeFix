#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC0004_00_RedXIII_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC0004_00_RedXIII_Standard.PC0004_00_RedXIII_Standard_C
// 0x0020 (0x22E0 - 0x22C0)
class APC0004_00_RedXIII_Standard_C final : public AEndCharacter
{
public:
	uint8                                         Pad_22B8[0x8];                                     // 0x22B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               FX_PC0004_TailFire_01;                             // 0x22C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x22C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndCharacterPushCollisionComponent*    EndCharacterPushCollision;                         // 0x22D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC0004_00_RedXIII_Standard_C">();
	}
	static class APC0004_00_RedXIII_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APC0004_00_RedXIII_Standard_C>();
	}
};
static_assert(alignof(APC0004_00_RedXIII_Standard_C) == 0x000010, "Wrong alignment on APC0004_00_RedXIII_Standard_C");
static_assert(sizeof(APC0004_00_RedXIII_Standard_C) == 0x0022E0, "Wrong size on APC0004_00_RedXIII_Standard_C");
static_assert(offsetof(APC0004_00_RedXIII_Standard_C, FX_PC0004_TailFire_01) == 0x0022C0, "Member 'APC0004_00_RedXIII_Standard_C::FX_PC0004_TailFire_01' has a wrong offset!");
static_assert(offsetof(APC0004_00_RedXIII_Standard_C, SkeletalMesh) == 0x0022C8, "Member 'APC0004_00_RedXIII_Standard_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(APC0004_00_RedXIII_Standard_C, EndCharacterPushCollision) == 0x0022D0, "Member 'APC0004_00_RedXIII_Standard_C::EndCharacterPushCollision' has a wrong offset!");

}

