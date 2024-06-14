#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleAutoBattleCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.ExecuteUbergraph_BattleAutoBattleCtrl
// 0x0008 (0x0008 - 0x0000)
struct BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl) == 0x000004, "Wrong alignment on BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl");
static_assert(sizeof(BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl) == 0x000008, "Wrong size on BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl");
static_assert(offsetof(BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl, EntryPoint) == 0x000000, "Member 'BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BattleAutoBattleCtrl_C_ExecuteUbergraph_BattleAutoBattleCtrl::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BattleAutoBattleCtrl_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleAutoBattleCtrl_C_ReceiveTick) == 0x000004, "Wrong alignment on BattleAutoBattleCtrl_C_ReceiveTick");
static_assert(sizeof(BattleAutoBattleCtrl_C_ReceiveTick) == 0x000004, "Wrong size on BattleAutoBattleCtrl_C_ReceiveTick");
static_assert(offsetof(BattleAutoBattleCtrl_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BattleAutoBattleCtrl_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.IsAutoInputValid
// 0x0020 (0x0020 - 0x0000)
struct BattleAutoBattleCtrl_C_IsAutoInputValid final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_MainInterface>    CallFunc_GetMainInterface_AsBPI_Main_Interface;    // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTL_STEP                                    CallFunc_BI_GetStep_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_CheckBattleFlag_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_IsAutoInputValid) == 0x000008, "Wrong alignment on BattleAutoBattleCtrl_C_IsAutoInputValid");
static_assert(sizeof(BattleAutoBattleCtrl_C_IsAutoInputValid) == 0x000020, "Wrong size on BattleAutoBattleCtrl_C_IsAutoInputValid");
static_assert(offsetof(BattleAutoBattleCtrl_C_IsAutoInputValid, RetValue) == 0x000000, "Member 'BattleAutoBattleCtrl_C_IsAutoInputValid::RetValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_IsAutoInputValid, CallFunc_GetMainInterface_AsBPI_Main_Interface) == 0x000008, "Member 'BattleAutoBattleCtrl_C_IsAutoInputValid::CallFunc_GetMainInterface_AsBPI_Main_Interface' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_IsAutoInputValid, CallFunc_BI_GetStep_ReturnValue) == 0x000018, "Member 'BattleAutoBattleCtrl_C_IsAutoInputValid::CallFunc_BI_GetStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_IsAutoInputValid, CallFunc_BI_CheckBattleFlag_ReturnValue) == 0x000019, "Member 'BattleAutoBattleCtrl_C_IsAutoInputValid::CallFunc_BI_CheckBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_IsAutoInputValid, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'BattleAutoBattleCtrl_C_IsAutoInputValid::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.UpdateAutoState
// 0x0028 (0x0028 - 0x0000)
struct BattleAutoBattleCtrl_C_UpdateAutoState final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActionPadCheck_Success;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_1;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B4[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActionPadCheck_Success_2;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B5[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_MainInterface>    CallFunc_GetMainInterface_AsBPI_Main_Interface;    // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_CheckBattleFlag_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_UpdateAutoState) == 0x000008, "Wrong alignment on BattleAutoBattleCtrl_C_UpdateAutoState");
static_assert(sizeof(BattleAutoBattleCtrl_C_UpdateAutoState) == 0x000028, "Wrong size on BattleAutoBattleCtrl_C_UpdateAutoState");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, Temp_int_Variable) == 0x000000, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_IsActionPadCheck_Success) == 0x000004, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_IsActionPadCheck_Success' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_IsActionPadCheck_Success_1) == 0x000005, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_IsActionPadCheck_Success_1' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_Greater_IntInt_ReturnValue) == 0x000006, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_IsActionPadCheck_Success_2) == 0x00000C, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_IsActionPadCheck_Success_2' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_BooleanOR_ReturnValue_1) == 0x00000E, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_GetMainInterface_AsBPI_Main_Interface) == 0x000010, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_GetMainInterface_AsBPI_Main_Interface' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_BI_CheckBattleFlag_ReturnValue) == 0x000020, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_BI_CheckBattleFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateAutoState, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BattleAutoBattleCtrl_C_UpdateAutoState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.StartSeq
// 0x0018 (0x0018 - 0x0000)
struct BattleAutoBattleCtrl_C_StartSeq final
{
public:
	E_OPTION_CONTENT_SPEED_TYPE                   CallFunc_GetSkillSpeedAuto_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BattleDebugGetBattleSpeedEnableAuto_Enable; // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60B6[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BattleDebugGetBattleSpeedOverrideAuto_AutoSpeed; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBattleTempo_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleAutoBattleCtrl_C_StartSeq) == 0x000004, "Wrong alignment on BattleAutoBattleCtrl_C_StartSeq");
static_assert(sizeof(BattleAutoBattleCtrl_C_StartSeq) == 0x000018, "Wrong size on BattleAutoBattleCtrl_C_StartSeq");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_GetSkillSpeedAuto_ReturnValue) == 0x000000, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_GetSkillSpeedAuto_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_BattleDebugGetBattleSpeedEnableAuto_Enable) == 0x000001, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_BattleDebugGetBattleSpeedEnableAuto_Enable' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_BattleDebugGetBattleSpeedOverrideAuto_AutoSpeed) == 0x000008, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_BattleDebugGetBattleSpeedOverrideAuto_AutoSpeed' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_GetBattleTempo_ReturnValue) == 0x000010, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_GetBattleTempo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_StartSeq, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'BattleAutoBattleCtrl_C_StartSeq::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.PauseSeq
// 0x0001 (0x0001 - 0x0000)
struct BattleAutoBattleCtrl_C_PauseSeq final
{
public:
	bool                                          Pause;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_PauseSeq) == 0x000001, "Wrong alignment on BattleAutoBattleCtrl_C_PauseSeq");
static_assert(sizeof(BattleAutoBattleCtrl_C_PauseSeq) == 0x000001, "Wrong size on BattleAutoBattleCtrl_C_PauseSeq");
static_assert(offsetof(BattleAutoBattleCtrl_C_PauseSeq, Pause) == 0x000000, "Member 'BattleAutoBattleCtrl_C_PauseSeq::Pause' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.GetMainInterface
// 0x0030 (0x0030 - 0x0000)
struct BattleAutoBattleCtrl_C_GetMainInterface final
{
public:
	TScriptInterface<class IBPI_MainInterface>    AsBPI_Main_Interface;                              // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MainInterface>    K2Node_DynamicCast_AsBPI_Main_Interface;           // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_GetMainInterface) == 0x000008, "Wrong alignment on BattleAutoBattleCtrl_C_GetMainInterface");
static_assert(sizeof(BattleAutoBattleCtrl_C_GetMainInterface) == 0x000030, "Wrong size on BattleAutoBattleCtrl_C_GetMainInterface");
static_assert(offsetof(BattleAutoBattleCtrl_C_GetMainInterface, AsBPI_Main_Interface) == 0x000000, "Member 'BattleAutoBattleCtrl_C_GetMainInterface::AsBPI_Main_Interface' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_GetMainInterface, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BattleAutoBattleCtrl_C_GetMainInterface::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_GetMainInterface, K2Node_DynamicCast_AsBPI_Main_Interface) == 0x000018, "Member 'BattleAutoBattleCtrl_C_GetMainInterface::K2Node_DynamicCast_AsBPI_Main_Interface' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_GetMainInterface, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BattleAutoBattleCtrl_C_GetMainInterface::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.BeginAutoBattle
// 0x0010 (0x0010 - 0x0000)
struct BattleAutoBattleCtrl_C_BeginAutoBattle final
{
public:
	TScriptInterface<class IBPI_MainInterface>    CallFunc_GetMainInterface_AsBPI_Main_Interface;    // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_BeginAutoBattle) == 0x000008, "Wrong alignment on BattleAutoBattleCtrl_C_BeginAutoBattle");
static_assert(sizeof(BattleAutoBattleCtrl_C_BeginAutoBattle) == 0x000010, "Wrong size on BattleAutoBattleCtrl_C_BeginAutoBattle");
static_assert(offsetof(BattleAutoBattleCtrl_C_BeginAutoBattle, CallFunc_GetMainInterface_AsBPI_Main_Interface) == 0x000000, "Member 'BattleAutoBattleCtrl_C_BeginAutoBattle::CallFunc_GetMainInterface_AsBPI_Main_Interface' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.EndAutoBattle
// 0x0010 (0x0010 - 0x0000)
struct BattleAutoBattleCtrl_C_EndAutoBattle final
{
public:
	TScriptInterface<class IBPI_MainInterface>    CallFunc_GetMainInterface_AsBPI_Main_Interface;    // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_EndAutoBattle) == 0x000008, "Wrong alignment on BattleAutoBattleCtrl_C_EndAutoBattle");
static_assert(sizeof(BattleAutoBattleCtrl_C_EndAutoBattle) == 0x000010, "Wrong size on BattleAutoBattleCtrl_C_EndAutoBattle");
static_assert(offsetof(BattleAutoBattleCtrl_C_EndAutoBattle, CallFunc_GetMainInterface_AsBPI_Main_Interface) == 0x000000, "Member 'BattleAutoBattleCtrl_C_EndAutoBattle::CallFunc_GetMainInterface_AsBPI_Main_Interface' has a wrong offset!");

// Function BattleAutoBattleCtrl.BattleAutoBattleCtrl_C.UpdateComponent
// 0x0008 (0x0008 - 0x0000)
struct BattleAutoBattleCtrl_C_UpdateComponent final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ContinueUpdate;                                    // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAutoBattleCtrl_C_UpdateComponent) == 0x000004, "Wrong alignment on BattleAutoBattleCtrl_C_UpdateComponent");
static_assert(sizeof(BattleAutoBattleCtrl_C_UpdateComponent) == 0x000008, "Wrong size on BattleAutoBattleCtrl_C_UpdateComponent");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateComponent, Delta) == 0x000000, "Member 'BattleAutoBattleCtrl_C_UpdateComponent::Delta' has a wrong offset!");
static_assert(offsetof(BattleAutoBattleCtrl_C_UpdateComponent, ContinueUpdate) == 0x000004, "Member 'BattleAutoBattleCtrl_C_UpdateComponent::ContinueUpdate' has a wrong offset!");

}

