#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePostProcessActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattlePostProcessActor.BattlePostProcessActor_C
// 0x0020 (0x0240 - 0x0220)
class ABattlePostProcessActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABattlePostProcessVolume*               M_PostVolume;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PostVolumeClass;                                   // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattlePostProcessActor(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePostProcessActor_C">();
	}
	static class ABattlePostProcessActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattlePostProcessActor_C>();
	}
};
static_assert(alignof(ABattlePostProcessActor_C) == 0x000008, "Wrong alignment on ABattlePostProcessActor_C");
static_assert(sizeof(ABattlePostProcessActor_C) == 0x000240, "Wrong size on ABattlePostProcessActor_C");
static_assert(offsetof(ABattlePostProcessActor_C, UberGraphFrame) == 0x000220, "Member 'ABattlePostProcessActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattlePostProcessActor_C, DefaultSceneRoot) == 0x000228, "Member 'ABattlePostProcessActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattlePostProcessActor_C, M_PostVolume) == 0x000230, "Member 'ABattlePostProcessActor_C::M_PostVolume' has a wrong offset!");
static_assert(offsetof(ABattlePostProcessActor_C, PostVolumeClass) == 0x000238, "Member 'ABattlePostProcessActor_C::PostVolumeClass' has a wrong offset!");

}

