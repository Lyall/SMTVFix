#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapSymbol

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_MapSymbol.BPI_MapSymbol_C.BPI_GetEncountArea
// 0x0008 (0x0008 - 0x0000)
struct BPI_MapSymbol_C_BPI_GetEncountArea final
{
public:
	class AActor*                                 EncountArea;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MapSymbol_C_BPI_GetEncountArea) == 0x000008, "Wrong alignment on BPI_MapSymbol_C_BPI_GetEncountArea");
static_assert(sizeof(BPI_MapSymbol_C_BPI_GetEncountArea) == 0x000008, "Wrong size on BPI_MapSymbol_C_BPI_GetEncountArea");
static_assert(offsetof(BPI_MapSymbol_C_BPI_GetEncountArea, EncountArea) == 0x000000, "Member 'BPI_MapSymbol_C_BPI_GetEncountArea::EncountArea' has a wrong offset!");

}
