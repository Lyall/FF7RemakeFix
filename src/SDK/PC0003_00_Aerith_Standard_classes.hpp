#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC0003_00_Aerith_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC0003_00_Aerith_Standard.PC0003_00_Aerith_Standard_C
// 0x0010 (0x22D0 - 0x22C0)
class APC0003_00_Aerith_Standard_C final : public AEndCharacter
{
public:
	uint8                                         Pad_22B8[0x8];                                     // 0x22B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleTalk_Aerith_C*                   BattleTalk_Aerith;                                 // 0x22C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC0003_00_Aerith_Standard_C">();
	}
	static class APC0003_00_Aerith_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APC0003_00_Aerith_Standard_C>();
	}
};
static_assert(alignof(APC0003_00_Aerith_Standard_C) == 0x000010, "Wrong alignment on APC0003_00_Aerith_Standard_C");
static_assert(sizeof(APC0003_00_Aerith_Standard_C) == 0x0022D0, "Wrong size on APC0003_00_Aerith_Standard_C");
static_assert(offsetof(APC0003_00_Aerith_Standard_C, BattleTalk_Aerith) == 0x0022C0, "Member 'APC0003_00_Aerith_Standard_C::BattleTalk_Aerith' has a wrong offset!");

}

