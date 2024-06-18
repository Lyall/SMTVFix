#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapAttacker

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_MapAttacker.BPI_MapAttacker_C.MapAttackActivate
// 0x0008 (0x0008 - 0x0000)
struct BPI_MapAttacker_C_MapAttackActivate final
{
public:
	bool                                          bActivate;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AttackID;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapAttacker_C_MapAttackActivate) == 0x000004, "Wrong alignment on BPI_MapAttacker_C_MapAttackActivate");
static_assert(sizeof(BPI_MapAttacker_C_MapAttackActivate) == 0x000008, "Wrong size on BPI_MapAttacker_C_MapAttackActivate");
static_assert(offsetof(BPI_MapAttacker_C_MapAttackActivate, bActivate) == 0x000000, "Member 'BPI_MapAttacker_C_MapAttackActivate::bActivate' has a wrong offset!");
static_assert(offsetof(BPI_MapAttacker_C_MapAttackActivate, AttackID) == 0x000004, "Member 'BPI_MapAttacker_C_MapAttackActivate::AttackID' has a wrong offset!");

}

