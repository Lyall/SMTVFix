#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_AttackTrail

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_AttackTrail.AnimNotify_AttackTrail_C
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_AttackTrail_C final : public UAnimNotify
{
public:
	class UParticleSystem*                        Template;                                          // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FirstSocket;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SecondSocket;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBegin;                                            // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	class FString GetNotifyName() const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_AttackTrail_C">();
	}
	static class UAnimNotify_AttackTrail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_AttackTrail_C>();
	}
};
static_assert(alignof(UAnimNotify_AttackTrail_C) == 0x000008, "Wrong alignment on UAnimNotify_AttackTrail_C");
static_assert(sizeof(UAnimNotify_AttackTrail_C) == 0x000058, "Wrong size on UAnimNotify_AttackTrail_C");
static_assert(offsetof(UAnimNotify_AttackTrail_C, Template) == 0x000038, "Member 'UAnimNotify_AttackTrail_C::Template' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AttackTrail_C, FirstSocket) == 0x000040, "Member 'UAnimNotify_AttackTrail_C::FirstSocket' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AttackTrail_C, SecondSocket) == 0x000048, "Member 'UAnimNotify_AttackTrail_C::SecondSocket' has a wrong offset!");
static_assert(offsetof(UAnimNotify_AttackTrail_C, bBegin) == 0x000050, "Member 'UAnimNotify_AttackTrail_C::bBegin' has a wrong offset!");

}

