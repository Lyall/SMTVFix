#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BenefitSelectCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_BenefitSelectCtrl.BPI_BenefitSelectCtrl_C.IsEndBenefitDataLoad
// 0x0001 (0x0001 - 0x0000)
struct BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad) == 0x000001, "Wrong alignment on BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad");
static_assert(sizeof(BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad) == 0x000001, "Wrong size on BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad");
static_assert(offsetof(BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad, IsEnd) == 0x000000, "Member 'BPI_BenefitSelectCtrl_C_IsEndBenefitDataLoad::IsEnd' has a wrong offset!");

// Function BPI_BenefitSelectCtrl.BPI_BenefitSelectCtrl_C.IsEndBenefitSelectCtrl
// 0x0001 (0x0001 - 0x0000)
struct BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl final
{
public:
	bool                                          IsEnd;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl) == 0x000001, "Wrong alignment on BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl");
static_assert(sizeof(BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl) == 0x000001, "Wrong size on BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl");
static_assert(offsetof(BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl, IsEnd) == 0x000000, "Member 'BPI_BenefitSelectCtrl_C_IsEndBenefitSelectCtrl::IsEnd' has a wrong offset!");

// Function BPI_BenefitSelectCtrl.BPI_BenefitSelectCtrl_C.GetBenefitData
// 0x0038 (0x0038 - 0x0000)
struct BPI_BenefitSelectCtrl_C_GetBenefitData final
{
public:
	struct FBenefitData                           Data;                                              // 0x0000(0x0038)(Parm, OutParm)
};
static_assert(alignof(BPI_BenefitSelectCtrl_C_GetBenefitData) == 0x000008, "Wrong alignment on BPI_BenefitSelectCtrl_C_GetBenefitData");
static_assert(sizeof(BPI_BenefitSelectCtrl_C_GetBenefitData) == 0x000038, "Wrong size on BPI_BenefitSelectCtrl_C_GetBenefitData");
static_assert(offsetof(BPI_BenefitSelectCtrl_C_GetBenefitData, Data) == 0x000000, "Member 'BPI_BenefitSelectCtrl_C_GetBenefitData::Data' has a wrong offset!");

// Function BPI_BenefitSelectCtrl.BPI_BenefitSelectCtrl_C.IsExistBenefitData
// 0x0001 (0x0001 - 0x0000)
struct BPI_BenefitSelectCtrl_C_IsExistBenefitData final
{
public:
	bool                                          IsExist;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_BenefitSelectCtrl_C_IsExistBenefitData) == 0x000001, "Wrong alignment on BPI_BenefitSelectCtrl_C_IsExistBenefitData");
static_assert(sizeof(BPI_BenefitSelectCtrl_C_IsExistBenefitData) == 0x000001, "Wrong size on BPI_BenefitSelectCtrl_C_IsExistBenefitData");
static_assert(offsetof(BPI_BenefitSelectCtrl_C_IsExistBenefitData, IsExist) == 0x000000, "Member 'BPI_BenefitSelectCtrl_C_IsExistBenefitData::IsExist' has a wrong offset!");

}

