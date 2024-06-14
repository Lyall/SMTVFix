#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerPawnEventTrigger

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerPawnEventTrigger.BP_PlayerPawnEventTrigger_C
// 0x0008 (0x0228 - 0x0220)
class ABP_PlayerPawnEventTrigger_C final : public AActor
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void EnableEventTrigger();
	void DisableEventTrigger();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerPawnEventTrigger_C">();
	}
	static class ABP_PlayerPawnEventTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerPawnEventTrigger_C>();
	}
};
static_assert(alignof(ABP_PlayerPawnEventTrigger_C) == 0x000008, "Wrong alignment on ABP_PlayerPawnEventTrigger_C");
static_assert(sizeof(ABP_PlayerPawnEventTrigger_C) == 0x000228, "Wrong size on ABP_PlayerPawnEventTrigger_C");
static_assert(offsetof(ABP_PlayerPawnEventTrigger_C, Capsule) == 0x000220, "Member 'ABP_PlayerPawnEventTrigger_C::Capsule' has a wrong offset!");

}

