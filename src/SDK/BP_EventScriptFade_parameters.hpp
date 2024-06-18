#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventScriptFade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EventScriptFade.BP_EventScriptFade_C.ExecuteUbergraph_BP_EventScriptFade
// 0x0048 (0x0048 - 0x0000)
struct BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6430[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_EventColorFade_C*                   CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Active;                               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6431[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6432[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade) == 0x000008, "Wrong alignment on BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade");
static_assert(sizeof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade) == 0x000048, "Wrong size on BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, EntryPoint) == 0x000000, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_AddToWidgetPrio_ReturnValue) == 0x000004, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_AddToWidgetPrio_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, K2Node_Event_EndPlayReason) == 0x00000C, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, K2Node_Event_Active) == 0x000018, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::K2Node_Event_Active' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_LinearColorLerp_ReturnValue) == 0x000024, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000035, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade, CallFunc_LinearColorLerp_ReturnValue_1) == 0x000038, "Member 'BP_EventScriptFade_C_ExecuteUbergraph_BP_EventScriptFade::CallFunc_LinearColorLerp_ReturnValue_1' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_ReceiveEndPlay");
static_assert(sizeof(BP_EventScriptFade_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EventScriptFade_C_ReceiveEndPlay");
static_assert(offsetof(BP_EventScriptFade_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EventScriptFade_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EventScriptFade_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_ReceiveTick");
static_assert(sizeof(BP_EventScriptFade_C_ReceiveTick) == 0x000004, "Wrong size on BP_EventScriptFade_C_ReceiveTick");
static_assert(offsetof(BP_EventScriptFade_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EventScriptFade_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.PlayDeadMotion
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_PlayDeadMotion final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_PlayDeadMotion) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_PlayDeadMotion");
static_assert(sizeof(BP_EventScriptFade_C_PlayDeadMotion) == 0x000001, "Wrong size on BP_EventScriptFade_C_PlayDeadMotion");
static_assert(offsetof(BP_EventScriptFade_C_PlayDeadMotion, Active) == 0x000000, "Member 'BP_EventScriptFade_C_PlayDeadMotion::Active' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.SetFade
// 0x0024 (0x0024 - 0x0000)
struct BP_EventScriptFade_C_SetFade final
{
public:
	struct FLinearColor                           Param_FirstColor;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Param_FinalColor;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_SetFade) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_SetFade");
static_assert(sizeof(BP_EventScriptFade_C_SetFade) == 0x000024, "Wrong size on BP_EventScriptFade_C_SetFade");
static_assert(offsetof(BP_EventScriptFade_C_SetFade, Param_FirstColor) == 0x000000, "Member 'BP_EventScriptFade_C_SetFade::Param_FirstColor' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_SetFade, Param_FinalColor) == 0x000010, "Member 'BP_EventScriptFade_C_SetFade::Param_FinalColor' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_SetFade, Time) == 0x000020, "Member 'BP_EventScriptFade_C_SetFade::Time' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.FadeInBlack
// 0x0004 (0x0004 - 0x0000)
struct BP_EventScriptFade_C_FadeInBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_FadeInBlack) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_FadeInBlack");
static_assert(sizeof(BP_EventScriptFade_C_FadeInBlack) == 0x000004, "Wrong size on BP_EventScriptFade_C_FadeInBlack");
static_assert(offsetof(BP_EventScriptFade_C_FadeInBlack, Time) == 0x000000, "Member 'BP_EventScriptFade_C_FadeInBlack::Time' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.FadeOutBlack
// 0x0004 (0x0004 - 0x0000)
struct BP_EventScriptFade_C_FadeOutBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_FadeOutBlack) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_FadeOutBlack");
static_assert(sizeof(BP_EventScriptFade_C_FadeOutBlack) == 0x000004, "Wrong size on BP_EventScriptFade_C_FadeOutBlack");
static_assert(offsetof(BP_EventScriptFade_C_FadeOutBlack, Time) == 0x000000, "Member 'BP_EventScriptFade_C_FadeOutBlack::Time' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.FadeInWhite
// 0x0004 (0x0004 - 0x0000)
struct BP_EventScriptFade_C_FadeInWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_FadeInWhite) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_FadeInWhite");
static_assert(sizeof(BP_EventScriptFade_C_FadeInWhite) == 0x000004, "Wrong size on BP_EventScriptFade_C_FadeInWhite");
static_assert(offsetof(BP_EventScriptFade_C_FadeInWhite, Time) == 0x000000, "Member 'BP_EventScriptFade_C_FadeInWhite::Time' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.FadeOutWhite
// 0x0004 (0x0004 - 0x0000)
struct BP_EventScriptFade_C_FadeOutWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptFade_C_FadeOutWhite) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_FadeOutWhite");
static_assert(sizeof(BP_EventScriptFade_C_FadeOutWhite) == 0x000004, "Wrong size on BP_EventScriptFade_C_FadeOutWhite");
static_assert(offsetof(BP_EventScriptFade_C_FadeOutWhite, Time) == 0x000000, "Member 'BP_EventScriptFade_C_FadeOutWhite::Time' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.SetAdditiveMode
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_SetAdditiveMode final
{
public:
	bool                                          Additive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_SetAdditiveMode) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_SetAdditiveMode");
static_assert(sizeof(BP_EventScriptFade_C_SetAdditiveMode) == 0x000001, "Wrong size on BP_EventScriptFade_C_SetAdditiveMode");
static_assert(offsetof(BP_EventScriptFade_C_SetAdditiveMode, Additive) == 0x000000, "Member 'BP_EventScriptFade_C_SetAdditiveMode::Additive' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_FadeOutWhite
// 0x0008 (0x0008 - 0x0000)
struct BP_EventScriptFade_C_BI_FadeOutWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_FadeOutWhite) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_BI_FadeOutWhite");
static_assert(sizeof(BP_EventScriptFade_C_BI_FadeOutWhite) == 0x000008, "Wrong size on BP_EventScriptFade_C_BI_FadeOutWhite");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeOutWhite, Time) == 0x000000, "Member 'BP_EventScriptFade_C_BI_FadeOutWhite::Time' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeOutWhite, Ret) == 0x000004, "Member 'BP_EventScriptFade_C_BI_FadeOutWhite::Ret' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_FadeInWhite
// 0x0008 (0x0008 - 0x0000)
struct BP_EventScriptFade_C_BI_FadeInWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_FadeInWhite) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_BI_FadeInWhite");
static_assert(sizeof(BP_EventScriptFade_C_BI_FadeInWhite) == 0x000008, "Wrong size on BP_EventScriptFade_C_BI_FadeInWhite");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeInWhite, Time) == 0x000000, "Member 'BP_EventScriptFade_C_BI_FadeInWhite::Time' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeInWhite, Ret) == 0x000004, "Member 'BP_EventScriptFade_C_BI_FadeInWhite::Ret' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_FadeOutBlack
// 0x0008 (0x0008 - 0x0000)
struct BP_EventScriptFade_C_BI_FadeOutBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_FadeOutBlack) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_BI_FadeOutBlack");
static_assert(sizeof(BP_EventScriptFade_C_BI_FadeOutBlack) == 0x000008, "Wrong size on BP_EventScriptFade_C_BI_FadeOutBlack");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeOutBlack, Time) == 0x000000, "Member 'BP_EventScriptFade_C_BI_FadeOutBlack::Time' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeOutBlack, Ret) == 0x000004, "Member 'BP_EventScriptFade_C_BI_FadeOutBlack::Ret' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_FadeInBlack
// 0x0008 (0x0008 - 0x0000)
struct BP_EventScriptFade_C_BI_FadeInBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_FadeInBlack) == 0x000004, "Wrong alignment on BP_EventScriptFade_C_BI_FadeInBlack");
static_assert(sizeof(BP_EventScriptFade_C_BI_FadeInBlack) == 0x000008, "Wrong size on BP_EventScriptFade_C_BI_FadeInBlack");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeInBlack, Time) == 0x000000, "Member 'BP_EventScriptFade_C_BI_FadeInBlack::Time' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_BI_FadeInBlack, Ret) == 0x000004, "Member 'BP_EventScriptFade_C_BI_FadeInBlack::Ret' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.SpawnReflesh
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_SpawnReflesh final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_SpawnReflesh) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_SpawnReflesh");
static_assert(sizeof(BP_EventScriptFade_C_SpawnReflesh) == 0x000001, "Wrong size on BP_EventScriptFade_C_SpawnReflesh");
static_assert(offsetof(BP_EventScriptFade_C_SpawnReflesh, NoUse) == 0x000000, "Member 'BP_EventScriptFade_C_SpawnReflesh::NoUse' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_DeleteScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_BI_DeleteScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_DeleteScript) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_BI_DeleteScript");
static_assert(sizeof(BP_EventScriptFade_C_BI_DeleteScript) == 0x000001, "Wrong size on BP_EventScriptFade_C_BI_DeleteScript");
static_assert(offsetof(BP_EventScriptFade_C_BI_DeleteScript, NoUse) == 0x000000, "Member 'BP_EventScriptFade_C_BI_DeleteScript::NoUse' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_SpawnScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_BI_SpawnScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_SpawnScript) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_BI_SpawnScript");
static_assert(sizeof(BP_EventScriptFade_C_BI_SpawnScript) == 0x000001, "Wrong size on BP_EventScriptFade_C_BI_SpawnScript");
static_assert(offsetof(BP_EventScriptFade_C_BI_SpawnScript, NoUse) == 0x000000, "Member 'BP_EventScriptFade_C_BI_SpawnScript::NoUse' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_CheckActiveArea
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_BI_CheckActiveArea final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_CheckActiveArea) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_BI_CheckActiveArea");
static_assert(sizeof(BP_EventScriptFade_C_BI_CheckActiveArea) == 0x000001, "Wrong size on BP_EventScriptFade_C_BI_CheckActiveArea");
static_assert(offsetof(BP_EventScriptFade_C_BI_CheckActiveArea, IsActive) == 0x000000, "Member 'BP_EventScriptFade_C_BI_CheckActiveArea::IsActive' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.ForceSpawnScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventScriptFade_C_ForceSpawnScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_ForceSpawnScript) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_ForceSpawnScript");
static_assert(sizeof(BP_EventScriptFade_C_ForceSpawnScript) == 0x000001, "Wrong size on BP_EventScriptFade_C_ForceSpawnScript");
static_assert(offsetof(BP_EventScriptFade_C_ForceSpawnScript, NoUse) == 0x000000, "Member 'BP_EventScriptFade_C_ForceSpawnScript::NoUse' has a wrong offset!");

// Function BP_EventScriptFade.BP_EventScriptFade_C.BI_SetInvalidWindow
// 0x0002 (0x0002 - 0x0000)
struct BP_EventScriptFade_C_BI_SetInvalidWindow final
{
public:
	bool                                          Invalid;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventScriptFade_C_BI_SetInvalidWindow) == 0x000001, "Wrong alignment on BP_EventScriptFade_C_BI_SetInvalidWindow");
static_assert(sizeof(BP_EventScriptFade_C_BI_SetInvalidWindow) == 0x000002, "Wrong size on BP_EventScriptFade_C_BI_SetInvalidWindow");
static_assert(offsetof(BP_EventScriptFade_C_BI_SetInvalidWindow, Invalid) == 0x000000, "Member 'BP_EventScriptFade_C_BI_SetInvalidWindow::Invalid' has a wrong offset!");
static_assert(offsetof(BP_EventScriptFade_C_BI_SetInvalidWindow, NoUse) == 0x000001, "Member 'BP_EventScriptFade_C_BI_SetInvalidWindow::NoUse' has a wrong offset!");

}

