#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ScrollBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ScrollBar.WB_ScrollBar_C
// 0x0068 (0x02C8 - 0x0260)
class UWB_ScrollBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              Button_ScrollBox;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_ScrollBar;                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerWidget_ScrollBox;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              M_barTopPosition;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              M_bottomoPosition;                                 // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_currentBarPosition;                              // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_ScrollBarPosRate;                                // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnScrolledByMouse;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         M_GrabPointUV;                                     // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_DragPtn;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_RepeatWait;                                      // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3856[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              M_LastDraggedPos;                                  // 0x02B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ListDataNum;                                     // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ListSlotNum;                                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnScrolledByMouse__DelegateSignature(float Position);
	void ExecuteUbergraph_WB_ScrollBar(int32 EntryPoint);
	void BndEvt__WB_ScrollBar_Button_ScrollBox_K2Node_ComponentBoundEvent_3_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_ScrollBar_Button_ScrollBox_K2Node_ComponentBoundEvent_2_ButtonDragDrppEventS5__DelegateSignature(const struct FVector2D& StartPos, const struct FVector2D& StartUV, const struct FVector2D& CurrentPos, const struct FVector2D& CurrentUV);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WB_ScrollBar_Button_ScrollBox_K2Node_ComponentBoundEvent_1_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_ScrollBar_Button_ScrollBox_K2Node_ComponentBoundEvent_0_ButtonDragDrppEventS5__DelegateSignature(const struct FVector2D& StartPos, const struct FVector2D& StartUV, const struct FVector2D& CurrentPos, const struct FVector2D& CurrentUV);
	void PreConstruct(bool IsDesignTime);
	void InitScrollBar();
	void SetBarPosition(float InRate);
	void GetPressedMouseScrollRate(const struct FVector2D& InScrollBarPosition, float* ScrollBarPosRate);
	void GetScrollBoxFocusState(bool* Param_IsHovered, bool* IsPressed);
	void GetScrollBarFocusState(bool* Param_IsHovered, bool* IsPressed);
	void BarPositionToTopIndex(float BarPosition, int32 ListDataNum, int32 ListSlotNum, int32* OutTopIndex);
	bool IsMouseOveredToScrollBar();
	void SetListNum(int32 ListDataNum, int32 ListSlotNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ScrollBar_C">();
	}
	static class UWB_ScrollBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ScrollBar_C>();
	}
};
static_assert(alignof(UWB_ScrollBar_C) == 0x000008, "Wrong alignment on UWB_ScrollBar_C");
static_assert(sizeof(UWB_ScrollBar_C) == 0x0002C8, "Wrong size on UWB_ScrollBar_C");
static_assert(offsetof(UWB_ScrollBar_C, UberGraphFrame) == 0x000260, "Member 'UWB_ScrollBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, Button_ScrollBox) == 0x000268, "Member 'UWB_ScrollBar_C::Button_ScrollBox' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, SsPlayerWidget_ScrollBar) == 0x000270, "Member 'UWB_ScrollBar_C::SsPlayerWidget_ScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, SsPlayerWidget_ScrollBox) == 0x000278, "Member 'UWB_ScrollBar_C::SsPlayerWidget_ScrollBox' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_barTopPosition) == 0x000280, "Member 'UWB_ScrollBar_C::M_barTopPosition' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_bottomoPosition) == 0x000288, "Member 'UWB_ScrollBar_C::M_bottomoPosition' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_currentBarPosition) == 0x000290, "Member 'UWB_ScrollBar_C::M_currentBarPosition' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_ScrollBarPosRate) == 0x000294, "Member 'UWB_ScrollBar_C::M_ScrollBarPosRate' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, OnScrolledByMouse) == 0x000298, "Member 'UWB_ScrollBar_C::OnScrolledByMouse' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_GrabPointUV) == 0x0002A8, "Member 'UWB_ScrollBar_C::M_GrabPointUV' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_DragPtn) == 0x0002AC, "Member 'UWB_ScrollBar_C::M_DragPtn' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_RepeatWait) == 0x0002B0, "Member 'UWB_ScrollBar_C::M_RepeatWait' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_LastDraggedPos) == 0x0002B4, "Member 'UWB_ScrollBar_C::M_LastDraggedPos' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_ListDataNum) == 0x0002BC, "Member 'UWB_ScrollBar_C::M_ListDataNum' has a wrong offset!");
static_assert(offsetof(UWB_ScrollBar_C, M_ListSlotNum) == 0x0002C0, "Member 'UWB_ScrollBar_C::M_ListSlotNum' has a wrong offset!");

}
