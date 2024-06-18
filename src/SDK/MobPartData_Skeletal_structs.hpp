#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MobPartData_Skeletal

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MobPartData_Skeletal.MobPartData_Skeletal
// 0x0030 (0x0030 - 0x0000)
struct FMobPartData_Skeletal final
{
public:
	int32                                         ID_3_5D38C1B342A8861A7D8A05993A750E46;             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26FA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USkeletalMesh>           Mesh_6_D1A9672C48F12A6ED4E29888B464EA9C;           // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FMobPartData_Skeletal) == 0x000008, "Wrong alignment on FMobPartData_Skeletal");
static_assert(sizeof(FMobPartData_Skeletal) == 0x000030, "Wrong size on FMobPartData_Skeletal");
static_assert(offsetof(FMobPartData_Skeletal, ID_3_5D38C1B342A8861A7D8A05993A750E46) == 0x000000, "Member 'FMobPartData_Skeletal::ID_3_5D38C1B342A8861A7D8A05993A750E46' has a wrong offset!");
static_assert(offsetof(FMobPartData_Skeletal, Mesh_6_D1A9672C48F12A6ED4E29888B464EA9C) == 0x000008, "Member 'FMobPartData_Skeletal::Mesh_6_D1A9672C48F12A6ED4E29888B464EA9C' has a wrong offset!");

}

