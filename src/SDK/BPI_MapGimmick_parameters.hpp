#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapGimmick

#include "Basic.hpp"

#include "E_MapGimmickHideReason_structs.hpp"


namespace SDK::Params
{

// Function BPI_MapGimmick.BPI_MapGimmick_C.BPI_ShowGimmick
// 0x0001 (0x0001 - 0x0000)
struct BPI_MapGimmick_C_BPI_ShowGimmick final
{
public:
	E_MapGimmickHideReason                        HideReason;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapGimmick_C_BPI_ShowGimmick) == 0x000001, "Wrong alignment on BPI_MapGimmick_C_BPI_ShowGimmick");
static_assert(sizeof(BPI_MapGimmick_C_BPI_ShowGimmick) == 0x000001, "Wrong size on BPI_MapGimmick_C_BPI_ShowGimmick");
static_assert(offsetof(BPI_MapGimmick_C_BPI_ShowGimmick, HideReason) == 0x000000, "Member 'BPI_MapGimmick_C_BPI_ShowGimmick::HideReason' has a wrong offset!");

// Function BPI_MapGimmick.BPI_MapGimmick_C.BPI_HideGimmick
// 0x0001 (0x0001 - 0x0000)
struct BPI_MapGimmick_C_BPI_HideGimmick final
{
public:
	E_MapGimmickHideReason                        HideReason;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapGimmick_C_BPI_HideGimmick) == 0x000001, "Wrong alignment on BPI_MapGimmick_C_BPI_HideGimmick");
static_assert(sizeof(BPI_MapGimmick_C_BPI_HideGimmick) == 0x000001, "Wrong size on BPI_MapGimmick_C_BPI_HideGimmick");
static_assert(offsetof(BPI_MapGimmick_C_BPI_HideGimmick, HideReason) == 0x000000, "Member 'BPI_MapGimmick_C_BPI_HideGimmick::HideReason' has a wrong offset!");

}

