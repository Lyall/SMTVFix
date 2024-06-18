#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleResult

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BattleResult.BattleResult_C.ExecuteUbergraph_BattleResult
// 0x00B0 (0x00B0 - 0x0000)
struct BattleResult_C_ExecuteUbergraph_BattleResult final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7795[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleMain_C*                          CallFunc_GetMainWork_retValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlGardenPointData                    CallFunc_GetGardenPointData_ReturnValue;           // 0x0010(0x000C)(ConstParm, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7796[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ResultMain_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_StackResultData_success;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_StackResultData_success_1;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7797[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleMain_C*                          CallFunc_GetMainWork_retValue_1;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlGardenPointData                    CallFunc_GetGardenPointData_ReturnValue_1;         // 0x0098(0x000C)(ConstParm, NoDestructor)
	uint8                                         Pad_7798[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue_1;  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleResult_C_ExecuteUbergraph_BattleResult) == 0x000010, "Wrong alignment on BattleResult_C_ExecuteUbergraph_BattleResult");
static_assert(sizeof(BattleResult_C_ExecuteUbergraph_BattleResult) == 0x0000B0, "Wrong size on BattleResult_C_ExecuteUbergraph_BattleResult");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, EntryPoint) == 0x000000, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetMainWork_retValue) == 0x000008, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetMainWork_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetGardenPointData_ReturnValue) == 0x000010, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetGardenPointData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_FinishSpawningActor_ReturnValue) == 0x000068, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_StackResultData_success) == 0x000080, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_StackResultData_success' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_StackResultData_success_1) == 0x000081, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_StackResultData_success_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetGardenTalkPointManager_ReturnValue) == 0x000088, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetGardenTalkPointManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetMainWork_retValue_1) == 0x000090, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetMainWork_retValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetGardenPointData_ReturnValue_1) == 0x000098, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetGardenPointData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ExecuteUbergraph_BattleResult, CallFunc_GetGardenTalkPointManager_ReturnValue_1) == 0x0000A8, "Member 'BattleResult_C_ExecuteUbergraph_BattleResult::CallFunc_GetGardenTalkPointManager_ReturnValue_1' has a wrong offset!");

// Function BattleResult.BattleResult_C.GetMainWork
// 0x0020 (0x0020 - 0x0000)
struct BattleResult_C_GetMainWork final
{
public:
	class ABattleMain_C*                          RetValue;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleMain_C*                          K2Node_DynamicCast_AsBattle_Main;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleResult_C_GetMainWork) == 0x000008, "Wrong alignment on BattleResult_C_GetMainWork");
static_assert(sizeof(BattleResult_C_GetMainWork) == 0x000020, "Wrong size on BattleResult_C_GetMainWork");
static_assert(offsetof(BattleResult_C_GetMainWork, RetValue) == 0x000000, "Member 'BattleResult_C_GetMainWork::RetValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_GetMainWork, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BattleResult_C_GetMainWork::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_GetMainWork, K2Node_DynamicCast_AsBattle_Main) == 0x000010, "Member 'BattleResult_C_GetMainWork::K2Node_DynamicCast_AsBattle_Main' has a wrong offset!");
static_assert(offsetof(BattleResult_C_GetMainWork, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BattleResult_C_GetMainWork::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BattleResult.BattleResult_C.GetPartySystem
// 0x0010 (0x0010 - 0x0000)
struct BattleResult_C_GetPartySystem final
{
public:
	class UBattlePartySystem_C*                   RetValue;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleMain_C*                          CallFunc_GetMainWork_retValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleResult_C_GetPartySystem) == 0x000008, "Wrong alignment on BattleResult_C_GetPartySystem");
static_assert(sizeof(BattleResult_C_GetPartySystem) == 0x000010, "Wrong size on BattleResult_C_GetPartySystem");
static_assert(offsetof(BattleResult_C_GetPartySystem, RetValue) == 0x000000, "Member 'BattleResult_C_GetPartySystem::RetValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_GetPartySystem, CallFunc_GetMainWork_retValue) == 0x000008, "Member 'BattleResult_C_GetPartySystem::CallFunc_GetMainWork_retValue' has a wrong offset!");

// Function BattleResult.BattleResult_C.IsFinished
// 0x0001 (0x0001 - 0x0000)
struct BattleResult_C_IsFinished final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleResult_C_IsFinished) == 0x000001, "Wrong alignment on BattleResult_C_IsFinished");
static_assert(sizeof(BattleResult_C_IsFinished) == 0x000001, "Wrong size on BattleResult_C_IsFinished");
static_assert(offsetof(BattleResult_C_IsFinished, ReturnValue) == 0x000000, "Member 'BattleResult_C_IsFinished::ReturnValue' has a wrong offset!");

// Function BattleResult.BattleResult_C.ApplyPartyData
// 0x06E0 (0x06E0 - 0x0000)
struct BattleResult_C_ApplyPartyData final
{
public:
	bool                                          IsAddArrayFlag;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7799[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePartySystem_C*                   Lo_PartySystem;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_End;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_Start;                                          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lo_IsNahobino;                                     // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779A[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Lo_PanelOrder;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetPlayerPartyIndex_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779B[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInField_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779C[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlParty                              CallFunc_GetBtlPartyData_ReturnValue;              // 0x0050(0x0320)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_779D[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_const_GetStockLoopMax_retValue;           // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_const_GetStockStart_retValue;             // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_779E[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattlePartySystem_C*                   CallFunc_GetPartySystem_retValue;                  // 0x0380(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_779F[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlParty                              CallFunc_GetBtlPartyData_ReturnValue_1;            // 0x0390(0x0320)()
	bool                                          CallFunc_IsExist_ReturnValue;                      // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A0[0x3];                                     // 0x06B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStock_retValue;                         // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x06B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x06BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A1[0x1];                                     // 0x06BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x06BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x06C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77A2[0x4];                                     // 0x06C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleMain_C*                          CallFunc_GetMainWork_retValue;                     // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetSideIsInFieldList_ReturnValue;         // 0x06D0(0x0010)(ReferenceParm)
};
static_assert(alignof(BattleResult_C_ApplyPartyData) == 0x000010, "Wrong alignment on BattleResult_C_ApplyPartyData");
static_assert(sizeof(BattleResult_C_ApplyPartyData) == 0x0006E0, "Wrong size on BattleResult_C_ApplyPartyData");
static_assert(offsetof(BattleResult_C_ApplyPartyData, IsAddArrayFlag) == 0x000000, "Member 'BattleResult_C_ApplyPartyData::IsAddArrayFlag' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Lo_PartySystem) == 0x000008, "Member 'BattleResult_C_ApplyPartyData::Lo_PartySystem' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Lo_End) == 0x000010, "Member 'BattleResult_C_ApplyPartyData::Lo_End' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Lo_Start) == 0x000014, "Member 'BattleResult_C_ApplyPartyData::Lo_Start' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Lo_IsNahobino) == 0x000018, "Member 'BattleResult_C_ApplyPartyData::Lo_IsNahobino' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Lo_PanelOrder) == 0x000020, "Member 'BattleResult_C_ApplyPartyData::Lo_PanelOrder' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'BattleResult_C_ApplyPartyData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Temp_int_Array_Index_Variable) == 0x000038, "Member 'BattleResult_C_ApplyPartyData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Array_Get_Item) == 0x00003C, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_SetPlayerPartyIndex_ReturnValue) == 0x000040, "Member 'BattleResult_C_ApplyPartyData::CallFunc_SetPlayerPartyIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000041, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_IsInField_ReturnValue) == 0x000049, "Member 'BattleResult_C_ApplyPartyData::CallFunc_IsInField_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GetBtlPartyData_ReturnValue) == 0x000050, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GetBtlPartyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_BooleanAND_ReturnValue) == 0x000370, "Member 'BattleResult_C_ApplyPartyData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_const_GetStockLoopMax_retValue) == 0x000374, "Member 'BattleResult_C_ApplyPartyData::CallFunc_const_GetStockLoopMax_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_const_GetStockStart_retValue) == 0x000378, "Member 'BattleResult_C_ApplyPartyData::CallFunc_const_GetStockStart_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GetPartySystem_retValue) == 0x000380, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GetPartySystem_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, Temp_int_Variable) == 0x000388, "Member 'BattleResult_C_ApplyPartyData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GetBtlPartyData_ReturnValue_1) == 0x000390, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GetBtlPartyData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_IsExist_ReturnValue) == 0x0006B0, "Member 'BattleResult_C_ApplyPartyData::CallFunc_IsExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Array_Add_ReturnValue) == 0x0006B4, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_IsStock_retValue) == 0x0006B8, "Member 'BattleResult_C_ApplyPartyData::CallFunc_IsStock_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_BooleanAND_ReturnValue_1) == 0x0006B9, "Member 'BattleResult_C_ApplyPartyData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0006BA, "Member 'BattleResult_C_ApplyPartyData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0006BC, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_Array_Add_ReturnValue_1) == 0x0006C0, "Member 'BattleResult_C_ApplyPartyData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GetMainWork_retValue) == 0x0006C8, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GetMainWork_retValue' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ApplyPartyData, CallFunc_GetSideIsInFieldList_ReturnValue) == 0x0006D0, "Member 'BattleResult_C_ApplyPartyData::CallFunc_GetSideIsInFieldList_ReturnValue' has a wrong offset!");

// Function BattleResult.BattleResult_C.ClearResult
// 0x00A0 (0x00A0 - 0x0000)
struct BattleResult_C_ClearResult final
{
public:
	struct FBtlResultData                         CallFunc_ClearResultData_src;                      // 0x0000(0x0050)()
	struct FBtlResultData                         CallFunc_ClearResultData_ReturnValue;              // 0x0050(0x0050)(ConstParm)
};
static_assert(alignof(BattleResult_C_ClearResult) == 0x000008, "Wrong alignment on BattleResult_C_ClearResult");
static_assert(sizeof(BattleResult_C_ClearResult) == 0x0000A0, "Wrong size on BattleResult_C_ClearResult");
static_assert(offsetof(BattleResult_C_ClearResult, CallFunc_ClearResultData_src) == 0x000000, "Member 'BattleResult_C_ClearResult::CallFunc_ClearResultData_src' has a wrong offset!");
static_assert(offsetof(BattleResult_C_ClearResult, CallFunc_ClearResultData_ReturnValue) == 0x000050, "Member 'BattleResult_C_ClearResult::CallFunc_ClearResultData_ReturnValue' has a wrong offset!");

}

