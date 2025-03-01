#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NP0001_00_Wedge_Standard_AI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NP0001_00_Wedge_Standard_AI.NP0001_00_Wedge_Standard_AI_C
// 0x00A8 (0x3988 - 0x38E0)
class ANP0001_00_Wedge_Standard_AI_C final : public AEndBattleAITown7WedgeController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x38E0(0x0008)(Transient, DuplicateTransient)
	class UEndAITimerComponent*                   ContainerWaitTimer;                                // 0x38E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndAITimerComponent*                   BattleProgressTimer;                               // 0x38F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndAITimerComponent*                   BehaviorWaitTimer;                                 // 0x38F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AEndCharacter*                          TempChara;                                         // 0x3900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TempVector;                                        // 0x3908(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3914[0x4];                                     // 0x3914(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AEndCharacter*>                  FleeEnemyParam;                                    // 0x3918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FName>                           CoverMoveName;                                     // 0x3928(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           CoverTargetName;                                   // 0x3938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           NormalMoveName;                                    // 0x3948(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           NormalTargetName;                                  // 0x3958(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           ContainerMoveName;                                 // 0x3968(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                           ContainerTargetName;                               // 0x3978(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_NP0001_00_Wedge_Standard_AI(int32 EntryPoint);
	void OnRunningRegisterMove(class FName InName);
	void OnPrepareProc();
	void OnCutSceneMessage(const class FName& Message);
	void OnCreateDamageSource(class AEndCharacter* InOwner, const class FName& DamageSourceID, class UEndBattleDamageSourceComponent* InDamageSource);
	void OnCheckBindAction(class FName ActionName, int32 CheckID, int32 ComboIndex);
	void BndEvt__BattleProgressTimer_K2Node_ComponentBoundEvent_0_EndAITimerOnRunningTimer__DelegateSignature(float Current, float Max, float Progress, class FName InName);
	void OnATBLightAttackEvent();
	void OnATBHardAttackEvent();
	void GetAimingCheck();
	void DeclareVariable();
	void TargetCorrectionCalc(class FName TargetName);
	void OnMotionMessage(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnMotionStateMessageEnd(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnUpdate_btsc040();
	void OnUpdate_btsc030();
	void OnUpdate_btsc020();
	void TargetCharaSelect();
	void OnInterceptAbility(class FName InName);
	void OnUpdate_btsc010();
	void ResetDefaultSetting();
	void OnTakeDamage(int32 Damage, class AEndCharacter* InChara, class FName InName, EEndBattleAbilityCommandType InCommandType, bool InBind, bool InGuard, bool InDodge, class FName InBoneName, bool InAttributeWeak, class FName InDmgSrcID, EEndBattleAttributeType InDmgSrcAttribute, float justHitRotYaw, const struct FVector& hitPosition, bool InHeal, bool InCounter, const struct FEndDataTableBattleDamageSource& dataTableBattleDamageSource, bool useAbilityUCPC);
	void OnUpdate(EEndAiBattleRole InRole, int32 InStep, float DeltaTime);
	void ReceiveBeginPlay();
	void UserConstructionScript();

	bool OnGetTargetFieldPosition(struct FVector* outPosition, class FName InBattleAbilityID, class FName InDamageSourceID, class FName InAnimationName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NP0001_00_Wedge_Standard_AI_C">();
	}
	static class ANP0001_00_Wedge_Standard_AI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANP0001_00_Wedge_Standard_AI_C>();
	}
};
static_assert(alignof(ANP0001_00_Wedge_Standard_AI_C) == 0x000008, "Wrong alignment on ANP0001_00_Wedge_Standard_AI_C");
static_assert(sizeof(ANP0001_00_Wedge_Standard_AI_C) == 0x003988, "Wrong size on ANP0001_00_Wedge_Standard_AI_C");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, UberGraphFrame) == 0x0038E0, "Member 'ANP0001_00_Wedge_Standard_AI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, ContainerWaitTimer) == 0x0038E8, "Member 'ANP0001_00_Wedge_Standard_AI_C::ContainerWaitTimer' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, BattleProgressTimer) == 0x0038F0, "Member 'ANP0001_00_Wedge_Standard_AI_C::BattleProgressTimer' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, BehaviorWaitTimer) == 0x0038F8, "Member 'ANP0001_00_Wedge_Standard_AI_C::BehaviorWaitTimer' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, TempChara) == 0x003900, "Member 'ANP0001_00_Wedge_Standard_AI_C::TempChara' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, TempVector) == 0x003908, "Member 'ANP0001_00_Wedge_Standard_AI_C::TempVector' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, FleeEnemyParam) == 0x003918, "Member 'ANP0001_00_Wedge_Standard_AI_C::FleeEnemyParam' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, CoverMoveName) == 0x003928, "Member 'ANP0001_00_Wedge_Standard_AI_C::CoverMoveName' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, CoverTargetName) == 0x003938, "Member 'ANP0001_00_Wedge_Standard_AI_C::CoverTargetName' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, NormalMoveName) == 0x003948, "Member 'ANP0001_00_Wedge_Standard_AI_C::NormalMoveName' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, NormalTargetName) == 0x003958, "Member 'ANP0001_00_Wedge_Standard_AI_C::NormalTargetName' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, ContainerMoveName) == 0x003968, "Member 'ANP0001_00_Wedge_Standard_AI_C::ContainerMoveName' has a wrong offset!");
static_assert(offsetof(ANP0001_00_Wedge_Standard_AI_C, ContainerTargetName) == 0x003978, "Member 'ANP0001_00_Wedge_Standard_AI_C::ContainerTargetName' has a wrong offset!");

}

