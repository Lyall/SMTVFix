#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MissionInfo

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPL_MissionInfo.BPL_MissionInfo_C.ProcMissionInfo
// 0x04F0 (0x04F0 - 0x0000)
struct BPL_MissionInfo_C_ProcMissionInfo final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsEntry;                                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A3[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_MissionId;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_TableMax;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameMode_C>       K2Node_DynamicCast_AsBPI_Game_Mode;                // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplyMissionMapBGM_dummy;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A4[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0048(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65A5[0xC];                                     // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapData                               CallFunc_GetMapData_ReturnValue;                   // 0x0070(0x03A0)()
	int32                                         CallFunc_GetMapID_ReturnValue;                     // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsInOtherTimeAttack_outOtherMissionId;    // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInOtherTimeAttack_ReturnValue;          // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A6[0x2];                                     // 0x041A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_MakeReportableList_ReturnValue;           // 0x0420(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x0438(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A7[0x3];                                     // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMissionUpdateInfo>             CallFunc_MakeUpdateInfoList_ReturnValue;           // 0x0450(0x0010)(ReferenceParm)
	struct FMissionUpdateInfo                     CallFunc_Array_Get_Item_1;                         // 0x0460(0x001C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A8[0x6];                                     // 0x0482(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_3;                          // 0x0488(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_4;                          // 0x0498(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_5;                          // 0x04A8(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_6;                          // 0x04B8(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_7;                          // 0x04C8(0x0010)(ReferenceParm)
	TArray<int32>                                 K2Node_MakeArray_Array_8;                          // 0x04D8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x04EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_MissionInfo_C_ProcMissionInfo) == 0x000010, "Wrong alignment on BPL_MissionInfo_C_ProcMissionInfo");
static_assert(sizeof(BPL_MissionInfo_C_ProcMissionInfo) == 0x0004F0, "Wrong size on BPL_MissionInfo_C_ProcMissionInfo");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, __WorldContext) == 0x000000, "Member 'BPL_MissionInfo_C_ProcMissionInfo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, L_IsEntry) == 0x000008, "Member 'BPL_MissionInfo_C_ProcMissionInfo::L_IsEntry' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, L_MissionId) == 0x00000C, "Member 'BPL_MissionInfo_C_ProcMissionInfo::L_MissionId' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, L_TableMax) == 0x000010, "Member 'BPL_MissionInfo_C_ProcMissionInfo::L_TableMax' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BPL_MissionInfo_C_ProcMissionInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_GetGameMode_ReturnValue) == 0x000018, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_DynamicCast_AsBPI_Game_Mode) == 0x000020, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_DynamicCast_AsBPI_Game_Mode' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_ApplyMissionMapBGM_dummy) == 0x000031, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_ApplyMissionMapBGM_dummy' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array) == 0x000038, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_1) == 0x000048, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'BPL_MissionInfo_C_ProcMissionInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, Temp_int_Array_Index_Variable_1) == 0x000060, "Member 'BPL_MissionInfo_C_ProcMissionInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_GetMapData_ReturnValue) == 0x000070, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_GetMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_GetMapID_ReturnValue) == 0x000410, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_GetMapID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_IsInOtherTimeAttack_outOtherMissionId) == 0x000414, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_IsInOtherTimeAttack_outOtherMissionId' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_IsInOtherTimeAttack_ReturnValue) == 0x000418, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_IsInOtherTimeAttack_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000419, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, Temp_int_Loop_Counter_Variable_1) == 0x00041C, "Member 'BPL_MissionInfo_C_ProcMissionInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_MakeReportableList_ReturnValue) == 0x000420, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_MakeReportableList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Array_Get_Item) == 0x000430, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Array_Length_ReturnValue) == 0x000434, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_2) == 0x000438, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000448, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x00044C, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_MakeUpdateInfoList_ReturnValue) == 0x000450, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_MakeUpdateInfoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Array_Get_Item_1) == 0x000460, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Array_Length_ReturnValue_1) == 0x00047C, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000480, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000481, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_3) == 0x000488, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_4) == 0x000498, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_5) == 0x0004A8, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_6) == 0x0004B8, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_7) == 0x0004C8, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, K2Node_MakeArray_Array_8) == 0x0004D8, "Member 'BPL_MissionInfo_C_ProcMissionInfo::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Multiply_IntInt_ReturnValue) == 0x0004E8, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcMissionInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x0004EC, "Member 'BPL_MissionInfo_C_ProcMissionInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function BPL_MissionInfo.BPL_MissionInfo_C.ProcTimeAttackInfo
// 0x0070 (0x0070 - 0x0000)
struct BPL_MissionInfo_C_ProcTimeAttackInfo final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          L_IsEntry;                                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65A9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         L_MissionId;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_TableMax;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMissionTimeAttackInfo>         CallFunc_MakeTimeAttackInfoList_ReturnValue;       // 0x0020(0x0010)(ReferenceParm)
	struct FMissionTimeAttackInfo                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65AA[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65AB[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0060(0x0010)(ReferenceParm)
};
static_assert(alignof(BPL_MissionInfo_C_ProcTimeAttackInfo) == 0x000008, "Wrong alignment on BPL_MissionInfo_C_ProcTimeAttackInfo");
static_assert(sizeof(BPL_MissionInfo_C_ProcTimeAttackInfo) == 0x000070, "Wrong size on BPL_MissionInfo_C_ProcTimeAttackInfo");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, __WorldContext) == 0x000000, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, L_IsEntry) == 0x000008, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::L_IsEntry' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, L_MissionId) == 0x00000C, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::L_MissionId' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, L_TableMax) == 0x000010, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::L_TableMax' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, CallFunc_MakeTimeAttackInfoList_ReturnValue) == 0x000020, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::CallFunc_MakeTimeAttackInfoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, CallFunc_Array_Get_Item) == 0x000030, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, K2Node_MakeArray_Array) == 0x000048, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000058, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPL_MissionInfo_C_ProcTimeAttackInfo, K2Node_MakeArray_Array_1) == 0x000060, "Member 'BPL_MissionInfo_C_ProcTimeAttackInfo::K2Node_MakeArray_Array_1' has a wrong offset!");

}

