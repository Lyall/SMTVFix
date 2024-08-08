#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionEventBase

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BP_MissionEventBase.BP_MissionEventBase_C.ExecuteUbergraph_BP_MissionEventBase
// 0x00D8 (0x00D8 - 0x0000)
struct BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetMissionName_ReturnValue;               // 0x0008(0x0018)(ConstParm)
	struct FMissionData                           CallFunc_GetMissionData_ReturnValue;               // 0x0020(0x00B8)(ConstParm)
};
static_assert(alignof(BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase) == 0x000008, "Wrong alignment on BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase");
static_assert(sizeof(BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase) == 0x0000D8, "Wrong size on BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase");
static_assert(offsetof(BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase, EntryPoint) == 0x000000, "Member 'BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase, CallFunc_GetMissionName_ReturnValue) == 0x000008, "Member 'BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase::CallFunc_GetMissionName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase, CallFunc_GetMissionData_ReturnValue) == 0x000020, "Member 'BP_MissionEventBase_C_ExecuteUbergraph_BP_MissionEventBase::CallFunc_GetMissionData_ReturnValue' has a wrong offset!");

// Function BP_MissionEventBase.BP_MissionEventBase_C.SetBtlResult
// 0x0001 (0x0001 - 0x0000)
struct BP_MissionEventBase_C_SetBtlResult final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MissionEventBase_C_SetBtlResult) == 0x000001, "Wrong alignment on BP_MissionEventBase_C_SetBtlResult");
static_assert(sizeof(BP_MissionEventBase_C_SetBtlResult) == 0x000001, "Wrong size on BP_MissionEventBase_C_SetBtlResult");
static_assert(offsetof(BP_MissionEventBase_C_SetBtlResult, Sw) == 0x000000, "Member 'BP_MissionEventBase_C_SetBtlResult::Sw' has a wrong offset!");

}

