#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_sbil0_80_boss010

#include "Basic.hpp"

#include "EndGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct btsc_sbil0_80_boss010_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(btsc_sbil0_80_boss010_C_ReceiveTick) == 0x000004, "Wrong alignment on btsc_sbil0_80_boss010_C_ReceiveTick");
static_assert(sizeof(btsc_sbil0_80_boss010_C_ReceiveTick) == 0x000004, "Wrong size on btsc_sbil0_80_boss010_C_ReceiveTick");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'btsc_sbil0_80_boss010_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ChangePhase
// 0x0004 (0x0004 - 0x0000)
struct btsc_sbil0_80_boss010_C_ChangePhase final
{
public:
	int32                                         mphase;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(btsc_sbil0_80_boss010_C_ChangePhase) == 0x000004, "Wrong alignment on btsc_sbil0_80_boss010_C_ChangePhase");
static_assert(sizeof(btsc_sbil0_80_boss010_C_ChangePhase) == 0x000004, "Wrong size on btsc_sbil0_80_boss010_C_ChangePhase");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ChangePhase, mphase) == 0x000000, "Member 'btsc_sbil0_80_boss010_C_ChangePhase::mphase' has a wrong offset!");

// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.OnTakeDamage
// 0x004C (0x004C - 0x0000)
struct btsc_sbil0_80_boss010_C_OnTakeDamage final
{
public:
	int32                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CauserCharaName;                                   // 0x0004(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DamagedCharaName;                                  // 0x000C(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityID;                                         // 0x0014(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBind;                                             // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bGuard;                                            // 0x001D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDodge;                                            // 0x001E(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   hitBoneName;                                       // 0x0020(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAttributeHit;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DamageSourceID;                                    // 0x002C(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndBattleAttributeType                       DmgSrcAttributeType;                               // 0x0034(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         justHitRotYaw;                                     // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                hitPosition;                                       // 0x003C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHeal;                                             // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(btsc_sbil0_80_boss010_C_OnTakeDamage) == 0x000004, "Wrong alignment on btsc_sbil0_80_boss010_C_OnTakeDamage");
static_assert(sizeof(btsc_sbil0_80_boss010_C_OnTakeDamage) == 0x00004C, "Wrong size on btsc_sbil0_80_boss010_C_OnTakeDamage");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, Damage) == 0x000000, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::Damage' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, CauserCharaName) == 0x000004, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::CauserCharaName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, DamagedCharaName) == 0x00000C, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::DamagedCharaName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, AbilityID) == 0x000014, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::AbilityID' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, bBind) == 0x00001C, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::bBind' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, bGuard) == 0x00001D, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::bGuard' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, bDodge) == 0x00001E, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::bDodge' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, hitBoneName) == 0x000020, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::hitBoneName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, bAttributeHit) == 0x000028, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::bAttributeHit' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, DamageSourceID) == 0x00002C, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::DamageSourceID' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, DmgSrcAttributeType) == 0x000034, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::DmgSrcAttributeType' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, justHitRotYaw) == 0x000038, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::justHitRotYaw' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, hitPosition) == 0x00003C, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::hitPosition' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_OnTakeDamage, bHeal) == 0x000048, "Member 'btsc_sbil0_80_boss010_C_OnTakeDamage::bHeal' has a wrong offset!");

// Function btsc_sbil0_80_boss010.btsc_sbil0_80_boss010_C.ExecuteUbergraph_btsc_sbil0_80_boss010
// 0x0090 (0x0090 - 0x0000)
struct btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable2;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable2;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable3;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event__phase;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Damage;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_CauserCharaName;                      // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_DamagedCharaName;                     // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_AbilityID;                            // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bBind;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bGuard;                               // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bDodge;                               // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_HitBoneName;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAttributeHit;                        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_DamageSourceID;                       // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndBattleAttributeType                       K2Node_Event_DmgSrcAttributeType;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_JustHitRotYaw;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitPosition;                          // 0x0054(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHeal;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetResidentParameterIntegerBP_ReturnValue; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEndCharacter*>                  CallFunc_GetEnemyMembersFromID_ReturnValue;        // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          Temp_bool_Has_Been_Initd_Variable3;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEndCharacter*                          CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCharaHPP_ReturnValue;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010) == 0x000008, "Wrong alignment on btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010");
static_assert(sizeof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010) == 0x000090, "Wrong size on btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, EntryPoint) == 0x000000, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::EntryPoint' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_IsClosed_Variable) == 0x000004, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_IsClosed_Variable2) == 0x000005, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_IsClosed_Variable2' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_Has_Been_Initd_Variable) == 0x000006, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_Has_Been_Initd_Variable2) == 0x000007, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_Has_Been_Initd_Variable2' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_IsClosed_Variable3) == 0x000008, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_IsClosed_Variable3' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event__phase) == 0x000010, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event__phase' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_Damage) == 0x000018, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_CauserCharaName) == 0x00001C, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_CauserCharaName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_DamagedCharaName) == 0x000024, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_DamagedCharaName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_AbilityID) == 0x00002C, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_AbilityID' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_bBind) == 0x000034, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_bBind' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_bGuard) == 0x000035, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_bGuard' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_bDodge) == 0x000036, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_bDodge' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_HitBoneName) == 0x000038, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_HitBoneName' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_bAttributeHit) == 0x000040, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_bAttributeHit' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_DamageSourceID) == 0x000044, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_DamageSourceID' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_DmgSrcAttributeType) == 0x00004C, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_DmgSrcAttributeType' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_JustHitRotYaw) == 0x000050, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_JustHitRotYaw' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_HitPosition) == 0x000054, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_HitPosition' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_Event_bHeal) == 0x000060, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_Event_bHeal' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, K2Node_SwitchName_CmpSuccess) == 0x000061, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, CallFunc_GetResidentParameterIntegerBP_ReturnValue) == 0x000064, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::CallFunc_GetResidentParameterIntegerBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, CallFunc_GetEnemyMembersFromID_ReturnValue) == 0x000068, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::CallFunc_GetEnemyMembersFromID_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, Temp_bool_Has_Been_Initd_Variable3) == 0x000078, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::Temp_bool_Has_Been_Initd_Variable3' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, CallFunc_Array_Get_Item) == 0x000080, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, CallFunc_GetCharaHPP_ReturnValue) == 0x000088, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::CallFunc_GetCharaHPP_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00008C, "Member 'btsc_sbil0_80_boss010_C_ExecuteUbergraph_btsc_sbil0_80_boss010::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

