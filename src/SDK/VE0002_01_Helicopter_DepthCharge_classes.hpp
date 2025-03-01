#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VE0002_01_Helicopter_DepthCharge

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VE0002_01_Helicopter_DepthCharge.VE0002_01_Helicopter_DepthCharge_C
// 0x0020 (0x22E0 - 0x22C0)
class AVE0002_01_Helicopter_DepthCharge_C final : public AEndCharacter
{
public:
	uint8                                         Pad_22B8[0x8];                                     // 0x22B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UEndBonamikHelicopterWindComponent*     EndBonamikHelicopterWind;                          // 0x22C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndInstancedLightweightPhysicsComponent* WE9000_02_Gun_LCartridge;                          // 0x22C8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndCharacterZeroOneSeComponent*        EndCharacterZeroOneSe;                             // 0x22D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VE0002_01_Helicopter_DepthCharge_C">();
	}
	static class AVE0002_01_Helicopter_DepthCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVE0002_01_Helicopter_DepthCharge_C>();
	}
};
static_assert(alignof(AVE0002_01_Helicopter_DepthCharge_C) == 0x000010, "Wrong alignment on AVE0002_01_Helicopter_DepthCharge_C");
static_assert(sizeof(AVE0002_01_Helicopter_DepthCharge_C) == 0x0022E0, "Wrong size on AVE0002_01_Helicopter_DepthCharge_C");
static_assert(offsetof(AVE0002_01_Helicopter_DepthCharge_C, EndBonamikHelicopterWind) == 0x0022C0, "Member 'AVE0002_01_Helicopter_DepthCharge_C::EndBonamikHelicopterWind' has a wrong offset!");
static_assert(offsetof(AVE0002_01_Helicopter_DepthCharge_C, WE9000_02_Gun_LCartridge) == 0x0022C8, "Member 'AVE0002_01_Helicopter_DepthCharge_C::WE9000_02_Gun_LCartridge' has a wrong offset!");
static_assert(offsetof(AVE0002_01_Helicopter_DepthCharge_C, EndCharacterZeroOneSe) == 0x0022D0, "Member 'AVE0002_01_Helicopter_DepthCharge_C::EndCharacterZeroOneSe' has a wrong offset!");

}

