#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Chara_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetAnimationMode
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_SetAnimationMode final
{
public:
	E_CHARA_ANIMATION_MODE                        Mode;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2610[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendTime;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetAnimationMode) == 0x000004, "Wrong alignment on BPI_Chara_AnimBP_C_SetAnimationMode");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetAnimationMode) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_SetAnimationMode");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetAnimationMode, Mode) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetAnimationMode::Mode' has a wrong offset!");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetAnimationMode, BlendTime) == 0x000004, "Member 'BPI_Chara_AnimBP_C_SetAnimationMode::BlendTime' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetDefaultAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_SetDefaultAnimation final
{
public:
	class UAnimSequenceBase*                      Animation;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetDefaultAnimation) == 0x000008, "Wrong alignment on BPI_Chara_AnimBP_C_SetDefaultAnimation");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetDefaultAnimation) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_SetDefaultAnimation");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetDefaultAnimation, Animation) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetDefaultAnimation::Animation' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetPoseWeightTable
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_SetPoseWeightTable final
{
public:
	class UCustomPoseWeightTable*                 PoseWeightTable;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetPoseWeightTable) == 0x000008, "Wrong alignment on BPI_Chara_AnimBP_C_SetPoseWeightTable");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetPoseWeightTable) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_SetPoseWeightTable");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetPoseWeightTable, PoseWeightTable) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetPoseWeightTable::PoseWeightTable' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetMumbleAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_SetMumbleAnimation final
{
public:
	class UAnimSequenceBase*                      Animation;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetMumbleAnimation) == 0x000008, "Wrong alignment on BPI_Chara_AnimBP_C_SetMumbleAnimation");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetMumbleAnimation) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_SetMumbleAnimation");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetMumbleAnimation, Animation) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetMumbleAnimation::Animation' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetMumbleEnable
// 0x0001 (0x0001 - 0x0000)
struct BPI_Chara_AnimBP_C_SetMumbleEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetMumbleEnable) == 0x000001, "Wrong alignment on BPI_Chara_AnimBP_C_SetMumbleEnable");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetMumbleEnable) == 0x000001, "Wrong size on BPI_Chara_AnimBP_C_SetMumbleEnable");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetMumbleEnable, Enable) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetMumbleEnable::Enable' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.SetBoneMotionEnable
// 0x0001 (0x0001 - 0x0000)
struct BPI_Chara_AnimBP_C_SetBoneMotionEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Chara_AnimBP_C_SetBoneMotionEnable) == 0x000001, "Wrong alignment on BPI_Chara_AnimBP_C_SetBoneMotionEnable");
static_assert(sizeof(BPI_Chara_AnimBP_C_SetBoneMotionEnable) == 0x000001, "Wrong size on BPI_Chara_AnimBP_C_SetBoneMotionEnable");
static_assert(offsetof(BPI_Chara_AnimBP_C_SetBoneMotionEnable, Enable) == 0x000000, "Member 'BPI_Chara_AnimBP_C_SetBoneMotionEnable::Enable' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.GetAnimationMode
// 0x0002 (0x0002 - 0x0000)
struct BPI_Chara_AnimBP_C_GetAnimationMode final
{
public:
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_GetAnimationMode) == 0x000001, "Wrong alignment on BPI_Chara_AnimBP_C_GetAnimationMode");
static_assert(sizeof(BPI_Chara_AnimBP_C_GetAnimationMode) == 0x000002, "Wrong size on BPI_Chara_AnimBP_C_GetAnimationMode");
static_assert(offsetof(BPI_Chara_AnimBP_C_GetAnimationMode, ModeCurrent) == 0x000000, "Member 'BPI_Chara_AnimBP_C_GetAnimationMode::ModeCurrent' has a wrong offset!");
static_assert(offsetof(BPI_Chara_AnimBP_C_GetAnimationMode, ModePrevious) == 0x000001, "Member 'BPI_Chara_AnimBP_C_GetAnimationMode::ModePrevious' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.GetDefaultAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_GetDefaultAnimation final
{
public:
	class UAnimSequenceBase*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_GetDefaultAnimation) == 0x000008, "Wrong alignment on BPI_Chara_AnimBP_C_GetDefaultAnimation");
static_assert(sizeof(BPI_Chara_AnimBP_C_GetDefaultAnimation) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_GetDefaultAnimation");
static_assert(offsetof(BPI_Chara_AnimBP_C_GetDefaultAnimation, ReturnValue) == 0x000000, "Member 'BPI_Chara_AnimBP_C_GetDefaultAnimation::ReturnValue' has a wrong offset!");

// Function BPI_Chara_AnimBP.BPI_Chara_AnimBP_C.GetMumbleAnimation
// 0x0008 (0x0008 - 0x0000)
struct BPI_Chara_AnimBP_C_GetMumbleAnimation final
{
public:
	class UAnimSequenceBase*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Chara_AnimBP_C_GetMumbleAnimation) == 0x000008, "Wrong alignment on BPI_Chara_AnimBP_C_GetMumbleAnimation");
static_assert(sizeof(BPI_Chara_AnimBP_C_GetMumbleAnimation) == 0x000008, "Wrong size on BPI_Chara_AnimBP_C_GetMumbleAnimation");
static_assert(offsetof(BPI_Chara_AnimBP_C_GetMumbleAnimation, ReturnValue) == 0x000000, "Member 'BPI_Chara_AnimBP_C_GetMumbleAnimation::ReturnValue' has a wrong offset!");

}

