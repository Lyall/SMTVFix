#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev317_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev317_AnimBP.Dev317_AnimBP_C
// 0x0BC0 (0x0E80 - 0x02C0)
class UDev317_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_96F0[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
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
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x0900(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x09F0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0AF8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0C00(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0D08(0x0108)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x0E10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x0E11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_96F1[0x2];                                     // 0x0E12(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x0E14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x0E28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F2[0x3];                                     // 0x0E29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x0E2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x0E30(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x0E34(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x0E40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x0E4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x0E4D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F3[0x2];                                     // 0x0E4E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadIKAlpha;                                       // 0x0E50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               HeadIKRotation;                                    // 0x0E54(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EyeIKEnable;                                       // 0x0E60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F4[0x3];                                     // 0x0E61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeIKAlpha;                                        // 0x0E64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               LeftEyeIKRotation;                                 // 0x0E68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightEyeIKRotation;                                // 0x0E74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void SetHeadIKInterpSpeed(float NewSpeed);
	void ChangeTwistAsset(int32 Param_Index);
	void InvalidLookAt(bool Invalid);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetEnableBoneTrans(bool IsEnable);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetFloatingIKPerch(float Alpha);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void BlueprintPostEvaluateAnimation();
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetLookAtEnable(bool Enable);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetBoneMotionEnable(bool Enable);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void ExecuteUbergraph_Dev317_AnimBP(int32 EntryPoint);

	class UAnimSequenceBase* GetMumbleAnimation() const;
	void GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const;
	class UAnimSequenceBase* GetDefaultAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev317_AnimBP_C">();
	}
	static class UDev317_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev317_AnimBP_C>();
	}
};
static_assert(alignof(UDev317_AnimBP_C) == 0x000010, "Wrong alignment on UDev317_AnimBP_C");
static_assert(sizeof(UDev317_AnimBP_C) == 0x000E80, "Wrong size on UDev317_AnimBP_C");
static_assert(offsetof(UDev317_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev317_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UDev317_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UDev317_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UDev317_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000338, "Member 'UDev317_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_Slot) == 0x0003E8, "Member 'UDev317_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UDev317_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0004B0, "Member 'UDev317_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000608, "Member 'UDev317_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000630, "Member 'UDev317_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UDev317_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_StateResult) == 0x0006D8, "Member 'UDev317_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_StateMachine) == 0x000708, "Member 'UDev317_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0007B8, "Member 'UDev317_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000838, "Member 'UDev317_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_CopyBone) == 0x000900, "Member 'UDev317_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x0009F0, "Member 'UDev317_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000AF8, "Member 'UDev317_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000C00, "Member 'UDev317_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000D08, "Member 'UDev317_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, ModeCurrent) == 0x000E10, "Member 'UDev317_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, ModePrevious) == 0x000E11, "Member 'UDev317_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, ModeBlendTime) == 0x000E14, "Member 'UDev317_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, DefaultAnimation) == 0x000E18, "Member 'UDev317_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, MumbleAnimation) == 0x000E20, "Member 'UDev317_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, MumbleEnable) == 0x000E28, "Member 'UDev317_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, MumbleAlpha) == 0x000E2C, "Member 'UDev317_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, RootOffsetEnable) == 0x000E30, "Member 'UDev317_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, RootOffset) == 0x000E34, "Member 'UDev317_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, RootDeltaRotation) == 0x000E40, "Member 'UDev317_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, LookAtEnable) == 0x000E4C, "Member 'UDev317_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, HeadIKEnable) == 0x000E4D, "Member 'UDev317_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, HeadIKAlpha) == 0x000E50, "Member 'UDev317_AnimBP_C::HeadIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, HeadIKRotation) == 0x000E54, "Member 'UDev317_AnimBP_C::HeadIKRotation' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, EyeIKEnable) == 0x000E60, "Member 'UDev317_AnimBP_C::EyeIKEnable' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, EyeIKAlpha) == 0x000E64, "Member 'UDev317_AnimBP_C::EyeIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, LeftEyeIKRotation) == 0x000E68, "Member 'UDev317_AnimBP_C::LeftEyeIKRotation' has a wrong offset!");
static_assert(offsetof(UDev317_AnimBP_C, RightEyeIKRotation) == 0x000E74, "Member 'UDev317_AnimBP_C::RightEyeIKRotation' has a wrong offset!");

}

