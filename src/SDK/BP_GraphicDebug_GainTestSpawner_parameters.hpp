#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GraphicDebug_GainTestSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_GraphicDebug_GainTestSpawner.BP_GraphicDebug_GainTestSpawner_C.ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner
// 0x0080 (0x0080 - 0x0000)
struct BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0xF];                                       // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner) == 0x000010, "Wrong alignment on BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner");
static_assert(sizeof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner) == 0x000080, "Wrong size on BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, EntryPoint) == 0x000000, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, Temp_class_Variable) == 0x000010, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, K2Node_ClassDynamicCast_AsActor) == 0x000018, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, K2Node_ClassDynamicCast_bSuccess) == 0x000020, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'BP_GraphicDebug_GainTestSpawner_C_ExecuteUbergraph_BP_GraphicDebug_GainTestSpawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_GraphicDebug_GainTestSpawner.BP_GraphicDebug_GainTestSpawner_C.OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F
// 0x0008 (0x0008 - 0x0000)
struct BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F) == 0x000008, "Wrong alignment on BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F");
static_assert(sizeof(BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F) == 0x000008, "Wrong size on BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F");
static_assert(offsetof(BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F, Loaded) == 0x000000, "Member 'BP_GraphicDebug_GainTestSpawner_C_OnLoaded_9AAE2E5F43814E487A20D3A0D984FA1F::Loaded' has a wrong offset!");

}

