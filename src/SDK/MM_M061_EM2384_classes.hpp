#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2384

#include "Basic.hpp"

#include "BP_DevilControlBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MM_M061_EM2384.MM_M061_EM2384_C
// 0x0040 (0x0368 - 0x0328)
class AMM_M061_EM2384_C final : public ABP_DevilControlBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MM_M061_EM2384_C;                   // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SelectIndex;                                       // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A1B[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACameraActor*                           CameraActor;                                       // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    SequenceActor;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                           Target;                                            // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    ScriptMessageAsset;                                // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SelectHistory;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_MM_M061_EM2384(int32 EntryPoint);
	void QuestExecute();
	void ReceiveBeginPlay();
	void OnLoaded_CA4C919B47E016D1B6B5949F89D63B9F(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA7EA83E3(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F413D813D(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FC98B2923(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949FA2A92F41(class UObject* Loaded);
	void OnLoaded_CA4C919B47E016D1B6B5949F4887CA30(class UObject* Loaded);
	void MakeSelectArray(TArray<class FName>* ReturnArray, int32* CursorPos, TArray<bool>* IsGray, bool* UseCancel);
	void CallDeactivate();
	void CheckActive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MM_M061_EM2384_C">();
	}
	static class AMM_M061_EM2384_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMM_M061_EM2384_C>();
	}
};
static_assert(alignof(AMM_M061_EM2384_C) == 0x000008, "Wrong alignment on AMM_M061_EM2384_C");
static_assert(sizeof(AMM_M061_EM2384_C) == 0x000368, "Wrong size on AMM_M061_EM2384_C");
static_assert(offsetof(AMM_M061_EM2384_C, UberGraphFrame_MM_M061_EM2384_C) == 0x000328, "Member 'AMM_M061_EM2384_C::UberGraphFrame_MM_M061_EM2384_C' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, SelectIndex) == 0x000330, "Member 'AMM_M061_EM2384_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, CameraActor) == 0x000338, "Member 'AMM_M061_EM2384_C::CameraActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, SequenceActor) == 0x000340, "Member 'AMM_M061_EM2384_C::SequenceActor' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, Target) == 0x000348, "Member 'AMM_M061_EM2384_C::Target' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, ScriptMessageAsset) == 0x000350, "Member 'AMM_M061_EM2384_C::ScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(AMM_M061_EM2384_C, SelectHistory) == 0x000358, "Member 'AMM_M061_EM2384_C::SelectHistory' has a wrong offset!");

}

