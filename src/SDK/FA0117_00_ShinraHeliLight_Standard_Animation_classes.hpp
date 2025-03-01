#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FA0117_00_ShinraHeliLight_Standard_Animation

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass FA0117_00_ShinraHeliLight_Standard_Animation.FA0117_00_ShinraHeliLight_Standard_Animation_C
// 0x0B00 (0x2280 - 0x1780)
class UFA0117_00_ShinraHeliLight_Standard_Animation_C final : public UEndAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1780(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_D4F1AE4143436251FE6A6CABF987BA8A; // 0x1788(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_54C161174060BA2DB8A9898D97503863; // 0x17D0(0x0068)()
	struct FAnimNode_EndBehavior                  AnimGraphNode_EndBehavior_1565886D4C85F28F439618BC29795140; // 0x1838(0x0030)()
	struct FAnimNode_EndSaveLastPose              AnimGraphNode_EndSaveLastPose_FE838BA242DA33D8F0F18FA4B5E82434; // 0x1868(0x0048)()
	struct FAnimNode_EndFullBodySolver            AnimGraphNode_EndFullBodySolver_A2E7387847BA7E5D9EAC1FBB4E6A4CAD; // 0x18B0(0x0940)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3E3821FF4DFA9C031C816EA74995F20F; // 0x21F0(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4815A70446625A1E3968239655FEB45E; // 0x2238(0x0048)()

public:
	void ExecuteUbergraph_FA0117_00_ShinraHeliLight_Standard_Animation(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FA0117_00_ShinraHeliLight_Standard_Animation_C">();
	}
	static class UFA0117_00_ShinraHeliLight_Standard_Animation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFA0117_00_ShinraHeliLight_Standard_Animation_C>();
	}
};
static_assert(alignof(UFA0117_00_ShinraHeliLight_Standard_Animation_C) == 0x000010, "Wrong alignment on UFA0117_00_ShinraHeliLight_Standard_Animation_C");
static_assert(sizeof(UFA0117_00_ShinraHeliLight_Standard_Animation_C) == 0x002280, "Wrong size on UFA0117_00_ShinraHeliLight_Standard_Animation_C");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, UberGraphFrame) == 0x001780, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_Root_D4F1AE4143436251FE6A6CABF987BA8A) == 0x001788, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_Root_D4F1AE4143436251FE6A6CABF987BA8A' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_Slot_54C161174060BA2DB8A9898D97503863) == 0x0017D0, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_Slot_54C161174060BA2DB8A9898D97503863' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_EndBehavior_1565886D4C85F28F439618BC29795140) == 0x001838, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_EndBehavior_1565886D4C85F28F439618BC29795140' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_EndSaveLastPose_FE838BA242DA33D8F0F18FA4B5E82434) == 0x001868, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_EndSaveLastPose_FE838BA242DA33D8F0F18FA4B5E82434' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_EndFullBodySolver_A2E7387847BA7E5D9EAC1FBB4E6A4CAD) == 0x0018B0, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_EndFullBodySolver_A2E7387847BA7E5D9EAC1FBB4E6A4CAD' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_LocalToComponentSpace_3E3821FF4DFA9C031C816EA74995F20F) == 0x0021F0, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_LocalToComponentSpace_3E3821FF4DFA9C031C816EA74995F20F' has a wrong offset!");
static_assert(offsetof(UFA0117_00_ShinraHeliLight_Standard_Animation_C, AnimGraphNode_ComponentToLocalSpace_4815A70446625A1E3968239655FEB45E) == 0x002238, "Member 'UFA0117_00_ShinraHeliLight_Standard_Animation_C::AnimGraphNode_ComponentToLocalSpace_4815A70446625A1E3968239655FEB45E' has a wrong offset!");

}

