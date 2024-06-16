#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1791

#include "Basic.hpp"

#include "BP_EventMissionBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1791.MM_M061_EM1791_C
// 0x0098 (0x03B8 - 0x0320)
class AMM_M061_EM1791_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1791_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B98F[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADevilBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   Camera;                                            // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ATargetPoint*>                   Target;                                            // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ATargetPoint*                           BattlePoint;                                       // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EventCameraBlend_C*                 CameraBlender;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DefCamera;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NowEvent;                                          // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B990[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADevilBase_C*                           SpawnActor2;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           FakeActor;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Emitter;                                           // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraFocusEnd;                                    // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MM_M061_EM1791(int32 EntryPoint);
	void Evt_FinishComplete();
	void Evt_Finish();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void BattleStandby();
	void _________0();
	void OnDestroyed______0(class AActor* DestroyedActor);
	void EventEnd();
	void EventStart();
	void QuestExecute();
	void ReceiveBeginPlay();
	void CloseMsgWindow();
	void CameraFocus();
	void EventToJoin();
	void NormalTalk1();
	void NormalTalkStandby();
	void TalkEnd();
	void JoinTalkStart();
	void OnLoaded_513416F948AB05ACF71D3DA89AC060B3(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8BA258DB489B0FD00FCA77814EA31184(TSubclassOf<class UObject> Loaded);
	void OnLoaded_C6C612BE48467332BDCD248D387D75E7(TSubclassOf<class UObject> Loaded);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1791_C">();
	}
	static class AMM_M061_EM1791_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1791_C>();
	}
};
static_assert(alignof(AMM_M061_EM1791_C) == 0x000008, "Wrong alignment on AMM_M061_EM1791_C");
static_assert(sizeof(AMM_M061_EM1791_C) == 0x0003B8, "Wrong size on AMM_M061_EM1791_C");
static_assert(offsetof(AMM_M061_EM1791_C, UberGraphFrame_MM_M061_EM1791_C) == 0x000320, "Member 'AMM_M061_EM1791_C::UberGraphFrame_MM_M061_EM1791_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1791_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM1791_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM1791_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM1791_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, MissionEvent) == 0x000348, "Member 'AMM_M061_EM1791_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, Auto_Rot_Ctrl) == 0x000350, "Member 'AMM_M061_EM1791_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, Camera) == 0x000358, "Member 'AMM_M061_EM1791_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, Target) == 0x000368, "Member 'AMM_M061_EM1791_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, BattlePoint) == 0x000378, "Member 'AMM_M061_EM1791_C::BattlePoint' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, CameraBlender) == 0x000380, "Member 'AMM_M061_EM1791_C::CameraBlender' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, DefCamera) == 0x000388, "Member 'AMM_M061_EM1791_C::DefCamera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, NowEvent) == 0x000390, "Member 'AMM_M061_EM1791_C::NowEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, SpawnActor2) == 0x000398, "Member 'AMM_M061_EM1791_C::SpawnActor2' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, FakeActor) == 0x0003A0, "Member 'AMM_M061_EM1791_C::FakeActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, Emitter) == 0x0003A8, "Member 'AMM_M061_EM1791_C::Emitter' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1791_C, CameraFocusEnd) == 0x0003B0, "Member 'AMM_M061_EM1791_C::CameraFocusEnd' has a wrong offset!");

}
