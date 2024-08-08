#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pla603_PostAnimBP

#include "Basic.hpp"

#include "Project_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Pla603_PostAnimBP.Pla603_PostAnimBP_C
// 0x0EE0 (0x12E0 - 0x0400)
class UPla603_PostAnimBP_C final : public UProjectIKAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0408(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x0438(0x0118)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0550(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0570(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0590(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x06E8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0710(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0738(0x00A0)()
	uint8                                         Pad_7D8[0x8];                                      // 0x07D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x07E0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x09C0(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0BA0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x0CA8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0DB0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0EB8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0FC0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x10C8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x11D0(0x0108)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Pla603_PostAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pla603_PostAnimBP_C">();
	}
	static class UPla603_PostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPla603_PostAnimBP_C>();
	}
};
static_assert(alignof(UPla603_PostAnimBP_C) == 0x000010, "Wrong alignment on UPla603_PostAnimBP_C");
static_assert(sizeof(UPla603_PostAnimBP_C) == 0x0012E0, "Wrong size on UPla603_PostAnimBP_C");
static_assert(offsetof(UPla603_PostAnimBP_C, UberGraphFrame) == 0x000400, "Member 'UPla603_PostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_Root) == 0x000408, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_SubInput) == 0x000438, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000550, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000570, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000590, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x0006E8, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_UseCachedPose) == 0x000710, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_BlendListByBool) == 0x000738, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x0007E0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_TwoBoneIK) == 0x0009C0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_6) == 0x000BA0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_5) == 0x000CA8, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_4) == 0x000DB0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_3) == 0x000EB8, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000FC0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone_1) == 0x0010C8, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UPla603_PostAnimBP_C, AnimGraphNode_ModifyBone) == 0x0011D0, "Member 'UPla603_PostAnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");

}

