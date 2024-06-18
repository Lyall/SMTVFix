#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InfoWindowCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_INFOWINDOWCTRL_structs.hpp"
#include "UMG_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InfoWindowCtrl.BP_InfoWindowCtrl_C
// 0x0040 (0x0260 - 0x0220)
class ABP_InfoWindowCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_InfoWindow_C*                       WB_InfoWindow;                                     // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_INFOWINDOWCTRL                              Maingstatus;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_INFOWINDOWCTRL                              Changegstatus;                                     // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGstatusChange;                                   // 0x023A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinishedOpenWindow;                              // 0x023B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFinishedCloseWindow;                             // 0x023C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_372E[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Gstatuscount;                                      // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cmpgstatuscount;                                   // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlreadyAddWidget;                                  // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AlreadyRemoveWidget;                               // 0x0249(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAutoCloseFlag;                                   // 0x024A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_372F[0x5];                                     // 0x024B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    IwindowLabelSMA;                                   // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    IwindowIndexSMA;                                   // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_InfoWindowCtrl(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void IInfoWindowSetVisibility(ESlateVisibility InVisibility);
	void IInfoWindowExecutionClose();
	void IInfoWindowSetRichTextProgramValue(int32 InIndex, const class FString& InString);
	void IInfoWindowExecutionOpen();
	void IInfoWindowSetRichTextValueParam(int32 InIndex, int32 InValueParam);
	void IInfoWindowClearMessage();
	void IInfoWindowSetMessageByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex, bool InExecutionText, int32 InFrame);
	void IInfoWindowSetMessage(class UScriptMessageAsset* InScriptMessageAsset, class FName InLabel, bool InExecutionText, int32 InFrame);
	void IInfoWindowCreate(E_WIDGET_PRIO InPrio);
	void IInfoWindowClose();
	void IInfoWindowOpen();
	void IInfoWindowDelete();
	void ChangeGstatusParam(E_INFOWINDOWCTRL InGStatus, bool InMain);
	void Gstatus_Init();
	void Gstatus_WaitWindowOpen();
	void Gstatus_SetText();
	void Gstatus_WaitMessage();
	void Gstatus_WaitWindowClose();
	void Gstatus_End();
	void ClearAllScriptMessageAsset();
	void IIsFinishedInfoWindowClose(bool* OutFinished);
	void IIsFinishedInfoWindowOpen(bool* OutFinished);
	void IInfoWindowGetVisibility(ESlateVisibility* Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InfoWindowCtrl_C">();
	}
	static class ABP_InfoWindowCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InfoWindowCtrl_C>();
	}
};
static_assert(alignof(ABP_InfoWindowCtrl_C) == 0x000008, "Wrong alignment on ABP_InfoWindowCtrl_C");
static_assert(sizeof(ABP_InfoWindowCtrl_C) == 0x000260, "Wrong size on ABP_InfoWindowCtrl_C");
static_assert(offsetof(ABP_InfoWindowCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_InfoWindowCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_InfoWindowCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, WB_InfoWindow) == 0x000230, "Member 'ABP_InfoWindowCtrl_C::WB_InfoWindow' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, Maingstatus) == 0x000238, "Member 'ABP_InfoWindowCtrl_C::Maingstatus' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, Changegstatus) == 0x000239, "Member 'ABP_InfoWindowCtrl_C::Changegstatus' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IsGstatusChange) == 0x00023A, "Member 'ABP_InfoWindowCtrl_C::IsGstatusChange' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IsFinishedOpenWindow) == 0x00023B, "Member 'ABP_InfoWindowCtrl_C::IsFinishedOpenWindow' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IsFinishedCloseWindow) == 0x00023C, "Member 'ABP_InfoWindowCtrl_C::IsFinishedCloseWindow' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, Gstatuscount) == 0x000240, "Member 'ABP_InfoWindowCtrl_C::Gstatuscount' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, Cmpgstatuscount) == 0x000244, "Member 'ABP_InfoWindowCtrl_C::Cmpgstatuscount' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, AlreadyAddWidget) == 0x000248, "Member 'ABP_InfoWindowCtrl_C::AlreadyAddWidget' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, AlreadyRemoveWidget) == 0x000249, "Member 'ABP_InfoWindowCtrl_C::AlreadyRemoveWidget' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IsAutoCloseFlag) == 0x00024A, "Member 'ABP_InfoWindowCtrl_C::IsAutoCloseFlag' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IwindowLabelSMA) == 0x000250, "Member 'ABP_InfoWindowCtrl_C::IwindowLabelSMA' has a wrong offset!");
static_assert(offsetof(ABP_InfoWindowCtrl_C, IwindowIndexSMA) == 0x000258, "Member 'ABP_InfoWindowCtrl_C::IwindowIndexSMA' has a wrong offset!");

}

