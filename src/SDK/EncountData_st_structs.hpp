#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountData_st

#include "Basic.hpp"

#include "EncountPointStruct_structs.hpp"


namespace SDK
{

// UserDefinedStruct EncountData_st.EncountData_st
// 0x0028 (0x0028 - 0x0000)
struct FEncountData_st final
{
public:
	bool                                          M_IsSymbol_1_B6E401004EB8445B85737F870AC53F1B;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6456[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 EnemyList_5_30044E834842031C2C758B9EBB41B6EE;      // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         EncountId_12_3F34C16C417CF23698AB698BB5AD0C58;     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncountPointStruct                    EncountDir_15_1FC227F4442D90F54E6925AB0795B6B5;    // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SymbolId_18_F025EFF44FEF2EA0691F13A2C734EBCD;      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FEncountData_st) == 0x000008, "Wrong alignment on FEncountData_st");
static_assert(sizeof(FEncountData_st) == 0x000028, "Wrong size on FEncountData_st");
static_assert(offsetof(FEncountData_st, M_IsSymbol_1_B6E401004EB8445B85737F870AC53F1B) == 0x000000, "Member 'FEncountData_st::M_IsSymbol_1_B6E401004EB8445B85737F870AC53F1B' has a wrong offset!");
static_assert(offsetof(FEncountData_st, EnemyList_5_30044E834842031C2C758B9EBB41B6EE) == 0x000008, "Member 'FEncountData_st::EnemyList_5_30044E834842031C2C758B9EBB41B6EE' has a wrong offset!");
static_assert(offsetof(FEncountData_st, EncountId_12_3F34C16C417CF23698AB698BB5AD0C58) == 0x000018, "Member 'FEncountData_st::EncountId_12_3F34C16C417CF23698AB698BB5AD0C58' has a wrong offset!");
static_assert(offsetof(FEncountData_st, EncountDir_15_1FC227F4442D90F54E6925AB0795B6B5) == 0x00001C, "Member 'FEncountData_st::EncountDir_15_1FC227F4442D90F54E6925AB0795B6B5' has a wrong offset!");
static_assert(offsetof(FEncountData_st, SymbolId_18_F025EFF44FEF2EA0691F13A2C734EBCD) == 0x000024, "Member 'FEncountData_st::SymbolId_18_F025EFF44FEF2EA0691F13A2C734EBCD' has a wrong offset!");

}

