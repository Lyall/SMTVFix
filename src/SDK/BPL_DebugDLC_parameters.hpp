#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugDLC

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_DebugDLC.BPL_DebugDLC_C.AddDebugMenuDLC
// 0x00A8 (0x00A8 - 0x0000)
struct BPL_DebugDLC_C_AddDebugMenuDLC final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          CallFunc_GetDlcCheck_output;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          CallFunc_GetDlcCheck_output_1;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEC[0x4];                                      // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDlcNameTagList_ReturnValue;            // 0x0020(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheckDLCFlag_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DED[0x3];                                      // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Debug_DLC_ClearAnnounceFlag_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEE[0x7];                                      // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNeedDlcCheckAndAnnounceFlag_ReturnValue; // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEF[0x3];                                      // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_2; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3; // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF0[0x3];                                      // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_DebugDLC_C_AddDebugMenuDLC) == 0x000008, "Wrong alignment on BPL_DebugDLC_C_AddDebugMenuDLC");
static_assert(sizeof(BPL_DebugDLC_C_AddDebugMenuDLC) == 0x0000A8, "Wrong size on BPL_DebugDLC_C_AddDebugMenuDLC");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, __WorldContext) == 0x000000, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_GetDlcCheck_output) == 0x000008, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_GetDlcCheck_output' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_GetDlcCheck_output_1) == 0x000010, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_GetDlcCheck_output_1' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_GetDlcNameTagList_ReturnValue) == 0x000020, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_GetDlcNameTagList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Array_Get_Item) == 0x000030, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_IsCheckDLCFlag_ReturnValue) == 0x00003C, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_IsCheckDLCFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Conv_NameToString_ReturnValue) == 0x000040, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Get_Debug_DLC_ClearAnnounceFlag_ReturnValue) == 0x000050, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Get_Debug_DLC_ClearAnnounceFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue) == 0x000068, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Conv_StringToName_ReturnValue) == 0x00006C, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_GetNeedDlcCheckAndAnnounceFlag_ReturnValue) == 0x000074, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_GetNeedDlcCheckAndAnnounceFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1) == 0x000078, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_2) == 0x00007C, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x000080, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x000084, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1) == 0x000088, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1) == 0x00008C, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2) == 0x000090, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3) == 0x000094, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_AddDebugMenuDLC, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'BPL_DebugDLC_C_AddDebugMenuDLC::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPL_DebugDLC.BPL_DebugDLC_C.UpdateDebugMenuDLC
// 0x0070 (0x0070 - 0x0000)
struct BPL_DebugDLC_C_UpdateDebugMenuDLC final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          CallFunc_GetDlcCheck_output;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF1[0x4];                                      // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDlcNameTagList_ReturnValue;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF2[0x3];                                      // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheckDLCFlag_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF3[0x7];                                      // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_DebugDLC_C_UpdateDebugMenuDLC) == 0x000008, "Wrong alignment on BPL_DebugDLC_C_UpdateDebugMenuDLC");
static_assert(sizeof(BPL_DebugDLC_C_UpdateDebugMenuDLC) == 0x000070, "Wrong size on BPL_DebugDLC_C_UpdateDebugMenuDLC");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, __WorldContext) == 0x000000, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_GetDlcCheck_output) == 0x000008, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_GetDlcCheck_output' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_GetDlcNameTagList_ReturnValue) == 0x000018, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_GetDlcNameTagList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, Temp_int_Array_Index_Variable) == 0x000034, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Array_Get_Item) == 0x000038, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Conv_NameToString_ReturnValue) == 0x000040, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_IsCheckDLCFlag_ReturnValue) == 0x000050, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_IsCheckDLCFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DebugDLC_C_UpdateDebugMenuDLC, CallFunc_Conv_StringToName_ReturnValue) == 0x000068, "Member 'BPL_DebugDLC_C_UpdateDebugMenuDLC::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

}
