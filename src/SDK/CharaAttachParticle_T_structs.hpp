#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaAttachParticle_T

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct CharaAttachParticle_T.CharaAttachParticle_T
// 0x0028 (0x0028 - 0x0000)
struct FCharaAttachParticle_T final
{
public:
	TSoftObjectPtr<class UParticleSystem>         ParticleSys_2_CCB73611484CA7FB8E9D568D5FF98487;    // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FCharaAttachParticle_T) == 0x000008, "Wrong alignment on FCharaAttachParticle_T");
static_assert(sizeof(FCharaAttachParticle_T) == 0x000028, "Wrong size on FCharaAttachParticle_T");
static_assert(offsetof(FCharaAttachParticle_T, ParticleSys_2_CCB73611484CA7FB8E9D568D5FF98487) == 0x000000, "Member 'FCharaAttachParticle_T::ParticleSys_2_CCB73611484CA7FB8E9D568D5FF98487' has a wrong offset!");

}

