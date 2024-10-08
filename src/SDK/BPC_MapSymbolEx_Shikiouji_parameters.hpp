#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_MapSymbolEx_Shikiouji

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPC_MapSymbolEx_Shikiouji.BPC_MapSymbolEx_Shikiouji_C.ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji
// 0x00B0 (0x00B0 - 0x0000)
struct BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapSymbolBaseCompornent_C*             K2Node_DynamicCast_AsMap_Symbol_Base_Compornent;   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomPawn*                            K2Node_DynamicCast_AsCustom_Pawn;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji) == 0x000010, "Wrong alignment on BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji");
static_assert(sizeof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji) == 0x0000B0, "Wrong size on BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, EntryPoint) == 0x000000, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, Temp_class_Variable) == 0x000010, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_ClassDynamicCast_AsActor) == 0x000018, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_ClassDynamicCast_bSuccess) == 0x000020, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_DynamicCast_AsMap_Symbol_Base_Compornent) == 0x000038, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_DynamicCast_AsMap_Symbol_Base_Compornent' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_DynamicCast_AsCustom_Pawn) == 0x000060, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_DynamicCast_AsCustom_Pawn' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, CallFunc_GetTransform_ReturnValue) == 0x000070, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000A8, "Member 'BPC_MapSymbolEx_Shikiouji_C_ExecuteUbergraph_BPC_MapSymbolEx_Shikiouji::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function BPC_MapSymbolEx_Shikiouji.BPC_MapSymbolEx_Shikiouji_C.OnLoaded_860D4AC843B27BCC7EB7FDA45134F559
// 0x0008 (0x0008 - 0x0000)
struct BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559) == 0x000008, "Wrong alignment on BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559");
static_assert(sizeof(BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559) == 0x000008, "Wrong size on BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559");
static_assert(offsetof(BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559, Loaded) == 0x000000, "Member 'BPC_MapSymbolEx_Shikiouji_C_OnLoaded_860D4AC843B27BCC7EB7FDA45134F559::Loaded' has a wrong offset!");

}

