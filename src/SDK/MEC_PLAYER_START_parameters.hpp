#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_PLAYER_START

#include "Basic.hpp"


namespace SDK::Params
{

// Function MEC_PLAYER_START.MEC_PLAYER_START_C.ExecuteUbergraph_MEC_PLAYER_START
// 0x0048 (0x0048 - 0x0000)
struct MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9798[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9799[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START) == 0x000008, "Wrong alignment on MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START");
static_assert(sizeof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START) == 0x000048, "Wrong size on MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, EntryPoint) == 0x000000, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::EntryPoint' has a wrong offset!");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, CallFunc_GetMapCommon_rerutn) == 0x000008, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, K2Node_DynamicCast_AsBPI_Map_Common) == 0x000010, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, CallFunc_GetDisplayName_ReturnValue) == 0x000028, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'MEC_PLAYER_START_C_ExecuteUbergraph_MEC_PLAYER_START::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

