#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommonWindowCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CommonWindowCtrl.BP_CommonWindowCtrl_C
// 0x0038 (0x0258 - 0x0220)
class ABP_CommonWindowCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_CommonWindow_C*                     CommonWindow;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    AwindowLabelSMA;                                   // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    AwindowIndexSMA;                                   // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRemove;                                          // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGamePadMode;                                     // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_KeyboardLanguage                            KeyboardLanguageType;                              // 0x0252(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CommonWindowCtrl(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void IActionWindowOpenWithActionSpecifiedByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor);
	void IActionWindowOpenWithActionSpecifiedByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, E_BTN_HELP_MAPPING_KEY_TYPE InAction, int32 InIconColor);
	void IActionWindowOpenByIndex(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, int32 InIconType, int32 InIconColor);
	void IActionWindowOff();
	void IActionWindowOn();
	void IActionWindowClose();
	void IActionWindowOpenByLabel(E_WIDGET_PRIO InPriority, class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, int32 InIconType, int32 InIconColor);
	void ClearAllScriptMessageAsset();
	void RemoveActionWindow();
	void SetInitializeParameter();
	void CalcIconDispMode();
	void Calc_Key_Board_Language_Type();
	void IActionWindowIsActive(bool* OutActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CommonWindowCtrl_C">();
	}
	static class ABP_CommonWindowCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CommonWindowCtrl_C>();
	}
};
static_assert(alignof(ABP_CommonWindowCtrl_C) == 0x000008, "Wrong alignment on ABP_CommonWindowCtrl_C");
static_assert(sizeof(ABP_CommonWindowCtrl_C) == 0x000258, "Wrong size on ABP_CommonWindowCtrl_C");
static_assert(offsetof(ABP_CommonWindowCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_CommonWindowCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_CommonWindowCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, CommonWindow) == 0x000230, "Member 'ABP_CommonWindowCtrl_C::CommonWindow' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, IsActive) == 0x000238, "Member 'ABP_CommonWindowCtrl_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, AwindowLabelSMA) == 0x000240, "Member 'ABP_CommonWindowCtrl_C::AwindowLabelSMA' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, AwindowIndexSMA) == 0x000248, "Member 'ABP_CommonWindowCtrl_C::AwindowIndexSMA' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, IsRemove) == 0x000250, "Member 'ABP_CommonWindowCtrl_C::IsRemove' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, IsGamePadMode) == 0x000251, "Member 'ABP_CommonWindowCtrl_C::IsGamePadMode' has a wrong offset!");
static_assert(offsetof(ABP_CommonWindowCtrl_C, KeyboardLanguageType) == 0x000252, "Member 'ABP_CommonWindowCtrl_C::KeyboardLanguageType' has a wrong offset!");

}

