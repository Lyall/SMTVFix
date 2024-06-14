#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapDebug_Garden_RepickDevils

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MapDebug_Garden_RepickDevils.BP_MapDebug_Garden_RepickDevils_C.ExecFunc
// 0x0058 (0x0058 - 0x0000)
struct BP_MapDebug_Garden_RepickDevils_C_ExecFunc final
{
public:
	class FName                                   ItemPathName;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_248B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Distance;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameMode_C>       K2Node_DynamicCast_AsBPI_Game_Mode;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_248C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGardenManager*                         CallFunc_GetGardenManager_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInGardenLevel_IsInGardenLevel;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_248D[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GardenManager_C>  K2Node_DynamicCast_AsBPI_Garden_Manager;           // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc) == 0x000008, "Wrong alignment on BP_MapDebug_Garden_RepickDevils_C_ExecFunc");
static_assert(sizeof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc) == 0x000058, "Wrong size on BP_MapDebug_Garden_RepickDevils_C_ExecFunc");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, ItemPathName) == 0x000000, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::ItemPathName' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, ReturnValue) == 0x000008, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, Distance) == 0x00000C, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::Distance' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, CallFunc_GetGameMode_ReturnValue) == 0x000010, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, K2Node_DynamicCast_AsBPI_Game_Mode) == 0x000018, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::K2Node_DynamicCast_AsBPI_Game_Mode' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, CallFunc_GetGardenManager_ReturnValue) == 0x000030, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::CallFunc_GetGardenManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, CallFunc_IsInGardenLevel_IsInGardenLevel) == 0x000038, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::CallFunc_IsInGardenLevel_IsInGardenLevel' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, K2Node_DynamicCast_AsBPI_Garden_Manager) == 0x000040, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::K2Node_DynamicCast_AsBPI_Garden_Manager' has a wrong offset!");
static_assert(offsetof(BP_MapDebug_Garden_RepickDevils_C_ExecFunc, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_MapDebug_Garden_RepickDevils_C_ExecFunc::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

