#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev100_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DevilBaseLight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Dev100_Simple.Dev100_Simple_C
// 0x0020 (0x0AA0 - 0x0A80)
class ADev100_Simple_C final : public ADevilBaseLight_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dev100_Simple_C;                    // 0x0A80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                    SpringArm_Up;                                      // 0x0A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ParentRotationScene_C*              BP_ParentRotationScene;                            // 0x0A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharaFloatingComponent_C*              Floating;                                          // 0x0A98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Dev100_Simple(int32 EntryPoint);
	void BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Dev100_Simple_C">();
	}
	static class ADev100_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADev100_Simple_C>();
	}
};
static_assert(alignof(ADev100_Simple_C) == 0x000008, "Wrong alignment on ADev100_Simple_C");
static_assert(sizeof(ADev100_Simple_C) == 0x000AA0, "Wrong size on ADev100_Simple_C");
static_assert(offsetof(ADev100_Simple_C, UberGraphFrame_Dev100_Simple_C) == 0x000A80, "Member 'ADev100_Simple_C::UberGraphFrame_Dev100_Simple_C' has a wrong offset!");
static_assert(offsetof(ADev100_Simple_C, SpringArm_Up) == 0x000A88, "Member 'ADev100_Simple_C::SpringArm_Up' has a wrong offset!");
static_assert(offsetof(ADev100_Simple_C, BP_ParentRotationScene) == 0x000A90, "Member 'ADev100_Simple_C::BP_ParentRotationScene' has a wrong offset!");
static_assert(offsetof(ADev100_Simple_C, Floating) == 0x000A98, "Member 'ADev100_Simple_C::Floating' has a wrong offset!");

}

