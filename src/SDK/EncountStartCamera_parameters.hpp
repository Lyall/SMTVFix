#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountStartCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function EncountStartCamera.EncountStartCamera_C.ExecuteUbergraph_EncountStartCamera
// 0x0190 (0x0190 - 0x0000)
struct EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5622[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BlendTime;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5623[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimelineLength_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5624[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5625[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BPI_CheckMapPause_IsPause;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5626[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegSin_ReturnValue;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterp_To_UpVec_Considered_Return_Value; // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0108(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera) == 0x000010, "Wrong alignment on EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera");
static_assert(sizeof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera) == 0x000190, "Wrong size on EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, EntryPoint) == 0x000000, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::EntryPoint' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00000C, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, K2Node_CustomEvent_BlendTime) == 0x000020, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::K2Node_CustomEvent_BlendTime' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_GetTimelineLength_ReturnValue) == 0x000028, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00002C, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_GetPlayerPawn_ReturnValue) == 0x000060, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Location) == 0x000068, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Rotation) == 0x000074, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Scale) == 0x000080, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Location_1) == 0x00008C, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Rotation_1) == 0x000098, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BreakTransform_Scale_1) == 0x0000A4, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_GetMapCommon_rerutn) == 0x0000B0, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000B8, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, K2Node_DynamicCast_AsBPI_Map_Common) == 0x0000C0, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000D4, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_BPI_CheckMapPause_IsPause) == 0x0000D8, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_BPI_CheckMapPause_IsPause' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000DC, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_DegSin_ReturnValue) == 0x0000E0, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_DegSin_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000E4, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000E8, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_Lerp_ReturnValue) == 0x0000EC, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_VLerp_ReturnValue) == 0x0000F0, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_RInterp_To_UpVec_Considered_Return_Value) == 0x0000FC, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_RInterp_To_UpVec_Considered_Return_Value' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000108, "Member 'EncountStartCamera_C_ExecuteUbergraph_EncountStartCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.DeactivatePP
// 0x0004 (0x0004 - 0x0000)
struct EncountStartCamera_C_DeactivatePP final
{
public:
	float                                         BlendTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EncountStartCamera_C_DeactivatePP) == 0x000004, "Wrong alignment on EncountStartCamera_C_DeactivatePP");
static_assert(sizeof(EncountStartCamera_C_DeactivatePP) == 0x000004, "Wrong size on EncountStartCamera_C_DeactivatePP");
static_assert(offsetof(EncountStartCamera_C_DeactivatePP, BlendTime) == 0x000000, "Member 'EncountStartCamera_C_DeactivatePP::BlendTime' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct EncountStartCamera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EncountStartCamera_C_ReceiveTick) == 0x000004, "Wrong alignment on EncountStartCamera_C_ReceiveTick");
static_assert(sizeof(EncountStartCamera_C_ReceiveTick) == 0x000004, "Wrong size on EncountStartCamera_C_ReceiveTick");
static_assert(offsetof(EncountStartCamera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'EncountStartCamera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.KeepOnCamera
// 0x00B0 (0x00B0 - 0x0000)
struct EncountStartCamera_C_KeepOnCamera final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0024(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(EncountStartCamera_C_KeepOnCamera) == 0x000008, "Wrong alignment on EncountStartCamera_C_KeepOnCamera");
static_assert(sizeof(EncountStartCamera_C_KeepOnCamera) == 0x0000B0, "Wrong size on EncountStartCamera_C_KeepOnCamera");
static_assert(offsetof(EncountStartCamera_C_KeepOnCamera, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'EncountStartCamera_C_KeepOnCamera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_KeepOnCamera, CallFunc_GetFOVAngle_ReturnValue) == 0x000008, "Member 'EncountStartCamera_C_KeepOnCamera::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_KeepOnCamera, CallFunc_GetCameraLocation_ReturnValue) == 0x00000C, "Member 'EncountStartCamera_C_KeepOnCamera::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_KeepOnCamera, CallFunc_GetCameraRotation_ReturnValue) == 0x000018, "Member 'EncountStartCamera_C_KeepOnCamera::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_KeepOnCamera, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000024, "Member 'EncountStartCamera_C_KeepOnCamera::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.SetViewTargetToDie
// 0x0070 (0x0070 - 0x0000)
struct EncountStartCamera_C_SetViewTargetToDie final
{
public:
	class AActor*                                 ViewTarget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EViewTargetBlendFunction                      BlendFunc;                                         // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5627[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendExp;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLockOutgoing;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5628[0xB];                                     // 0x0015(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EncountStartCamera_C_SetViewTargetToDie) == 0x000010, "Wrong alignment on EncountStartCamera_C_SetViewTargetToDie");
static_assert(sizeof(EncountStartCamera_C_SetViewTargetToDie) == 0x000070, "Wrong size on EncountStartCamera_C_SetViewTargetToDie");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, ViewTarget) == 0x000000, "Member 'EncountStartCamera_C_SetViewTargetToDie::ViewTarget' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, BlendTime) == 0x000008, "Member 'EncountStartCamera_C_SetViewTargetToDie::BlendTime' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, BlendFunc) == 0x00000C, "Member 'EncountStartCamera_C_SetViewTargetToDie::BlendFunc' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, BlendExp) == 0x000010, "Member 'EncountStartCamera_C_SetViewTargetToDie::BlendExp' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, bLockOutgoing) == 0x000014, "Member 'EncountStartCamera_C_SetViewTargetToDie::bLockOutgoing' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'EncountStartCamera_C_SetViewTargetToDie::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, CallFunc_GetPlayerPawn_ReturnValue) == 0x000050, "Member 'EncountStartCamera_C_SetViewTargetToDie::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, CallFunc_GetPlayerController_ReturnValue) == 0x000058, "Member 'EncountStartCamera_C_SetViewTargetToDie::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetViewTargetToDie, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000060, "Member 'EncountStartCamera_C_SetViewTargetToDie::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.IsAutoDestroy
// 0x0001 (0x0001 - 0x0000)
struct EncountStartCamera_C_IsAutoDestroy final
{
public:
	bool                                          Param_M_AutoDestroy;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EncountStartCamera_C_IsAutoDestroy) == 0x000001, "Wrong alignment on EncountStartCamera_C_IsAutoDestroy");
static_assert(sizeof(EncountStartCamera_C_IsAutoDestroy) == 0x000001, "Wrong size on EncountStartCamera_C_IsAutoDestroy");
static_assert(offsetof(EncountStartCamera_C_IsAutoDestroy, Param_M_AutoDestroy) == 0x000000, "Member 'EncountStartCamera_C_IsAutoDestroy::Param_M_AutoDestroy' has a wrong offset!");

// Function EncountStartCamera.EncountStartCamera_C.SetBlendables
// 0x0020 (0x0020 - 0x0000)
struct EncountStartCamera_C_SetBlendables final
{
public:
	class UMaterialInstanceDynamic*               PPMaterial;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5629[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBlendableInterface>   CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(EncountStartCamera_C_SetBlendables) == 0x000008, "Wrong alignment on EncountStartCamera_C_SetBlendables");
static_assert(sizeof(EncountStartCamera_C_SetBlendables) == 0x000020, "Wrong size on EncountStartCamera_C_SetBlendables");
static_assert(offsetof(EncountStartCamera_C_SetBlendables, PPMaterial) == 0x000000, "Member 'EncountStartCamera_C_SetBlendables::PPMaterial' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetBlendables, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'EncountStartCamera_C_SetBlendables::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EncountStartCamera_C_SetBlendables, CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput) == 0x000010, "Member 'EncountStartCamera_C_SetBlendables::CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput' has a wrong offset!");

}

