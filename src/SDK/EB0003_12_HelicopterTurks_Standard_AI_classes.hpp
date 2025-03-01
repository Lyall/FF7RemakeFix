#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EB0003_12_HelicopterTurks_Standard_AI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EB0003_12_HelicopterTurks_Standard_AI.EB0003_12_HelicopterTurks_Standard_AI_C
// 0x0038 (0x22C0 - 0x2288)
class AEB0003_12_HelicopterTurks_Standard_AI_C : public AEndBattleAIController
{
public:
	uint8                                         Pad_2288[0x8];                                     // 0x2288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2290(0x0008)(Transient, DuplicateTransient)
	class UEndBattleAIOverlapComponent*           EndBattleAIOverlap;                                // 0x2298(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndAITimerComponent*                   EndAITimer;                                        // 0x22A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEndAITimerComponent*                   EndAITimerSet;                                     // 0x22A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                centerPos;                                         // 0x22B0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Wait;                                              // 0x22BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NoBomb;                                            // 0x22BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EB0003_12_HelicopterTurks_Standard_AI(int32 EntryPoint);
	void m_WjD();
	void OnMetaMessageAboutCharacter(class AEndCharacter* InChara, const class FString& InMessage);
	void m_______();
	void FinishTimer(class FName InName);
	void OnMotionMessage(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue);
	void m___2B______();
	void OnKilled(int32 Damage, class AEndCharacter* InTarget, class FName InName, bool InBind);
	void m_____();
	void m______n__();
	void m_Mn__n__();
	void OnFirstUpdate(EEndAiBattleRole InRole, int32 InStep);
	void OnUpdate(EEndAiBattleRole InRole, int32 InStep, float DeltaTime);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EB0003_12_HelicopterTurks_Standard_AI_C">();
	}
	static class AEB0003_12_HelicopterTurks_Standard_AI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEB0003_12_HelicopterTurks_Standard_AI_C>();
	}
};
static_assert(alignof(AEB0003_12_HelicopterTurks_Standard_AI_C) == 0x000008, "Wrong alignment on AEB0003_12_HelicopterTurks_Standard_AI_C");
static_assert(sizeof(AEB0003_12_HelicopterTurks_Standard_AI_C) == 0x0022C0, "Wrong size on AEB0003_12_HelicopterTurks_Standard_AI_C");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, UberGraphFrame) == 0x002290, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, EndBattleAIOverlap) == 0x002298, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::EndBattleAIOverlap' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, EndAITimer) == 0x0022A0, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::EndAITimer' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, EndAITimerSet) == 0x0022A8, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::EndAITimerSet' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, centerPos) == 0x0022B0, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::centerPos' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, Wait) == 0x0022BC, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::Wait' has a wrong offset!");
static_assert(offsetof(AEB0003_12_HelicopterTurks_Standard_AI_C, NoBomb) == 0x0022BD, "Member 'AEB0003_12_HelicopterTurks_Standard_AI_C::NoBomb' has a wrong offset!");

}

