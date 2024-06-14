#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SymbolActRecord

#include "Basic.hpp"

#include "E_MapSymbolState_structs.hpp"
#include "SymbolActPattern_structs.hpp"


namespace SDK
{

// UserDefinedStruct SymbolActRecord.SymbolActRecord
// 0x0020 (0x0020 - 0x0000)
struct FSymbolActRecord final
{
public:
	E_MapSymbolState                              SymbolState_3_3016C4A94B42533D4D7CB098F905553D;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FC1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ActIndex_5_9BCE159344FC560F60EAB8BC1188B470;       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSymbolActPattern>              ActList_9_A13E990844FD21872629298DC7161078;        // 0x0008(0x0010)(Edit, BlueprintVisible)
	bool                                          SplineReverse_11_F1DCE6BD4D8F9A4173272298C67AA58F; // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSymbolActRecord) == 0x000008, "Wrong alignment on FSymbolActRecord");
static_assert(sizeof(FSymbolActRecord) == 0x000020, "Wrong size on FSymbolActRecord");
static_assert(offsetof(FSymbolActRecord, SymbolState_3_3016C4A94B42533D4D7CB098F905553D) == 0x000000, "Member 'FSymbolActRecord::SymbolState_3_3016C4A94B42533D4D7CB098F905553D' has a wrong offset!");
static_assert(offsetof(FSymbolActRecord, ActIndex_5_9BCE159344FC560F60EAB8BC1188B470) == 0x000004, "Member 'FSymbolActRecord::ActIndex_5_9BCE159344FC560F60EAB8BC1188B470' has a wrong offset!");
static_assert(offsetof(FSymbolActRecord, ActList_9_A13E990844FD21872629298DC7161078) == 0x000008, "Member 'FSymbolActRecord::ActList_9_A13E990844FD21872629298DC7161078' has a wrong offset!");
static_assert(offsetof(FSymbolActRecord, SplineReverse_11_F1DCE6BD4D8F9A4173272298C67AA58F) == 0x000018, "Member 'FSymbolActRecord::SplineReverse_11_F1DCE6BD4D8F9A4173272298C67AA58F' has a wrong offset!");

}

