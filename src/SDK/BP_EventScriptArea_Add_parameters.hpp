#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventScriptArea_Add

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EventScriptArea_Add.BP_EventScriptArea_Add_C.ExecuteUbergraph_BP_EventScriptArea_Add
// 0x0120 (0x0120 - 0x0000)
struct BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_650A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_650C[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add) == 0x000008, "Wrong alignment on BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add");
static_assert(sizeof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add) == 0x000120, "Wrong size on BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, EntryPoint) == 0x000000, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000B0, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B8, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherComp) == 0x0000C0, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C8, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000D0, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, CallFunc_GetDisplayName_ReturnValue) == 0x0000E0, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000100, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000110, "Member 'BP_EventScriptArea_Add_C_ExecuteUbergraph_BP_EventScriptArea_Add::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_EventScriptArea_Add.BP_EventScriptArea_Add_C.BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_EventScriptArea_Add_C_BndEvt__UnloadBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function BP_EventScriptArea_Add.BP_EventScriptArea_Add_C.BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_650D[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_EventScriptArea_Add_C_BndEvt__LoadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_EventScriptArea_Add.BP_EventScriptArea_Add_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct BP_EventScriptArea_Add_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_Add_VectorFloat_ReturnValue;              // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventScriptArea_Add_C_UserConstructionScript) == 0x000004, "Wrong alignment on BP_EventScriptArea_Add_C_UserConstructionScript");
static_assert(sizeof(BP_EventScriptArea_Add_C_UserConstructionScript) == 0x00000C, "Wrong size on BP_EventScriptArea_Add_C_UserConstructionScript");
static_assert(offsetof(BP_EventScriptArea_Add_C_UserConstructionScript, CallFunc_Add_VectorFloat_ReturnValue) == 0x000000, "Member 'BP_EventScriptArea_Add_C_UserConstructionScript::CallFunc_Add_VectorFloat_ReturnValue' has a wrong offset!");

}

