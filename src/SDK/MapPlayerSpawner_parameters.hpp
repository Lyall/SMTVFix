#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapPlayerSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MapPlayerSpawner.MapPlayerSpawner_C.ExecuteUbergraph_MapPlayerSpawner
// 0x00B0 (0x00B0 - 0x0000)
struct MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0xC];                                       // 0x0024(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsChara_Base;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMapDevilSpawnerCtrl_C*                 K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner) == 0x000010, "Wrong alignment on MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner");
static_assert(sizeof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner) == 0x0000B0, "Wrong size on MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, EntryPoint) == 0x000000, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, Temp_class_Variable) == 0x000008, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_GetTimeSeconds_ReturnValue) == 0x000010, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_GetTransform_ReturnValue) == 0x000030, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x000068, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_ClassDynamicCast_AsChara_Base) == 0x000070, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_ClassDynamicCast_AsChara_Base' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_ClassDynamicCast_bSuccess) == 0x000078, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_CustomEvent_Loaded) == 0x000080, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000088, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000090, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_GetOwner_ReturnValue) == 0x000098, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl) == 0x0000A0, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_DynamicCast_AsMap_Devil_Spawner_Ctrl' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner, CallFunc_Array_Add_ReturnValue) == 0x0000AC, "Member 'MapPlayerSpawner_C_ExecuteUbergraph_MapPlayerSpawner::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MapPlayerSpawner.MapPlayerSpawner_C.OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E
// 0x0008 (0x0008 - 0x0000)
struct MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E) == 0x000008, "Wrong alignment on MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E");
static_assert(sizeof(MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E) == 0x000008, "Wrong size on MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E");
static_assert(offsetof(MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E, Loaded) == 0x000000, "Member 'MapPlayerSpawner_C_OnLoaded_6C0EA6AF4DA4C1A7C62C3A986C07899E::Loaded' has a wrong offset!");

}

