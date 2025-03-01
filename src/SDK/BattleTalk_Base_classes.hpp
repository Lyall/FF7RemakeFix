#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTalk_Base

#include "Basic.hpp"

#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleTalk_Base.BattleTalk_Base_C
// 0x0000 (0x0100 - 0x0100)
class UBattleTalk_Base_C : public UEndBattleTalkCharacterComponent
{
public:
	bool OnNotifyWithAbility(class FName& AnimName, class FName& SoundName, class AEndCharacter* ownerChara, class AEndCharacter* targetChara, class FName& AbilityID, struct FEndDataTableBattleAbility& dataTableBattleAbility, bool bFinishBlow) const;
	bool OnNotify(class FName& AnimName, class FName& SoundName, class AEndCharacter* ownerChara) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleTalk_Base_C">();
	}
	static class UBattleTalk_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleTalk_Base_C>();
	}
};
static_assert(alignof(UBattleTalk_Base_C) == 0x000008, "Wrong alignment on UBattleTalk_Base_C");
static_assert(sizeof(UBattleTalk_Base_C) == 0x000100, "Wrong size on UBattleTalk_Base_C");

}

