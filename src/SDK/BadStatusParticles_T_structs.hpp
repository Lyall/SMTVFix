#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BadStatusParticles_T

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK
{

// UserDefinedStruct BadStatusParticles_T.BadStatusParticles_T
// 0x0060 (0x0060 - 0x0000)
struct FBadStatusParticles_T final
{
public:
	E_BAD_STATUS                                  BadStatusKind_3_395862E342801E9967FA3191D289B83C;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_BAD_STATUS_APPEAR                     AppearTiming_6_CF5C4D5F40DA820802E878930D86B5AA;   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2367[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName_13_6D3FF7F04554E2B76F46A58BC8D112BF;    // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2368[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UParticleSystem>         Effect_15_57379A3C4486EF40F97E1BB248625735;        // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundAtomCue>           SE_20_DDD1F89B44FBBFB39AD70497DD1DA2C9;            // 0x0038(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FBadStatusParticles_T) == 0x000008, "Wrong alignment on FBadStatusParticles_T");
static_assert(sizeof(FBadStatusParticles_T) == 0x000060, "Wrong size on FBadStatusParticles_T");
static_assert(offsetof(FBadStatusParticles_T, BadStatusKind_3_395862E342801E9967FA3191D289B83C) == 0x000000, "Member 'FBadStatusParticles_T::BadStatusKind_3_395862E342801E9967FA3191D289B83C' has a wrong offset!");
static_assert(offsetof(FBadStatusParticles_T, AppearTiming_6_CF5C4D5F40DA820802E878930D86B5AA) == 0x000001, "Member 'FBadStatusParticles_T::AppearTiming_6_CF5C4D5F40DA820802E878930D86B5AA' has a wrong offset!");
static_assert(offsetof(FBadStatusParticles_T, SocketName_13_6D3FF7F04554E2B76F46A58BC8D112BF) == 0x000004, "Member 'FBadStatusParticles_T::SocketName_13_6D3FF7F04554E2B76F46A58BC8D112BF' has a wrong offset!");
static_assert(offsetof(FBadStatusParticles_T, Effect_15_57379A3C4486EF40F97E1BB248625735) == 0x000010, "Member 'FBadStatusParticles_T::Effect_15_57379A3C4486EF40F97E1BB248625735' has a wrong offset!");
static_assert(offsetof(FBadStatusParticles_T, SE_20_DDD1F89B44FBBFB39AD70497DD1DA2C9) == 0x000038, "Member 'FBadStatusParticles_T::SE_20_DDD1F89B44FBBFB39AD70497DD1DA2C9' has a wrong offset!");

}

