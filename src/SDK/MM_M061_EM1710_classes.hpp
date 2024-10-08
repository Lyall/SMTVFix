#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1710

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1710.MM_M061_EM1710_C
// 0x0078 (0x0398 - 0x0320)
class AMM_M061_EM1710_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1710_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3F1[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset2;                              // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset3;                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                   Terget;                                            // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraFocusEnd;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Change_BGM;                                        // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3F2[0x6];                                     // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Def_Camera;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           Camera;                                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequencerActor;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1710(int32 EntryPoint);
	void Evt_FinishComplete();
	void Evt_Finish();
	void GotoEndEvent();
	void TalkEnd();
	void TalkStart();
	void QuestExecute();
	void ReceiveBeginPlay();
	void EM2190End();
	void EM2190Event();
	void OnLoaded_28462BCA479ACEF71DA28EAD093540D2(TSubclassOf<class UObject> Loaded);
	void OnLoaded_7DDBF7FF4A0740D2A97EBBB87DC329A6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDFD4E09C0(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F455E9814(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BCEA69DE44(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDD5D23FAF(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC13A9A630(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD9634A6FE(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F38FF8080(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FE8F67D2A(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F1B949270(class UObject* Loaded);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1710_C">();
	}
	static class AMM_M061_EM1710_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1710_C>();
	}
};
static_assert(alignof(AMM_M061_EM1710_C) == 0x000008, "Wrong alignment on AMM_M061_EM1710_C");
static_assert(sizeof(AMM_M061_EM1710_C) == 0x000398, "Wrong size on AMM_M061_EM1710_C");
static_assert(offsetof(AMM_M061_EM1710_C, UberGraphFrame_MM_M061_EM1710_C) == 0x000320, "Member 'AMM_M061_EM1710_C::UberGraphFrame_MM_M061_EM1710_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1710_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM1710_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM1710_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM1710_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, MissionMessageAsset2) == 0x000348, "Member 'AMM_M061_EM1710_C::MissionMessageAsset2' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, MissionMessageAsset3) == 0x000350, "Member 'AMM_M061_EM1710_C::MissionMessageAsset3' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, MissionEvent) == 0x000358, "Member 'AMM_M061_EM1710_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, Terget) == 0x000360, "Member 'AMM_M061_EM1710_C::Terget' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, Auto_Rot_Ctrl) == 0x000370, "Member 'AMM_M061_EM1710_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, CameraFocusEnd) == 0x000378, "Member 'AMM_M061_EM1710_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, Change_BGM) == 0x000379, "Member 'AMM_M061_EM1710_C::Change_BGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, Def_Camera) == 0x000380, "Member 'AMM_M061_EM1710_C::Def_Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, Camera) == 0x000388, "Member 'AMM_M061_EM1710_C::Camera' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1710_C, SequencerActor) == 0x000390, "Member 'AMM_M061_EM1710_C::SequencerActor' has a wrong offset!");

}

