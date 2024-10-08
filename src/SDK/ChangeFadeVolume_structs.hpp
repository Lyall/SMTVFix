#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChangeFadeVolume

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct ChangeFadeVolume.ChangeFadeVolume
// 0x000C (0x000C - 0x0000)
struct FChangeFadeVolume final
{
public:
	EOptionVolumeCategory                         Category_14_A6F25EEC4E8DB348B4E86180DE5226BB;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Volume_5_2FA096434D891A09287D43B77507133D;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_13_46704DBF436F665C4A4FF699DDD1DFBA;          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FChangeFadeVolume) == 0x000004, "Wrong alignment on FChangeFadeVolume");
static_assert(sizeof(FChangeFadeVolume) == 0x00000C, "Wrong size on FChangeFadeVolume");
static_assert(offsetof(FChangeFadeVolume, Category_14_A6F25EEC4E8DB348B4E86180DE5226BB) == 0x000000, "Member 'FChangeFadeVolume::Category_14_A6F25EEC4E8DB348B4E86180DE5226BB' has a wrong offset!");
static_assert(offsetof(FChangeFadeVolume, Volume_5_2FA096434D891A09287D43B77507133D) == 0x000004, "Member 'FChangeFadeVolume::Volume_5_2FA096434D891A09287D43B77507133D' has a wrong offset!");
static_assert(offsetof(FChangeFadeVolume, Time_13_46704DBF436F665C4A4FF699DDD1DFBA) == 0x000008, "Member 'FChangeFadeVolume::Time_13_46704DBF436F665C4A4FF699DDD1DFBA' has a wrong offset!");

}

