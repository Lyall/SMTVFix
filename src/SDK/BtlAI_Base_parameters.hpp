#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BtlAI_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function BtlAI_Base.BtlAI_Base_C.ExecuteUbergraph_BtlAI_Base
// 0x0004 (0x0004 - 0x0000)
struct BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base) == 0x000004, "Wrong alignment on BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base");
static_assert(sizeof(BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base) == 0x000004, "Wrong size on BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base");
static_assert(offsetof(BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base, EntryPoint) == 0x000000, "Member 'BtlAI_Base_C_ExecuteUbergraph_BtlAI_Base::EntryPoint' has a wrong offset!");

// Function BtlAI_Base.BtlAI_Base_C.IsFinished
// 0x0002 (0x0002 - 0x0000)
struct BtlAI_Base_C_IsFinished final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BtlAI_Base_C_IsFinished) == 0x000001, "Wrong alignment on BtlAI_Base_C_IsFinished");
static_assert(sizeof(BtlAI_Base_C_IsFinished) == 0x000002, "Wrong size on BtlAI_Base_C_IsFinished");
static_assert(offsetof(BtlAI_Base_C_IsFinished, RetValue) == 0x000000, "Member 'BtlAI_Base_C_IsFinished::RetValue' has a wrong offset!");
static_assert(offsetof(BtlAI_Base_C_IsFinished, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BtlAI_Base_C_IsFinished::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BtlAI_Base.BtlAI_Base_C.GetBPIAICommand
// 0x0038 (0x0038 - 0x0000)
struct BtlAI_Base_C_GetBPIAICommand final
{
public:
	TScriptInterface<class IBPI_AICommand_C>      RetValue;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BPL_GetBIBattleMain_retValue;             // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BPL_GetBIBattleMain_success;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5349[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_AICommand_C>      CallFunc_BI_GetAICommand_ret;                      // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BtlAI_Base_C_GetBPIAICommand) == 0x000008, "Wrong alignment on BtlAI_Base_C_GetBPIAICommand");
static_assert(sizeof(BtlAI_Base_C_GetBPIAICommand) == 0x000038, "Wrong size on BtlAI_Base_C_GetBPIAICommand");
static_assert(offsetof(BtlAI_Base_C_GetBPIAICommand, RetValue) == 0x000000, "Member 'BtlAI_Base_C_GetBPIAICommand::RetValue' has a wrong offset!");
static_assert(offsetof(BtlAI_Base_C_GetBPIAICommand, CallFunc_BPL_GetBIBattleMain_retValue) == 0x000010, "Member 'BtlAI_Base_C_GetBPIAICommand::CallFunc_BPL_GetBIBattleMain_retValue' has a wrong offset!");
static_assert(offsetof(BtlAI_Base_C_GetBPIAICommand, CallFunc_BPL_GetBIBattleMain_success) == 0x000020, "Member 'BtlAI_Base_C_GetBPIAICommand::CallFunc_BPL_GetBIBattleMain_success' has a wrong offset!");
static_assert(offsetof(BtlAI_Base_C_GetBPIAICommand, CallFunc_BI_GetAICommand_ret) == 0x000028, "Member 'BtlAI_Base_C_GetBPIAICommand::CallFunc_BI_GetAICommand_ret' has a wrong offset!");

}

