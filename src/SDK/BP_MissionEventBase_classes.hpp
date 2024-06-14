#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionEventBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionEventBase.BP_MissionEventBase_C
// 0x0110 (0x0330 - 0x0220)
class ABP_MissionEventBase_C final : public AMissionEventBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         MissionId;                                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_450E[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMissionData                           MissionData;                                       // 0x0238(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   MissionName;                                       // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             EvtDis_Finish;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EvtDis_FadeFinish;                                 // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBtlResult;                                       // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EvtDis_Finish__DelegateSignature();
	void EvtDis_FadeFinish__DelegateSignature();
	void ExecuteUbergraph_BP_MissionEventBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetBtlResult(bool Sw);
	void EndEvent();
	void EndResult();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionEventBase_C">();
	}
	static class ABP_MissionEventBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionEventBase_C>();
	}
};
static_assert(alignof(ABP_MissionEventBase_C) == 0x000008, "Wrong alignment on ABP_MissionEventBase_C");
static_assert(sizeof(ABP_MissionEventBase_C) == 0x000330, "Wrong size on ABP_MissionEventBase_C");
static_assert(offsetof(ABP_MissionEventBase_C, UberGraphFrame) == 0x000220, "Member 'ABP_MissionEventBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_MissionEventBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, MissionId) == 0x000230, "Member 'ABP_MissionEventBase_C::MissionId' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, MissionData) == 0x000238, "Member 'ABP_MissionEventBase_C::MissionData' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, MissionName) == 0x0002F0, "Member 'ABP_MissionEventBase_C::MissionName' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, EvtDis_Finish) == 0x000308, "Member 'ABP_MissionEventBase_C::EvtDis_Finish' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, EvtDis_FadeFinish) == 0x000318, "Member 'ABP_MissionEventBase_C::EvtDis_FadeFinish' has a wrong offset!");
static_assert(offsetof(ABP_MissionEventBase_C, IsBtlResult) == 0x000328, "Member 'ABP_MissionEventBase_C::IsBtlResult' has a wrong offset!");

}
