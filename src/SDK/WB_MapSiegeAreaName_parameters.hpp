#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MapSiegeAreaName

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_MapSiegeAreaName.WB_MapSiegeAreaName_C.ExecuteUbergraph_WB_MapSiegeAreaName
// 0x0020 (0x0020 - 0x0000)
struct WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName) == 0x000008, "Wrong alignment on WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName");
static_assert(sizeof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName) == 0x000020, "Wrong size on WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName");
static_assert(offsetof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName, EntryPoint) == 0x000000, "Member 'WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WB_MapSiegeAreaName_C_ExecuteUbergraph_WB_MapSiegeAreaName::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WB_MapSiegeAreaName.WB_MapSiegeAreaName_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_MapSiegeAreaName_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MapSiegeAreaName_C_PreConstruct) == 0x000001, "Wrong alignment on WB_MapSiegeAreaName_C_PreConstruct");
static_assert(sizeof(WB_MapSiegeAreaName_C_PreConstruct) == 0x000001, "Wrong size on WB_MapSiegeAreaName_C_PreConstruct");
static_assert(offsetof(WB_MapSiegeAreaName_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_MapSiegeAreaName_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

