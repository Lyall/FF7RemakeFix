#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC0099_03_Toad_Tifa_AI

#include "Basic.hpp"


namespace SDK::Params
{

// Function PC0099_03_Toad_Tifa_AI.PC0099_03_Toad_Tifa_AI_C.ExecuteUbergraph_PC0099_03_Toad_Tifa_AI
// 0x0018 (0x0018 - 0x0000)
struct PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI) == 0x000008, "Wrong alignment on PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI");
static_assert(sizeof(PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI) == 0x000018, "Wrong size on PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI");
static_assert(offsetof(PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI, EntryPoint) == 0x000000, "Member 'PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI::EntryPoint' has a wrong offset!");
static_assert(offsetof(PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI, K2Node_Event_PossessedPawn) == 0x000008, "Member 'PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI, CallFunc_RunBehaviorTree_ReturnValue) == 0x000010, "Member 'PC0099_03_Toad_Tifa_AI_C_ExecuteUbergraph_PC0099_03_Toad_Tifa_AI::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");

// Function PC0099_03_Toad_Tifa_AI.PC0099_03_Toad_Tifa_AI_C.OnPossess
// 0x0008 (0x0008 - 0x0000)
struct PC0099_03_Toad_Tifa_AI_C_OnPossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PC0099_03_Toad_Tifa_AI_C_OnPossess) == 0x000008, "Wrong alignment on PC0099_03_Toad_Tifa_AI_C_OnPossess");
static_assert(sizeof(PC0099_03_Toad_Tifa_AI_C_OnPossess) == 0x000008, "Wrong size on PC0099_03_Toad_Tifa_AI_C_OnPossess");
static_assert(offsetof(PC0099_03_Toad_Tifa_AI_C_OnPossess, PossessedPawn) == 0x000000, "Member 'PC0099_03_Toad_Tifa_AI_C_OnPossess::PossessedPawn' has a wrong offset!");

}

