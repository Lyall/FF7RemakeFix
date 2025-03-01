#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_sbil0_30_boss010

#include "Basic.hpp"

#include "btsc_sbil0_30_boss010_classes.hpp"
#include "btsc_sbil0_30_boss010_parameters.hpp"


namespace SDK
{

// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnCharaSpecialStatusChange
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             ownerCharaName                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SpecialStatusChangeID                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleSpecialStatusChangeType       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             StateId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                           Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FName>                     ParamIDs                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>                   ParamActors                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Abtsc_sbil0_30_boss010_C::OnCharaSpecialStatusChange(const class FName& ownerCharaName, const class FName& SpecialStatusChangeID, EEndBattleSpecialStatusChangeType Type, const class FName& StateId, const TArray<float>& Params_0, const TArray<class FName>& ParamIDs, const TArray<class AActor*>& ParamActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnCharaSpecialStatusChange");

	Params::btsc_sbil0_30_boss010_C_OnCharaSpecialStatusChange Parms{};

	Parms.ownerCharaName = ownerCharaName;
	Parms.SpecialStatusChangeID = SpecialStatusChangeID;
	Parms.Type = Type;
	Parms.StateId = StateId;
	Parms.Params_0 = std::move(Params_0);
	Parms.ParamIDs = std::move(ParamIDs);
	Parms.ParamActors = std::move(ParamActors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnMotionMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CharaName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             motionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::OnMotionMessage(class FName CharaName, class FName motionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnMotionMessage");

	Params::btsc_sbil0_30_boss010_C_OnMotionMessage Parms{};

	Parms.CharaName = CharaName;
	Parms.motionName = motionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnMetaMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::OnMetaMessage(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnMetaMessage");

	Params::btsc_sbil0_30_boss010_C_OnMetaMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnTakeDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CauserCharaName                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DamagedCharaName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AbilityID                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBind                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bGuard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDodge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             hitBoneName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAttributeHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             DamageSourceID                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleAttributeType                 DmgSrcAttributeType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   justHitRotYaw                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          hitPosition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHeal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abtsc_sbil0_30_boss010_C::OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityID, bool bBind, bool bGuard, bool bDodge, const class FName& hitBoneName, bool bAttributeHit, const class FName& DamageSourceID, EEndBattleAttributeType DmgSrcAttributeType, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnTakeDamage");

	Params::btsc_sbil0_30_boss010_C_OnTakeDamage Parms{};

	Parms.Damage = Damage;
	Parms.CauserCharaName = CauserCharaName;
	Parms.DamagedCharaName = DamagedCharaName;
	Parms.AbilityID = AbilityID;
	Parms.bBind = bBind;
	Parms.bGuard = bGuard;
	Parms.bDodge = bDodge;
	Parms.hitBoneName = hitBoneName;
	Parms.bAttributeHit = bAttributeHit;
	Parms.DamageSourceID = DamageSourceID;
	Parms.DmgSrcAttributeType = DmgSrcAttributeType;
	Parms.justHitRotYaw = justHitRotYaw;
	Parms.hitPosition = std::move(hitPosition);
	Parms.bHeal = bHeal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnIncrementBattleCountPerID
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TargetCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleCountLogType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::OnIncrementBattleCountPerID(class FName CauserCharaName, class FName TargetCharaName, EEndBattleCountLogType Type, class FName ID, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnIncrementBattleCountPerID");

	Params::btsc_sbil0_30_boss010_C_OnIncrementBattleCountPerID Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.TargetCharaName = TargetCharaName;
	Parms.Type = Type;
	Parms.ID = ID;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnCharaPartsDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DamagedCharaName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             partsID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CategoryID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RemainHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainHPPer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::OnCharaPartsDamage(class FName CauserCharaName, class FName DamagedCharaName, class FName partsID, class FName CategoryID, int32 RemainHP, float RemainHPPer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnCharaPartsDamage");

	Params::btsc_sbil0_30_boss010_C_OnCharaPartsDamage Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.DamagedCharaName = DamagedCharaName;
	Parms.partsID = partsID;
	Parms.CategoryID = CategoryID;
	Parms.RemainHP = RemainHP;
	Parms.RemainHPPer = RemainHPPer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.ChangePhase
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   mphase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::ChangePhase(int32 mphase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "ChangePhase");

	Params::btsc_sbil0_30_boss010_C_ChangePhase Parms{};

	Parms.mphase = mphase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.OnCharaPartsBreak
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BrokenCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             partsID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CategoryID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CategoryBreakCount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::OnCharaPartsBreak(class FName CauserCharaName, class FName BrokenCharaName, class FName partsID, class FName CategoryID, int32 CategoryBreakCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "OnCharaPartsBreak");

	Params::btsc_sbil0_30_boss010_C_OnCharaPartsBreak Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.BrokenCharaName = BrokenCharaName;
	Parms.partsID = partsID;
	Parms.CategoryID = CategoryID;
	Parms.CategoryBreakCount = CategoryBreakCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "ReceiveTick");

	Params::btsc_sbil0_30_boss010_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abtsc_sbil0_30_boss010_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.ExecuteUbergraph_btsc_sbil0_30_boss010
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_30_boss010_C::ExecuteUbergraph_btsc_sbil0_30_boss010(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "ExecuteUbergraph_btsc_sbil0_30_boss010");

	Params::btsc_sbil0_30_boss010_C_ExecuteUbergraph_btsc_sbil0_30_boss010 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_30_boss010.btsc_sbil0_30_boss010_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abtsc_sbil0_30_boss010_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_30_boss010_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

