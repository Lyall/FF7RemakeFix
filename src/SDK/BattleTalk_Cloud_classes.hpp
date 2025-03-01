#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTalk_Cloud

#include "Basic.hpp"

#include "BattleTalk_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTalk_Cloud.BattleTalk_Cloud_C
// 0x0000 (0x0100 - 0x0100)
class UBattleTalk_Cloud_C final : public UBattleTalk_Base_C
{
public:
	bool OnNotifyWithAbility(class FName& AnimName, class FName& SoundName, class AEndCharacter* ownerChara, class AEndCharacter* targetChara, class FName& AbilityID, struct FEndDataTableBattleAbility& dataTableBattleAbility, bool bFinishBlow) const;
	bool OnNotify(class FName& AnimName, class FName& SoundName, class AEndCharacter* ownerChara) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTalk_Cloud_C">();
	}
	static class UBattleTalk_Cloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTalk_Cloud_C>();
	}
};
static_assert(alignof(UBattleTalk_Cloud_C) == 0x000008, "Wrong alignment on UBattleTalk_Cloud_C");
static_assert(sizeof(UBattleTalk_Cloud_C) == 0x000100, "Wrong size on UBattleTalk_Cloud_C");

}

