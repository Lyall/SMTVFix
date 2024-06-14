#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CommonHelpWindowCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"
#include "E_COMMONHELPWINDOW_CTRL_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CommonHelpWindowCtrl.BP_CommonHelpWindowCtrl_C
// 0x0040 (0x0260 - 0x0220)
class ABP_CommonHelpWindowCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_CommonHelpWindow_C*                 WBCommonHelpWindow;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_COMMONHELPWINDOW_CTRL                       Maingstatus;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_COMMONHELPWINDOW_CTRL                       Changegstatus;                                     // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGstatusChange;                                   // 0x023A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinishedOpenWindow;                              // 0x023B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinishedCloseWindow;                             // 0x023C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAddWidgetFlag;                                   // 0x023D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_642D[0x2];                                     // 0x023E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    CHelpWindowSIndexSMA;                              // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    CHelpWindowSLabelSMA;                              // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    CHelpWindowSRIndexSMA;                             // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    CHelpWindowSRLableSMA;                             // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CommonHelpWindowCtrl(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ICommonHelpWindowExecutionClose();
	void ICommonHelpWindowExecutionOpen(E_WIDGET_PRIO InPrio);
	void ICommonHelpWindowSetWidgetVisibility(ESlateVisibility InVisibility);
	void ICommonHelpWindowClose();
	void ICommonHelpWindowOpen(E_WIDGET_PRIO InPrio);
	void ICommonHelpWindowClearRichText(bool InChangeAnime);
	void ICommonHelpWindowSetBuildRichText();
	void ICommonHelpWindowSetExecutionRichText();
	void ICommonHelpWindowSetSkillId(int32 InSkillId);
	void ICommonHelpWindowSetRichTextByLabel(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InChangeAnime, bool InExecutionText, bool InBuildText);
	void ICommonHelpWindowSetItemId(int32 InItemId);
	void ICommonHelpWindowSetRichTextByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InChangeAnime, bool InExecutionText, bool InBuildText);
	void ICommonHelpWindowSetValueParam(int32 InIndex, int32 InParam);
	void ICommonHelpWindowSetProgramValue(int32 InIndex, const class FString& InString);
	void ChangeGstatusParam(E_COMMONHELPWINDOW_CTRL InGStatus, bool InMain);
	void Gstatus_Init();
	void Gstatus_WaitOpenWindow();
	void Gstatus_WaitSetText();
	void Gstatus_WaitCloseWindow();
	void Gstatus_End();
	void ClearAllScriptMessageAsset();
	void IsOpendWindow(bool* OutParam);
	void ICommonHelpWindowIsClosed(bool* OutFinished);
	void ICommonHelpWindowIsOpened(bool* OutFinished);
	void ICommonHelpWindowGetWidgetVisibility(ESlateVisibility* Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CommonHelpWindowCtrl_C">();
	}
	static class ABP_CommonHelpWindowCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CommonHelpWindowCtrl_C>();
	}
};
static_assert(alignof(ABP_CommonHelpWindowCtrl_C) == 0x000008, "Wrong alignment on ABP_CommonHelpWindowCtrl_C");
static_assert(sizeof(ABP_CommonHelpWindowCtrl_C) == 0x000260, "Wrong size on ABP_CommonHelpWindowCtrl_C");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_CommonHelpWindowCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_CommonHelpWindowCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, WBCommonHelpWindow) == 0x000230, "Member 'ABP_CommonHelpWindowCtrl_C::WBCommonHelpWindow' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, Maingstatus) == 0x000238, "Member 'ABP_CommonHelpWindowCtrl_C::Maingstatus' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, Changegstatus) == 0x000239, "Member 'ABP_CommonHelpWindowCtrl_C::Changegstatus' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, IsGstatusChange) == 0x00023A, "Member 'ABP_CommonHelpWindowCtrl_C::IsGstatusChange' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, IsFinishedOpenWindow) == 0x00023B, "Member 'ABP_CommonHelpWindowCtrl_C::IsFinishedOpenWindow' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, IsFinishedCloseWindow) == 0x00023C, "Member 'ABP_CommonHelpWindowCtrl_C::IsFinishedCloseWindow' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, IsAddWidgetFlag) == 0x00023D, "Member 'ABP_CommonHelpWindowCtrl_C::IsAddWidgetFlag' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, CHelpWindowSIndexSMA) == 0x000240, "Member 'ABP_CommonHelpWindowCtrl_C::CHelpWindowSIndexSMA' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, CHelpWindowSLabelSMA) == 0x000248, "Member 'ABP_CommonHelpWindowCtrl_C::CHelpWindowSLabelSMA' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, CHelpWindowSRIndexSMA) == 0x000250, "Member 'ABP_CommonHelpWindowCtrl_C::CHelpWindowSRIndexSMA' has a wrong offset!");
static_assert(offsetof(ABP_CommonHelpWindowCtrl_C, CHelpWindowSRLableSMA) == 0x000258, "Member 'ABP_CommonHelpWindowCtrl_C::CHelpWindowSRLableSMA' has a wrong offset!");

}
