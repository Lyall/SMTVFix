#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_Logo

#include "Basic.hpp"


namespace SDK::Params
{

// Function LV_Logo.LV_Logo_C.ExecuteUbergraph_LV_Logo
// 0x0010 (0x0010 - 0x0000)
struct LV_Logo_C_ExecuteUbergraph_LV_Logo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectGCManager*                      CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LV_Logo_C_ExecuteUbergraph_LV_Logo) == 0x000008, "Wrong alignment on LV_Logo_C_ExecuteUbergraph_LV_Logo");
static_assert(sizeof(LV_Logo_C_ExecuteUbergraph_LV_Logo) == 0x000010, "Wrong size on LV_Logo_C_ExecuteUbergraph_LV_Logo");
static_assert(offsetof(LV_Logo_C_ExecuteUbergraph_LV_Logo, EntryPoint) == 0x000000, "Member 'LV_Logo_C_ExecuteUbergraph_LV_Logo::EntryPoint' has a wrong offset!");
static_assert(offsetof(LV_Logo_C_ExecuteUbergraph_LV_Logo, CallFunc_Get_ReturnValue) == 0x000008, "Member 'LV_Logo_C_ExecuteUbergraph_LV_Logo::CallFunc_Get_ReturnValue' has a wrong offset!");

}

