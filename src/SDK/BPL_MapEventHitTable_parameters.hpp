#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapEventHitTable

#include "Basic.hpp"

#include "E_MEH_TYPE_structs.hpp"
#include "MapEventHitTypeTable_Struct_structs.hpp"


namespace SDK::Params
{

// Function BPL_MapEventHitTable.BPL_MapEventHitTable_C.GetMapEventHitTableData
// 0x0088 (0x0088 - 0x0000)
struct BPL_MapEventHitTable_C_GetMapEventHitTableData final
{
public:
	E_MEH_TYPE                                    B;                                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name1;                                             // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E7[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67E8[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67E9[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67EA[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapEventHitTypeTable_Struct           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0068(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_MapEventHitTable_C_GetMapEventHitTableData) == 0x000008, "Wrong alignment on BPL_MapEventHitTable_C_GetMapEventHitTableData");
static_assert(sizeof(BPL_MapEventHitTable_C_GetMapEventHitTableData) == 0x000088, "Wrong size on BPL_MapEventHitTable_C_GetMapEventHitTableData");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, B) == 0x000000, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::B' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, __WorldContext) == 0x000008, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, Name1) == 0x000010, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::Name1' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, Param_Name) == 0x000020, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::Param_Name' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, Temp_int_Array_Index_Variable) == 0x000034, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000048, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_Array_Get_Item) == 0x00005C, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000068, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_BooleanAND_ReturnValue) == 0x000081, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapEventHitTable_C_GetMapEventHitTableData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000082, "Member 'BPL_MapEventHitTable_C_GetMapEventHitTableData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

