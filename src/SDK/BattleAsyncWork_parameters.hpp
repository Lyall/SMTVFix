#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleAsyncWork

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BattleAsyncWork.BattleAsyncWork_C.ExecuteUbergraph_BattleAsyncWork
// 0x0008 (0x0008 - 0x0000)
struct BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork) == 0x000004, "Wrong alignment on BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork");
static_assert(sizeof(BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork) == 0x000008, "Wrong size on BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork");
static_assert(offsetof(BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork, EntryPoint) == 0x000000, "Member 'BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BattleAsyncWork_C_ExecuteUbergraph_BattleAsyncWork::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BattleAsyncWork.BattleAsyncWork_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BattleAsyncWork_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleAsyncWork_C_ReceiveTick) == 0x000004, "Wrong alignment on BattleAsyncWork_C_ReceiveTick");
static_assert(sizeof(BattleAsyncWork_C_ReceiveTick) == 0x000004, "Wrong size on BattleAsyncWork_C_ReceiveTick");
static_assert(offsetof(BattleAsyncWork_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BattleAsyncWork_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BattleAsyncWork.BattleAsyncWork_C.GetSkillSettleCriticalResult
// 0x0020 (0x0020 - 0x0000)
struct BattleAsyncWork_C_GetSkillSettleCriticalResult final
{
public:
	TArray<struct FSkillCriticalValueOne>         RetValue;                                          // 0x0000(0x0010)(Parm, OutParm)
	TArray<struct FSkillCriticalValueOne>         Lo_Empty;                                          // 0x0010(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(BattleAsyncWork_C_GetSkillSettleCriticalResult) == 0x000008, "Wrong alignment on BattleAsyncWork_C_GetSkillSettleCriticalResult");
static_assert(sizeof(BattleAsyncWork_C_GetSkillSettleCriticalResult) == 0x000020, "Wrong size on BattleAsyncWork_C_GetSkillSettleCriticalResult");
static_assert(offsetof(BattleAsyncWork_C_GetSkillSettleCriticalResult, RetValue) == 0x000000, "Member 'BattleAsyncWork_C_GetSkillSettleCriticalResult::RetValue' has a wrong offset!");
static_assert(offsetof(BattleAsyncWork_C_GetSkillSettleCriticalResult, Lo_Empty) == 0x000010, "Member 'BattleAsyncWork_C_GetSkillSettleCriticalResult::Lo_Empty' has a wrong offset!");

// Function BattleAsyncWork.BattleAsyncWork_C.IsFinished
// 0x0001 (0x0001 - 0x0000)
struct BattleAsyncWork_C_IsFinished final
{
public:
	bool                                          Param_IsFinished;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleAsyncWork_C_IsFinished) == 0x000001, "Wrong alignment on BattleAsyncWork_C_IsFinished");
static_assert(sizeof(BattleAsyncWork_C_IsFinished) == 0x000001, "Wrong size on BattleAsyncWork_C_IsFinished");
static_assert(offsetof(BattleAsyncWork_C_IsFinished, Param_IsFinished) == 0x000000, "Member 'BattleAsyncWork_C_IsFinished::Param_IsFinished' has a wrong offset!");

}

