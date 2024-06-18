#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1620

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1620.MM_M061_EM1620_C
// 0x0058 (0x0378 - 0x0320)
class AMM_M061_EM1620_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1620_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A180[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    SystemMessageAsset;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MissionEventBase_C*                 MissionEvent;                                      // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequestItemId;                                     // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequestItemNum;                                    // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardItemId;                                   // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardItemNum;                                  // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddRewardMakka;                                    // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Change_BGM;                                        // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CameraFocusEnd;                                    // 0x036D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A181[0x2];                                     // 0x036E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Default_View_Target;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1620(int32 EntryPoint);
	void Evt_Finish();
	void Evt_FinishComplete();
	void CloseMsgWindow();
	void CameraFocus();
	void EndMission();
	void TalkStart();
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_F6531DBB4B36DC1C30784F8918329DD4(TSubclassOf<class UObject> Loaded);
	void OnLoaded_7E4A39914891DA4EA36A39BB13F7422F(TSubclassOf<class UObject> Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC45F138D3(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD96CE2DCD(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC7C035B5E(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD9DFE3A40(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD48374C7D(class UObject* Loaded);
	void OnLoaded_8C5F64BC4F1BBF199F45C4BC8CE6D928(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBDDF483A67(class UObject* Loaded);
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD7139FD45(class UObject* Loaded);
	void ResultFadeFunc();
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1620_C">();
	}
	static class AMM_M061_EM1620_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1620_C>();
	}
};
static_assert(alignof(AMM_M061_EM1620_C) == 0x000008, "Wrong alignment on AMM_M061_EM1620_C");
static_assert(sizeof(AMM_M061_EM1620_C) == 0x000378, "Wrong size on AMM_M061_EM1620_C");
static_assert(offsetof(AMM_M061_EM1620_C, UberGraphFrame_MM_M061_EM1620_C) == 0x000320, "Member 'AMM_M061_EM1620_C::UberGraphFrame_MM_M061_EM1620_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1620_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM1620_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, SystemMessageAsset) == 0x000338, "Member 'AMM_M061_EM1620_C::SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, MissionMessageAsset) == 0x000340, "Member 'AMM_M061_EM1620_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, MissionEvent) == 0x000348, "Member 'AMM_M061_EM1620_C::MissionEvent' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, Auto_Rot_Ctrl) == 0x000350, "Member 'AMM_M061_EM1620_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, RequestItemId) == 0x000358, "Member 'AMM_M061_EM1620_C::RequestItemId' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, RequestItemNum) == 0x00035C, "Member 'AMM_M061_EM1620_C::RequestItemNum' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, AddRewardItemId) == 0x000360, "Member 'AMM_M061_EM1620_C::AddRewardItemId' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, AddRewardItemNum) == 0x000364, "Member 'AMM_M061_EM1620_C::AddRewardItemNum' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, AddRewardMakka) == 0x000368, "Member 'AMM_M061_EM1620_C::AddRewardMakka' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, Change_BGM) == 0x00036C, "Member 'AMM_M061_EM1620_C::Change_BGM' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, CameraFocusEnd) == 0x00036D, "Member 'AMM_M061_EM1620_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1620_C, Default_View_Target) == 0x000370, "Member 'AMM_M061_EM1620_C::Default_View_Target' has a wrong offset!");

}

