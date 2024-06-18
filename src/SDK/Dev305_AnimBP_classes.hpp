#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev305_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev305_AnimBP.Dev305_AnimBP_C
// 0x0AB0 (0x0D70 - 0x02C0)
class UDev305_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_9DE1[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
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
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x07B8(0x0108)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x08C0(0x00F0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x09B0(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0A30(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0AF8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0C00(0x0108)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x0D08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x0D09(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_9DE2[0x2];                                     // 0x0D0A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x0D0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x0D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x0D18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x0D1C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x0D28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE3[0x4];                                     // 0x0D34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x0D38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x0D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE4[0x3];                                     // 0x0D41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x0D44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          LookAtEnable;                                      // 0x0D48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EyeIKEnable;                                       // 0x0D49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DE5[0x2];                                     // 0x0D4A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeIKAlpha;                                        // 0x0D4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               LeftEyeIKRotation;                                 // 0x0D50(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightEyeIKRotation;                                // 0x0D5C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Dev305_AnimBP(int32 EntryPoint);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetLookAtEnable(bool Enable);
	void SetBoneMotionEnable(bool Enable);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetMumbleEnable(bool Enable);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetBodyIKEnable(bool Enable, bool Immediately);
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
		return StaticBPGeneratedClassImpl<"Dev305_AnimBP_C">();
	}
	static class UDev305_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev305_AnimBP_C>();
	}
};
static_assert(alignof(UDev305_AnimBP_C) == 0x000010, "Wrong alignment on UDev305_AnimBP_C");
static_assert(sizeof(UDev305_AnimBP_C) == 0x000D70, "Wrong size on UDev305_AnimBP_C");
static_assert(offsetof(UDev305_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev305_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UDev305_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UDev305_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UDev305_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000338, "Member 'UDev305_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_Slot) == 0x0003E8, "Member 'UDev305_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UDev305_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0004B0, "Member 'UDev305_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000608, "Member 'UDev305_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000630, "Member 'UDev305_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UDev305_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_StateResult) == 0x0006D8, "Member 'UDev305_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_StateMachine) == 0x000708, "Member 'UDev305_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x0007B8, "Member 'UDev305_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_CopyBone) == 0x0008C0, "Member 'UDev305_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0009B0, "Member 'UDev305_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000A30, "Member 'UDev305_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000AF8, "Member 'UDev305_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000C00, "Member 'UDev305_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, ModeCurrent) == 0x000D08, "Member 'UDev305_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, ModePrevious) == 0x000D09, "Member 'UDev305_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, ModeBlendTime) == 0x000D0C, "Member 'UDev305_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, DefaultAnimation) == 0x000D10, "Member 'UDev305_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, RootOffsetEnable) == 0x000D18, "Member 'UDev305_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, RootOffset) == 0x000D1C, "Member 'UDev305_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, RootDeltaRotation) == 0x000D28, "Member 'UDev305_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, MumbleAnimation) == 0x000D38, "Member 'UDev305_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, MumbleEnable) == 0x000D40, "Member 'UDev305_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, MumbleAlpha) == 0x000D44, "Member 'UDev305_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, LookAtEnable) == 0x000D48, "Member 'UDev305_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, EyeIKEnable) == 0x000D49, "Member 'UDev305_AnimBP_C::EyeIKEnable' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, EyeIKAlpha) == 0x000D4C, "Member 'UDev305_AnimBP_C::EyeIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, LeftEyeIKRotation) == 0x000D50, "Member 'UDev305_AnimBP_C::LeftEyeIKRotation' has a wrong offset!");
static_assert(offsetof(UDev305_AnimBP_C, RightEyeIKRotation) == 0x000D5C, "Member 'UDev305_AnimBP_C::RightEyeIKRotation' has a wrong offset!");

}

