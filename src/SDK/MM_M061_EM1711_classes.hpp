#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM1711

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventMissionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM1711.MM_M061_EM1711_C
// 0x0038 (0x0358 - 0x0320)
class AMM_M061_EM1711_C final : public ABP_EventMissionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM1711_C;                   // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4538[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           SpawnActor;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AutoRotateFocus_C*                  Auto_Rot_Ctrl;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CameraFocusEnd;                                    // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4539[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    MissionMessageAsset;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           Target;                                            // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MM_M061_EM1711(int32 EntryPoint);
	void CloseMsgWindow();
	void TalkEnd();
	void TalkStart();
	void CameraFocus();
	void QuestExecute();
	void ReceiveBeginPlay();
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM1711_C">();
	}
	static class AMM_M061_EM1711_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM1711_C>();
	}
};
static_assert(alignof(AMM_M061_EM1711_C) == 0x000008, "Wrong alignment on AMM_M061_EM1711_C");
static_assert(sizeof(AMM_M061_EM1711_C) == 0x000358, "Wrong size on AMM_M061_EM1711_C");
static_assert(offsetof(AMM_M061_EM1711_C, UberGraphFrame_MM_M061_EM1711_C) == 0x000320, "Member 'AMM_M061_EM1711_C::UberGraphFrame_MM_M061_EM1711_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, SelectIndex) == 0x000328, "Member 'AMM_M061_EM1711_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, SpawnActor) == 0x000330, "Member 'AMM_M061_EM1711_C::SpawnActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, Auto_Rot_Ctrl) == 0x000338, "Member 'AMM_M061_EM1711_C::Auto_Rot_Ctrl' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, CameraFocusEnd) == 0x000340, "Member 'AMM_M061_EM1711_C::CameraFocusEnd' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, MissionMessageAsset) == 0x000348, "Member 'AMM_M061_EM1711_C::MissionMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM1711_C, Target) == 0x000350, "Member 'AMM_M061_EM1711_C::Target' has a wrong offset!");

}

