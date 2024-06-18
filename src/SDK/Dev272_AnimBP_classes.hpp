#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev272_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev272_AnimBP.Dev272_AnimBP_C
// 0x11A0 (0x1460 - 0x02C0)
class UDev272_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_C09B[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
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
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0900(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0A08(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0B10(0x0108)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_2;                          // 0x0C18(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x0D08(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x0DF8(0x00F0)()
	uint8                                         Pad_C09C[0x8];                                     // 0x0EE8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0EF0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x10D0(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x12B0(0x0108)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x13B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x13B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_C09D[0x2];                                     // 0x13BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x13BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x13C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x13C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x13D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C09E[0x3];                                     // 0x13D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x13D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x13D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x13DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x13E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x13F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x13F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C09F[0x2];                                     // 0x13F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadIKAlpha;                                       // 0x13F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               HeadIKRotation;                                    // 0x13FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LegIKEnable;                                       // 0x1408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C0A0[0x3];                                     // 0x1409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LegIKAlpha;                                        // 0x140C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         LegIKAlphaWithPerch;                               // 0x1410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                LeftLegIKEffectorLocation;                         // 0x1414(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation;                        // 0x1420(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKTargetLocation;                           // 0x142C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation;                          // 0x1438(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation;                         // 0x1444(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation;                        // 0x1450(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FloatingIKPerch;                                   // 0x145C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev272_AnimBP(int32 EntryPoint);
	void SetFloatingIKPerch(float Alpha);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetLookAtEnable(bool Enable);
	void SetBoneMotionEnable(bool Enable);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetBodyIKEnable(bool Enable, bool Immediately);
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
		return StaticBPGeneratedClassImpl<"Dev272_AnimBP_C">();
	}
	static class UDev272_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev272_AnimBP_C>();
	}
};
static_assert(alignof(UDev272_AnimBP_C) == 0x000010, "Wrong alignment on UDev272_AnimBP_C");
static_assert(sizeof(UDev272_AnimBP_C) == 0x001460, "Wrong size on UDev272_AnimBP_C");
static_assert(offsetof(UDev272_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev272_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UDev272_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UDev272_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UDev272_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000338, "Member 'UDev272_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_Slot) == 0x0003E8, "Member 'UDev272_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000430, "Member 'UDev272_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x0004B0, "Member 'UDev272_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x000608, "Member 'UDev272_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000630, "Member 'UDev272_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UDev272_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_StateResult) == 0x0006D8, "Member 'UDev272_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_StateMachine) == 0x000708, "Member 'UDev272_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0007B8, "Member 'UDev272_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000838, "Member 'UDev272_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x000900, "Member 'UDev272_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x000A08, "Member 'UDev272_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x000B10, "Member 'UDev272_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_CopyBone_2) == 0x000C18, "Member 'UDev272_AnimBP_C::AnimGraphNode_CopyBone_2' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_CopyBone_1) == 0x000D08, "Member 'UDev272_AnimBP_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_CopyBone) == 0x000DF8, "Member 'UDev272_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x000EF0, "Member 'UDev272_AnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x0010D0, "Member 'UDev272_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0012B0, "Member 'UDev272_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, ModeCurrent) == 0x0013B8, "Member 'UDev272_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, ModePrevious) == 0x0013B9, "Member 'UDev272_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, ModeBlendTime) == 0x0013BC, "Member 'UDev272_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, DefaultAnimation) == 0x0013C0, "Member 'UDev272_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, MumbleAnimation) == 0x0013C8, "Member 'UDev272_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, MumbleEnable) == 0x0013D0, "Member 'UDev272_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, MumbleAlpha) == 0x0013D4, "Member 'UDev272_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RootOffsetEnable) == 0x0013D8, "Member 'UDev272_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RootOffset) == 0x0013DC, "Member 'UDev272_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RootDeltaRotation) == 0x0013E8, "Member 'UDev272_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LookAtEnable) == 0x0013F4, "Member 'UDev272_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, HeadIKEnable) == 0x0013F5, "Member 'UDev272_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, HeadIKAlpha) == 0x0013F8, "Member 'UDev272_AnimBP_C::HeadIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, HeadIKRotation) == 0x0013FC, "Member 'UDev272_AnimBP_C::HeadIKRotation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LegIKEnable) == 0x001408, "Member 'UDev272_AnimBP_C::LegIKEnable' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LegIKAlpha) == 0x00140C, "Member 'UDev272_AnimBP_C::LegIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LegIKAlphaWithPerch) == 0x001410, "Member 'UDev272_AnimBP_C::LegIKAlphaWithPerch' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LeftLegIKEffectorLocation) == 0x001414, "Member 'UDev272_AnimBP_C::LeftLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RightLegIKEffectorLocation) == 0x001420, "Member 'UDev272_AnimBP_C::RightLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LeftLegIKTargetLocation) == 0x00142C, "Member 'UDev272_AnimBP_C::LeftLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RightLegIKTargetLocation) == 0x001438, "Member 'UDev272_AnimBP_C::RightLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, LeftLegIKEffectorRotation) == 0x001444, "Member 'UDev272_AnimBP_C::LeftLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, RightLegIKEffectorRotation) == 0x001450, "Member 'UDev272_AnimBP_C::RightLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev272_AnimBP_C, FloatingIKPerch) == 0x00145C, "Member 'UDev272_AnimBP_C::FloatingIKPerch' has a wrong offset!");

}

