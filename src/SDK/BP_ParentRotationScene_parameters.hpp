#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ParentRotationScene

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_ParentRotationScene.BP_ParentRotationScene_C.ExecuteUbergraph_BP_ParentRotationScene
// 0x01C8 (0x01C8 - 0x0000)
struct BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USceneComponent*>                CallFunc_GetParentComponents_Parents;              // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetAxes_X;                                // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAxes_Y;                                // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetAxes_Z;                                // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;    // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue_2;    // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00A8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddWorldRotation_SweepHitResult;       // 0x013C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene) == 0x000008, "Wrong alignment on BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene");
static_assert(sizeof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene) == 0x0001C8, "Wrong size on BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, EntryPoint) == 0x000000, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_GetParentComponents_Parents) == 0x000008, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_GetParentComponents_Parents' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_BreakRotator_Roll) == 0x000018, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_BreakRotator_Pitch) == 0x00001C, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_BreakRotator_Yaw) == 0x000020, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_Array_LastIndex_ReturnValue) == 0x000024, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_Clamp_ReturnValue) == 0x000028, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, K2Node_Event_DeltaSeconds) == 0x00002C, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000038, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_GetAxes_X) == 0x000048, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_GetAxes_X' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_GetAxes_Y) == 0x000054, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_GetAxes_Y' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_GetAxes_Z) == 0x000060, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_GetAxes_Z' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x00006C, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_RotatorFromAxisAndAngle_ReturnValue_1) == 0x000078, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_RotatorFromAxisAndAngle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_RotatorFromAxisAndAngle_ReturnValue_2) == 0x000084, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_RotatorFromAxisAndAngle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x000090, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_ComposeRotators_ReturnValue) == 0x00009C, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000A8, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_ComposeRotators_ReturnValue_1) == 0x000130, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene, CallFunc_K2_AddWorldRotation_SweepHitResult) == 0x00013C, "Member 'BP_ParentRotationScene_C_ExecuteUbergraph_BP_ParentRotationScene::CallFunc_K2_AddWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_ParentRotationScene.BP_ParentRotationScene_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ParentRotationScene_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ParentRotationScene_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ParentRotationScene_C_ReceiveTick");
static_assert(sizeof(BP_ParentRotationScene_C_ReceiveTick) == 0x000004, "Wrong size on BP_ParentRotationScene_C_ReceiveTick");
static_assert(offsetof(BP_ParentRotationScene_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ParentRotationScene_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

