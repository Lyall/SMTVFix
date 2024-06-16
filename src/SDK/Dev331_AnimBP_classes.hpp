#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev331_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Dev331_AnimBP.Dev331_AnimBP_C
// 0x2AB0 (0x2D70 - 0x02C0)
class UDev331_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_9C0D[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x02C8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x02E8(0x0020)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_7;                          // 0x0308(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_6;                          // 0x03F8(0x00F0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_10;                       // 0x04E8(0x0108)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_7;                         // 0x05F0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_6;                         // 0x07D0(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_9;                        // 0x09B0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8;                        // 0x0AB8(0x0108)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0BC0(0x0030)()
	struct FAnimNode_CustomPoseBlendNode          AnimGraphNode_CustomPoseBlendNode;                 // 0x0BF0(0x00C0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_7;                        // 0x0CB0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6;                        // 0x0DB8(0x0108)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0EC0(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0F70(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0FB8(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1038(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1190(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x11B8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x11E0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1260(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1290(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1340(0x0080)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x13C0(0x00C8)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_5;                          // 0x1488(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_4;                          // 0x1578(0x00F0)()
	uint8                                         Pad_9C0E[0x8];                                     // 0x1668(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_5;                         // 0x1670(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_4;                         // 0x1850(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_5;                        // 0x1A30(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x1B38(0x0108)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_3;                          // 0x1C40(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_2;                          // 0x1D30(0x00F0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_3;                         // 0x1E20(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_2;                         // 0x2000(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x21E0(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x22E8(0x0108)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone_1;                          // 0x23F0(0x00F0)()
	struct FAnimNode_CopyBone                     AnimGraphNode_CopyBone;                            // 0x24E0(0x00F0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x25D0(0x01E0)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x27B0(0x01E0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x2990(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x2A98(0x0108)()
	E_CHARA_ANIMATION_MODE                        ModeCurrent;                                       // 0x2BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	E_CHARA_ANIMATION_MODE                        ModePrevious;                                      // 0x2BA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_9C0F[0x2];                                     // 0x2BA2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModeBlendTime;                                     // 0x2BA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimSequenceBase*                      DefaultAnimation;                                  // 0x2BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootOffsetEnable;                                  // 0x2BB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffset;                                        // 0x2BB4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LegIKEnable;                                       // 0x2BC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C10[0x3];                                     // 0x2BC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LegIKAlpha;                                        // 0x2BC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                LeftLegIKEffectorLocation;                         // 0x2BC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation;                        // 0x2BD4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKTargetLocation;                           // 0x2BE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation;                          // 0x2BEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation;                         // 0x2BF8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation;                        // 0x2C04(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HeadIKEnable;                                      // 0x2C10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C11[0x3];                                     // 0x2C11(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadIKAlpha;                                       // 0x2C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               HeadIKRotation;                                    // 0x2C18(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EyeIKEnable;                                       // 0x2C24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C12[0x3];                                     // 0x2C25(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EyeIKAlpha;                                        // 0x2C28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRotator                               LeftEyeIKRotation;                                 // 0x2C2C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightEyeIKRotation;                                // 0x2C38(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RootDeltaRotation;                                 // 0x2C44(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LookAtEnable;                                      // 0x2C50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C13[0x7];                                     // 0x2C51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      MumbleAnimation;                                   // 0x2C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MumbleEnable;                                      // 0x2C60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C14[0x3];                                     // 0x2C61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MumbleAlpha;                                       // 0x2C64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                LeftLegIKEffectorLocation1;                        // 0x2C68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation1;                       // 0x2C74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKTargetLocation1;                          // 0x2C80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation1;                         // 0x2C8C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation1;                        // 0x2C98(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation1;                       // 0x2CA4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                LeftLegIKEffectorLocation2;                        // 0x2CB0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation2;                       // 0x2CBC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKTargetLocation2;                          // 0x2CC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation2;                         // 0x2CD4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation2;                        // 0x2CE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation2;                       // 0x2CEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                LeftLegIKEffectorLocation3;                        // 0x2CF8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKEffectorLocation3;                       // 0x2D04(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeftLegIKTargetLocation3;                          // 0x2D10(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RightLegIKTargetLocation3;                         // 0x2D1C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LeftLegIKEffectorRotation3;                        // 0x2D28(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               RightLegIKEffectorRotation3;                       // 0x2D34(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FrontLegInvalidIK;                                 // 0x2D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C15[0x3];                                     // 0x2D41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrontLegIKAlpha;                                   // 0x2D44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootOffsetTarget;                                  // 0x2D48(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BodyIKEnable;                                      // 0x2D54(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C16[0x3];                                     // 0x2D55(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCustomPoseWeightTable*                 PoseWeightTable;                                   // 0x2D58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BodyIKAlpha;                                       // 0x2D60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev331_AnimBP(int32 EntryPoint);
	void SetPoseWeightTable(class UCustomPoseWeightTable* Param_PoseWeightTable);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetBoneMotionEnable(bool Enable);
	void SetFloatingIKPerch(float Alpha);
	void SetMumbleEnable(bool Enable);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetLookAtEnable(bool Enable);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetEnableBoneTrans(bool IsEnable);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetRootOffsetEnable(bool Enable);
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
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
		return StaticBPGeneratedClassImpl<"Dev331_AnimBP_C">();
	}
	static class UDev331_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDev331_AnimBP_C>();
	}
};
static_assert(alignof(UDev331_AnimBP_C) == 0x000010, "Wrong alignment on UDev331_AnimBP_C");
static_assert(sizeof(UDev331_AnimBP_C) == 0x002D70, "Wrong size on UDev331_AnimBP_C");
static_assert(offsetof(UDev331_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UDev331_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x0002C8, "Member 'UDev331_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x0002E8, "Member 'UDev331_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_7) == 0x000308, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_7' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_6) == 0x0003F8, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_6' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_10) == 0x0004E8, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_10' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_7) == 0x0005F0, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_7' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_6) == 0x0007D0, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_6' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_9) == 0x0009B0, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_9' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_8) == 0x000AB8, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_8' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_Root) == 0x000BC0, "Member 'UDev331_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CustomPoseBlendNode) == 0x000BF0, "Member 'UDev331_AnimBP_C::AnimGraphNode_CustomPoseBlendNode' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_7) == 0x000CB0, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_7' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_6) == 0x000DB8, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_6' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_BlendListByEnum) == 0x000EC0, "Member 'UDev331_AnimBP_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_Slot) == 0x000F70, "Member 'UDev331_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000FB8, "Member 'UDev331_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_SaveCachedPose) == 0x001038, "Member 'UDev331_AnimBP_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_UseCachedPose_1) == 0x001190, "Member 'UDev331_AnimBP_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_UseCachedPose) == 0x0011B8, "Member 'UDev331_AnimBP_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0011E0, "Member 'UDev331_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_StateResult) == 0x001260, "Member 'UDev331_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_StateMachine) == 0x001290, "Member 'UDev331_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001340, "Member 'UDev331_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0013C0, "Member 'UDev331_AnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_5) == 0x001488, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_5' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_4) == 0x001578, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_4' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_5) == 0x001670, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_5' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_4) == 0x001850, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_4' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_5) == 0x001A30, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_5' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_4) == 0x001B38, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_3) == 0x001C40, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_2) == 0x001D30, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_3) == 0x001E20, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_2) == 0x002000, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_3) == 0x0021E0, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_2) == 0x0022E8, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone_1) == 0x0023F0, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone_1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_CopyBone) == 0x0024E0, "Member 'UDev331_AnimBP_C::AnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK_1) == 0x0025D0, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_TwoBoneIK) == 0x0027B0, "Member 'UDev331_AnimBP_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone_1) == 0x002990, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, AnimGraphNode_ModifyBone) == 0x002A98, "Member 'UDev331_AnimBP_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, ModeCurrent) == 0x002BA0, "Member 'UDev331_AnimBP_C::ModeCurrent' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, ModePrevious) == 0x002BA1, "Member 'UDev331_AnimBP_C::ModePrevious' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, ModeBlendTime) == 0x002BA4, "Member 'UDev331_AnimBP_C::ModeBlendTime' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, DefaultAnimation) == 0x002BA8, "Member 'UDev331_AnimBP_C::DefaultAnimation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RootOffsetEnable) == 0x002BB0, "Member 'UDev331_AnimBP_C::RootOffsetEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RootOffset) == 0x002BB4, "Member 'UDev331_AnimBP_C::RootOffset' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LegIKEnable) == 0x002BC0, "Member 'UDev331_AnimBP_C::LegIKEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LegIKAlpha) == 0x002BC4, "Member 'UDev331_AnimBP_C::LegIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorLocation) == 0x002BC8, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorLocation) == 0x002BD4, "Member 'UDev331_AnimBP_C::RightLegIKEffectorLocation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKTargetLocation) == 0x002BE0, "Member 'UDev331_AnimBP_C::LeftLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKTargetLocation) == 0x002BEC, "Member 'UDev331_AnimBP_C::RightLegIKTargetLocation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorRotation) == 0x002BF8, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorRotation) == 0x002C04, "Member 'UDev331_AnimBP_C::RightLegIKEffectorRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, HeadIKEnable) == 0x002C10, "Member 'UDev331_AnimBP_C::HeadIKEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, HeadIKAlpha) == 0x002C14, "Member 'UDev331_AnimBP_C::HeadIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, HeadIKRotation) == 0x002C18, "Member 'UDev331_AnimBP_C::HeadIKRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, EyeIKEnable) == 0x002C24, "Member 'UDev331_AnimBP_C::EyeIKEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, EyeIKAlpha) == 0x002C28, "Member 'UDev331_AnimBP_C::EyeIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftEyeIKRotation) == 0x002C2C, "Member 'UDev331_AnimBP_C::LeftEyeIKRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightEyeIKRotation) == 0x002C38, "Member 'UDev331_AnimBP_C::RightEyeIKRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RootDeltaRotation) == 0x002C44, "Member 'UDev331_AnimBP_C::RootDeltaRotation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LookAtEnable) == 0x002C50, "Member 'UDev331_AnimBP_C::LookAtEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, MumbleAnimation) == 0x002C58, "Member 'UDev331_AnimBP_C::MumbleAnimation' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, MumbleEnable) == 0x002C60, "Member 'UDev331_AnimBP_C::MumbleEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, MumbleAlpha) == 0x002C64, "Member 'UDev331_AnimBP_C::MumbleAlpha' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorLocation1) == 0x002C68, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorLocation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorLocation1) == 0x002C74, "Member 'UDev331_AnimBP_C::RightLegIKEffectorLocation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKTargetLocation1) == 0x002C80, "Member 'UDev331_AnimBP_C::LeftLegIKTargetLocation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKTargetLocation1) == 0x002C8C, "Member 'UDev331_AnimBP_C::RightLegIKTargetLocation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorRotation1) == 0x002C98, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorRotation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorRotation1) == 0x002CA4, "Member 'UDev331_AnimBP_C::RightLegIKEffectorRotation1' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorLocation2) == 0x002CB0, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorLocation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorLocation2) == 0x002CBC, "Member 'UDev331_AnimBP_C::RightLegIKEffectorLocation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKTargetLocation2) == 0x002CC8, "Member 'UDev331_AnimBP_C::LeftLegIKTargetLocation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKTargetLocation2) == 0x002CD4, "Member 'UDev331_AnimBP_C::RightLegIKTargetLocation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorRotation2) == 0x002CE0, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorRotation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorRotation2) == 0x002CEC, "Member 'UDev331_AnimBP_C::RightLegIKEffectorRotation2' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorLocation3) == 0x002CF8, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorLocation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorLocation3) == 0x002D04, "Member 'UDev331_AnimBP_C::RightLegIKEffectorLocation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKTargetLocation3) == 0x002D10, "Member 'UDev331_AnimBP_C::LeftLegIKTargetLocation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKTargetLocation3) == 0x002D1C, "Member 'UDev331_AnimBP_C::RightLegIKTargetLocation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, LeftLegIKEffectorRotation3) == 0x002D28, "Member 'UDev331_AnimBP_C::LeftLegIKEffectorRotation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RightLegIKEffectorRotation3) == 0x002D34, "Member 'UDev331_AnimBP_C::RightLegIKEffectorRotation3' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, FrontLegInvalidIK) == 0x002D40, "Member 'UDev331_AnimBP_C::FrontLegInvalidIK' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, FrontLegIKAlpha) == 0x002D44, "Member 'UDev331_AnimBP_C::FrontLegIKAlpha' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, RootOffsetTarget) == 0x002D48, "Member 'UDev331_AnimBP_C::RootOffsetTarget' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, BodyIKEnable) == 0x002D54, "Member 'UDev331_AnimBP_C::BodyIKEnable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, PoseWeightTable) == 0x002D58, "Member 'UDev331_AnimBP_C::PoseWeightTable' has a wrong offset!");
static_assert(offsetof(UDev331_AnimBP_C, BodyIKAlpha) == 0x002D60, "Member 'UDev331_AnimBP_C::BodyIKAlpha' has a wrong offset!");

}
