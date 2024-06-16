#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev205

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DevilBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dev205.Dev205_C
// 0x0040 (0x0A90 - 0x0A50)
class ADev205_C final : public ADevilBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dev205_C;                           // 0x0A50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharaBodyComponent_C*                  Body;                                              // 0x0A58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm_Up;                                      // 0x0A60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ParentRotationScene_C*              BP_ParentRotationScene;                            // 0x0A68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaStepSmootherComponent_C*          StepSmoother;                                      // 0x0A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaHeadComponent_C*                  Head;                                              // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   RightLeg;                                          // 0x0A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   LeftLeg;                                           // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev205(int32 EntryPoint);
	void BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev205_C">();
	}
	static class ADev205_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADev205_C>();
	}
};
static_assert(alignof(ADev205_C) == 0x000008, "Wrong alignment on ADev205_C");
static_assert(sizeof(ADev205_C) == 0x000A90, "Wrong size on ADev205_C");
static_assert(offsetof(ADev205_C, UberGraphFrame_Dev205_C) == 0x000A50, "Member 'ADev205_C::UberGraphFrame_Dev205_C' has a wrong offset!");
static_assert(offsetof(ADev205_C, Body) == 0x000A58, "Member 'ADev205_C::Body' has a wrong offset!");
static_assert(offsetof(ADev205_C, SpringArm_Up) == 0x000A60, "Member 'ADev205_C::SpringArm_Up' has a wrong offset!");
static_assert(offsetof(ADev205_C, BP_ParentRotationScene) == 0x000A68, "Member 'ADev205_C::BP_ParentRotationScene' has a wrong offset!");
static_assert(offsetof(ADev205_C, StepSmoother) == 0x000A70, "Member 'ADev205_C::StepSmoother' has a wrong offset!");
static_assert(offsetof(ADev205_C, Head) == 0x000A78, "Member 'ADev205_C::Head' has a wrong offset!");
static_assert(offsetof(ADev205_C, RightLeg) == 0x000A80, "Member 'ADev205_C::RightLeg' has a wrong offset!");
static_assert(offsetof(ADev205_C, LeftLeg) == 0x000A88, "Member 'ADev205_C::LeftLeg' has a wrong offset!");

}
