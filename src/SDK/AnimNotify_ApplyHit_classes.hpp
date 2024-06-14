#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ApplyHit

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_ApplyHit.AnimNotify_ApplyHit_C
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_ApplyHit_C final : public UAnimNotify
{
public:
	E_ANIM_NOTIFY_APPLY_HIT_TYPE                  M_Type;                                            // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IsBattleExcuting(bool* bSuccess) const;
	void Notice(const class FString& Str) const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_ApplyHit_C">();
	}
	static class UAnimNotify_ApplyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_ApplyHit_C>();
	}
};
static_assert(alignof(UAnimNotify_ApplyHit_C) == 0x000008, "Wrong alignment on UAnimNotify_ApplyHit_C");
static_assert(sizeof(UAnimNotify_ApplyHit_C) == 0x000040, "Wrong size on UAnimNotify_ApplyHit_C");
static_assert(offsetof(UAnimNotify_ApplyHit_C, M_Type) == 0x000038, "Member 'UAnimNotify_ApplyHit_C::M_Type' has a wrong offset!");

}

