#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2020_Action

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM2020_Action.MM_M061_EM2020_Action_C
// 0x0028 (0x0348 - 0x0320)
class AMM_M061_EM2020_Action_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM2020_Action_C;            // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B205[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect;                                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           Target;                                            // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM2020_Action(int32 EntryPoint);
	void QuestExecute();
	void ReceiveBeginPlay();
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM2020_Action_C">();
	}
	static class AMM_M061_EM2020_Action_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM2020_Action_C>();
	}
};
static_assert(alignof(AMM_M061_EM2020_Action_C) == 0x000008, "Wrong alignment on AMM_M061_EM2020_Action_C");
static_assert(sizeof(AMM_M061_EM2020_Action_C) == 0x000348, "Wrong size on AMM_M061_EM2020_Action_C");
static_assert(offsetof(AMM_M061_EM2020_Action_C, UberGraphFrame_MM_M061_EM2020_Action_C) == 0x000320, "Member 'AMM_M061_EM2020_Action_C::UberGraphFrame_MM_M061_EM2020_Action_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2020_Action_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM2020_Action_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2020_Action_C, MissionMessageAsset) == 0x000330, "Member 'AMM_M061_EM2020_Action_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2020_Action_C, Effect) == 0x000338, "Member 'AMM_M061_EM2020_Action_C::Effect' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2020_Action_C, Target) == 0x000340, "Member 'AMM_M061_EM2020_Action_C::Target' has a wrong offset!");

}

