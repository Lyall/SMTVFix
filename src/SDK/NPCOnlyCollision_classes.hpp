#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCOnlyCollision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NPCOnlyCollision.NPCOnlyCollision_C
// 0x0040 (0x0260 - 0x0220)
class ANPCOnlyCollision_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      Capsule;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______1___Track_0_DBC53D4B429CB144F8376FB70BAA6531; // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______1__Direction_DBC53D4B429CB144F8376FB70BAA6531; // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D[0x3];                                      // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______1;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0___Track_0_DEAA4D2D436C110360182BA9DF88010D; // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_DEAA4D2D436C110360182BA9DF88010D; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZOffset;                                           // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShouldSkipDistanceCheck;                           // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NPCOnlyCollision(int32 EntryPoint);
	void SetShouldSkipDistCamCheck(const bool Param_ShouldSkipDistanceCheck);
	void TempHidden();
	void OnEndPlay______0(class AActor* Actor, EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void _______1__UpdateFunc();
	void _______1__FinishedFunc();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCOnlyCollision_C">();
	}
	static class ANPCOnlyCollision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANPCOnlyCollision_C>();
	}
};
static_assert(alignof(ANPCOnlyCollision_C) == 0x000008, "Wrong alignment on ANPCOnlyCollision_C");
static_assert(sizeof(ANPCOnlyCollision_C) == 0x000260, "Wrong size on ANPCOnlyCollision_C");
static_assert(offsetof(ANPCOnlyCollision_C, UberGraphFrame) == 0x000220, "Member 'ANPCOnlyCollision_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, Capsule) == 0x000228, "Member 'ANPCOnlyCollision_C::Capsule' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, Sphere) == 0x000230, "Member 'ANPCOnlyCollision_C::Sphere' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______1___Track_0_DBC53D4B429CB144F8376FB70BAA6531) == 0x000238, "Member 'ANPCOnlyCollision_C::_______1___Track_0_DBC53D4B429CB144F8376FB70BAA6531' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______1__Direction_DBC53D4B429CB144F8376FB70BAA6531) == 0x00023C, "Member 'ANPCOnlyCollision_C::_______1__Direction_DBC53D4B429CB144F8376FB70BAA6531' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______1) == 0x000240, "Member 'ANPCOnlyCollision_C::_______1' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______0___Track_0_DEAA4D2D436C110360182BA9DF88010D) == 0x000248, "Member 'ANPCOnlyCollision_C::_______0___Track_0_DEAA4D2D436C110360182BA9DF88010D' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______0__Direction_DEAA4D2D436C110360182BA9DF88010D) == 0x00024C, "Member 'ANPCOnlyCollision_C::_______0__Direction_DEAA4D2D436C110360182BA9DF88010D' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, _______0) == 0x000250, "Member 'ANPCOnlyCollision_C::_______0' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, ZOffset) == 0x000258, "Member 'ANPCOnlyCollision_C::ZOffset' has a wrong offset!");
static_assert(offsetof(ANPCOnlyCollision_C, ShouldSkipDistanceCheck) == 0x00025C, "Member 'ANPCOnlyCollision_C::ShouldSkipDistanceCheck' has a wrong offset!");

}

