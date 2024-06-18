#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM0021_Ready

#include "Basic.hpp"

#include "BP_EventMissionBase_Hit_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM0021_Ready.MM_M061_EM0021_Ready_C
// 0x0048 (0x0310 - 0x02C8)
class AMM_M061_EM0021_Ready_C final : public ABP_EventMissionBase_Hit_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM0021_Ready_C;             // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_375D[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 Mission_Event;                                     // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void ExecuteUbergraph_MM_M061_EM0021_Ready(int32 EntryPoint);
	void EvtDis_FinishComplete();
	void EvtDis_Finish();
	void CallDeactivate();
	void CheckActive();
	void QuestExecute();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM0021_Ready_C">();
	}
	static class AMM_M061_EM0021_Ready_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM0021_Ready_C>();
	}
};
static_assert(alignof(AMM_M061_EM0021_Ready_C) == 0x000008, "Wrong alignment on AMM_M061_EM0021_Ready_C");
static_assert(sizeof(AMM_M061_EM0021_Ready_C) == 0x000310, "Wrong size on AMM_M061_EM0021_Ready_C");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, UberGraphFrame_MM_M061_EM0021_Ready_C) == 0x0002C8, "Member 'AMM_M061_EM0021_Ready_C::UberGraphFrame_MM_M061_EM0021_Ready_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, SelectIndex) == 0x0002D0, "Member 'AMM_M061_EM0021_Ready_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, SystemMessageAsset) == 0x0002D8, "Member 'AMM_M061_EM0021_Ready_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, MissionMessageAsset) == 0x0002E0, "Member 'AMM_M061_EM0021_Ready_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, Mission_Event) == 0x0002E8, "Member 'AMM_M061_EM0021_Ready_C::Mission_Event' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, Camera) == 0x0002F0, "Member 'AMM_M061_EM0021_Ready_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM0021_Ready_C, Target) == 0x000300, "Member 'AMM_M061_EM0021_Ready_C::Target' has a wrong offset!");

}

