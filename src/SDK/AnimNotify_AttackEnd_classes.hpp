#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AttackEnd

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_AttackEnd.AnimNotify_AttackEnd_C
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_AttackEnd_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_AttackEnd_C">();
	}
	static class UAnimNotify_AttackEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_AttackEnd_C>();
	}
};
static_assert(alignof(UAnimNotify_AttackEnd_C) == 0x000008, "Wrong alignment on UAnimNotify_AttackEnd_C");
static_assert(sizeof(UAnimNotify_AttackEnd_C) == 0x000038, "Wrong size on UAnimNotify_AttackEnd_C");

}

