#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterRelayPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoasterRelayPoint.BP_CoasterRelayPoint_C
// 0x0090 (0x02B0 - 0x0220)
class ABP_CoasterRelayPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          VisibleBox;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box7;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box6;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box5;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box4;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box3;                                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box2;                                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        AroundCollision;                                   // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DMIs;                                              // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Visible_ForHit;                                    // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Visible_ForRiding;                                 // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E60[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_CallVisible;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EvtDis_CallVisible__DelegateSignature(bool Visible);
	void ExecuteUbergraph_BP_CoasterRelayPoint(int32 EntryPoint);
	void BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetVisible(bool Visible);
	void SetAroundCollision(bool Enable);
	void MakeDMI();
	void SetVisible_FromRiding(bool Visible, bool* OutVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoasterRelayPoint_C">();
	}
	static class ABP_CoasterRelayPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CoasterRelayPoint_C>();
	}
};
static_assert(alignof(ABP_CoasterRelayPoint_C) == 0x000008, "Wrong alignment on ABP_CoasterRelayPoint_C");
static_assert(sizeof(ABP_CoasterRelayPoint_C) == 0x0002B0, "Wrong size on ABP_CoasterRelayPoint_C");
static_assert(offsetof(ABP_CoasterRelayPoint_C, UberGraphFrame) == 0x000220, "Member 'ABP_CoasterRelayPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, VisibleBox) == 0x000228, "Member 'ABP_CoasterRelayPoint_C::VisibleBox' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box7) == 0x000230, "Member 'ABP_CoasterRelayPoint_C::Box7' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box6) == 0x000238, "Member 'ABP_CoasterRelayPoint_C::Box6' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box5) == 0x000240, "Member 'ABP_CoasterRelayPoint_C::Box5' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box4) == 0x000248, "Member 'ABP_CoasterRelayPoint_C::Box4' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box3) == 0x000250, "Member 'ABP_CoasterRelayPoint_C::Box3' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box2) == 0x000258, "Member 'ABP_CoasterRelayPoint_C::Box2' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box1) == 0x000260, "Member 'ABP_CoasterRelayPoint_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Box) == 0x000268, "Member 'ABP_CoasterRelayPoint_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, AroundCollision) == 0x000270, "Member 'ABP_CoasterRelayPoint_C::AroundCollision' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, StaticMesh) == 0x000278, "Member 'ABP_CoasterRelayPoint_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_CoasterRelayPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, DMIs) == 0x000288, "Member 'ABP_CoasterRelayPoint_C::DMIs' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Visible_ForHit) == 0x000298, "Member 'ABP_CoasterRelayPoint_C::Visible_ForHit' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, Visible_ForRiding) == 0x000299, "Member 'ABP_CoasterRelayPoint_C::Visible_ForRiding' has a wrong offset!");
static_assert(offsetof(ABP_CoasterRelayPoint_C, EvtDis_CallVisible) == 0x0002A0, "Member 'ABP_CoasterRelayPoint_C::EvtDis_CallVisible' has a wrong offset!");

}

