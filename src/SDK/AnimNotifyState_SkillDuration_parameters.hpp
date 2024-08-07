#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_SkillDuration

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotifyState_SkillDuration.AnimNotifyState_SkillDuration_C.Received_NotifyEnd
// 0x0038 (0x0038 - 0x0000)
struct AnimNotifyState_SkillDuration_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_SetSkillPerformDuration_NoUse;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_SkillDuration_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd) == 0x000038, "Wrong size on AnimNotifyState_SkillDuration_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000020, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyEnd, CallFunc_BI_SetSkillPerformDuration_NoUse) == 0x000031, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyEnd::CallFunc_BI_SetSkillPerformDuration_NoUse' has a wrong offset!");

// Function AnimNotifyState_SkillDuration.AnimNotifyState_SkillDuration_C.Received_NotifyBegin
// 0x0038 (0x0038 - 0x0000)
struct AnimNotifyState_SkillDuration_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_SetSkillPerformDuration_NoUse;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_SkillDuration_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin) == 0x000038, "Wrong size on AnimNotifyState_SkillDuration_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000020, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SkillDuration_C_Received_NotifyBegin, CallFunc_BI_SetSkillPerformDuration_NoUse) == 0x000031, "Member 'AnimNotifyState_SkillDuration_C_Received_NotifyBegin::CallFunc_BI_SetSkillPerformDuration_NoUse' has a wrong offset!");

}

