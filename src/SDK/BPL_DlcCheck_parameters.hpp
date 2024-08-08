#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DlcCheck

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_DlcCheck.BPL_DlcCheck_C.GetDlcCheck
// 0x0038 (0x0038 - 0x0000)
struct BPL_DlcCheck_C_GetDlcCheck final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          Output;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DlcCheck_C>       K2Node_DynamicCast_AsBPI_Dlc_Check;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDlcTableData*                          CallFunc_BPI_GetDlcCheck_DlcTableData;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_DlcCheck_C_GetDlcCheck) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_GetDlcCheck");
static_assert(sizeof(BPL_DlcCheck_C_GetDlcCheck) == 0x000038, "Wrong size on BPL_DlcCheck_C_GetDlcCheck");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, __WorldContext) == 0x000000, "Member 'BPL_DlcCheck_C_GetDlcCheck::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, Output) == 0x000008, "Member 'BPL_DlcCheck_C_GetDlcCheck::Output' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_DlcCheck_C_GetDlcCheck::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, K2Node_DynamicCast_AsBPI_Dlc_Check) == 0x000018, "Member 'BPL_DlcCheck_C_GetDlcCheck::K2Node_DynamicCast_AsBPI_Dlc_Check' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_DlcCheck_C_GetDlcCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_GetDlcCheck, CallFunc_BPI_GetDlcCheck_DlcTableData) == 0x000030, "Member 'BPL_DlcCheck_C_GetDlcCheck::CallFunc_BPI_GetDlcCheck_DlcTableData' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce
// 0x0070 (0x0070 - 0x0000)
struct BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce final
{
public:
	bool                                          IsBoot;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetDLCAnnouncer_outActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DLCAnnouncer_C>   K2Node_DynamicCast_AsBPI_DLCAnnouncer;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce");
static_assert(sizeof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce) == 0x000070, "Wrong size on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, IsBoot) == 0x000000, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::IsBoot' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, __WorldContext) == 0x000008, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, CallFunc_BPI_GetUIManager_UIManager) == 0x000030, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000038, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, CallFunc_BPI_GetDLCAnnouncer_outActor) == 0x000050, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::CallFunc_BPI_GetDLCAnnouncer_outActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_AsBPI_DLCAnnouncer) == 0x000058, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_AsBPI_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_DlcReflectAndAnnounce::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.UpdateDlcEventFlag
// 0x0020 (0x0020 - 0x0000)
struct BPL_DlcCheck_C_UpdateDlcEventFlag final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          CallFunc_GetDlcCheck_output;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDlcTableData*                          CallFunc_GetDlcCheck_output_1;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCheckDLCFlag_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCheckDLCFlag_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DlcCheck_C_UpdateDlcEventFlag) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_UpdateDlcEventFlag");
static_assert(sizeof(BPL_DlcCheck_C_UpdateDlcEventFlag) == 0x000020, "Wrong size on BPL_DlcCheck_C_UpdateDlcEventFlag");
static_assert(offsetof(BPL_DlcCheck_C_UpdateDlcEventFlag, __WorldContext) == 0x000000, "Member 'BPL_DlcCheck_C_UpdateDlcEventFlag::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_UpdateDlcEventFlag, CallFunc_GetDlcCheck_output) == 0x000008, "Member 'BPL_DlcCheck_C_UpdateDlcEventFlag::CallFunc_GetDlcCheck_output' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_UpdateDlcEventFlag, CallFunc_GetDlcCheck_output_1) == 0x000010, "Member 'BPL_DlcCheck_C_UpdateDlcEventFlag::CallFunc_GetDlcCheck_output_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_UpdateDlcEventFlag, CallFunc_IsCheckDLCFlag_ReturnValue) == 0x000018, "Member 'BPL_DlcCheck_C_UpdateDlcEventFlag::CallFunc_IsCheckDLCFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_UpdateDlcEventFlag, CallFunc_IsCheckDLCFlag_ReturnValue_1) == 0x000019, "Member 'BPL_DlcCheck_C_UpdateDlcEventFlag::CallFunc_IsCheckDLCFlag_ReturnValue_1' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.BPL_DlcAnnouncer_StartTask_OnlyDlcReflect
// 0x0070 (0x0070 - 0x0000)
struct BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect final
{
public:
	bool                                          IsBoot;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetDLCAnnouncer_outActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DLCAnnouncer_C>   K2Node_DynamicCast_AsBPI_DLCAnnouncer;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect");
static_assert(sizeof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect) == 0x000070, "Wrong size on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, IsBoot) == 0x000000, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::IsBoot' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, __WorldContext) == 0x000008, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, CallFunc_BPI_GetUIManager_UIManager) == 0x000030, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000038, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, CallFunc_BPI_GetDLCAnnouncer_outActor) == 0x000050, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::CallFunc_BPI_GetDLCAnnouncer_outActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_AsBPI_DLCAnnouncer) == 0x000058, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_AsBPI_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyDlcReflect::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.BPL_DlcAnnouncer_StartTask_OnlyAnnounce
// 0x0068 (0x0068 - 0x0000)
struct BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetDLCAnnouncer_outActor;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DLCAnnouncer_C>   K2Node_DynamicCast_AsBPI_DLCAnnouncer;             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce");
static_assert(sizeof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce) == 0x000068, "Wrong size on BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, __WorldContext) == 0x000000, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_AsBPI_UIManager) == 0x000010, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, CallFunc_BPI_GetUIManager_UIManager) == 0x000028, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000030, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, CallFunc_BPI_GetDLCAnnouncer_outActor) == 0x000048, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::CallFunc_BPI_GetDLCAnnouncer_outActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_AsBPI_DLCAnnouncer) == 0x000050, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_AsBPI_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_StartTask_OnlyAnnounce::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.BPL_DlcAnnouncer_IsActiveAnnounceTask
// 0x0070 (0x0070 - 0x0000)
struct BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActiveTask;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetDLCAnnouncer_outActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DLCAnnouncer_C>   K2Node_DynamicCast_AsBPI_DLCAnnouncer;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPI_IsActiveAnnounceTask_IsActiveTask;    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask");
static_assert(sizeof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask) == 0x000070, "Wrong size on BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, __WorldContext) == 0x000000, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, IsActiveTask) == 0x000008, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::IsActiveTask' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, CallFunc_BPI_GetUIManager_UIManager) == 0x000030, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000038, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, CallFunc_BPI_GetDLCAnnouncer_outActor) == 0x000050, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::CallFunc_BPI_GetDLCAnnouncer_outActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_AsBPI_DLCAnnouncer) == 0x000058, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_AsBPI_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask, CallFunc_BPI_IsActiveAnnounceTask_IsActiveTask) == 0x000069, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_IsActiveAnnounceTask::CallFunc_BPI_IsActiveAnnounceTask_IsActiveTask' has a wrong offset!");

// Function BPL_DlcCheck.BPL_DlcCheck_C.BPL_DlcAnnouncer_GetDelegateCheckActor
// 0x0078 (0x0078 - 0x0000)
struct BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DLCAnnouncer_DelegateChecker_C*     OutActor;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BPI_GetDLCAnnouncer_outActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DLCAnnouncer_C>   K2Node_DynamicCast_AsBPI_DLCAnnouncer;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DLCAnnouncer_DelegateChecker_C*     CallFunc_BPI_GetDelegateCheckActor_OutActor;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor) == 0x000008, "Wrong alignment on BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor");
static_assert(sizeof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor) == 0x000078, "Wrong size on BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, __WorldContext) == 0x000000, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, OutActor) == 0x000008, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::OutActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, CallFunc_BPI_GetUIManager_UIManager) == 0x000030, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000038, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, CallFunc_BPI_GetDLCAnnouncer_outActor) == 0x000050, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::CallFunc_BPI_GetDLCAnnouncer_outActor' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_AsBPI_DLCAnnouncer) == 0x000058, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_AsBPI_DLCAnnouncer' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor, CallFunc_BPI_GetDelegateCheckActor_OutActor) == 0x000070, "Member 'BPL_DlcCheck_C_BPL_DlcAnnouncer_GetDelegateCheckActor::CallFunc_BPI_GetDelegateCheckActor_OutActor' has a wrong offset!");

}

