#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev426_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DevilBaseLight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dev426_Simple.Dev426_Simple_C
// 0x0058 (0x0AD8 - 0x0A80)
class ADev426_Simple_C final : public ADevilBaseLight_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dev426_Simple_C;                    // 0x0A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharaFaceComponent*                    Face;                                              // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaFloatingComponent_C*              Floating;                                          // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm_Up;                                      // 0x0A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ParentRotationScene_C*              BP_ParentRotationScene;                            // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaStepSmootherComponent_C*          StepSmoother;                                      // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaEyeComponent_C*                   RightEye;                                          // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaEyeComponent_C*                   LeftEye;                                           // 0x0AB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaHeadComponent_C*                  Head;                                              // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   RightLeg;                                          // 0x0AC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaLegComponent_C*                   LeftLeg;                                           // 0x0AD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev426_Simple(int32 EntryPoint);
	void BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature();
	void PlaySpeakingMotion();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev426_Simple_C">();
	}
	static class ADev426_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADev426_Simple_C>();
	}
};
static_assert(alignof(ADev426_Simple_C) == 0x000008, "Wrong alignment on ADev426_Simple_C");
static_assert(sizeof(ADev426_Simple_C) == 0x000AD8, "Wrong size on ADev426_Simple_C");
static_assert(offsetof(ADev426_Simple_C, UberGraphFrame_Dev426_Simple_C) == 0x000A80, "Member 'ADev426_Simple_C::UberGraphFrame_Dev426_Simple_C' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, Face) == 0x000A88, "Member 'ADev426_Simple_C::Face' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, Floating) == 0x000A90, "Member 'ADev426_Simple_C::Floating' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, SpringArm_Up) == 0x000A98, "Member 'ADev426_Simple_C::SpringArm_Up' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, BP_ParentRotationScene) == 0x000AA0, "Member 'ADev426_Simple_C::BP_ParentRotationScene' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, StepSmoother) == 0x000AA8, "Member 'ADev426_Simple_C::StepSmoother' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, RightEye) == 0x000AB0, "Member 'ADev426_Simple_C::RightEye' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, LeftEye) == 0x000AB8, "Member 'ADev426_Simple_C::LeftEye' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, Head) == 0x000AC0, "Member 'ADev426_Simple_C::Head' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, RightLeg) == 0x000AC8, "Member 'ADev426_Simple_C::RightLeg' has a wrong offset!");
static_assert(offsetof(ADev426_Simple_C, LeftLeg) == 0x000AD0, "Member 'ADev426_Simple_C::LeftLeg' has a wrong offset!");

}
