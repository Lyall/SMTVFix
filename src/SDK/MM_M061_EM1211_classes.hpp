#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1211

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_Direct_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1211.MM_M061_EM1211_C
// 0x0050 (0x0310 - 0x02C0)
class AMM_M061_EM1211_C final : public ABP_EventMissionBase_Direct_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1211_C;                   // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8588[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UParticleSystemComponent*               SpawnParticle;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequenceActor;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1211(int32 EntryPoint);
	void QuestExecute();
	void OnLoaded_CA4C919B47E016D1B6B5949FA2124DCA(class UObject* Loaded);
	void CallDeactivate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1211_C">();
	}
	static class AMM_M061_EM1211_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1211_C>();
	}
};
static_assert(alignof(AMM_M061_EM1211_C) == 0x000008, "Wrong alignment on AMM_M061_EM1211_C");
static_assert(sizeof(AMM_M061_EM1211_C) == 0x000310, "Wrong size on AMM_M061_EM1211_C");
static_assert(offsetof(AMM_M061_EM1211_C, UberGraphFrame_MM_M061_EM1211_C) == 0x0002C0, "Member 'AMM_M061_EM1211_C::UberGraphFrame_MM_M061_EM1211_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, SelectIndex) == 0x0002C8, "Member 'AMM_M061_EM1211_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, SystemMessageAsset) == 0x0002D0, "Member 'AMM_M061_EM1211_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, MissionMessageAsset) == 0x0002D8, "Member 'AMM_M061_EM1211_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, Camera) == 0x0002E0, "Member 'AMM_M061_EM1211_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, Target) == 0x0002F0, "Member 'AMM_M061_EM1211_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, SpawnParticle) == 0x000300, "Member 'AMM_M061_EM1211_C::SpawnParticle' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1211_C, SequenceActor) == 0x000308, "Member 'AMM_M061_EM1211_C::SequenceActor' has a wrong offset!");

}

