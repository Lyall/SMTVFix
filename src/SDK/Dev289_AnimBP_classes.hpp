#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev289_AnimBP

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev289_AnimBP.Dev289_AnimBP_C
// 0x0970 (0x0C30 - 0x02C0)
class UDev289_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_9E32[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x02C8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x02E8(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0308(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03B8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0400(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0480(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x05D8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0600(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0628(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06A8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06D8(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0788(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0808(0x00C8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x08D0(0x0108)()
	struct FAnimNode_CustomPoseBlendNode          AnimGraphNode_CustomPoseBlendNode;                 // 0x09D8(0x00C0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0A98(0x0030)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x0AC8(0x00F0)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x0BB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x0BB9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_9E33[0x2];                                     // 0x0BBA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x0BBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E34[0x3];                                     // 0x0BD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x0BD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x0BD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x0BDC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootDeltaRotation;                                 // 0x0BE8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x0BF4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x0BF5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E35[0x2];                                     // 0x0BF6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadIKAlpha;                                       // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               HeadIKRotation;                                    // 0x0BFC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UPoseAsset*>                     TwistPoseList;                                     // 0x0C08(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPoseAsset*                             TwistPoseAsset;                                    // 0x0C18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomPoseWeightTable*                 PoseWeightTable;                                   // 0x0C20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BodyIKEnable;                                      // 0x0C28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E36[0x3];                                     // 0x0C29(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BodyIKAlpha;                                       // 0x0C2C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev289_AnimBP(int32 EntryPoint);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetPoseWeightTable(class UCustomPoseWeightTable* Param_PoseWeightTable);
	void ChangeTwistAsset(int32 Param_Index);
	void SetBoneMotionEnable(bool Enable);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetLookAtEnable(bool Enable);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetRootOffsetEnable(bool Enable);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
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
	void SetHeadIKInterpSpeed(float NewSpeed);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

	class UAnimSequenceBase* GetDefaultAnimation() const;
	void GetAnimationMode(E_CHARA_ANIMATION_MODE* Param_ModeCurrent, E_CHARA_ANIMATION_MODE* Param_ModePrevious) const;
	class UAnimSequenceBase* GetMumbleAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev289_AnimBP_C">();
	}
	static class UDev289_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev289_AnimBP_C>();
	}
};
static_assert(alignof(UDev289_AnimBP_C) == 0x000010, "Wrong alignment on UDev289_AnimBP_C");
static_assert(sizeof(UDev289_AnimBP_C) == 0x000C30, "Wrong size on UDev289_AnimBP_C");
static_assert(offsetof(UDev289_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev289_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002C8, "Member 'UDev289_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0002E8, "Member 'UDev289_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000308, "Member 'UDev289_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_Slot) == 0x0003B8, "Member 'UDev289_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000400, "Member 'UDev289_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x000480, "Member 'UDev289_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x0005D8, "Member 'UDev289_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x000600, "Member 'UDev289_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000628, "Member 'UDev289_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_StateResult) == 0x0006A8, "Member 'UDev289_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_StateMachine) == 0x0006D8, "Member 'UDev289_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000788, "Member 'UDev289_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x000808, "Member 'UDev289_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_ModifyBone) == 0x0008D0, "Member 'UDev289_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_CustomPoseBlendNode) == 0x0009D8, "Member 'UDev289_AnimBP_C::AnimGraphNode_CustomPoseBlendNode' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_Root) == 0x000A98, "Member 'UDev289_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, AnimGraphNode_CopyBone) == 0x000AC8, "Member 'UDev289_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, ModeCurrent) == 0x000BB8, "Member 'UDev289_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, ModePrevious) == 0x000BB9, "Member 'UDev289_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, ModeBlendTime) == 0x000BBC, "Member 'UDev289_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, DefaultAnimation) == 0x000BC0, "Member 'UDev289_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, MumbleAnimation) == 0x000BC8, "Member 'UDev289_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, MumbleEnable) == 0x000BD0, "Member 'UDev289_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, MumbleAlpha) == 0x000BD4, "Member 'UDev289_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, RootOffsetEnable) == 0x000BD8, "Member 'UDev289_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, RootOffset) == 0x000BDC, "Member 'UDev289_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, RootDeltaRotation) == 0x000BE8, "Member 'UDev289_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, LookAtEnable) == 0x000BF4, "Member 'UDev289_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, HeadIKEnable) == 0x000BF5, "Member 'UDev289_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, HeadIKAlpha) == 0x000BF8, "Member 'UDev289_AnimBP_C::HeadIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, HeadIKRotation) == 0x000BFC, "Member 'UDev289_AnimBP_C::HeadIKRotation' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, TwistPoseList) == 0x000C08, "Member 'UDev289_AnimBP_C::TwistPoseList' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, TwistPoseAsset) == 0x000C18, "Member 'UDev289_AnimBP_C::TwistPoseAsset' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, PoseWeightTable) == 0x000C20, "Member 'UDev289_AnimBP_C::PoseWeightTable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, BodyIKEnable) == 0x000C28, "Member 'UDev289_AnimBP_C::BodyIKEnable' has a wrong offset!");
static_assert(offsetof(UDev289_AnimBP_C, BodyIKAlpha) == 0x000C2C, "Member 'UDev289_AnimBP_C::BodyIKAlpha' has a wrong offset!");

}

