#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DGPostProcessControl

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_DGPostProcessControl.BPI_DGPostProcessControl_C.BPI_SetEnableRate
// 0x0008 (0x0008 - 0x0000)
struct BPI_DGPostProcessControl_C_BPI_SetEnableRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dummy;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_DGPostProcessControl_C_BPI_SetEnableRate) == 0x000004, "Wrong alignment on BPI_DGPostProcessControl_C_BPI_SetEnableRate");
static_assert(sizeof(BPI_DGPostProcessControl_C_BPI_SetEnableRate) == 0x000008, "Wrong size on BPI_DGPostProcessControl_C_BPI_SetEnableRate");
static_assert(offsetof(BPI_DGPostProcessControl_C_BPI_SetEnableRate, Rate) == 0x000000, "Member 'BPI_DGPostProcessControl_C_BPI_SetEnableRate::Rate' has a wrong offset!");
static_assert(offsetof(BPI_DGPostProcessControl_C_BPI_SetEnableRate, Dummy) == 0x000004, "Member 'BPI_DGPostProcessControl_C_BPI_SetEnableRate::Dummy' has a wrong offset!");

}

