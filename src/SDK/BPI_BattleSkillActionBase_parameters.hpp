#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleSkillActionBase

#include "Basic.hpp"

#include "BTL_ADD_SKILL_LIGHT_TASK_DATA_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_Com_ActorSetMotion
// 0x000C (0x000C - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion final
{
public:
	int32                                         WaitCommandIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             MotionID;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WaitMotionFinished;                                // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2857[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Com_Index;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion) == 0x000004, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion) == 0x00000C, "Wrong size on BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion, WaitCommandIndex) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion::WaitCommandIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion, MotionID) == 0x000004, "Member 'BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion::MotionID' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion, WaitMotionFinished) == 0x000005, "Member 'BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion::WaitMotionFinished' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion, Com_Index) == 0x000008, "Member 'BPI_BattleSkillActionBase_C_BI_Com_ActorSetMotion::Com_Index' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_Com_AttackMoveActor
// 0x0008 (0x0008 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor final
{
public:
	int32                                         WaitCommandIndex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Com_Index;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor) == 0x000004, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor) == 0x000008, "Wrong size on BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor, WaitCommandIndex) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor::WaitCommandIndex' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor, Com_Index) == 0x000004, "Member 'BPI_BattleSkillActionBase_C_BI_Com_AttackMoveActor::Com_Index' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_CallEvt_SkillPerformance
// 0x0004 (0x0004 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance final
{
public:
	int32                                         Step;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance) == 0x000004, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance) == 0x000004, "Wrong size on BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance, Step) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_CallEvt_SkillPerformance::Step' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_BlinkHitLight
// 0x0004 (0x0004 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_BlinkHitLight final
{
public:
	int32                                         PartyIndex;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_BlinkHitLight) == 0x000004, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_BlinkHitLight");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_BlinkHitLight) == 0x000004, "Wrong size on BPI_BattleSkillActionBase_C_BI_BlinkHitLight");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_BlinkHitLight, PartyIndex) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_BlinkHitLight::PartyIndex' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_AddPointLight_Auto
// 0x0068 (0x0068 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto final
{
public:
	struct FBTL_ADD_SKILL_LIGHT_TASK_DATA         SkillLightData;                                    // 0x0000(0x0068)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto) == 0x000008, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto) == 0x000068, "Wrong size on BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto, SkillLightData) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_AddPointLight_Auto::SkillLightData' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_RegisterDecal
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_RegisterDecal final
{
public:
	class ADevilSpawnDecal_C*                     Decal;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_RegisterDecal) == 0x000008, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_RegisterDecal");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_RegisterDecal) == 0x000010, "Wrong size on BPI_BattleSkillActionBase_C_BI_RegisterDecal");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_RegisterDecal, Decal) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_RegisterDecal::Decal' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_RegisterDecal, NoUse) == 0x000008, "Member 'BPI_BattleSkillActionBase_C_BI_RegisterDecal::NoUse' has a wrong offset!");

// Function BPI_BattleSkillActionBase.BPI_BattleSkillActionBase_C.BI_RegisterDecalComponent
// 0x0010 (0x0010 - 0x0000)
struct BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent final
{
public:
	class UMaterialAnimDecalComponent_C*          Decal;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent) == 0x000008, "Wrong alignment on BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent");
static_assert(sizeof(BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent) == 0x000010, "Wrong size on BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent, Decal) == 0x000000, "Member 'BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent::Decal' has a wrong offset!");
static_assert(offsetof(BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent, NoUse) == 0x000008, "Member 'BPI_BattleSkillActionBase_C_BI_RegisterDecalComponent::NoUse' has a wrong offset!");

}
