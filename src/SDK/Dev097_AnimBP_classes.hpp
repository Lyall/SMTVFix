#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev097_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev097_AnimBP.Dev097_AnimBP_C
// 0x1860 (0x1B20 - 0x02C0)
class UDev097_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_4517[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x02F8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0318(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0338(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03E8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0430(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x04B0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0608(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0630(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0658(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06D8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0708(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x07B8(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0838(0x00C8)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_3;                          // 0x0900(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_2;                          // 0x09F0(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x0AE0(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x0BD0(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0CC0(0x0108)()
	uint8                                         Pad_4518[0x8];                                     // 0x0DC8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_3;                         // 0x0DD0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_2;                         // 0x0FB0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x1190(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x1370(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x1550(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x1658(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1760(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1868(0x0108)()
	struct FAnimNode_CustomPoseBlendNode          AnimGraphNode_CustomPoseBlendNode;                 // 0x1970(0x00C0)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x1A30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x1A31(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_4519[0x2];                                     // 0x1A32(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x1A34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x1A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x1A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x1A48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451A[0x3];                                     // 0x1A49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x1A4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x1A50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x1A54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x1A60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LegIKEnable;                                       // 0x1A6C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451B[0x3];                                     // 0x1A6D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LegIKAlpha;                                        // 0x1A70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                ForeLeftLegIKEffectorLocation;                     // 0x1A74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForeRightLegIKEffectorLocation;                    // 0x1A80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HindLeftLegIKEffectorLocation;                     // 0x1A8C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HindRightLegIKEffectorLocation;                    // 0x1A98(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForeLeftLegIKTargetLocation;                       // 0x1AA4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForeRightLegIKTargetLocation;                      // 0x1AB0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HindLeftLegIKTargetLocation;                       // 0x1ABC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HindRightLegIKTargetLocation;                      // 0x1AC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ForeLeftLegIKEffectorRotation;                     // 0x1AD4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               ForeRightLegIKEffectorRotation;                    // 0x1AE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               HindLeftLegIKEffectorRotation;                     // 0x1AEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               HindRightLegIKEffectorRotation;                    // 0x1AF8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x1B04(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BodyIKEnable;                                      // 0x1B05(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451C[0x2];                                     // 0x1B06(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BodyIKAlpha;                                       // 0x1B08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_451D[0x4];                                     // 0x1B0C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomPoseWeightTable*                 PoseWeightTable;                                   // 0x1B10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev097_AnimBP(int32 EntryPoint);
	void SetPoseWeightTable(class UCustomPoseWeightTable* Param_PoseWeightTable);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetBoneMotionEnable(bool Enable);
	void SetLookAtEnable(bool Enable);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetFloatingIKPerch(float Alpha);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetEnableBoneTrans(bool IsEnable);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void InvalidLookAt(bool Invalid);
	void ChangeTwistAsset(int32 Param_Index);
	void SetHeadIKInterpSpeed(float NewSpeed);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

	class UAnimSequenceBase* GetDefaultAnimation() const;
	void GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const;
	class UAnimSequenceBase* GetMumbleAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev097_AnimBP_C">();
	}
	static class UDev097_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev097_AnimBP_C>();
	}
};
static_assert(alignof(UDev097_AnimBP_C) == 0x000010, "Wrong alignment on UDev097_AnimBP_C");
static_assert(sizeof(UDev097_AnimBP_C) == 0x001B20, "Wrong size on UDev097_AnimBP_C");
static_assert(offsetof(UDev097_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev097_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UDev097_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UDev097_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UDev097_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000338, "Member 'UDev097_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_Slot) == 0x0003E8, "Member 'UDev097_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UDev097_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0004B0, "Member 'UDev097_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000608, "Member 'UDev097_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000630, "Member 'UDev097_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UDev097_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_StateResult) == 0x0006D8, "Member 'UDev097_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_StateMachine) == 0x000708, "Member 'UDev097_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0007B8, "Member 'UDev097_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000838, "Member 'UDev097_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_CopyBone_3) == 0x000900, "Member 'UDev097_AnimBP_C::AnimGraphNode_CopyBone_3' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_CopyBone_2) == 0x0009F0, "Member 'UDev097_AnimBP_C::AnimGraphNode_CopyBone_2' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_CopyBone_1) == 0x000AE0, "Member 'UDev097_AnimBP_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_CopyBone) == 0x000BD0, "Member 'UDev097_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ModifyBone_4) == 0x000CC0, "Member 'UDev097_AnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_TwoBoneIK_3) == 0x000DD0, "Member 'UDev097_AnimBP_C::AnimGraphNode_TwoBoneIK_3' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_TwoBoneIK_2) == 0x000FB0, "Member 'UDev097_AnimBP_C::AnimGraphNode_TwoBoneIK_2' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x001190, "Member 'UDev097_AnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x001370, "Member 'UDev097_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x001550, "Member 'UDev097_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x001658, "Member 'UDev097_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x001760, "Member 'UDev097_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_ModifyBone) == 0x001868, "Member 'UDev097_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, AnimGraphNode_CustomPoseBlendNode) == 0x001970, "Member 'UDev097_AnimBP_C::AnimGraphNode_CustomPoseBlendNode' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ModeCurrent) == 0x001A30, "Member 'UDev097_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ModePrevious) == 0x001A31, "Member 'UDev097_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ModeBlendTime) == 0x001A34, "Member 'UDev097_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, DefaultAnimation) == 0x001A38, "Member 'UDev097_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, MumbleAnimation) == 0x001A40, "Member 'UDev097_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, MumbleEnable) == 0x001A48, "Member 'UDev097_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, MumbleAlpha) == 0x001A4C, "Member 'UDev097_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, RootOffsetEnable) == 0x001A50, "Member 'UDev097_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, RootOffset) == 0x001A54, "Member 'UDev097_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, RootDeltaRotation) == 0x001A60, "Member 'UDev097_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, LegIKEnable) == 0x001A6C, "Member 'UDev097_AnimBP_C::LegIKEnable' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, LegIKAlpha) == 0x001A70, "Member 'UDev097_AnimBP_C::LegIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeLeftLegIKEffectorLocation) == 0x001A74, "Member 'UDev097_AnimBP_C::ForeLeftLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeRightLegIKEffectorLocation) == 0x001A80, "Member 'UDev097_AnimBP_C::ForeRightLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindLeftLegIKEffectorLocation) == 0x001A8C, "Member 'UDev097_AnimBP_C::HindLeftLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindRightLegIKEffectorLocation) == 0x001A98, "Member 'UDev097_AnimBP_C::HindRightLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeLeftLegIKTargetLocation) == 0x001AA4, "Member 'UDev097_AnimBP_C::ForeLeftLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeRightLegIKTargetLocation) == 0x001AB0, "Member 'UDev097_AnimBP_C::ForeRightLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindLeftLegIKTargetLocation) == 0x001ABC, "Member 'UDev097_AnimBP_C::HindLeftLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindRightLegIKTargetLocation) == 0x001AC8, "Member 'UDev097_AnimBP_C::HindRightLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeLeftLegIKEffectorRotation) == 0x001AD4, "Member 'UDev097_AnimBP_C::ForeLeftLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, ForeRightLegIKEffectorRotation) == 0x001AE0, "Member 'UDev097_AnimBP_C::ForeRightLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindLeftLegIKEffectorRotation) == 0x001AEC, "Member 'UDev097_AnimBP_C::HindLeftLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, HindRightLegIKEffectorRotation) == 0x001AF8, "Member 'UDev097_AnimBP_C::HindRightLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, LookAtEnable) == 0x001B04, "Member 'UDev097_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, BodyIKEnable) == 0x001B05, "Member 'UDev097_AnimBP_C::BodyIKEnable' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, BodyIKAlpha) == 0x001B08, "Member 'UDev097_AnimBP_C::BodyIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev097_AnimBP_C, PoseWeightTable) == 0x001B10, "Member 'UDev097_AnimBP_C::PoseWeightTable' has a wrong offset!");

}

