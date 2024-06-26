#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DAF_Base

#include "Basic.hpp"


namespace SDK::Params
{

// Function DAF_Base.DAF_Base_C.ExecuteUbergraph_DAF_Base
// 0x0008 (0x0008 - 0x0000)
struct DAF_Base_C_ExecuteUbergraph_DAF_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DAF_Base_C_ExecuteUbergraph_DAF_Base) == 0x000004, "Wrong alignment on DAF_Base_C_ExecuteUbergraph_DAF_Base");
static_assert(sizeof(DAF_Base_C_ExecuteUbergraph_DAF_Base) == 0x000008, "Wrong size on DAF_Base_C_ExecuteUbergraph_DAF_Base");
static_assert(offsetof(DAF_Base_C_ExecuteUbergraph_DAF_Base, EntryPoint) == 0x000000, "Member 'DAF_Base_C_ExecuteUbergraph_DAF_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(DAF_Base_C_ExecuteUbergraph_DAF_Base, K2Node_CustomEvent_Visible) == 0x000004, "Member 'DAF_Base_C_ExecuteUbergraph_DAF_Base::K2Node_CustomEvent_Visible' has a wrong offset!");

// Function DAF_Base.DAF_Base_C.Visible
// 0x0001 (0x0001 - 0x0000)
struct DAF_Base_C_Visible final
{
public:
	bool                                          Param_Visible;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DAF_Base_C_Visible) == 0x000001, "Wrong alignment on DAF_Base_C_Visible");
static_assert(sizeof(DAF_Base_C_Visible) == 0x000001, "Wrong size on DAF_Base_C_Visible");
static_assert(offsetof(DAF_Base_C_Visible, Param_Visible) == 0x000000, "Member 'DAF_Base_C_Visible::Param_Visible' has a wrong offset!");

}

