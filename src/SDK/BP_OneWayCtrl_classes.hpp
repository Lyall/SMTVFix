#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OneWayCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OneWayCtrl.BP_OneWayCtrl_C
// 0x0050 (0x0270 - 0x0220)
class ABP_OneWayCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AStaticMeshActor*>               StaticMeshes;                                      // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class FName                                   OnFlag;                                            // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           BlockProfiles;                                     // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                MoveNormal;                                        // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B07[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATriggerBase*                           ForceOnFlagTrigger;                                // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_OneWayCtrl(int32 EntryPoint);
	void _________0(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveBeginPlay();
	void Init();
	void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginOverlap_ForceOnFlag(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OneWayCtrl_C">();
	}
	static class ABP_OneWayCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OneWayCtrl_C>();
	}
};
static_assert(alignof(ABP_OneWayCtrl_C) == 0x000008, "Wrong alignment on ABP_OneWayCtrl_C");
static_assert(sizeof(ABP_OneWayCtrl_C) == 0x000270, "Wrong size on ABP_OneWayCtrl_C");
static_assert(offsetof(ABP_OneWayCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_OneWayCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_OneWayCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, StaticMeshes) == 0x000230, "Member 'ABP_OneWayCtrl_C::StaticMeshes' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, OnFlag) == 0x000240, "Member 'ABP_OneWayCtrl_C::OnFlag' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, BlockProfiles) == 0x000248, "Member 'ABP_OneWayCtrl_C::BlockProfiles' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, MoveNormal) == 0x000258, "Member 'ABP_OneWayCtrl_C::MoveNormal' has a wrong offset!");
static_assert(offsetof(ABP_OneWayCtrl_C, ForceOnFlagTrigger) == 0x000268, "Member 'ABP_OneWayCtrl_C::ForceOnFlagTrigger' has a wrong offset!");

}

