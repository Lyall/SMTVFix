#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_ForceEnableMovementInput

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotifyState_ForceEnableMovementInput.AnimNotifyState_ForceEnableMovementInput_C.Received_NotifyTick
// 0x0038 (0x0038 - 0x0000)
struct AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_100F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerAnimNotifyReceiver_C> K2Node_DynamicCast_AsBPI_Player_Anim_Notify_Receiver; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick) == 0x000008, "Wrong alignment on AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick");
static_assert(sizeof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick) == 0x000038, "Wrong size on AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, Animation) == 0x000008, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, ReturnValue) == 0x000014, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, K2Node_DynamicCast_AsBPI_Player_Anim_Notify_Receiver) == 0x000020, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::K2Node_DynamicCast_AsBPI_Player_Anim_Notify_Receiver' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AnimNotifyState_ForceEnableMovementInput_C_Received_NotifyTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

