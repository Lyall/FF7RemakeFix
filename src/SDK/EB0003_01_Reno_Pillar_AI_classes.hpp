#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EB0003_01_Reno_Pillar_AI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EB0003_01_Reno_Pillar_AI.EB0003_01_Reno_Pillar_AI_C
// 0x0078 (0x23B8 - 0x2340)
class AEB0003_01_Reno_Pillar_AI_C final : public AEndBattleAIEB0003Controller
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2340(0x0008)(Transient, DuplicateTransient)
	class UEndAITimerComponent*                   EndAITimer;                                        // 0x2348(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit;                                               // 0x2350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2351[0x3];                                     // 0x2351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AbilityCheck;                                      // 0x2354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_0;                                          // 0x2358(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FlashDashPattern;                                  // 0x2364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BackStepForBomb;                                   // 0x2368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BombTimer;                                         // 0x2369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PyramidTimer;                                      // 0x236A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BallTimer;                                         // 0x236B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FarAttackTimer;                                    // 0x236C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FlashDashTimer;                                    // 0x236D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GoHelp;                                            // 0x236E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SwitchTarget;                                      // 0x236F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AEndCharacter*                          Target;                                            // 0x2370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FlashDashCount;                                    // 0x2378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RenoJump;                                          // 0x237C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_237D[0x3];                                     // 0x237D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                JumpPos;                                           // 0x2380(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RanzanTimer;                                       // 0x238C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Guarded;                                           // 0x238D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GuardEscape;                                       // 0x238E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BackStepforRaiden;                                 // 0x238F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class FName>                           AvoidCharaSpec;                                    // 0x2390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AEndCharacter*                          Rude;                                              // 0x23A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ThunderLandRunPos;                                 // 0x23A8(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoFlashDash;                                       // 0x23B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ForcePhaseChange;                                  // 0x23B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EB0003_01_Reno_Pillar_AI(int32 EntryPoint);
	void OnSuspendFlushDash();
	void OnAddStatusChange(EEndBattleStatusChangeType Type);
	void OnAbilityReactionConditionTargetDodgeDirection(const class FName& AbilityID, class AEndCharacter* targetChara);
	void OnAbilityReactionConditionTargetDodge(const class FName& AbilityID, class AEndCharacter* targetChara);
	void OnRemoveStatusChange(EEndBattleStatusChangeType Type);
	void OnCutSceneMessage(const class FName& Message);
	void m___________();
	void OnEndCutScene(const class FName& CutsceneID);
	void m_____0();
	void OnDead(bool AtBurst);
	void OnKilled(int32 Damage, class AEndCharacter* InTarget, class FName InName, bool InBind);
	void ms_W____();
	void OnCompleteAbility(class FName InName);
	void OnInterceptAbility(class FName InName);
	void OnSyncActionChange(const class FName& syncActionID, const class FName& ChangeID, const class FName& DetachDamageSourceID);
	void m______();
	void m_________x_();
	void m____();
	void OnChangePhase(int32 InNew, int32 InOld);
	void m____AI_1();
	void OnBurstEnd(bool instant);
	void OnBurstBegin();
	void OnCheckBindAction(class FName ActionName, int32 CheckID, int32 ComboIndex);
	void m_______();
	void m______________0();
	void m_____________();
	void mz_____();
	void OnMetaMessageAboutCharacter(class AEndCharacter* InChara, const class FString& InMessage);
	void m________();
	void OnRequestFlashDash(int32 InFlashDashCount);
	void m_______________();
	void m_pW();
	void ReceiveBeginPlay();
	void OnFinishTimer(class FName InName);
	void m____AI_0();
	void OnEntryBattleScene();
	void OnUpdate(EEndAiBattleRole InRole, int32 InStep, float DeltaTime);
	void OnSuspendAbility(class FName InName, EEndAiAbilitySuspendFactor InFactor, EEndAiAbilitySuspendTiming InTiming);
	void OnMotionMessage(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void OnGiveDamage(int32 Damage, class AEndCharacter* InTarget, class FName InName, bool InBind, bool InGuard, bool InJustGuard, bool KeepOver, bool InDodge, bool InCounter, class FName InBoneName, bool InAttributeWeak, class FName InDamageSourceID, bool InSteal, bool heal);
	void m____AI();
	void OnTakeDamage(int32 Damage, class AEndCharacter* InChara, class FName InName, EEndBattleAbilityCommandType InCommandType, bool InBind, bool InGuard, bool InDodge, class FName InBoneName, bool InAttributeWeak, class FName InDmgSrcID, EEndBattleAttributeType InDmgSrcAttribute, float justHitRotYaw, const struct FVector& hitPosition, bool InHeal, bool InCounter, const struct FEndDataTableBattleDamageSource& dataTableBattleDamageSource, bool useAbilityUCPC);
	void Case1_4136189143D804AA5BA35294A2928E32();
	void Case2_4136189143D804AA5BA35294A2928E32();
	void Other_4136189143D804AA5BA35294A2928E32();
	void Case1_B3BAC358451341AFCBBC378E219F9C9C();
	void Case2_B3BAC358451341AFCBBC378E219F9C9C();
	void Other_B3BAC358451341AFCBBC378E219F9C9C();
	void InpActEvt_Zero_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Five_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Seven_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Six_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void UserConstructionScript();
	bool OnGetCreateFieldPosition(struct FVector* outPosition, class FName InBattleAbilityID, class FName InDamageSourceID, class FName InAnimationName);

	bool OnGetTargetFieldPosition(struct FVector* outPosition, class FName InBattleAbilityID, class FName InDamageSourceID, class FName InAnimationName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EB0003_01_Reno_Pillar_AI_C">();
	}
	static class AEB0003_01_Reno_Pillar_AI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEB0003_01_Reno_Pillar_AI_C>();
	}
};
static_assert(alignof(AEB0003_01_Reno_Pillar_AI_C) == 0x000008, "Wrong alignment on AEB0003_01_Reno_Pillar_AI_C");
static_assert(sizeof(AEB0003_01_Reno_Pillar_AI_C) == 0x0023B8, "Wrong size on AEB0003_01_Reno_Pillar_AI_C");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, UberGraphFrame) == 0x002340, "Member 'AEB0003_01_Reno_Pillar_AI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, EndAITimer) == 0x002348, "Member 'AEB0003_01_Reno_Pillar_AI_C::EndAITimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, Hit) == 0x002350, "Member 'AEB0003_01_Reno_Pillar_AI_C::Hit' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, AbilityCheck) == 0x002354, "Member 'AEB0003_01_Reno_Pillar_AI_C::AbilityCheck' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, NewVar_0) == 0x002358, "Member 'AEB0003_01_Reno_Pillar_AI_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, FlashDashPattern) == 0x002364, "Member 'AEB0003_01_Reno_Pillar_AI_C::FlashDashPattern' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, BackStepForBomb) == 0x002368, "Member 'AEB0003_01_Reno_Pillar_AI_C::BackStepForBomb' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, BombTimer) == 0x002369, "Member 'AEB0003_01_Reno_Pillar_AI_C::BombTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, PyramidTimer) == 0x00236A, "Member 'AEB0003_01_Reno_Pillar_AI_C::PyramidTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, BallTimer) == 0x00236B, "Member 'AEB0003_01_Reno_Pillar_AI_C::BallTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, FarAttackTimer) == 0x00236C, "Member 'AEB0003_01_Reno_Pillar_AI_C::FarAttackTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, FlashDashTimer) == 0x00236D, "Member 'AEB0003_01_Reno_Pillar_AI_C::FlashDashTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, GoHelp) == 0x00236E, "Member 'AEB0003_01_Reno_Pillar_AI_C::GoHelp' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, SwitchTarget) == 0x00236F, "Member 'AEB0003_01_Reno_Pillar_AI_C::SwitchTarget' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, Target) == 0x002370, "Member 'AEB0003_01_Reno_Pillar_AI_C::Target' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, FlashDashCount) == 0x002378, "Member 'AEB0003_01_Reno_Pillar_AI_C::FlashDashCount' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, RenoJump) == 0x00237C, "Member 'AEB0003_01_Reno_Pillar_AI_C::RenoJump' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, JumpPos) == 0x002380, "Member 'AEB0003_01_Reno_Pillar_AI_C::JumpPos' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, RanzanTimer) == 0x00238C, "Member 'AEB0003_01_Reno_Pillar_AI_C::RanzanTimer' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, Guarded) == 0x00238D, "Member 'AEB0003_01_Reno_Pillar_AI_C::Guarded' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, GuardEscape) == 0x00238E, "Member 'AEB0003_01_Reno_Pillar_AI_C::GuardEscape' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, BackStepforRaiden) == 0x00238F, "Member 'AEB0003_01_Reno_Pillar_AI_C::BackStepforRaiden' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, AvoidCharaSpec) == 0x002390, "Member 'AEB0003_01_Reno_Pillar_AI_C::AvoidCharaSpec' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, Rude) == 0x0023A0, "Member 'AEB0003_01_Reno_Pillar_AI_C::Rude' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, ThunderLandRunPos) == 0x0023A8, "Member 'AEB0003_01_Reno_Pillar_AI_C::ThunderLandRunPos' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, NoFlashDash) == 0x0023B4, "Member 'AEB0003_01_Reno_Pillar_AI_C::NoFlashDash' has a wrong offset!");
static_assert(offsetof(AEB0003_01_Reno_Pillar_AI_C, ForcePhaseChange) == 0x0023B5, "Member 'AEB0003_01_Reno_Pillar_AI_C::ForcePhaseChange' has a wrong offset!");

}

