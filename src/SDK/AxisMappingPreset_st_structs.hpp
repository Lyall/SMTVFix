#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AxisMappingPreset_st

#include "Basic.hpp"

#include "AxisKey_st_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct AxisMappingPreset_st.AxisMappingPreset_st
// 0x0018 (0x0018 - 0x0000)
struct FAxisMappingPreset_st final
{
public:
	E_AXIS_MAPPING_TYPE                           AxisMapping_4_5621AA934891B559D151CE91E0A0538F;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAxisKey_st>                    KeyList_7_D6F6B85040B49DC26ECCC4AF918C44F3;        // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FAxisMappingPreset_st) == 0x000008, "Wrong alignment on FAxisMappingPreset_st");
static_assert(sizeof(FAxisMappingPreset_st) == 0x000018, "Wrong size on FAxisMappingPreset_st");
static_assert(offsetof(FAxisMappingPreset_st, AxisMapping_4_5621AA934891B559D151CE91E0A0538F) == 0x000000, "Member 'FAxisMappingPreset_st::AxisMapping_4_5621AA934891B559D151CE91E0A0538F' has a wrong offset!");
static_assert(offsetof(FAxisMappingPreset_st, KeyList_7_D6F6B85040B49DC26ECCC4AF918C44F3) == 0x000008, "Member 'FAxisMappingPreset_st::KeyList_7_D6F6B85040B49DC26ECCC4AF918C44F3' has a wrong offset!");

}

