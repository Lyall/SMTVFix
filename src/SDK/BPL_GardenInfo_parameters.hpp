#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_GardenInfo

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_GardenInfo.BPL_GardenInfo_C.Proc Garden Talk Info
// 0x0118 (0x0118 - 0x0000)
struct BPL_GardenInfo_C_Proc_Garden_Talk_Info final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedsPlayerInfoProc;                               // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Is_PM_Nahobino;                                    // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888B[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_CheckGardenTalkInfoFlag_All_outFlaggedNkmIndexList; // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckGardenTalkInfoFlag_All_ReturnValue;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888D[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_MapCharaPanelCtrl_C> CallFunc_BPI_GetMapCharaPanelCtrlUI_OutActor;      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPI_GetMapCharaPanelCtrlUI_IsValid;       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888E[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue_1;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue_2;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_CheckGardenPlayerTalkFlags_outFlaggedPlayerTalkInfoFlagList; // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckGardenPlayerTalkFlags_ReturnValue;   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_888F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGardenTalkPointManager*                CallFunc_GetGardenTalkPointManager_ReturnValue_3;  // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8890[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8891[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IMapCharaPanelUpdateDevilTalkIcon_OutParam; // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetGardenTalkInfoFlag_Done_ReturnValue;   // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8892[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNkmDevilId_M_ID;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8893[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FName                                   Temp_name_Variable;                                // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8894[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ReferenceParm)
	bool                                          CallFunc_CheckPrimeMinisterNahobino_ReturnValue;   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8895[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0104(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8896[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_GardenInfo_C_Proc_Garden_Talk_Info) == 0x000008, "Wrong alignment on BPL_GardenInfo_C_Proc_Garden_Talk_Info");
static_assert(sizeof(BPL_GardenInfo_C_Proc_Garden_Talk_Info) == 0x000118, "Wrong size on BPL_GardenInfo_C_Proc_Garden_Talk_Info");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, __WorldContext) == 0x000000, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, NeedsPlayerInfoProc) == 0x000008, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::NeedsPlayerInfoProc' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Is_PM_Nahobino) == 0x000009, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Is_PM_Nahobino' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Get_ReturnValue) == 0x000010, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_GetGardenTalkPointManager_ReturnValue) == 0x000018, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_GetGardenTalkPointManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, K2Node_DynamicCast_AsBPI_UIManager) == 0x000020, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_CheckGardenTalkInfoFlag_All_outFlaggedNkmIndexList) == 0x000038, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_CheckGardenTalkInfoFlag_All_outFlaggedNkmIndexList' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_CheckGardenTalkInfoFlag_All_ReturnValue) == 0x000048, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_CheckGardenTalkInfoFlag_All_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_BPI_GetMapCharaPanelCtrlUI_OutActor) == 0x000050, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_BPI_GetMapCharaPanelCtrlUI_OutActor' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_BPI_GetMapCharaPanelCtrlUI_IsValid) == 0x000060, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_BPI_GetMapCharaPanelCtrlUI_IsValid' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_GetGardenTalkPointManager_ReturnValue_1) == 0x000068, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_GetGardenTalkPointManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_GetGardenTalkPointManager_ReturnValue_2) == 0x000070, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_GetGardenTalkPointManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_CheckGardenPlayerTalkFlags_outFlaggedPlayerTalkInfoFlagList) == 0x000078, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_CheckGardenPlayerTalkFlags_outFlaggedPlayerTalkInfoFlagList' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_CheckGardenPlayerTalkFlags_ReturnValue) == 0x000088, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_CheckGardenPlayerTalkFlags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_GetGardenTalkPointManager_ReturnValue_3) == 0x000090, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_GetGardenTalkPointManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Array_Length_ReturnValue_1) == 0x00009C, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_int_Array_Index_Variable_1) == 0x0000B4, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_IMapCharaPanelUpdateDevilTalkIcon_OutParam) == 0x0000BC, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_IMapCharaPanelUpdateDevilTalkIcon_OutParam' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_SetGardenTalkInfoFlag_Done_ReturnValue) == 0x0000BD, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_SetGardenTalkInfoFlag_Done_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_GetNkmDevilId_M_ID) == 0x0000C0, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_GetNkmDevilId_M_ID' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_name_Variable) == 0x0000D8, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_name_Variable_1) == 0x0000E0, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_bool_Variable) == 0x0000E8, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_CheckPrimeMinisterNahobino_ReturnValue) == 0x000100, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_CheckPrimeMinisterNahobino_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, K2Node_Select_Default) == 0x000104, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, Temp_int_Loop_Counter_Variable_1) == 0x00010C, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Less_IntInt_ReturnValue_1) == 0x000110, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_GardenInfo_C_Proc_Garden_Talk_Info, CallFunc_Add_IntInt_ReturnValue_1) == 0x000114, "Member 'BPL_GardenInfo_C_Proc_Garden_Talk_Info::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

}
