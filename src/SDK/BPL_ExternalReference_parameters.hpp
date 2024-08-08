#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_ExternalReference

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_GetBIBattleMain
// 0x0060 (0x0060 - 0x0000)
struct BPL_ExternalReference_C_BPL_GetBIBattleMain final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     RetValue;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Success;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ExternalBattle_C> K2Node_DynamicCast_AsBPI_External_Battle;          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BI_GetBattleMain_retValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     K2Node_DynamicCast_AsBPI_Battle_Main;              // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_GetBIBattleMain) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_GetBIBattleMain");
static_assert(sizeof(BPL_ExternalReference_C_BPL_GetBIBattleMain) == 0x000060, "Wrong size on BPL_ExternalReference_C_BPL_GetBIBattleMain");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, Success) == 0x000018, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::Success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, CallFunc_GetGameInstance_ReturnValue) == 0x000020, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, K2Node_DynamicCast_AsBPI_External_Battle) == 0x000028, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::K2Node_DynamicCast_AsBPI_External_Battle' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, CallFunc_BI_GetBattleMain_retValue) == 0x000040, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::CallFunc_BI_GetBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, K2Node_DynamicCast_AsBPI_Battle_Main) == 0x000048, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::K2Node_DynamicCast_AsBPI_Battle_Main' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBIBattleMain, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BPL_ExternalReference_C_BPL_GetBIBattleMain::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_BattleDestroy
// 0x0020 (0x0020 - 0x0000)
struct BPL_ExternalReference_C_BPL_BattleDestroy final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_BattleDestroy) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_BattleDestroy");
static_assert(sizeof(BPL_ExternalReference_C_BPL_BattleDestroy) == 0x000020, "Wrong size on BPL_ExternalReference_C_BPL_BattleDestroy");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleDestroy, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_BattleDestroy::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleDestroy, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_BattleDestroy::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleDestroy, CallFunc_BPL_GetBIBattleMain_success) == 0x000018, "Member 'BPL_ExternalReference_C_BPL_BattleDestroy::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_IsBattleFinished
// 0x0028 (0x0028 - 0x0000)
struct BPL_ExternalReference_C_BPL_IsBattleFinished final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_BattleIsFinished_retValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_IsBattleFinished) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_IsBattleFinished");
static_assert(sizeof(BPL_ExternalReference_C_BPL_IsBattleFinished) == 0x000028, "Wrong size on BPL_ExternalReference_C_BPL_IsBattleFinished");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleFinished, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_IsBattleFinished::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleFinished, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_IsBattleFinished::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleFinished, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000010, "Member 'BPL_ExternalReference_C_BPL_IsBattleFinished::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleFinished, CallFunc_BPL_GetBIBattleMain_success) == 0x000020, "Member 'BPL_ExternalReference_C_BPL_IsBattleFinished::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleFinished, CallFunc_BI_BattleIsFinished_retValue) == 0x000021, "Member 'BPL_ExternalReference_C_BPL_IsBattleFinished::CallFunc_BI_BattleIsFinished_retValue' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_IsBattleExcuting
// 0x0028 (0x0028 - 0x0000)
struct BPL_ExternalReference_C_BPL_IsBattleExcuting final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_IsBattleExcuting) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_IsBattleExcuting");
static_assert(sizeof(BPL_ExternalReference_C_BPL_IsBattleExcuting) == 0x000028, "Wrong size on BPL_ExternalReference_C_BPL_IsBattleExcuting");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleExcuting, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_IsBattleExcuting::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleExcuting, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_IsBattleExcuting::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleExcuting, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000010, "Member 'BPL_ExternalReference_C_BPL_IsBattleExcuting::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_IsBattleExcuting, CallFunc_BPL_GetBIBattleMain_success) == 0x000020, "Member 'BPL_ExternalReference_C_BPL_IsBattleExcuting::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_GetBattleMapOutChara
// 0x00C0 (0x00C0 - 0x0000)
struct BPL_ExternalReference_C_BPL_GetBattleMapOutChara final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<E_BTL_CHAR_TYPE, TScriptInterface<class IBPI_CharaBaseAccessor_C>> RetValue;                                          // 0x0008(0x0050)(Parm, OutParm)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_BTL_CHAR_TYPE, TScriptInterface<class IBPI_CharaBaseAccessor_C>> CallFunc_BI_GetMapOutChara_retValue;               // 0x0070(0x0050)()
};
static_assert(alignof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_GetBattleMapOutChara");
static_assert(sizeof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara) == 0x0000C0, "Wrong size on BPL_ExternalReference_C_BPL_GetBattleMapOutChara");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_GetBattleMapOutChara::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_GetBattleMapOutChara::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000058, "Member 'BPL_ExternalReference_C_BPL_GetBattleMapOutChara::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara, CallFunc_BPL_GetBIBattleMain_success) == 0x000068, "Member 'BPL_ExternalReference_C_BPL_GetBattleMapOutChara::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleMapOutChara, CallFunc_BI_GetMapOutChara_retValue) == 0x000070, "Member 'BPL_ExternalReference_C_BPL_GetBattleMapOutChara::CallFunc_BI_GetMapOutChara_retValue' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_BattleCameraDestroy
// 0x0020 (0x0020 - 0x0000)
struct BPL_ExternalReference_C_BPL_BattleCameraDestroy final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_DestroyBattleCamera_retValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_BattleCameraDestroy) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_BattleCameraDestroy");
static_assert(sizeof(BPL_ExternalReference_C_BPL_BattleCameraDestroy) == 0x000020, "Wrong size on BPL_ExternalReference_C_BPL_BattleCameraDestroy");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleCameraDestroy, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_BattleCameraDestroy::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleCameraDestroy, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_BattleCameraDestroy::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleCameraDestroy, CallFunc_BPL_GetBIBattleMain_success) == 0x000018, "Member 'BPL_ExternalReference_C_BPL_BattleCameraDestroy::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_BattleCameraDestroy, CallFunc_BI_DestroyBattleCamera_retValue) == 0x000019, "Member 'BPL_ExternalReference_C_BPL_BattleCameraDestroy::CallFunc_BI_DestroyBattleCamera_retValue' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_GetBattleApplyResultData
// 0x0100 (0x0100 - 0x0000)
struct BPL_ExternalReference_C_BPL_GetBattleApplyResultData final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlApllyResultData                    RetValue;                                          // 0x0008(0x0070)(Parm, OutParm)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlApllyResultData                    CallFunc_BI_GetApplyResultData_retValue;           // 0x0090(0x0070)()
};
static_assert(alignof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_GetBattleApplyResultData");
static_assert(sizeof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData) == 0x000100, "Wrong size on BPL_ExternalReference_C_BPL_GetBattleApplyResultData");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_GetBattleApplyResultData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_GetBattleApplyResultData::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000078, "Member 'BPL_ExternalReference_C_BPL_GetBattleApplyResultData::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData, CallFunc_BPL_GetBIBattleMain_success) == 0x000088, "Member 'BPL_ExternalReference_C_BPL_GetBattleApplyResultData::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleApplyResultData, CallFunc_BI_GetApplyResultData_retValue) == 0x000090, "Member 'BPL_ExternalReference_C_BPL_GetBattleApplyResultData::CallFunc_BI_GetApplyResultData_retValue' has a wrong offset!");

// Function BPL_ExternalReference.BPL_ExternalReference_C.BPL_GetBattleFinishedState
// 0x0028 (0x0028 - 0x0000)
struct BPL_ExternalReference_C_BPL_GetBattleFinishedState final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_FINISHED_STATE                          RetValue;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaveSlot;                                          // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTL_FINISHED_STATE                          CallFunc_BI_GetFinishedState_state;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BI_GetFinishedState_saveSlot;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_ExternalReference_C_BPL_GetBattleFinishedState) == 0x000008, "Wrong alignment on BPL_ExternalReference_C_BPL_GetBattleFinishedState");
static_assert(sizeof(BPL_ExternalReference_C_BPL_GetBattleFinishedState) == 0x000028, "Wrong size on BPL_ExternalReference_C_BPL_GetBattleFinishedState");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, __WorldContext) == 0x000000, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, RetValue) == 0x000008, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::RetValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, SaveSlot) == 0x00000C, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::SaveSlot' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000010, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, CallFunc_BPL_GetBIBattleMain_success) == 0x000020, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, CallFunc_BI_GetFinishedState_state) == 0x000021, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::CallFunc_BI_GetFinishedState_state' has a wrong offset!");
static_assert(offsetof(BPL_ExternalReference_C_BPL_GetBattleFinishedState, CallFunc_BI_GetFinishedState_saveSlot) == 0x000024, "Member 'BPL_ExternalReference_C_BPL_GetBattleFinishedState::CallFunc_BI_GetFinishedState_saveSlot' has a wrong offset!");

}

