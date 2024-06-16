#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CoasterGimmick

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_CoasterGimmick.BPI_CoasterGimmick_C.BPI_CheckExist
// 0x0001 (0x0001 - 0x0000)
struct BPI_CoasterGimmick_C_BPI_CheckExist final
{
public:
	bool                                          Exist;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CoasterGimmick_C_BPI_CheckExist) == 0x000001, "Wrong alignment on BPI_CoasterGimmick_C_BPI_CheckExist");
static_assert(sizeof(BPI_CoasterGimmick_C_BPI_CheckExist) == 0x000001, "Wrong size on BPI_CoasterGimmick_C_BPI_CheckExist");
static_assert(offsetof(BPI_CoasterGimmick_C_BPI_CheckExist, Exist) == 0x000000, "Member 'BPI_CoasterGimmick_C_BPI_CheckExist::Exist' has a wrong offset!");

// Function BPI_CoasterGimmick.BPI_CoasterGimmick_C.BPI_CheckActive_WhenFlag
// 0x0001 (0x0001 - 0x0000)
struct BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag) == 0x000001, "Wrong alignment on BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag");
static_assert(sizeof(BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag) == 0x000001, "Wrong size on BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag");
static_assert(offsetof(BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag, Active) == 0x000000, "Member 'BPI_CoasterGimmick_C_BPI_CheckActive_WhenFlag::Active' has a wrong offset!");

// Function BPI_CoasterGimmick.BPI_CoasterGimmick_C.BPI_GetMinimapDataID
// 0x0004 (0x0004 - 0x0000)
struct BPI_CoasterGimmick_C_BPI_GetMinimapDataID final
{
public:
	int32                                         DataId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CoasterGimmick_C_BPI_GetMinimapDataID) == 0x000004, "Wrong alignment on BPI_CoasterGimmick_C_BPI_GetMinimapDataID");
static_assert(sizeof(BPI_CoasterGimmick_C_BPI_GetMinimapDataID) == 0x000004, "Wrong size on BPI_CoasterGimmick_C_BPI_GetMinimapDataID");
static_assert(offsetof(BPI_CoasterGimmick_C_BPI_GetMinimapDataID, DataId) == 0x000000, "Member 'BPI_CoasterGimmick_C_BPI_GetMinimapDataID::DataId' has a wrong offset!");

}
