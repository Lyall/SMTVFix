#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlCommandMenuPart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C
// 0x0078 (0x02D8 - 0x0260)
class UWB_BtlCommandMenuPart_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_Command;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_MenuPart;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   NormalAnimPack;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   SelectedAnimPack;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSelectable;                                      // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsSelected;                                        // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_28A[0x2];                                      // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SlideInRemainTick;                                 // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Evt_OnSlideIn;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSlideOuting;                                     // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDoneSlideIn;                                     // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTL_UI_COMMAND                              UI_Result;                                         // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          M_IsDisappeared;                                   // 0x02A3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Evt_OnHovered;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_OnClicked;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_OnUnHovered;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Evt_OnSlideIn__DelegateSignature();
	void Evt_OnHovered__DelegateSignature(E_BTL_UI_COMMAND Command);
	void Evt_OnClicked__DelegateSignature(E_BTL_UI_COMMAND Command);
	void Evt_OnUnHovered__DelegateSignature();
	void ExecuteUbergraph_WB_BtlCommandMenuPart(int32 EntryPoint);
	void BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_5_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Slide_Out();
	void Slide_In(int32 DelayRemainTick, bool Immediately);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetSelected(bool Selected);
	class FName GetAnimPack();
	void CalcMaterial();
	void SetSelectable(bool Selectable);
	void GetResult(E_BTL_UI_COMMAND* Result, bool* Selectable);
	void PlayMenuAnim(int32 AnimIndex, bool IsLoop);
	void IsFinishSlideIn(bool* IsFinished);
	void IsDisappeared(bool* Param_IsDisappeared);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtlCommandMenuPart_C">();
	}
	static class UWB_BtlCommandMenuPart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtlCommandMenuPart_C>();
	}
};
static_assert(alignof(UWB_BtlCommandMenuPart_C) == 0x000008, "Wrong alignment on UWB_BtlCommandMenuPart_C");
static_assert(sizeof(UWB_BtlCommandMenuPart_C) == 0x0002D8, "Wrong size on UWB_BtlCommandMenuPart_C");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtlCommandMenuPart_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, ButtonS5_Command) == 0x000268, "Member 'UWB_BtlCommandMenuPart_C::ButtonS5_Command' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, SsPlayer_MenuPart) == 0x000270, "Member 'UWB_BtlCommandMenuPart_C::SsPlayer_MenuPart' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, NormalAnimPack) == 0x000278, "Member 'UWB_BtlCommandMenuPart_C::NormalAnimPack' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, SelectedAnimPack) == 0x000280, "Member 'UWB_BtlCommandMenuPart_C::SelectedAnimPack' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, IsSelectable) == 0x000288, "Member 'UWB_BtlCommandMenuPart_C::IsSelectable' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, IsSelected) == 0x000289, "Member 'UWB_BtlCommandMenuPart_C::IsSelected' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, SlideInRemainTick) == 0x00028C, "Member 'UWB_BtlCommandMenuPart_C::SlideInRemainTick' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, Evt_OnSlideIn) == 0x000290, "Member 'UWB_BtlCommandMenuPart_C::Evt_OnSlideIn' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, IsSlideOuting) == 0x0002A0, "Member 'UWB_BtlCommandMenuPart_C::IsSlideOuting' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, IsDoneSlideIn) == 0x0002A1, "Member 'UWB_BtlCommandMenuPart_C::IsDoneSlideIn' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, UI_Result) == 0x0002A2, "Member 'UWB_BtlCommandMenuPart_C::UI_Result' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, M_IsDisappeared) == 0x0002A3, "Member 'UWB_BtlCommandMenuPart_C::M_IsDisappeared' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, Evt_OnHovered) == 0x0002A8, "Member 'UWB_BtlCommandMenuPart_C::Evt_OnHovered' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, Evt_OnClicked) == 0x0002B8, "Member 'UWB_BtlCommandMenuPart_C::Evt_OnClicked' has a wrong offset!");
static_assert(offsetof(UWB_BtlCommandMenuPart_C, Evt_OnUnHovered) == 0x0002C8, "Member 'UWB_BtlCommandMenuPart_C::Evt_OnUnHovered' has a wrong offset!");

}

