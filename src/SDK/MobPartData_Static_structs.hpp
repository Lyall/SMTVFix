#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobPartData_Static

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MobPartData_Static.MobPartData_Static
// 0x0030 (0x0030 - 0x0000)
struct FMobPartData_Static final
{
public:
	int32                                         ID_3_EEFE0CCD4A656826181DFBAEF72666FB;             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2611[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UStaticMesh>             Mesh_6_1AEF352445E122E13AF7AD9B0884F804;           // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FMobPartData_Static) == 0x000008, "Wrong alignment on FMobPartData_Static");
static_assert(sizeof(FMobPartData_Static) == 0x000030, "Wrong size on FMobPartData_Static");
static_assert(offsetof(FMobPartData_Static, ID_3_EEFE0CCD4A656826181DFBAEF72666FB) == 0x000000, "Member 'FMobPartData_Static::ID_3_EEFE0CCD4A656826181DFBAEF72666FB' has a wrong offset!");
static_assert(offsetof(FMobPartData_Static, Mesh_6_1AEF352445E122E13AF7AD9B0884F804) == 0x000008, "Member 'FMobPartData_Static::Mesh_6_1AEF352445E122E13AF7AD9B0884F804' has a wrong offset!");

}

