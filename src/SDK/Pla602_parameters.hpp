#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pla602

#include "Basic.hpp"


namespace SDK::Params
{

// Function Pla602.Pla602_C.IsAutoRunning
// 0x0001 (0x0001 - 0x0000)
struct Pla602_C_IsAutoRunning final
{
public:
	bool                                          bAutoRunning;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Pla602_C_IsAutoRunning) == 0x000001, "Wrong alignment on Pla602_C_IsAutoRunning");
static_assert(sizeof(Pla602_C_IsAutoRunning) == 0x000001, "Wrong size on Pla602_C_IsAutoRunning");
static_assert(offsetof(Pla602_C_IsAutoRunning, bAutoRunning) == 0x000000, "Member 'Pla602_C_IsAutoRunning::bAutoRunning' has a wrong offset!");

// Function Pla602.Pla602_C.BI_SetAnimBP
// 0x0020 (0x0020 - 0x0000)
struct Pla602_C_BI_SetAnimBP final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPla602_AnimBP_C*                       K2Node_DynamicCast_AsPla_602_Anim_BP;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Pla602_C_BI_SetAnimBP) == 0x000008, "Wrong alignment on Pla602_C_BI_SetAnimBP");
static_assert(sizeof(Pla602_C_BI_SetAnimBP) == 0x000020, "Wrong size on Pla602_C_BI_SetAnimBP");
static_assert(offsetof(Pla602_C_BI_SetAnimBP, AnimInstance) == 0x000000, "Member 'Pla602_C_BI_SetAnimBP::AnimInstance' has a wrong offset!");
static_assert(offsetof(Pla602_C_BI_SetAnimBP, NoUse) == 0x000008, "Member 'Pla602_C_BI_SetAnimBP::NoUse' has a wrong offset!");
static_assert(offsetof(Pla602_C_BI_SetAnimBP, K2Node_DynamicCast_AsPla_602_Anim_BP) == 0x000010, "Member 'Pla602_C_BI_SetAnimBP::K2Node_DynamicCast_AsPla_602_Anim_BP' has a wrong offset!");
static_assert(offsetof(Pla602_C_BI_SetAnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Pla602_C_BI_SetAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Pla602.Pla602_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Pla602_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Pla602_C_ReceiveTick) == 0x000004, "Wrong alignment on Pla602_C_ReceiveTick");
static_assert(sizeof(Pla602_C_ReceiveTick) == 0x000004, "Wrong size on Pla602_C_ReceiveTick");
static_assert(offsetof(Pla602_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Pla602_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function Pla602.Pla602_C.Notify_WalkBrakeTrigger
// 0x0004 (0x0004 - 0x0000)
struct Pla602_C_Notify_WalkBrakeTrigger final
{
public:
	bool                                          bLeft_1;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLeft_2;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRight_1;                                          // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRight_2;                                          // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Pla602_C_Notify_WalkBrakeTrigger) == 0x000001, "Wrong alignment on Pla602_C_Notify_WalkBrakeTrigger");
static_assert(sizeof(Pla602_C_Notify_WalkBrakeTrigger) == 0x000004, "Wrong size on Pla602_C_Notify_WalkBrakeTrigger");
static_assert(offsetof(Pla602_C_Notify_WalkBrakeTrigger, bLeft_1) == 0x000000, "Member 'Pla602_C_Notify_WalkBrakeTrigger::bLeft_1' has a wrong offset!");
static_assert(offsetof(Pla602_C_Notify_WalkBrakeTrigger, bLeft_2) == 0x000001, "Member 'Pla602_C_Notify_WalkBrakeTrigger::bLeft_2' has a wrong offset!");
static_assert(offsetof(Pla602_C_Notify_WalkBrakeTrigger, bRight_1) == 0x000002, "Member 'Pla602_C_Notify_WalkBrakeTrigger::bRight_1' has a wrong offset!");
static_assert(offsetof(Pla602_C_Notify_WalkBrakeTrigger, bRight_2) == 0x000003, "Member 'Pla602_C_Notify_WalkBrakeTrigger::bRight_2' has a wrong offset!");

// Function Pla602.Pla602_C.ReceivePossessed
// 0x0008 (0x0008 - 0x0000)
struct Pla602_C_ReceivePossessed final
{
public:
	class AController*                            NewController;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Pla602_C_ReceivePossessed) == 0x000008, "Wrong alignment on Pla602_C_ReceivePossessed");
static_assert(sizeof(Pla602_C_ReceivePossessed) == 0x000008, "Wrong size on Pla602_C_ReceivePossessed");
static_assert(offsetof(Pla602_C_ReceivePossessed, NewController) == 0x000000, "Member 'Pla602_C_ReceivePossessed::NewController' has a wrong offset!");

// Function Pla602.Pla602_C.ExecuteUbergraph_Pla602
// 0x0030 (0x0030 - 0x0000)
struct Pla602_C_ExecuteUbergraph_Pla602 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bLeft_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bLeft_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bRight_1;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bRight_2;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPla602_AnimBP_C*                       K2Node_DynamicCast_AsPla_602_Anim_BP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_660D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_NewController;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Pla602_C_ExecuteUbergraph_Pla602) == 0x000008, "Wrong alignment on Pla602_C_ExecuteUbergraph_Pla602");
static_assert(sizeof(Pla602_C_ExecuteUbergraph_Pla602) == 0x000030, "Wrong size on Pla602_C_ExecuteUbergraph_Pla602");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, EntryPoint) == 0x000000, "Member 'Pla602_C_ExecuteUbergraph_Pla602::EntryPoint' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_bLeft_1) == 0x000008, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_bLeft_1' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_bLeft_2) == 0x000009, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_bLeft_2' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_bRight_1) == 0x00000A, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_bRight_1' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_bRight_2) == 0x00000B, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_bRight_2' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'Pla602_C_ExecuteUbergraph_Pla602::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_DynamicCast_AsPla_602_Anim_BP) == 0x000018, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_DynamicCast_AsPla_602_Anim_BP' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Pla602_C_ExecuteUbergraph_Pla602, K2Node_Event_NewController) == 0x000028, "Member 'Pla602_C_ExecuteUbergraph_Pla602::K2Node_Event_NewController' has a wrong offset!");

}
