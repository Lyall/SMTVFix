#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventMissionBase_Hit

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.ExecuteUbergraph_BP_EventMissionBase_Hit
// 0x0038 (0x0038 - 0x0000)
struct BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_Active;                               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ACF6[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapEventHit_Type_SHit_C*               K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ACF7[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapEventHit_Type_SHit_C*               K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit_1;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit) == 0x000008, "Wrong alignment on BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit");
static_assert(sizeof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit) == 0x000038, "Wrong size on BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, EntryPoint) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_Event_Active) == 0x000014, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_Event_Active' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit) == 0x000018, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit_1) == 0x000028, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit_1' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_EventMissionBase_Hit_C_ExecuteUbergraph_BP_EventMissionBase_Hit::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.PlayDeadMotion
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_PlayDeadMotion final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_PlayDeadMotion) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_PlayDeadMotion");
static_assert(sizeof(BP_EventMissionBase_Hit_C_PlayDeadMotion) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_PlayDeadMotion");
static_assert(offsetof(BP_EventMissionBase_Hit_C_PlayDeadMotion, Active) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_PlayDeadMotion::Active' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BPI_GetHitBoxSize
// 0x0028 (0x0028 - 0x0000)
struct BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize final
{
public:
	struct FVector                                Size;                                              // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ACF8[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapEventHit_Type_SHit_C*               K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ACF9[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetScaledBoxExtent_ReturnValue;           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize) == 0x000008, "Wrong alignment on BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize) == 0x000028, "Wrong size on BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize, Size) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize::Size' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize, K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit) == 0x000010, "Member 'BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize::K2Node_DynamicCast_AsMap_Event_Hit_Type_SHit' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize, CallFunc_GetScaledBoxExtent_ReturnValue) == 0x00001C, "Member 'BP_EventMissionBase_Hit_C_BPI_GetHitBoxSize::CallFunc_GetScaledBoxExtent_ReturnValue' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.SpawnReflesh
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_SpawnReflesh final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_SpawnReflesh) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_SpawnReflesh");
static_assert(sizeof(BP_EventMissionBase_Hit_C_SpawnReflesh) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_SpawnReflesh");
static_assert(offsetof(BP_EventMissionBase_Hit_C_SpawnReflesh, NoUse) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_SpawnReflesh::NoUse' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_FadeInBlack
// 0x0008 (0x0008 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_FadeInBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_FadeInBlack) == 0x000004, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_FadeInBlack");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_FadeInBlack) == 0x000008, "Wrong size on BP_EventMissionBase_Hit_C_BI_FadeInBlack");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeInBlack, Time) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_FadeInBlack::Time' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeInBlack, Ret) == 0x000004, "Member 'BP_EventMissionBase_Hit_C_BI_FadeInBlack::Ret' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_FadeOutBlack
// 0x0008 (0x0008 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_FadeOutBlack final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_FadeOutBlack) == 0x000004, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_FadeOutBlack");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_FadeOutBlack) == 0x000008, "Wrong size on BP_EventMissionBase_Hit_C_BI_FadeOutBlack");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeOutBlack, Time) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_FadeOutBlack::Time' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeOutBlack, Ret) == 0x000004, "Member 'BP_EventMissionBase_Hit_C_BI_FadeOutBlack::Ret' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_FadeInWhite
// 0x0008 (0x0008 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_FadeInWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_FadeInWhite) == 0x000004, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_FadeInWhite");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_FadeInWhite) == 0x000008, "Wrong size on BP_EventMissionBase_Hit_C_BI_FadeInWhite");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeInWhite, Time) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_FadeInWhite::Time' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeInWhite, Ret) == 0x000004, "Member 'BP_EventMissionBase_Hit_C_BI_FadeInWhite::Ret' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_FadeOutWhite
// 0x0008 (0x0008 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_FadeOutWhite final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_FadeOutWhite) == 0x000004, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_FadeOutWhite");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_FadeOutWhite) == 0x000008, "Wrong size on BP_EventMissionBase_Hit_C_BI_FadeOutWhite");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeOutWhite, Time) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_FadeOutWhite::Time' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_FadeOutWhite, Ret) == 0x000004, "Member 'BP_EventMissionBase_Hit_C_BI_FadeOutWhite::Ret' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_DeleteScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_DeleteScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_DeleteScript) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_DeleteScript");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_DeleteScript) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_BI_DeleteScript");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_DeleteScript, NoUse) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_DeleteScript::NoUse' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_SpawnScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_SpawnScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_SpawnScript) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_SpawnScript");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_SpawnScript) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_BI_SpawnScript");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_SpawnScript, NoUse) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_SpawnScript::NoUse' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_CheckActiveArea
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_CheckActiveArea final
{
public:
	bool                                          Param_IsActive;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_CheckActiveArea) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_CheckActiveArea");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_CheckActiveArea) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_BI_CheckActiveArea");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_CheckActiveArea, Param_IsActive) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_CheckActiveArea::Param_IsActive' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.ForceSpawnScript
// 0x0001 (0x0001 - 0x0000)
struct BP_EventMissionBase_Hit_C_ForceSpawnScript final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_ForceSpawnScript) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_ForceSpawnScript");
static_assert(sizeof(BP_EventMissionBase_Hit_C_ForceSpawnScript) == 0x000001, "Wrong size on BP_EventMissionBase_Hit_C_ForceSpawnScript");
static_assert(offsetof(BP_EventMissionBase_Hit_C_ForceSpawnScript, NoUse) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_ForceSpawnScript::NoUse' has a wrong offset!");

// Function BP_EventMissionBase_Hit.BP_EventMissionBase_Hit_C.BI_SetInvalidWindow
// 0x0002 (0x0002 - 0x0000)
struct BP_EventMissionBase_Hit_C_BI_SetInvalidWindow final
{
public:
	bool                                          Invalid;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventMissionBase_Hit_C_BI_SetInvalidWindow) == 0x000001, "Wrong alignment on BP_EventMissionBase_Hit_C_BI_SetInvalidWindow");
static_assert(sizeof(BP_EventMissionBase_Hit_C_BI_SetInvalidWindow) == 0x000002, "Wrong size on BP_EventMissionBase_Hit_C_BI_SetInvalidWindow");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_SetInvalidWindow, Invalid) == 0x000000, "Member 'BP_EventMissionBase_Hit_C_BI_SetInvalidWindow::Invalid' has a wrong offset!");
static_assert(offsetof(BP_EventMissionBase_Hit_C_BI_SetInvalidWindow, NoUse) == 0x000001, "Member 'BP_EventMissionBase_Hit_C_BI_SetInvalidWindow::NoUse' has a wrong offset!");

}

