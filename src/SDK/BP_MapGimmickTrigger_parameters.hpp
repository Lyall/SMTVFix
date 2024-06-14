#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapGimmickTrigger

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.EvtDis_EndBattle__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature final
{
public:
	E_BTL_END                                     BtlEndType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1208[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChainEncountNum;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature) == 0x000004, "Wrong alignment on BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature");
static_assert(sizeof(BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature) == 0x000008, "Wrong size on BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature");
static_assert(offsetof(BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature, BtlEndType) == 0x000000, "Member 'BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature::BtlEndType' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature, ChainEncountNum) == 0x000004, "Member 'BP_MapGimmickTrigger_C_EvtDis_EndBattle__DelegateSignature::ChainEncountNum' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.EvtDis_CheckBattleEscape__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature final
{
public:
	bool                                          Escape;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature) == 0x000001, "Wrong alignment on BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature");
static_assert(sizeof(BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature) == 0x000001, "Wrong size on BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature");
static_assert(offsetof(BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature, Escape) == 0x000000, "Member 'BP_MapGimmickTrigger_C_EvtDis_CheckBattleEscape__DelegateSignature::Escape' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.ExecuteUbergraph_BP_MapGimmickTrigger
// 0x0078 (0x0078 - 0x0000)
struct BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1209[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	E_MOON_AGE                                    CallFunc_GetMoonAge_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120A[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120C[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120D[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAcos_ReturnValue;                      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger) == 0x000008, "Wrong alignment on BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger");
static_assert(sizeof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger) == 0x000078, "Wrong size on BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, EntryPoint) == 0x000000, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GetMoonAge_ReturnValue) == 0x000018, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GetMoonAge_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, K2Node_SwitchEnum_CmpSuccess) == 0x00001A, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000028, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x000030, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GetActorForwardVector_ReturnValue) == 0x00003C, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x000048, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_CheckEventFlag_ReturnValue) == 0x000054, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_Dot_VectorVector_ReturnValue) == 0x000058, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_DegAcos_ReturnValue) == 0x00005C, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'BP_MapGimmickTrigger_C_ExecuteUbergraph_BP_MapGimmickTrigger::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MapGimmickTrigger_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapGimmickTrigger_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MapGimmickTrigger_C_ReceiveTick");
static_assert(sizeof(BP_MapGimmickTrigger_C_ReceiveTick) == 0x000004, "Wrong size on BP_MapGimmickTrigger_C_ReceiveTick");
static_assert(offsetof(BP_MapGimmickTrigger_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MapGimmickTrigger_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.Enter_MagatsukaNotDiscovery
// 0x0014 (0x0014 - 0x0000)
struct BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery final
{
public:
	bool                                          Enter;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery) == 0x000004, "Wrong alignment on BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery");
static_assert(sizeof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery) == 0x000014, "Wrong size on BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery, Enter) == 0x000000, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery::Enter' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery, Temp_int_Variable) == 0x000004, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery, Temp_int_Variable_1) == 0x000008, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaNotDiscovery::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.Enter_MagatsukaChangeUndiscovery
// 0x0014 (0x0014 - 0x0000)
struct BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery final
{
public:
	bool                                          Enter;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_120F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery) == 0x000004, "Wrong alignment on BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery");
static_assert(sizeof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery) == 0x000014, "Wrong size on BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery, Enter) == 0x000000, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery::Enter' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery, Temp_int_Variable) == 0x000004, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery, Temp_int_Variable_1) == 0x000008, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'BP_MapGimmickTrigger_C_Enter_MagatsukaChangeUndiscovery::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.Check_MagatsukaCanDiscovery
// 0x0004 (0x0004 - 0x0000)
struct BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery final
{
public:
	bool                                          CanDiscovery;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery) == 0x000001, "Wrong alignment on BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery");
static_assert(sizeof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery) == 0x000004, "Wrong size on BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery");
static_assert(offsetof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery, CanDiscovery) == 0x000000, "Member 'BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery::CanDiscovery' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000001, "Member 'BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000002, "Member 'BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'BP_MapGimmickTrigger_C_Check_MagatsukaCanDiscovery::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MapGimmickTrigger.BP_MapGimmickTrigger_C.CalcSpSymbolDead
// 0x01D8 (0x01D8 - 0x0000)
struct BP_MapGimmickTrigger_C_CalcSpSymbolDead final
{
public:
	struct FUniqueSymbolData                      L_Data;                                            // 0x0000(0x002C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_1210[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FUniqueSymbolData>              L_list;                                            // 0x0030(0x0010)(Edit, BlueprintVisible)
	bool                                          L_Reborn;                                          // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1211[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_Rand;                                            // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1212[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 K2Node_MakeStruct_Color;                           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueSymbolData                      CallFunc_Array_Get_Item;                           // 0x0078(0x002C)(NoDestructor)
	uint8                                         Pad_1213[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDevilName_ReturnValue;                 // 0x00B8(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FUniqueSymbolData>              CallFunc_GetUniqueSymbolDataList_ReturnValue;      // 0x00F0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_CheckMapSymbolDeadFlag_ReturnValue;       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1214[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1215[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1216[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1217[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1218[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapGimmickTrigger_C_CalcSpSymbolDead) == 0x000008, "Wrong alignment on BP_MapGimmickTrigger_C_CalcSpSymbolDead");
static_assert(sizeof(BP_MapGimmickTrigger_C_CalcSpSymbolDead) == 0x0001D8, "Wrong size on BP_MapGimmickTrigger_C_CalcSpSymbolDead");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, L_Data) == 0x000000, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::L_Data' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, L_list) == 0x000030, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::L_list' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, L_Reborn) == 0x000040, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::L_Reborn' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, L_Rand) == 0x000044, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::L_Rand' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, Temp_bool_Variable) == 0x000048, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, Temp_string_Variable) == 0x000050, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, Temp_string_Variable_1) == 0x000060, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, Temp_int_Array_Index_Variable) == 0x000070, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, K2Node_MakeStruct_Color) == 0x000074, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::K2Node_MakeStruct_Color' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A8, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_GetDevilName_ReturnValue) == 0x0000B8, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_GetDevilName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000D0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Conv_TextToString_ReturnValue) == 0x0000E0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_GetUniqueSymbolDataList_ReturnValue) == 0x0000F0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_GetUniqueSymbolDataList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_CheckMapSymbolDeadFlag_ReturnValue) == 0x000100, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_CheckMapSymbolDeadFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, K2Node_Select_Default) == 0x000108, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000118, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, Temp_int_Loop_Counter_Variable) == 0x000128, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue) == 0x000130, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000140, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000158, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000168, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Add_IntInt_ReturnValue) == 0x000178, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000180, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000190, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0001A0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_7) == 0x0001B0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Concat_StrStr_ReturnValue_8) == 0x0001C0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001D0, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MapGimmickTrigger_C_CalcSpSymbolDead, CallFunc_RandomInteger_ReturnValue) == 0x0001D4, "Member 'BP_MapGimmickTrigger_C_CalcSpSymbolDead::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");

}

