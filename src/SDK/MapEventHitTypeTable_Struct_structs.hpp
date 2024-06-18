#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEventHitTypeTable_Struct

#include "Basic.hpp"

#include "E_MEH_TYPE_structs.hpp"


namespace SDK
{

// UserDefinedStruct MapEventHitTypeTable_Struct.MapEventHitTypeTable_Struct
// 0x0018 (0x0018 - 0x0000)
struct FMapEventHitTypeTable_Struct final
{
public:
	E_MEH_TYPE                                    MEH_Type_9_12EB04AE44F0A307557EC2BCF4C03A45;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62C0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 HitName_6_030A4D634AE06B0EBF6BADA055966AA2;        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FMapEventHitTypeTable_Struct) == 0x000008, "Wrong alignment on FMapEventHitTypeTable_Struct");
static_assert(sizeof(FMapEventHitTypeTable_Struct) == 0x000018, "Wrong size on FMapEventHitTypeTable_Struct");
static_assert(offsetof(FMapEventHitTypeTable_Struct, MEH_Type_9_12EB04AE44F0A307557EC2BCF4C03A45) == 0x000000, "Member 'FMapEventHitTypeTable_Struct::MEH_Type_9_12EB04AE44F0A307557EC2BCF4C03A45' has a wrong offset!");
static_assert(offsetof(FMapEventHitTypeTable_Struct, HitName_6_030A4D634AE06B0EBF6BADA055966AA2) == 0x000008, "Member 'FMapEventHitTypeTable_Struct::HitName_6_030A4D634AE06B0EBF6BADA055966AA2' has a wrong offset!");

}

