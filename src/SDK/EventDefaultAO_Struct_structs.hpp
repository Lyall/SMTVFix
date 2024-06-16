#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventDefaultAO_Struct

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct EventDefaultAO_Struct.EventDefaultAO_Struct
// 0x0570 (0x0570 - 0x0000)
struct FEventDefaultAO_Struct final
{
public:
	class APostProcessVolume*                     TargetPPV_6_CD6E9C0B4EF5EB40CB46D6BF7BD87845;      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8534[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   Setting_5_BAD4F7574D3A2E420DDE30B3EDFB76DD;        // 0x0010(0x0560)(Edit, BlueprintVisible)
};
static_assert(alignof(FEventDefaultAO_Struct) == 0x000010, "Wrong alignment on FEventDefaultAO_Struct");
static_assert(sizeof(FEventDefaultAO_Struct) == 0x000570, "Wrong size on FEventDefaultAO_Struct");
static_assert(offsetof(FEventDefaultAO_Struct, TargetPPV_6_CD6E9C0B4EF5EB40CB46D6BF7BD87845) == 0x000000, "Member 'FEventDefaultAO_Struct::TargetPPV_6_CD6E9C0B4EF5EB40CB46D6BF7BD87845' has a wrong offset!");
static_assert(offsetof(FEventDefaultAO_Struct, Setting_5_BAD4F7574D3A2E420DDE30B3EDFB76DD) == 0x000010, "Member 'FEventDefaultAO_Struct::Setting_5_BAD4F7574D3A2E420DDE30B3EDFB76DD' has a wrong offset!");

}
