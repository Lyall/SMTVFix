#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_EnvCtrlSpecial

#include "Basic.hpp"

#include "ST_EnvCtrl_Special_structs.hpp"


namespace SDK::Params
{

// Function BPL_EnvCtrlSpecial.BPL_EnvCtrlSpecial_C.GetEnvCtrlIndex
// 0x0078 (0x0078 - 0x0000)
struct BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62DA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_EnvCtrl_Special                    LightParam;                                        // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_EnvCtrl_Special                    K2Node_MakeStruct_ST_EnvCtrl_Special;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0040(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_EnvCtrl_Special                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex) == 0x000008, "Wrong alignment on BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex");
static_assert(sizeof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex) == 0x000078, "Wrong size on BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, Param_Index) == 0x000000, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, __WorldContext) == 0x000008, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, LightParam) == 0x000010, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::LightParam' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, K2Node_MakeStruct_ST_EnvCtrl_Special) == 0x000028, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::K2Node_MakeStruct_ST_EnvCtrl_Special' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000040, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, CallFunc_Array_Get_Item) == 0x000050, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, CallFunc_GetDataTableRowFromName_OutRow) == 0x000058, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000070, "Member 'BPL_EnvCtrlSpecial_C_GetEnvCtrlIndex::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}
