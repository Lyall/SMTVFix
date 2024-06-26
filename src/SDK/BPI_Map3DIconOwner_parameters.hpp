#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Map3DIconOwner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_Map3DIconOwner.BPI_Map3DIconOwner_C.BPI_Map3DIconGetWorldLocation
// 0x000C (0x000C - 0x0000)
struct BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation final
{
public:
	struct FVector                                WorldLocation;                                     // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation) == 0x000004, "Wrong alignment on BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation");
static_assert(sizeof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation) == 0x00000C, "Wrong size on BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation");
static_assert(offsetof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation, WorldLocation) == 0x000000, "Member 'BPI_Map3DIconOwner_C_BPI_Map3DIconGetWorldLocation::WorldLocation' has a wrong offset!");

// Function BPI_Map3DIconOwner.BPI_Map3DIconOwner_C.BPI_Map3DIconGetShouldBeRendered
// 0x0002 (0x0002 - 0x0000)
struct BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered final
{
public:
	bool                                          ShouldBeRendered;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Unknown;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered) == 0x000001, "Wrong alignment on BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered");
static_assert(sizeof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered) == 0x000002, "Wrong size on BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered");
static_assert(offsetof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered, ShouldBeRendered) == 0x000000, "Member 'BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered::ShouldBeRendered' has a wrong offset!");
static_assert(offsetof(BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered, Unknown) == 0x000001, "Member 'BPI_Map3DIconOwner_C_BPI_Map3DIconGetShouldBeRendered::Unknown' has a wrong offset!");

}

