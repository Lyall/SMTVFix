#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaBaseTable

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_CharaBaseTable.BPI_CharaBaseTable_C.BI_SetCharaTable
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaBaseTable_C_BI_SetCharaTable final
{
public:
	class UObject*                                CharaTable;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaBaseTable_C_BI_SetCharaTable) == 0x000008, "Wrong alignment on BPI_CharaBaseTable_C_BI_SetCharaTable");
static_assert(sizeof(BPI_CharaBaseTable_C_BI_SetCharaTable) == 0x000008, "Wrong size on BPI_CharaBaseTable_C_BI_SetCharaTable");
static_assert(offsetof(BPI_CharaBaseTable_C_BI_SetCharaTable, CharaTable) == 0x000000, "Member 'BPI_CharaBaseTable_C_BI_SetCharaTable::CharaTable' has a wrong offset!");

// Function BPI_CharaBaseTable.BPI_CharaBaseTable_C.BI_GetCharaTable
// 0x0008 (0x0008 - 0x0000)
struct BPI_CharaBaseTable_C_BI_GetCharaTable final
{
public:
	class UObject*                                Instance;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_CharaBaseTable_C_BI_GetCharaTable) == 0x000008, "Wrong alignment on BPI_CharaBaseTable_C_BI_GetCharaTable");
static_assert(sizeof(BPI_CharaBaseTable_C_BI_GetCharaTable) == 0x000008, "Wrong size on BPI_CharaBaseTable_C_BI_GetCharaTable");
static_assert(offsetof(BPI_CharaBaseTable_C_BI_GetCharaTable, Instance) == 0x000000, "Member 'BPI_CharaBaseTable_C_BI_GetCharaTable::Instance' has a wrong offset!");

}

