#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MissionDebug

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPL_MissionDebug.BPL_MissionDebug_C.AddDebugMenuMission
// 0x0030 (0x0030 - 0x0000)
struct BPL_MissionDebug_C_AddDebugMenuMission final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMissionIdMax_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D76[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue;    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_MissionDebug_C_AddDebugMenuMission) == 0x000008, "Wrong alignment on BPL_MissionDebug_C_AddDebugMenuMission");
static_assert(sizeof(BPL_MissionDebug_C_AddDebugMenuMission) == 0x000030, "Wrong size on BPL_MissionDebug_C_AddDebugMenuMission");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, __WorldContext) == 0x000000, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_GetMissionIdMax_ReturnValue) == 0x000008, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_GetMissionIdMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_DebugMenu_DispName_L10N_Text) == 0x000010, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_DebugMenu_DispName_L10N_Text' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue) == 0x000024, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_AddDebugMenuItemTypeCheckBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_AddDebugMenuItemTypeParam_ReturnValue) == 0x000028, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_AddDebugMenuItemTypeParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_AddDebugMenuMission, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x00002C, "Member 'BPL_MissionDebug_C_AddDebugMenuMission::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");

// Function BPL_MissionDebug.BPL_MissionDebug_C.MissionDebug_GetMissionId
// 0x00E0 (0x00E0 - 0x0000)
struct BPL_MissionDebug_C_MissionDebug_GetMissionId final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MissionId;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D77[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDebugMenuItemData                     CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue; // 0x0010(0x00D0)()
};
static_assert(alignof(BPL_MissionDebug_C_MissionDebug_GetMissionId) == 0x000008, "Wrong alignment on BPL_MissionDebug_C_MissionDebug_GetMissionId");
static_assert(sizeof(BPL_MissionDebug_C_MissionDebug_GetMissionId) == 0x0000E0, "Wrong size on BPL_MissionDebug_C_MissionDebug_GetMissionId");
static_assert(offsetof(BPL_MissionDebug_C_MissionDebug_GetMissionId, __WorldContext) == 0x000000, "Member 'BPL_MissionDebug_C_MissionDebug_GetMissionId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_MissionDebug_GetMissionId, MissionId) == 0x000008, "Member 'BPL_MissionDebug_C_MissionDebug_GetMissionId::MissionId' has a wrong offset!");
static_assert(offsetof(BPL_MissionDebug_C_MissionDebug_GetMissionId, CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue) == 0x000010, "Member 'BPL_MissionDebug_C_MissionDebug_GetMissionId::CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue' has a wrong offset!");

}

