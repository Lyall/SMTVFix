#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampQuestCtrl2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_CampQuest_CtrlState_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "E_CATEGORYWINDOW_MOUSE_EVENT_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampQuestCtrl2.BP_CampQuestCtrl2_C
// 0x0050 (0x02C8 - 0x0278)
class ABP_CampQuestCtrl2_C final : public ACampQuestWindowCtrlBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_Quest2_C*                           WB_Quest;                                          // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_WIDGET_PRIO                                 WidgetPrio;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MISSION_MAJOR_TYPE                          NowQuestType;                                      // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CampQuest_CtrlState                         QuestCtrlState;                                    // 0x0292(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905C[0x1];                                     // 0x0293(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DispTopIdx;                                        // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowSelectIndex;                                    // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotDrawNum_Main;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotDrawNum_Sub;                                   // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastSelectIdx_Main;                                // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastSelectIdx_Sub;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CampQuest_CtrlState                         QuestCtrlState_Previous;                           // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905D[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SubState;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_905E[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBtnHelpInfo>                   NowBtnHelpInfo;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void CampQuest_GetSubState(int32* Param_SubState);
	void CampQuest_GetState(E_CampQuest_CtrlState* CampQuestState);
	void CampQuest_IsExistNewIcon(bool* ExistNewIcon);
	void PadCheck_Purpose();
	void OnCategoryWIndouMouseEvent(E_CATEGORYWINDOW_MOUSE_EVENT_TYPE InMouseEventType, int32 InSelectCategoryIcon);
	void OnMovedSummaryScrollBar_ByMouse(float InScrollRate);
	void OnMovedSlotListScrollBar_ByMouse(float InScrollRate);
	void OnHoveredMouseToSlot(int32 InSlotIdx);
	void CheckMouseWheel();
	void UnbindMouseInputEvent();
	void BindMouseInputEvent();
	void PadCheck_Map();
	void UpdateLastSelectIdx();
	void UpdateBtnHelp();
	void UpdateHelpMessage();
	void SetupState_ChangeTab_In();
	void PadCheck_Tab(bool CheckSlotIcon, bool KeepSelectIndex);
	void UpdateSlotScrollBarRate();
	void Update_Slot_Icon_Visible(bool UpdateGameData, bool UpdateWidgetVisible);
	void PadCheck_Cursor();
	void CursorMove_Right();
	void CursorMove_Left();
	void CursorMove_Down();
	void CursorMove_Up();
	void UpdateWidgetInfo(bool IsSlotList, bool IsQuestInfo);
	void GetSelectQuestID(int32* Quest_ID);
	void PadCheck_ChangeTab_Out();
	void PadCheck_Active();
	void PadCheck_In();
	void GetLastSelectIdx(E_MISSION_MAJOR_TYPE InQuestCategory, int32* SlotDrawNum);
	void GetDispMaxOffset(E_MISSION_MAJOR_TYPE InQuestCategory, int32* DispMaxOffset);
	void GetSlotDrawNum(E_MISSION_MAJOR_TYPE InQuestCategory, int32* SlotDrawNum);
	void LoadData();
	void SetupState_FrameIn();
	void SetupState_NotActive();
	void Tick_Base();
	void SetMainState(E_CampQuest_CtrlState InState, bool OnlyStateChange);
	void End();
	void Init();
	void OnFinishedOpenMap();
	void OpenMap();
	void CampQuest_LoadData();
	void CampQuest_Open(E_WIDGET_PRIO InWidgetPrio);
	void CampQuest_Close(bool SkipAnim);
	void CampQuest_Update();
	void CampQuest_AdvanceSubState();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_CampQuestCtrl2(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampQuestCtrl2_C">();
	}
	static class ABP_CampQuestCtrl2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampQuestCtrl2_C>();
	}
};
static_assert(alignof(ABP_CampQuestCtrl2_C) == 0x000008, "Wrong alignment on ABP_CampQuestCtrl2_C");
static_assert(sizeof(ABP_CampQuestCtrl2_C) == 0x0002C8, "Wrong size on ABP_CampQuestCtrl2_C");
static_assert(offsetof(ABP_CampQuestCtrl2_C, UberGraphFrame) == 0x000278, "Member 'ABP_CampQuestCtrl2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_CampQuestCtrl2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, WB_Quest) == 0x000288, "Member 'ABP_CampQuestCtrl2_C::WB_Quest' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, WidgetPrio) == 0x000290, "Member 'ABP_CampQuestCtrl2_C::WidgetPrio' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, NowQuestType) == 0x000291, "Member 'ABP_CampQuestCtrl2_C::NowQuestType' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, QuestCtrlState) == 0x000292, "Member 'ABP_CampQuestCtrl2_C::QuestCtrlState' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, DispTopIdx) == 0x000294, "Member 'ABP_CampQuestCtrl2_C::DispTopIdx' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, NowSelectIndex) == 0x000298, "Member 'ABP_CampQuestCtrl2_C::NowSelectIndex' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, SlotDrawNum_Main) == 0x00029C, "Member 'ABP_CampQuestCtrl2_C::SlotDrawNum_Main' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, SlotDrawNum_Sub) == 0x0002A0, "Member 'ABP_CampQuestCtrl2_C::SlotDrawNum_Sub' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, LastSelectIdx_Main) == 0x0002A4, "Member 'ABP_CampQuestCtrl2_C::LastSelectIdx_Main' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, LastSelectIdx_Sub) == 0x0002A8, "Member 'ABP_CampQuestCtrl2_C::LastSelectIdx_Sub' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, QuestCtrlState_Previous) == 0x0002AC, "Member 'ABP_CampQuestCtrl2_C::QuestCtrlState_Previous' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, SubState) == 0x0002B0, "Member 'ABP_CampQuestCtrl2_C::SubState' has a wrong offset!");
static_assert(offsetof(ABP_CampQuestCtrl2_C, NowBtnHelpInfo) == 0x0002B8, "Member 'ABP_CampQuestCtrl2_C::NowBtnHelpInfo' has a wrong offset!");

}

