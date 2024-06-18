#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapSymbolCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EncountData_st_structs.hpp"
#include "MapSymbolParam_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_MapAttackDamage_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapSymbolCollision.BP_MapSymbolCollision_C
// 0x0168 (0x0388 - 0x0220)
class ABP_MapSymbolCollision_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMapAttackEncount;                                // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_126F[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEncountData_st                        EncountData;                                       // 0x0240(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMapSymbolParam                        SymbolParam;                                       // 0x0268(0x00E0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EvtDis_Overlap;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         HalfHeight;                                        // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BoxSize;                                           // 0x0368(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAttack;                                          // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TouchEncountEnable;                                // 0x0375(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AttackEncountEnable;                               // 0x0376(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CollisionEnable;                                   // 0x0377(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         COLLISION_BOTTOM_ADD;                              // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1270[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          AttackCollision2;                                  // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_Overlap__DelegateSignature(bool MapAttackEncount, E_MapAttackDamage AttackDamage, class UPrimitiveComponent* AttackComponent);
	void ExecuteUbergraph_BP_MapSymbolCollision(int32 EntryPoint);
	void OnComponentBeginOverlap_AttackCollision2(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BPI_ReceiveMapAttack(const struct FMapAttackDamageData& MapAttackData);
	void ChangeAttackCollision(bool Attack);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InitSymbolParam();
	void UpdateSymbolParam(bool* Changed);
	void SetCollision(bool Sw);
	void SetTouchEncountEnable(bool Param_TouchEncountEnable);
	void SetAttackEncountEnable(bool Param_AttackEncountEnable);
	void GetBaseLocation(struct FVector* Location);
	void GetStopCollisionSize(struct FVector* Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapSymbolCollision_C">();
	}
	static class ABP_MapSymbolCollision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapSymbolCollision_C>();
	}
};
static_assert(alignof(ABP_MapSymbolCollision_C) == 0x000008, "Wrong alignment on ABP_MapSymbolCollision_C");
static_assert(sizeof(ABP_MapSymbolCollision_C) == 0x000388, "Wrong size on ABP_MapSymbolCollision_C");
static_assert(offsetof(ABP_MapSymbolCollision_C, UberGraphFrame) == 0x000220, "Member 'ABP_MapSymbolCollision_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, Box) == 0x000228, "Member 'ABP_MapSymbolCollision_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, Scene) == 0x000230, "Member 'ABP_MapSymbolCollision_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, IsMapAttackEncount) == 0x000238, "Member 'ABP_MapSymbolCollision_C::IsMapAttackEncount' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, EncountData) == 0x000240, "Member 'ABP_MapSymbolCollision_C::EncountData' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, SymbolParam) == 0x000268, "Member 'ABP_MapSymbolCollision_C::SymbolParam' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, EvtDis_Overlap) == 0x000348, "Member 'ABP_MapSymbolCollision_C::EvtDis_Overlap' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, HalfHeight) == 0x000358, "Member 'ABP_MapSymbolCollision_C::HalfHeight' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, Radius) == 0x00035C, "Member 'ABP_MapSymbolCollision_C::Radius' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, RowName) == 0x000360, "Member 'ABP_MapSymbolCollision_C::RowName' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, BoxSize) == 0x000368, "Member 'ABP_MapSymbolCollision_C::BoxSize' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, IsAttack) == 0x000374, "Member 'ABP_MapSymbolCollision_C::IsAttack' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, TouchEncountEnable) == 0x000375, "Member 'ABP_MapSymbolCollision_C::TouchEncountEnable' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, AttackEncountEnable) == 0x000376, "Member 'ABP_MapSymbolCollision_C::AttackEncountEnable' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, CollisionEnable) == 0x000377, "Member 'ABP_MapSymbolCollision_C::CollisionEnable' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, COLLISION_BOTTOM_ADD) == 0x000378, "Member 'ABP_MapSymbolCollision_C::COLLISION_BOTTOM_ADD' has a wrong offset!");
static_assert(offsetof(ABP_MapSymbolCollision_C, AttackCollision2) == 0x000380, "Member 'ABP_MapSymbolCollision_C::AttackCollision2' has a wrong offset!");

}

