#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC0099_00_Toad_Standard_Animation

#include "Basic.hpp"

#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass PC0099_00_Toad_Standard_Animation.PC0099_00_Toad_Standard_Animation_C
// 0x1140 (0x28C0 - 0x1780)
class UPC0099_00_Toad_Standard_Animation_C final : public UEndAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1780(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_76AF39E34F2CEBD454C570AA3E07AA5E; // 0x1788(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7AE7846D4F754EF636E11592E41651E0; // 0x17D0(0x0068)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7A5CF62F424B5AA21241C3A9A6083F79; // 0x1838(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E693CA1340DF22AA1CE30FA16D9478DD; // 0x1880(0x0048)()
	struct FAnimNode_EndAdjustOrientation         AnimGraphNode_EndAdjustOrientation_E8E31CE047F84EEAE98E33A7F3B9579A; // 0x18C8(0x00A0)()
	struct FAnimNode_EndBehavior                  AnimGraphNode_EndBehavior_EDB248D549C35E8D2565CA87A49D3866; // 0x1968(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_F748402C49A0325EC222AB97CF398B3D; // 0x1998(0x0068)()
	struct FAnimNode_EndSaveLastPose              AnimGraphNode_EndSaveLastPose_4886736B4327DE2E088A99BCBFEE3236; // 0x1A00(0x0048)()
	uint8                                         Pad_1A48[0x8];                                     // 0x1A48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_EndFullBodySolver            AnimGraphNode_EndFullBodySolver_4F068D994FF4702A1C2B44B2CE549F3D; // 0x1A50(0x0940)()
	struct FAnimNode_EndFace                      AnimGraphNode_EndFace_954435634D7DDC720DA3148A2CB050F5; // 0x2390(0x03B0)()
	struct FAnimNode_EndFaceBlend                 AnimGraphNode_EndFaceBlend_2E07226B4BE1F74EDD435D9D0C24260B; // 0x2740(0x0070)()
	struct FAnimNode_EndPhysicalRotate            AnimGraphNode_EndPhysicalRotate_6B9629B14EA3186BCF637B85181564E5; // 0x27B0(0x0110)()

public:
	void ExecuteUbergraph_PC0099_00_Toad_Standard_Animation(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC0099_00_Toad_Standard_Animation_C">();
	}
	static class UPC0099_00_Toad_Standard_Animation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPC0099_00_Toad_Standard_Animation_C>();
	}
};
static_assert(alignof(UPC0099_00_Toad_Standard_Animation_C) == 0x000010, "Wrong alignment on UPC0099_00_Toad_Standard_Animation_C");
static_assert(sizeof(UPC0099_00_Toad_Standard_Animation_C) == 0x0028C0, "Wrong size on UPC0099_00_Toad_Standard_Animation_C");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, UberGraphFrame) == 0x001780, "Member 'UPC0099_00_Toad_Standard_Animation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_Root_76AF39E34F2CEBD454C570AA3E07AA5E) == 0x001788, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_Root_76AF39E34F2CEBD454C570AA3E07AA5E' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_Slot_7AE7846D4F754EF636E11592E41651E0) == 0x0017D0, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_Slot_7AE7846D4F754EF636E11592E41651E0' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_LocalToComponentSpace_7A5CF62F424B5AA21241C3A9A6083F79) == 0x001838, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_LocalToComponentSpace_7A5CF62F424B5AA21241C3A9A6083F79' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_ComponentToLocalSpace_E693CA1340DF22AA1CE30FA16D9478DD) == 0x001880, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_ComponentToLocalSpace_E693CA1340DF22AA1CE30FA16D9478DD' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndAdjustOrientation_E8E31CE047F84EEAE98E33A7F3B9579A) == 0x0018C8, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndAdjustOrientation_E8E31CE047F84EEAE98E33A7F3B9579A' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndBehavior_EDB248D549C35E8D2565CA87A49D3866) == 0x001968, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndBehavior_EDB248D549C35E8D2565CA87A49D3866' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_Slot_F748402C49A0325EC222AB97CF398B3D) == 0x001998, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_Slot_F748402C49A0325EC222AB97CF398B3D' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndSaveLastPose_4886736B4327DE2E088A99BCBFEE3236) == 0x001A00, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndSaveLastPose_4886736B4327DE2E088A99BCBFEE3236' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndFullBodySolver_4F068D994FF4702A1C2B44B2CE549F3D) == 0x001A50, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndFullBodySolver_4F068D994FF4702A1C2B44B2CE549F3D' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndFace_954435634D7DDC720DA3148A2CB050F5) == 0x002390, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndFace_954435634D7DDC720DA3148A2CB050F5' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndFaceBlend_2E07226B4BE1F74EDD435D9D0C24260B) == 0x002740, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndFaceBlend_2E07226B4BE1F74EDD435D9D0C24260B' has a wrong offset!");
static_assert(offsetof(UPC0099_00_Toad_Standard_Animation_C, AnimGraphNode_EndPhysicalRotate_6B9629B14EA3186BCF637B85181564E5) == 0x0027B0, "Member 'UPC0099_00_Toad_Standard_Animation_C::AnimGraphNode_EndPhysicalRotate_6B9629B14EA3186BCF637B85181564E5' has a wrong offset!");

}

