#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_mako1_110

#include "Basic.hpp"

#include "btsc_mako1_110_classes.hpp"
#include "btsc_mako1_110_parameters.hpp"


namespace SDK
{

// Function btsc_mako1_110.btsc_mako1_110_C.ExecuteUbergraph_btsc_mako1_110
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::ExecuteUbergraph_btsc_mako1_110(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "ExecuteUbergraph_btsc_mako1_110");

	Params::btsc_mako1_110_C_ExecuteUbergraph_btsc_mako1_110 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnBeginTalkTriggerBoxCollide
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             TriggerBoxActorName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CollideCharaName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnBeginTalkTriggerBoxCollide(class FName TriggerBoxActorName, class FName CollideCharaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnBeginTalkTriggerBoxCollide");

	Params::btsc_mako1_110_C_OnBeginTalkTriggerBoxCollide Parms{};

	Parms.TriggerBoxActorName = TriggerBoxActorName;
	Parms.CollideCharaName = CollideCharaName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnEndTalkTriggerBoxCollide
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             TriggerBoxActorName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CollideCharaName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnEndTalkTriggerBoxCollide(class FName TriggerBoxActorName, class FName CollideCharaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnEndTalkTriggerBoxCollide");

	Params::btsc_mako1_110_C_OnEndTalkTriggerBoxCollide Parms{};

	Parms.TriggerBoxActorName = TriggerBoxActorName;
	Parms.CollideCharaName = CollideCharaName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnMetaMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnMetaMessage(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnMetaMessage");

	Params::btsc_mako1_110_C_OnMetaMessage Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abtsc_mako1_110_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnCharaPartsBreak
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BrokenCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             partsID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CategoryID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CategoryBreakCount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnCharaPartsBreak(class FName CauserCharaName, class FName BrokenCharaName, class FName partsID, class FName CategoryID, int32 CategoryBreakCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnCharaPartsBreak");

	Params::btsc_mako1_110_C_OnCharaPartsBreak Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.BrokenCharaName = BrokenCharaName;
	Parms.partsID = partsID;
	Parms.CategoryID = CategoryID;
	Parms.CategoryBreakCount = CategoryBreakCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnAddMagicThunderHitCountForBarrierGS
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnAddMagicThunderHitCountForBarrierGS(class FName CauserCharaName, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnAddMagicThunderHitCountForBarrierGS");

	Params::btsc_mako1_110_C_OnAddMagicThunderHitCountForBarrierGS Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnTakeDamage
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

void Abtsc_mako1_110_C::OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityID, bool bBind, bool bGuard, bool bDodge, const class FName& hitBoneName, bool bAttributeHit, const class FName& DamageSourceID, EEndBattleAttributeType DmgSrcAttributeType, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnTakeDamage");

	Params::btsc_mako1_110_C_OnTakeDamage Parms{};

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


// Function btsc_mako1_110.btsc_mako1_110_C.OnCharaSyncAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             AttackedCharaName                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReceivedCharaName                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             StateId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StateCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             syncActionID                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CauserCharaName                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnCharaSyncAction(const class FName& AttackedCharaName, const class FName& ReceivedCharaName, const class FName& StateId, int32 StateCount, const class FName& syncActionID, const class FName& CauserCharaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnCharaSyncAction");

	Params::btsc_mako1_110_C_OnCharaSyncAction Parms{};

	Parms.AttackedCharaName = AttackedCharaName;
	Parms.ReceivedCharaName = ReceivedCharaName;
	Parms.StateId = StateId;
	Parms.StateCount = StateCount;
	Parms.syncActionID = syncActionID;
	Parms.CauserCharaName = CauserCharaName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnCharaSpecialStatusChange
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             ownerCharaName                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SpecialStatusChangeID                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleSpecialStatusChangeType       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             StateId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                           Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FName>                     ParamIDs                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>                   ParamActors                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Abtsc_mako1_110_C::OnCharaSpecialStatusChange(const class FName& ownerCharaName, const class FName& SpecialStatusChangeID, EEndBattleSpecialStatusChangeType Type, const class FName& StateId, const TArray<float>& Params_0, const TArray<class FName>& ParamIDs, const TArray<class AActor*>& ParamActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnCharaSpecialStatusChange");

	Params::btsc_mako1_110_C_OnCharaSpecialStatusChange Parms{};

	Parms.ownerCharaName = ownerCharaName;
	Parms.SpecialStatusChangeID = SpecialStatusChangeID;
	Parms.Type = Type;
	Parms.StateId = StateId;
	Parms.Params_0 = std::move(Params_0);
	Parms.ParamIDs = std::move(ParamIDs);
	Parms.ParamActors = std::move(ParamActors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.OnIncrementBattleCountPerID
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             CauserCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TargetCharaName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleCountLogType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::OnIncrementBattleCountPerID(class FName CauserCharaName, class FName TargetCharaName, EEndBattleCountLogType Type, class FName ID, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "OnIncrementBattleCountPerID");

	Params::btsc_mako1_110_C_OnIncrementBattleCountPerID Parms{};

	Parms.CauserCharaName = CauserCharaName;
	Parms.TargetCharaName = TargetCharaName;
	Parms.Type = Type;
	Parms.ID = ID;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.ChangePhase
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   mphase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_mako1_110_C::ChangePhase(int32 mphase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "ChangePhase");

	Params::btsc_mako1_110_C_ChangePhase Parms{};

	Parms.mphase = mphase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_mako1_110.btsc_mako1_110_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abtsc_mako1_110_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_mako1_110_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

