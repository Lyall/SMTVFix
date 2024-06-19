#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCOnlyCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NPCOnlyCollision.NPCOnlyCollision_C.ExecuteUbergraph_NPCOnlyCollision
// 0x00F0 (0x00F0 - 0x0000)
struct NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_ShouldSkipDistanceCheck;        // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2643[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Actor;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_CustomEvent_EndPlayReason;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2644[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2645[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeLocation_SweepHitResult;    // 0x0064(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision) == 0x000008, "Wrong alignment on NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision");
static_assert(sizeof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision) == 0x0000F0, "Wrong size on NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, EntryPoint) == 0x000000, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, K2Node_CustomEvent_ShouldSkipDistanceCheck) == 0x000004, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::K2Node_CustomEvent_ShouldSkipDistanceCheck' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, K2Node_CustomEvent_Actor) == 0x000020, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, K2Node_CustomEvent_EndPlayReason) == 0x000028, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::K2Node_CustomEvent_EndPlayReason' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_GetOwner_ReturnValue_1) == 0x000030, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000038, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, Temp_int_Array_Index_Variable) == 0x000048, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_Array_Get_Item) == 0x000050, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision, CallFunc_K2_AddRelativeLocation_SweepHitResult) == 0x000064, "Member 'NPCOnlyCollision_C_ExecuteUbergraph_NPCOnlyCollision::CallFunc_K2_AddRelativeLocation_SweepHitResult' has a wrong offset!");

// Function NPCOnlyCollision.NPCOnlyCollision_C.SetShouldSkipDistCamCheck
// 0x0001 (0x0001 - 0x0000)
struct NPCOnlyCollision_C_SetShouldSkipDistCamCheck final
{
public:
	bool                                          Param_ShouldSkipDistanceCheck;                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NPCOnlyCollision_C_SetShouldSkipDistCamCheck) == 0x000001, "Wrong alignment on NPCOnlyCollision_C_SetShouldSkipDistCamCheck");
static_assert(sizeof(NPCOnlyCollision_C_SetShouldSkipDistCamCheck) == 0x000001, "Wrong size on NPCOnlyCollision_C_SetShouldSkipDistCamCheck");
static_assert(offsetof(NPCOnlyCollision_C_SetShouldSkipDistCamCheck, Param_ShouldSkipDistanceCheck) == 0x000000, "Member 'NPCOnlyCollision_C_SetShouldSkipDistCamCheck::Param_ShouldSkipDistanceCheck' has a wrong offset!");

// Function NPCOnlyCollision.NPCOnlyCollision_C.OnEndPlay_����_0
// 0x0010 (0x0010 - 0x0000)
struct NPCOnlyCollision_C_OnEndPlay______0 final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NPCOnlyCollision_C_OnEndPlay______0) == 0x000008, "Wrong alignment on NPCOnlyCollision_C_OnEndPlay______0");
static_assert(sizeof(NPCOnlyCollision_C_OnEndPlay______0) == 0x000010, "Wrong size on NPCOnlyCollision_C_OnEndPlay______0");
static_assert(offsetof(NPCOnlyCollision_C_OnEndPlay______0, Actor) == 0x000000, "Member 'NPCOnlyCollision_C_OnEndPlay______0::Actor' has a wrong offset!");
static_assert(offsetof(NPCOnlyCollision_C_OnEndPlay______0, EndPlayReason) == 0x000008, "Member 'NPCOnlyCollision_C_OnEndPlay______0::EndPlayReason' has a wrong offset!");

}

