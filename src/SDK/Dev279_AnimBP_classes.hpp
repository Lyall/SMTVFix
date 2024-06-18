#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev279_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev279_AnimBP.Dev279_AnimBP_C
// 0x0990 (0x0C50 - 0x02C0)
class UDev279_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_DDCF[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
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
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x09F0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0AF8(0x0108)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x0C00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x0C01(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_DDD0[0x2];                                     // 0x0C02(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x0C04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x0C18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DDD1[0x3];                                     // 0x0C19(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x0C1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x0C24(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x0C30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x0C3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x0C3D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DDD2[0x2];                                     // 0x0C3E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadIKAlpha;                                       // 0x0C40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               HeadIKRotation;                                    // 0x0C44(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Dev279_AnimBP(int32 EntryPoint);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetLookAtEnable(bool Enable);
	void SetBoneMotionEnable(bool Enable);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetFloatingIKPerch(float Alpha);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetEnableBoneTrans(bool IsEnable);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void InvalidLookAt(bool Invalid);
	void SetHeadIKInterpSpeed(float NewSpeed);
	void ChangeTwistAsset(int32 Param_Index);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

	class UAnimSequenceBase* GetDefaultAnimation() const;
	void GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const;
	class UAnimSequenceBase* GetMumbleAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev279_AnimBP_C">();
	}
	static class UDev279_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev279_AnimBP_C>();
	}
};
static_assert(alignof(UDev279_AnimBP_C) == 0x000010, "Wrong alignment on UDev279_AnimBP_C");
static_assert(sizeof(UDev279_AnimBP_C) == 0x000C50, "Wrong size on UDev279_AnimBP_C");
static_assert(offsetof(UDev279_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev279_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UDev279_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UDev279_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UDev279_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000338, "Member 'UDev279_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_Slot) == 0x0003E8, "Member 'UDev279_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UDev279_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0004B0, "Member 'UDev279_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000608, "Member 'UDev279_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000630, "Member 'UDev279_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UDev279_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_StateResult) == 0x0006D8, "Member 'UDev279_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_StateMachine) == 0x000708, "Member 'UDev279_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0007B8, "Member 'UDev279_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000838, "Member 'UDev279_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_CopyBone) == 0x000900, "Member 'UDev279_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x0009F0, "Member 'UDev279_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, AnimGraphNode_ModifyBone) == 0x000AF8, "Member 'UDev279_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, ModeCurrent) == 0x000C00, "Member 'UDev279_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, ModePrevious) == 0x000C01, "Member 'UDev279_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, ModeBlendTime) == 0x000C04, "Member 'UDev279_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, DefaultAnimation) == 0x000C08, "Member 'UDev279_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, MumbleAnimation) == 0x000C10, "Member 'UDev279_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, MumbleEnable) == 0x000C18, "Member 'UDev279_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, MumbleAlpha) == 0x000C1C, "Member 'UDev279_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, RootOffsetEnable) == 0x000C20, "Member 'UDev279_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, RootOffset) == 0x000C24, "Member 'UDev279_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, RootDeltaRotation) == 0x000C30, "Member 'UDev279_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, LookAtEnable) == 0x000C3C, "Member 'UDev279_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, HeadIKEnable) == 0x000C3D, "Member 'UDev279_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, HeadIKAlpha) == 0x000C40, "Member 'UDev279_AnimBP_C::HeadIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev279_AnimBP_C, HeadIKRotation) == 0x000C44, "Member 'UDev279_AnimBP_C::HeadIKRotation' has a wrong offset!");

}

