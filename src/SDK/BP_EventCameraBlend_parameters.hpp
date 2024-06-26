#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventCameraBlend

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EventCameraBlend.BP_EventCameraBlend_C.ExecuteUbergraph_BP_EventCameraBlend
// 0x0020 (0x0020 - 0x0000)
struct BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebugEventCameraBlend_IsCheck;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend) == 0x000008, "Wrong alignment on BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend");
static_assert(sizeof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend) == 0x000020, "Wrong size on BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend");
static_assert(offsetof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend, EntryPoint) == 0x000000, "Member 'BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend, CallFunc_IsDebugEventCameraBlend_IsCheck) == 0x00001C, "Member 'BP_EventCameraBlend_C_ExecuteUbergraph_BP_EventCameraBlend::CallFunc_IsDebugEventCameraBlend_IsCheck' has a wrong offset!");

// Function BP_EventCameraBlend.BP_EventCameraBlend_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EventCameraBlend_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventCameraBlend_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EventCameraBlend_C_ReceiveTick");
static_assert(sizeof(BP_EventCameraBlend_C_ReceiveTick) == 0x000004, "Wrong size on BP_EventCameraBlend_C_ReceiveTick");
static_assert(offsetof(BP_EventCameraBlend_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EventCameraBlend_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EventCameraBlend.BP_EventCameraBlend_C.SetCameraBlend
// 0x0048 (0x0048 - 0x0000)
struct BP_EventCameraBlend_C_SetCameraBlend final
{
public:
	class AActor*                                 NewViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EViewTargetBlendFunction                      BlendFunc;                                         // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A4[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendExp;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckPrevBlend;                                    // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EViewTargetBlendFunction                      TmpBlendFunc;                                      // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A5[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TmpGameTime;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpBlendTime;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A6[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A7[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventCameraBlend_C_SetCameraBlend) == 0x000008, "Wrong alignment on BP_EventCameraBlend_C_SetCameraBlend");
static_assert(sizeof(BP_EventCameraBlend_C_SetCameraBlend) == 0x000048, "Wrong size on BP_EventCameraBlend_C_SetCameraBlend");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, NewViewTarget) == 0x000000, "Member 'BP_EventCameraBlend_C_SetCameraBlend::NewViewTarget' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, BlendTime) == 0x000008, "Member 'BP_EventCameraBlend_C_SetCameraBlend::BlendTime' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, BlendFunc) == 0x00000C, "Member 'BP_EventCameraBlend_C_SetCameraBlend::BlendFunc' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, BlendExp) == 0x000010, "Member 'BP_EventCameraBlend_C_SetCameraBlend::BlendExp' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CheckPrevBlend) == 0x000014, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CheckPrevBlend' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, TmpBlendFunc) == 0x000015, "Member 'BP_EventCameraBlend_C_SetCameraBlend::TmpBlendFunc' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, TmpGameTime) == 0x000018, "Member 'BP_EventCameraBlend_C_SetCameraBlend::TmpGameTime' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, TmpBlendTime) == 0x00001C, "Member 'BP_EventCameraBlend_C_SetCameraBlend::TmpBlendTime' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Less_FloatFloat_ReturnValue) == 0x000021, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000024, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000028, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraBlend, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000040, "Member 'BP_EventCameraBlend_C_SetCameraBlend::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BP_EventCameraBlend.BP_EventCameraBlend_C.SetCameraChange
// 0x0020 (0x0020 - 0x0000)
struct BP_EventCameraBlend_C_SetCameraChange final
{
public:
	class AActor*                                 NewViewTarget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventCameraBlend_C_SetCameraChange) == 0x000008, "Wrong alignment on BP_EventCameraBlend_C_SetCameraChange");
static_assert(sizeof(BP_EventCameraBlend_C_SetCameraChange) == 0x000020, "Wrong size on BP_EventCameraBlend_C_SetCameraChange");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraChange, NewViewTarget) == 0x000000, "Member 'BP_EventCameraBlend_C_SetCameraChange::NewViewTarget' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraChange, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'BP_EventCameraBlend_C_SetCameraChange::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraChange, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'BP_EventCameraBlend_C_SetCameraChange::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraChange, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'BP_EventCameraBlend_C_SetCameraChange::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventCameraBlend_C_SetCameraChange, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'BP_EventCameraBlend_C_SetCameraChange::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

