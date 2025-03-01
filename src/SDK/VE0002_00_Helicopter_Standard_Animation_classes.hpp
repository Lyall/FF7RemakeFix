#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VE0002_00_Helicopter_Standard_Animation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass VE0002_00_Helicopter_Standard_Animation.VE0002_00_Helicopter_Standard_Animation_C
// 0x0BB0 (0x2330 - 0x1780)
class UVE0002_00_Helicopter_Standard_Animation_C final : public UEndAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1780(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_C237F44B4BEA3D5FD8A9F1A74DEBB755; // 0x1788(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_BD1D5B1E44A9249804DA3BAFFFDA1D2D; // 0x17D0(0x0068)()
	struct FAnimNode_EndBehavior                  AnimGraphNode_EndBehavior_6917940E42F1F545FF5D0F812DED3CCB; // 0x1838(0x0030)()
	struct FAnimNode_EndSaveLastPose              AnimGraphNode_EndSaveLastPose_B41F37B341F941F1EB6884BC1FA2B884; // 0x1868(0x0048)()
	struct FAnimNode_EndLocalRotate               AnimGraphNode_EndLocalRotate_7685B3634AD0909ADE7DB48CC267997B; // 0x18B0(0x00A8)()
	uint8                                         Pad_1958[0x8];                                     // 0x1958(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_EndFullBodySolver            AnimGraphNode_EndFullBodySolver_58409B8F4B48651E2FAC4C81D053782F; // 0x1960(0x0940)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7D00DCC84838F705E4C4759389727114; // 0x22A0(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B0D7667040C2886AEFC4BB9724DC988A; // 0x22E8(0x0048)()

public:
	void ExecuteUbergraph_VE0002_00_Helicopter_Standard_Animation(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VE0002_00_Helicopter_Standard_Animation_C">();
	}
	static class UVE0002_00_Helicopter_Standard_Animation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVE0002_00_Helicopter_Standard_Animation_C>();
	}
};
static_assert(alignof(UVE0002_00_Helicopter_Standard_Animation_C) == 0x000010, "Wrong alignment on UVE0002_00_Helicopter_Standard_Animation_C");
static_assert(sizeof(UVE0002_00_Helicopter_Standard_Animation_C) == 0x002330, "Wrong size on UVE0002_00_Helicopter_Standard_Animation_C");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, UberGraphFrame) == 0x001780, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_Root_C237F44B4BEA3D5FD8A9F1A74DEBB755) == 0x001788, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_Root_C237F44B4BEA3D5FD8A9F1A74DEBB755' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_Slot_BD1D5B1E44A9249804DA3BAFFFDA1D2D) == 0x0017D0, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_Slot_BD1D5B1E44A9249804DA3BAFFFDA1D2D' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_EndBehavior_6917940E42F1F545FF5D0F812DED3CCB) == 0x001838, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_EndBehavior_6917940E42F1F545FF5D0F812DED3CCB' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_EndSaveLastPose_B41F37B341F941F1EB6884BC1FA2B884) == 0x001868, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_EndSaveLastPose_B41F37B341F941F1EB6884BC1FA2B884' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_EndLocalRotate_7685B3634AD0909ADE7DB48CC267997B) == 0x0018B0, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_EndLocalRotate_7685B3634AD0909ADE7DB48CC267997B' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_EndFullBodySolver_58409B8F4B48651E2FAC4C81D053782F) == 0x001960, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_EndFullBodySolver_58409B8F4B48651E2FAC4C81D053782F' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_LocalToComponentSpace_7D00DCC84838F705E4C4759389727114) == 0x0022A0, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_LocalToComponentSpace_7D00DCC84838F705E4C4759389727114' has a wrong offset!");
static_assert(offsetof(UVE0002_00_Helicopter_Standard_Animation_C, AnimGraphNode_ComponentToLocalSpace_B0D7667040C2886AEFC4BB9724DC988A) == 0x0022E8, "Member 'UVE0002_00_Helicopter_Standard_Animation_C::AnimGraphNode_ComponentToLocalSpace_B0D7667040C2886AEFC4BB9724DC988A' has a wrong offset!");

}

