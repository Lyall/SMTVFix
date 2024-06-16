#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_QuestSlotList2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "E_CampQuest_SsAnimState_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_QuestSlotList2.WB_QuestSlotList2_C
// 0x00D0 (0x0330 - 0x0260)
class UWB_QuestSlotList2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Base;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BaseNewIcon;                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BaseUpdateIcon;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_1;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_2;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_3;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_4;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_5;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_6;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_7;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_8;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_9;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_QuestSlot2_C*                       WB_QuestSlot_10;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_QuestSlot2_C*>               SlotList;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         SlotPaddingY;                                      // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotDispNum;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OnCursorIdx;                                       // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACE[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCampQuestListData>             Debug_ListInfo;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible)
	int32                                         Debug_OnCursorIdx;                                 // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CampQuest_SsAnimState                       SlotAnimState;                                     // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ACF[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrameIn_Interval;                                  // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameIn_TimeCounter;                               // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FrameIn_SlotCounter;                               // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDesignTime;                                      // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AD0[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHoveredMouseToSlot;                              // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnHoveredMouse(int32 OnHoveredSlot);
	void UnbindMouseInputEvent();
	void BindMouseInputEvent();
	void SkipAnim_IfCursorOnNotListInSlot();
	void GetSlotListAnimState(E_CampQuest_SsAnimState* AnimState);
	void GetSlotDrawMax(int32* MaxDrawNum);
	void SetUpdateIconState(int32 InSlotIdx, bool IsVisibleIcon);
	void SetNewIconState(int32 InSlotIdx, bool IsVisibleIcon);
	void Tick_FrameOut();
	void AlignIconAnimFrame();
	void Tick_FrameIn();
	void Tick_Base();
	void SetAnimState(E_CampQuest_SsAnimState InState, bool NotUpdateAnim);
	void CursorMove_Bottom();
	void CursorMove_Top();
	void CursorMove_Down();
	void CursorMove_Up();
	void SetCursorIndex(int32 InSlotIdx);
	void GetCursorIndex(int32* SlotIdx);
	void SetSlotListInfo(TArray<struct FCampQuestListData>& InListInfo);
	void Init();
	void PreConstruct(bool Param_IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void ExecuteUbergraph_WB_QuestSlotList2(int32 EntryPoint);
	void OnHoveredMouseToSlot__DelegateSignature(int32 OnHoveredSlot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_QuestSlotList2_C">();
	}
	static class UWB_QuestSlotList2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_QuestSlotList2_C>();
	}
};
static_assert(alignof(UWB_QuestSlotList2_C) == 0x000008, "Wrong alignment on UWB_QuestSlotList2_C");
static_assert(sizeof(UWB_QuestSlotList2_C) == 0x000330, "Wrong size on UWB_QuestSlotList2_C");
static_assert(offsetof(UWB_QuestSlotList2_C, UberGraphFrame) == 0x000260, "Member 'UWB_QuestSlotList2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, Canvas_Base) == 0x000268, "Member 'UWB_QuestSlotList2_C::Canvas_Base' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SsPlayer_BaseNewIcon) == 0x000270, "Member 'UWB_QuestSlotList2_C::SsPlayer_BaseNewIcon' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SsPlayer_BaseUpdateIcon) == 0x000278, "Member 'UWB_QuestSlotList2_C::SsPlayer_BaseUpdateIcon' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot) == 0x000280, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_1) == 0x000288, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_1' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_2) == 0x000290, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_2' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_3) == 0x000298, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_3' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_4) == 0x0002A0, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_4' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_5) == 0x0002A8, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_5' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_6) == 0x0002B0, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_6' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_7) == 0x0002B8, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_7' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_8) == 0x0002C0, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_8' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_9) == 0x0002C8, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_9' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, WB_QuestSlot_10) == 0x0002D0, "Member 'UWB_QuestSlotList2_C::WB_QuestSlot_10' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SlotList) == 0x0002D8, "Member 'UWB_QuestSlotList2_C::SlotList' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SlotPaddingY) == 0x0002E8, "Member 'UWB_QuestSlotList2_C::SlotPaddingY' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SlotDispNum) == 0x0002EC, "Member 'UWB_QuestSlotList2_C::SlotDispNum' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, OnCursorIdx) == 0x0002F0, "Member 'UWB_QuestSlotList2_C::OnCursorIdx' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, Debug_ListInfo) == 0x0002F8, "Member 'UWB_QuestSlotList2_C::Debug_ListInfo' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, Debug_OnCursorIdx) == 0x000308, "Member 'UWB_QuestSlotList2_C::Debug_OnCursorIdx' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, SlotAnimState) == 0x00030C, "Member 'UWB_QuestSlotList2_C::SlotAnimState' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, FrameIn_Interval) == 0x000310, "Member 'UWB_QuestSlotList2_C::FrameIn_Interval' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, FrameIn_TimeCounter) == 0x000314, "Member 'UWB_QuestSlotList2_C::FrameIn_TimeCounter' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, FrameIn_SlotCounter) == 0x000318, "Member 'UWB_QuestSlotList2_C::FrameIn_SlotCounter' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, IsDesignTime) == 0x00031C, "Member 'UWB_QuestSlotList2_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UWB_QuestSlotList2_C, OnHoveredMouseToSlot) == 0x000320, "Member 'UWB_QuestSlotList2_C::OnHoveredMouseToSlot' has a wrong offset!");

}
