#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPlayerChange

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_PLAYER_MANAGER_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventPlayerChange.BP_EventPlayerChange_C
// 0x0060 (0x0280 - 0x0220)
class ABP_EventPlayerChange_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APlayerBase_C*                          NewPlayer;                                         // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71D2[0x8];                                     // 0x0238(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PlayerTransform;                                   // 0x0240(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               ControllerRotation;                                // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventPlayerChange(int32 EntryPoint);
	void ChangePlayerEx(class UClass* Param_Class);
	void ReturnPlayer(E_PLAYER_MANAGER_TYPE Select);
	void ChangePlayer(class UClass* PlayerBase);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventPlayerChange_C">();
	}
	static class ABP_EventPlayerChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventPlayerChange_C>();
	}
};
static_assert(alignof(ABP_EventPlayerChange_C) == 0x000010, "Wrong alignment on ABP_EventPlayerChange_C");
static_assert(sizeof(ABP_EventPlayerChange_C) == 0x000280, "Wrong size on ABP_EventPlayerChange_C");
static_assert(offsetof(ABP_EventPlayerChange_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventPlayerChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventPlayerChange_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EventPlayerChange_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventPlayerChange_C, NewPlayer) == 0x000230, "Member 'ABP_EventPlayerChange_C::NewPlayer' has a wrong offset!");
static_assert(offsetof(ABP_EventPlayerChange_C, PlayerTransform) == 0x000240, "Member 'ABP_EventPlayerChange_C::PlayerTransform' has a wrong offset!");
static_assert(offsetof(ABP_EventPlayerChange_C, ControllerRotation) == 0x000270, "Member 'ABP_EventPlayerChange_C::ControllerRotation' has a wrong offset!");

}

