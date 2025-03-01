#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Clip_PhysicsCartridge

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Clip_PhysicsCartridge.Clip_PhysicsCartridge
// 0x0030 (0x0030 - 0x0000)
struct FClip_PhysicsCartridge final
{
public:
	class FString                                 LevelName_10_60E2EFC6497012E7F287B1B025368779;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ActorName_13_2B9F1EC046EC7B6CCD72E690B44E51D7;     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable_16_0289E7EB4928A77C36A163B8F80FC45A;        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Interval_19_F1CB19EF4FF3B62675F0358601EC9930;      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OverwriteDamageSourceID_28_D000D85A44C5FE3F255DDE8D0648973A; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Priority_26_CC8499C2401606DF632D3B813C368A6E;      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FClip_PhysicsCartridge) == 0x000008, "Wrong alignment on FClip_PhysicsCartridge");
static_assert(sizeof(FClip_PhysicsCartridge) == 0x000030, "Wrong size on FClip_PhysicsCartridge");
static_assert(offsetof(FClip_PhysicsCartridge, LevelName_10_60E2EFC6497012E7F287B1B025368779) == 0x000000, "Member 'FClip_PhysicsCartridge::LevelName_10_60E2EFC6497012E7F287B1B025368779' has a wrong offset!");
static_assert(offsetof(FClip_PhysicsCartridge, ActorName_13_2B9F1EC046EC7B6CCD72E690B44E51D7) == 0x000010, "Member 'FClip_PhysicsCartridge::ActorName_13_2B9F1EC046EC7B6CCD72E690B44E51D7' has a wrong offset!");
static_assert(offsetof(FClip_PhysicsCartridge, Enable_16_0289E7EB4928A77C36A163B8F80FC45A) == 0x000018, "Member 'FClip_PhysicsCartridge::Enable_16_0289E7EB4928A77C36A163B8F80FC45A' has a wrong offset!");
static_assert(offsetof(FClip_PhysicsCartridge, Interval_19_F1CB19EF4FF3B62675F0358601EC9930) == 0x00001C, "Member 'FClip_PhysicsCartridge::Interval_19_F1CB19EF4FF3B62675F0358601EC9930' has a wrong offset!");
static_assert(offsetof(FClip_PhysicsCartridge, OverwriteDamageSourceID_28_D000D85A44C5FE3F255DDE8D0648973A) == 0x000020, "Member 'FClip_PhysicsCartridge::OverwriteDamageSourceID_28_D000D85A44C5FE3F255DDE8D0648973A' has a wrong offset!");
static_assert(offsetof(FClip_PhysicsCartridge, Priority_26_CC8499C2401606DF632D3B813C368A6E) == 0x000028, "Member 'FClip_PhysicsCartridge::Priority_26_CC8499C2401606DF632D3B813C368A6E' has a wrong offset!");

}

