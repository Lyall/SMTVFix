#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1010

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1010.MM_M061_EM1010_C
// 0x0080 (0x03A0 - 0x0320)
class AMM_M061_EM1010_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1010_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB73[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase_C*                           Spawn_Actor;                                       // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Default_View_Target;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           Target;                                            // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           Camera;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           Pla_return;                                        // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  Auto_Rotate_Ctrl;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_BGM;                                        // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CameraFocusEnd;                                    // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AB74[0x6];                                     // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATargetPoint*>                   Target_Seq;                                        // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ALevelSequenceActor*                    SequencerActor;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADevilBase_C*                           SpawnYoko;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1010(int32 EntryPoint);
	void Evt_FinishComplete();
	void Evt_Finish();
	void CloseMsgWindow();
	void CameraFocus();
	void Fast_Report();
	void End_Mission();
	void After_Complete();
	void Not_Report();
	void Can_Report();
	void Can_Entry();
	void Before_Entry();
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_075FA3B54918DD377043D8B012810CAA(TSubclassOf<class UObject> Loaded);
	void OnLoaded_0A33D34D4BFA331A36DDE0AE19859F6A(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A3ECCFA449627BE3B2DF2FAFE84F8EC6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDE40FD99C(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC89EAD51B(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDBD7ABD8D(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F1D7057BF(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA38EFA42(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FF73D9EA5(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD4F68B343(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD8025A304(class UObject* Loaded);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1010_C">();
	}
	static class AMM_M061_EM1010_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1010_C>();
	}
};
static_assert(alignof(AMM_M061_EM1010_C) == 0x000008, "Wrong alignment on AMM_M061_EM1010_C");
static_assert(sizeof(AMM_M061_EM1010_C) == 0x0003A0, "Wrong size on AMM_M061_EM1010_C");
static_assert(offsetof(AMM_M061_EM1010_C, UberGraphFrame_MM_M061_EM1010_C) == 0x000320, "Member 'AMM_M061_EM1010_C::UberGraphFrame_MM_M061_EM1010_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1010_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, SystemMessageAsset) == 0x000330, "Member 'AMM_M061_EM1010_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, MissionMessageAsset) == 0x000338, "Member 'AMM_M061_EM1010_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, MissionEvent) == 0x000340, "Member 'AMM_M061_EM1010_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Spawn_Actor) == 0x000348, "Member 'AMM_M061_EM1010_C::Spawn_Actor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Default_View_Target) == 0x000350, "Member 'AMM_M061_EM1010_C::Default_View_Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Target) == 0x000358, "Member 'AMM_M061_EM1010_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Camera) == 0x000360, "Member 'AMM_M061_EM1010_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Pla_return) == 0x000368, "Member 'AMM_M061_EM1010_C::Pla_return' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Auto_Rotate_Ctrl) == 0x000370, "Member 'AMM_M061_EM1010_C::Auto_Rotate_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Change_BGM) == 0x000378, "Member 'AMM_M061_EM1010_C::Change_BGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, CameraFocusEnd) == 0x000379, "Member 'AMM_M061_EM1010_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, Target_Seq) == 0x000380, "Member 'AMM_M061_EM1010_C::Target_Seq' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, SequencerActor) == 0x000390, "Member 'AMM_M061_EM1010_C::SequencerActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1010_C, SpawnYoko) == 0x000398, "Member 'AMM_M061_EM1010_C::SpawnYoko' has a wrong offset!");

}

