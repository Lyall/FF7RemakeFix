#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_sbil0_80_boss010

#include "Basic.hpp"

#include "btsc_sbil0_80_boss010_classes.hpp"
#include "btsc_sbil0_80_boss010_parameters.hpp"


namespace SDK
{

// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abtsc_sbil0_80_boss010_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_80_boss010_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_80_boss010_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_80_boss010_C", "ReceiveTick");

	Params::btsc_sbil0_80_boss010_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ChangePhase
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   mphase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_80_boss010_C::ChangePhase(int32 mphase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_80_boss010_C", "ChangePhase");

	Params::btsc_sbil0_80_boss010_C_ChangePhase Parms{};

	Parms.mphase = mphase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.OnTakeDamage
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

void Abtsc_sbil0_80_boss010_C::OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityID, bool bBind, bool bGuard, bool bDodge, const class FName& hitBoneName, bool bAttributeHit, const class FName& DamageSourceID, EEndBattleAttributeType DmgSrcAttributeType, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_80_boss010_C", "OnTakeDamage");

	Params::btsc_sbil0_80_boss010_C_OnTakeDamage Parms{};

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


// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ExecuteUbergraph_btsc_sbil0_80_boss010
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_sbil0_80_boss010_C::ExecuteUbergraph_btsc_sbil0_80_boss010(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_sbil0_80_boss010_C", "ExecuteUbergraph_btsc_sbil0_80_boss010");

	Params::btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

