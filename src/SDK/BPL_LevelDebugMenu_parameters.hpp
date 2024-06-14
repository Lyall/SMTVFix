#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_LevelDebugMenu

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "BattleFieldTableItem_ST_structs.hpp"


namespace SDK::Params
{

// Function BPL_LevelDebugMenu.BPL_LevelDebugMenu_C.AddDebugMenuLevelDebug
// 0x0160 (0x0160 - 0x0000)
struct BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UDataTable>              L_BattleFieldDataTable;                            // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3115[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3116[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             K2Node_DynamicCast_AsData_Table;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3117[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3118[0xB];                                     // 0x0095(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBattleFieldTableItem_ST               CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A0(0x0070)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3119[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311A[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311B[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0144(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311C[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug) == 0x000010, "Wrong alignment on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug");
static_assert(sizeof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug) == 0x000160, "Wrong size on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, __WorldContext) == 0x000000, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, L_BattleFieldDataTable) == 0x000008, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::L_BattleFieldDataTable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x000034, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue) == 0x000038, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1) == 0x00003C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2) == 0x000040, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x000048, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1) == 0x000050, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000058, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1) == 0x000060, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, K2Node_DynamicCast_AsData_Table) == 0x000068, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::K2Node_DynamicCast_AsData_Table' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000078, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Array_Get_Item) == 0x00008C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000110, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Conv_NameToString_ReturnValue) == 0x000118, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Array_Length_ReturnValue_1) == 0x000128, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Concat_StrStr_ReturnValue) == 0x000130, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Greater_IntInt_ReturnValue) == 0x000140, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Conv_StringToName_ReturnValue) == 0x000144, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00014C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3) == 0x000150, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug, CallFunc_BooleanAND_ReturnValue) == 0x000154, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebug::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BPL_LevelDebugMenu.BPL_LevelDebugMenu_C.AddDebugMenuLevelDebugLoad
// 0x00F8 (0x00F8 - 0x0000)
struct BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Lo_MenuRoot;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProjectSubLevelStatus>         CallFunc_ProjectGetSubLevelStatusArray_ReturnValue; // 0x0028(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FProjectSubLevelStatus                 CallFunc_Array_Get_Item;                           // 0x0048(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311E[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_EProjectStreamingStatusToString_ReturnValue; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311F[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad) == 0x000008, "Wrong alignment on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad");
static_assert(sizeof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad) == 0x0000F8, "Wrong size on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, __WorldContext) == 0x000000, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, Lo_MenuRoot) == 0x000008, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::Lo_MenuRoot' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_ProjectGetSubLevelStatusArray_ReturnValue) == 0x000028, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_ProjectGetSubLevelStatusArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Array_Get_Item) == 0x000048, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_EProjectStreamingStatusToString_ReturnValue) == 0x000088, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_EProjectStreamingStatusToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x0000D0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000D8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000E8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x0000F0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugLoad::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");

// Function BPL_LevelDebugMenu.BPL_LevelDebugMenu_C.AddDebugMenuLevelDebugSp
// 0x0018 (0x0018 - 0x0000)
struct BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp) == 0x000008, "Wrong alignment on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp");
static_assert(sizeof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp) == 0x000018, "Wrong size on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp, WorldContext) == 0x000000, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp::WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp, __WorldContext) == 0x000008, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x000010, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1) == 0x000014, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugSp::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1' has a wrong offset!");

// Function BPL_LevelDebugMenu.BPL_LevelDebugMenu_C.AddDebugMenuLevelDebugVolumetricLightmap
// 0x00F8 (0x00F8 - 0x0000)
struct BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Lo_MenuRoot;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3120[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProjectSubLevelStatus>         CallFunc_ProjectGetSubLevelStatusArray_ReturnValue; // 0x0028(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FProjectSubLevelStatus                 CallFunc_Array_Get_Item;                           // 0x0048(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3121[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_EProjectStreamingStatusToString_ReturnValue; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3122[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap) == 0x000008, "Wrong alignment on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap");
static_assert(sizeof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap) == 0x0000F8, "Wrong size on BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, __WorldContext) == 0x000000, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, Lo_MenuRoot) == 0x000008, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::Lo_MenuRoot' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_ProjectGetSubLevelStatusArray_ReturnValue) == 0x000028, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_ProjectGetSubLevelStatusArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Array_Get_Item) == 0x000048, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_EProjectStreamingStatusToString_ReturnValue) == 0x000088, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_EProjectStreamingStatusToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x0000D0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000D8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000E8, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x0000F0, "Member 'BPL_LevelDebugMenu_C_AddDebugMenuLevelDebugVolumetricLightmap::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");

}
