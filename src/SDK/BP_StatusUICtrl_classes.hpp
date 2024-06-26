#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StatusUICtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"
#include "E_TutorialWindow_WidgetState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StatusUICtrl.BP_StatusUICtrl_C
// 0x0108 (0x0328 - 0x0220)
class ABP_StatusUICtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          M_isComplete;                                      // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_UIVisible;                                       // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_UsingTutorial;                                   // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25B7[0x5];                                     // 0x0233(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIStatusCtrlDataObjBase*               M_NewStatusData;                                   // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaStatus_C>    M_StatusWidget_New;                                // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         M_HoldIndex;                                       // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25B8[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CharaStatus_C*                      M_CharaStatusWB;                                   // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UI_STATUS_CTRL_TYPE                         M_CtrlType;                                        // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25B9[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_CloseWait;                                       // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StatusCharaChanger_C> M_StatusCharaChanger;                              // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UUIStatusCtrlDataObjUnite*              M_InheritObj;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StatusCharaChanger_C> M_InheritCharaChanger;                             // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_InheritInitialized;                              // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsEnd_SimpleStatus;                              // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25BA[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIStatusCtrlDataObjBase*               M_StatusData_Simple;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsOpen;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_ReturnFromResult;                                // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsEndInheritAnim;                                // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_WIDGET_PRIO                                 M_Priority;                                        // 0x02A3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UI_STATUS_PAGE_TYPE                         M_PageType;                                        // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25BB[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_SwapWait;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25BC[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_StatusUITask_BeforeViewEnd_C> M_ViewEndTask;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_UseCostWindow_InheriitResult;                    // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_InheritUIClosed;                                 // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_InheritCameraReturned;                           // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25BD[0x5];                                     // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    M_StatusMessageAsset;                              // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_SkilllHelpAsset;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_ConditionHelpAsset;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_GodParameterHelpAsset;                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_ItemHelpAsset;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_UniteMsg;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ShowKamuiBtnHelp;                                // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25BE[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_CursorDataIndex;                                 // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_RightDataOffset;                                 // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CurosorScrollStack;                              // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ClickedSlot;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ClickedFaceBtnLR;                                // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MouseMediator_InheritStatus_C*      M_MouseMediator;                                   // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_InheritStep;                                     // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ClickedFacePanel;                                // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_wheelStack;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_UseButtonHelp;                                   // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BPI_Init_SimpleStatus(class UObject* StatusData, E_WIDGET_PRIO WidgetPriority, bool* Success);
	void BPI_Open_SimpleStatus(bool Immediate, bool* Dummy);
	void BPI_Close_SimpleStatus(bool Immediate, bool* Dummy);
	void BPI_IsEndAnimation_SimpleStatus(bool* IsEnd);
	void BPI_ChangeStatus(bool* Dummy);
	void BPI_ChangeBtnHelpStatus_StatusUI(bool Visibility, bool* Success);
	void BPI_SetVisibility(ESlateVisibility Visibility, bool* Success);
	void BPI_GetHoverIndex(int32* Main, int32* Sub);
	void BPI_CheckMouseHoverList(bool* Main, bool* Sub);
	void BPI_ClearMouseMediator(bool* Success);
	void BPI_SetMouseMediator(class UObject* MouseMediator, bool* Success);
	void BPI_RestartResultCtrl_FromMessage(bool* Dummy);
	void BPI_TickFunc_InheritResult(bool* Decide, bool* Cancel);
	void BPI_ShowResistancesInheritResultUI(bool* Dummy);
	void BPI_IsEndAnimation_InheritStatus(bool* IsEnd);
	void BPI_InitInheritUI(class UObject* CharaChanger, class UObject* UIStatusCtrlDataObjUnite, bool* Success);
	void BPI_ShowInheritUI(int32 ParentTop, int32 FirstCursorIndex, int32 ChildTop, bool UseCostWindow, bool* Dummy);
	void BPI_UpdateInheritUI(int32 ParentTop, int32 ParentCurrent, int32 ChildTop, int32 ChildCategory, int32 ChildCurrent, bool* Dummy);
	void BPI_CloseInheritUI(bool CloseUI, bool ReturnCamera, bool Immediate, bool* Dummy);
	void BPI_ShowFusionResultUI(bool* Dummy);
	void BPI_TickFunc_InheritStatus(float DeltaTime, bool* Dummy);
	void BPI_SetTaskBeforeViewEnd(class UObject* Runner, bool* Success);
	void BPI_StartCtrl(class UUIStatusCtrlDataObjBase* DataObj, E_UI_STATUS_CTRL_TYPE CtrlType, TScriptInterface<class IBPI_StatusCharaChanger_C> StatusCharaChanger, E_WIDGET_PRIO WidgetPriority, bool* Success);
	void BPI_TickEvent(float DeltaSeconds, bool* StatusEnd);
	void BPI_IsComplete(bool* IsComplete);
	void ButtonHelpOut(const bool SkipAnimation);
	void ButtonHelpIn(bool InSkipAnim, E_UI_STATUS_PAGE_TYPE PageType, E_UI_STATUS_CTRL_TYPE InCtrlType);
	void UpdateButtonHelp();
	void BindFunc_OnClickedFaceIcon(int32 Move);
	void DataStep(int32 InMove, int32* Moved);
	void BindFunc_OnClickedFaceBtnLR(int32 Move);
	void BindFunc_OnClickedParentSlot(int32 Param_Index);
	void BindFunc_OnHoveredParentSlot(int32 Param_Index);
	void BindFunc_OnClickedRightSlot(int32 Param_Index);
	void BindFunc_OnHoveredRightSlot(int32 Param_Index);
	void Calc_Move_Index_by_Wheel(int32 InOffset, int32 InMove, int32* CursorDataIndex, int32* ScrollStack, bool* CurosrMoved);
	void BindFunc_OnMovedParentScrollBarByMouse(int32 NewOffset);
	void BindFunc_OnMovedRightScrollBarByMouse(int32 NewOffset);
	void GetEnableMouseCtrl(bool* Enable);
	bool IsActivePartySkillSwap();
	bool IsActiveBibleSkillSwap();
	void SkillPageChangeCursorButtonHelp();
	void GetHoldInputButton(int32* InputNum, bool* Repeat);
	void CloseHelpWindow(bool Immediate);
	void CheckOpenFlag(int32 OpenFlag, E_UI_STATUS_OPEN Status, bool* Open);
	void SetHelpWindow(class UUIStatusCtrlDataObjBase* InputPin);
	void SlotType(bool* MovableSkill, bool* SwitchableKamui);
	void ResetCursorPos(E_UI_STATUS_PAGE_TYPE PageType);
	void CommonTickFunc(int32 InputNum);
	void GetInputButton(bool EnableA, bool EnableX, int32* InputNum, bool* Repeat);
	void MyMakkaWindowClose(bool InShowTotalWindow, bool InAnimation);
	void CloseCommonWindow();
	void OpenCommonWindow();
	struct FLinearColor GetCostColor(int32 Difference);
	bool GetWithTitle();
	void ChangeCost();
	bool IsHolding();
	void UpdateAnalyzeNewIcon();
	void Change_Button_Help_Page_Change(E_UI_STATUS_PAGE_TYPE PageType, E_UI_STATUS_CTRL_TYPE CtrlType, bool ForceChange);
	void CreateStatusWidget();
	void CloseUI();
	bool IsEnableButtonR(bool IsTrigger);
	bool IsEnableButtonL(bool IsTrigger);
	void FuncHideUITick();
	void FuncTWindowTick();
	void FuncBiographyTick(bool EnableChangeNewOld, bool* Pushed);
	void FuncConditionTick(bool EnableChangeNewOld, bool* Pushed);
	void FuncSkillTick(bool EnableSkillSwap, bool EnableChangeNewOld);
	void NewTickFunc(bool* StatusEnd);
	void NewInit(class UUIStatusCtrlDataObjBase*& UIStatusData, E_UI_STATUS_CTRL_TYPE ControlType, TScriptInterface<class IBPI_StatusCharaChanger_C>& StatusCharaChanger);
	void GetIsComplete(bool* IsComplete);
	void EndViewStatus();
	void StartViewStatus(bool* Success);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Private_AnimStart();
	void Private_InheritAnimStart(float Duration);
	void ExecuteUbergraph_BP_StatusUICtrl(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StatusUICtrl_C">();
	}
	static class ABP_StatusUICtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StatusUICtrl_C>();
	}
};
static_assert(alignof(ABP_StatusUICtrl_C) == 0x000008, "Wrong alignment on ABP_StatusUICtrl_C");
static_assert(sizeof(ABP_StatusUICtrl_C) == 0x000328, "Wrong size on ABP_StatusUICtrl_C");
static_assert(offsetof(ABP_StatusUICtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_StatusUICtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_StatusUICtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_isComplete) == 0x000230, "Member 'ABP_StatusUICtrl_C::M_isComplete' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_UIVisible) == 0x000231, "Member 'ABP_StatusUICtrl_C::M_UIVisible' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_UsingTutorial) == 0x000232, "Member 'ABP_StatusUICtrl_C::M_UsingTutorial' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_NewStatusData) == 0x000238, "Member 'ABP_StatusUICtrl_C::M_NewStatusData' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_StatusWidget_New) == 0x000240, "Member 'ABP_StatusUICtrl_C::M_StatusWidget_New' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_HoldIndex) == 0x000250, "Member 'ABP_StatusUICtrl_C::M_HoldIndex' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_CharaStatusWB) == 0x000258, "Member 'ABP_StatusUICtrl_C::M_CharaStatusWB' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_CtrlType) == 0x000260, "Member 'ABP_StatusUICtrl_C::M_CtrlType' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_CloseWait) == 0x000264, "Member 'ABP_StatusUICtrl_C::M_CloseWait' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_StatusCharaChanger) == 0x000268, "Member 'ABP_StatusUICtrl_C::M_StatusCharaChanger' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritObj) == 0x000278, "Member 'ABP_StatusUICtrl_C::M_InheritObj' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritCharaChanger) == 0x000280, "Member 'ABP_StatusUICtrl_C::M_InheritCharaChanger' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritInitialized) == 0x000290, "Member 'ABP_StatusUICtrl_C::M_InheritInitialized' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_IsEnd_SimpleStatus) == 0x000291, "Member 'ABP_StatusUICtrl_C::M_IsEnd_SimpleStatus' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_StatusData_Simple) == 0x000298, "Member 'ABP_StatusUICtrl_C::M_StatusData_Simple' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_IsOpen) == 0x0002A0, "Member 'ABP_StatusUICtrl_C::M_IsOpen' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ReturnFromResult) == 0x0002A1, "Member 'ABP_StatusUICtrl_C::M_ReturnFromResult' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_IsEndInheritAnim) == 0x0002A2, "Member 'ABP_StatusUICtrl_C::M_IsEndInheritAnim' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_Priority) == 0x0002A3, "Member 'ABP_StatusUICtrl_C::M_Priority' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_PageType) == 0x0002A4, "Member 'ABP_StatusUICtrl_C::M_PageType' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_SwapWait) == 0x0002A8, "Member 'ABP_StatusUICtrl_C::M_SwapWait' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ViewEndTask) == 0x0002B0, "Member 'ABP_StatusUICtrl_C::M_ViewEndTask' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_UseCostWindow_InheriitResult) == 0x0002C0, "Member 'ABP_StatusUICtrl_C::M_UseCostWindow_InheriitResult' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritUIClosed) == 0x0002C1, "Member 'ABP_StatusUICtrl_C::M_InheritUIClosed' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritCameraReturned) == 0x0002C2, "Member 'ABP_StatusUICtrl_C::M_InheritCameraReturned' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_StatusMessageAsset) == 0x0002C8, "Member 'ABP_StatusUICtrl_C::M_StatusMessageAsset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_SkilllHelpAsset) == 0x0002D0, "Member 'ABP_StatusUICtrl_C::M_SkilllHelpAsset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ConditionHelpAsset) == 0x0002D8, "Member 'ABP_StatusUICtrl_C::M_ConditionHelpAsset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_GodParameterHelpAsset) == 0x0002E0, "Member 'ABP_StatusUICtrl_C::M_GodParameterHelpAsset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ItemHelpAsset) == 0x0002E8, "Member 'ABP_StatusUICtrl_C::M_ItemHelpAsset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_UniteMsg) == 0x0002F0, "Member 'ABP_StatusUICtrl_C::M_UniteMsg' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ShowKamuiBtnHelp) == 0x0002F8, "Member 'ABP_StatusUICtrl_C::M_ShowKamuiBtnHelp' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_CursorDataIndex) == 0x0002FC, "Member 'ABP_StatusUICtrl_C::M_CursorDataIndex' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_RightDataOffset) == 0x000300, "Member 'ABP_StatusUICtrl_C::M_RightDataOffset' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_CurosorScrollStack) == 0x000304, "Member 'ABP_StatusUICtrl_C::M_CurosorScrollStack' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ClickedSlot) == 0x000308, "Member 'ABP_StatusUICtrl_C::M_ClickedSlot' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ClickedFaceBtnLR) == 0x00030C, "Member 'ABP_StatusUICtrl_C::M_ClickedFaceBtnLR' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_MouseMediator) == 0x000310, "Member 'ABP_StatusUICtrl_C::M_MouseMediator' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_InheritStep) == 0x000318, "Member 'ABP_StatusUICtrl_C::M_InheritStep' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_ClickedFacePanel) == 0x00031C, "Member 'ABP_StatusUICtrl_C::M_ClickedFacePanel' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_wheelStack) == 0x000320, "Member 'ABP_StatusUICtrl_C::M_wheelStack' has a wrong offset!");
static_assert(offsetof(ABP_StatusUICtrl_C, M_UseButtonHelp) == 0x000324, "Member 'ABP_StatusUICtrl_C::M_UseButtonHelp' has a wrong offset!");

}

