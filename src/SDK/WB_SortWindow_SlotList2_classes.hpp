#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SortWindow_SlotList2

#include "Basic.hpp"

#include "E_SORTWINDOW_ANIM_STATE_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_SortWindow_SlotList2.WB_SortWindow_SlotList2_C
// 0x00B8 (0x0318 - 0x0260)
class UWB_SortWindow_SlotList2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_1;                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_2;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_3;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_4;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_5;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_6;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_SortWindow_Slot2_C*                 WB_SortWindowSlot_7;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_SortWindow_Slot2_C*>         SlotList;                                          // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         SlotPaddingY;                                      // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SlotDispNum;                                       // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           Debug_SortItemList;                                // 0x02C0(0x0010)(Edit, BlueprintVisible)
	int32                                         OnCursorIdx;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Debug_OnCursorIdx;                                 // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AppliedSlotIdx;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SORTWINDOW_ANIM_STATE                       AinmState;                                         // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2001[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrameIn_Interval;                                  // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameIn_TimeCounter;                               // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FrameIn_SlotCounter;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Debug_AppliedSlotIdx;                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_IsTickPreConstruct;                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2002[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             MouseEvent_OnHovered;                              // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             MouseEvent_OnClicked;                              // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void MouseEvent_OnHovered__DelegateSignature(int32 SlotIdx);
	void MouseEvent_OnClicked__DelegateSignature(int32 SlotIdx);
	void ExecuteUbergraph_WB_SortWindow_SlotList2(int32 EntryPoint);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Init();
	void SetSlotListInfo(TArray<class FText>& InListInfo);
	void GetCursorIdx(int32* CursorIdx);
	void SetCursorIdx(int32 InSlotIdx);
	void SetAnimState(E_SORTWINDOW_ANIM_STATE InState);
	void Tick_Base();
	void Tick_FrameIn();
	void Tick_FrameOut();
	void CursorMove_Up();
	void GetSlotMaxNum(int32* SlotMaxNum);
	void CursorMove_Down();
	void CursorMove_Top();
	void CursorMove_Bottom();
	void CheckCursorPosAndSkipListIn();
	void GetAnimState(E_SORTWINDOW_ANIM_STATE* Param_AinmState);
	void SetAppliedSlotIdx(int32 InSlotIdx);
	void GetAppliedSlotIdx(int32* Param_AppliedSlotIdx);
	void SetAnimPlayRate(float InAnimPlayRate);
	void BindMouseInputEvent();
	void OnHoveredMouse(int32 SlotIdx);
	void OnClickedMouse(int32 SlotIdx);
	void UnbindMouseInputEvent();
	void SetMouseHitVisibility(bool EnableMouseHit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_SortWindow_SlotList2_C">();
	}
	static class UWB_SortWindow_SlotList2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_SortWindow_SlotList2_C>();
	}
};
static_assert(alignof(UWB_SortWindow_SlotList2_C) == 0x000008, "Wrong alignment on UWB_SortWindow_SlotList2_C");
static_assert(sizeof(UWB_SortWindow_SlotList2_C) == 0x000318, "Wrong size on UWB_SortWindow_SlotList2_C");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, UberGraphFrame) == 0x000260, "Member 'UWB_SortWindow_SlotList2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot) == 0x000268, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_1) == 0x000270, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_1' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_2) == 0x000278, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_2' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_3) == 0x000280, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_3' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_4) == 0x000288, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_4' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_5) == 0x000290, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_5' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_6) == 0x000298, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_6' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, WB_SortWindowSlot_7) == 0x0002A0, "Member 'UWB_SortWindow_SlotList2_C::WB_SortWindowSlot_7' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, SlotList) == 0x0002A8, "Member 'UWB_SortWindow_SlotList2_C::SlotList' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, SlotPaddingY) == 0x0002B8, "Member 'UWB_SortWindow_SlotList2_C::SlotPaddingY' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, SlotDispNum) == 0x0002BC, "Member 'UWB_SortWindow_SlotList2_C::SlotDispNum' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, Debug_SortItemList) == 0x0002C0, "Member 'UWB_SortWindow_SlotList2_C::Debug_SortItemList' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, OnCursorIdx) == 0x0002D0, "Member 'UWB_SortWindow_SlotList2_C::OnCursorIdx' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, Debug_OnCursorIdx) == 0x0002D4, "Member 'UWB_SortWindow_SlotList2_C::Debug_OnCursorIdx' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, AppliedSlotIdx) == 0x0002D8, "Member 'UWB_SortWindow_SlotList2_C::AppliedSlotIdx' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, AinmState) == 0x0002DC, "Member 'UWB_SortWindow_SlotList2_C::AinmState' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, FrameIn_Interval) == 0x0002E0, "Member 'UWB_SortWindow_SlotList2_C::FrameIn_Interval' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, FrameIn_TimeCounter) == 0x0002E4, "Member 'UWB_SortWindow_SlotList2_C::FrameIn_TimeCounter' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, FrameIn_SlotCounter) == 0x0002E8, "Member 'UWB_SortWindow_SlotList2_C::FrameIn_SlotCounter' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, Debug_AppliedSlotIdx) == 0x0002EC, "Member 'UWB_SortWindow_SlotList2_C::Debug_AppliedSlotIdx' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, Debug_IsTickPreConstruct) == 0x0002F0, "Member 'UWB_SortWindow_SlotList2_C::Debug_IsTickPreConstruct' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, MouseEvent_OnHovered) == 0x0002F8, "Member 'UWB_SortWindow_SlotList2_C::MouseEvent_OnHovered' has a wrong offset!");
static_assert(offsetof(UWB_SortWindow_SlotList2_C, MouseEvent_OnClicked) == 0x000308, "Member 'UWB_SortWindow_SlotList2_C::MouseEvent_OnClicked' has a wrong offset!");

}

