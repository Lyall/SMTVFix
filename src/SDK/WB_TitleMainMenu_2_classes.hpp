#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TitleMainMenu_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_TitleMainMenu_2.WB_TitleMainMenu_2_C
// 0x0130 (0x0390 - 0x0260)
class UWB_TitleMainMenu_2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_Continue;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonS5*                              ButtonS5_NewGame;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonS5*                              ButtonS5_Option;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonS5*                              ButtonS5_Slot4;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonS5*                              ButtonS5_Slot5;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPosBG;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleCopyright;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleLogo;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenu_Continue;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenu_NewGame;                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenu_Option;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenu_Slot4;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenu_Slot5;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerTitleMenuCursor;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextContinueBig;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextContinueSmall;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNewGameBig;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNewGameSmall;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextOptionBig;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextOptionSmall;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSlot4Big;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSlot4Small;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSlot5Big;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextSlot5Small;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextVersionNumber;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          M_IsEndFadeOut;                                    // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_331[0x7];                                      // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CommonHelpWindowCtrl_C> M_HelpWindow;                                      // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UScriptMessageAsset*                    M_TitleMessageAsset;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    M_SystemMessageAsset;                              // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Disp_OnHoveredMouse;                               // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Disp_OnClickedMouse;                               // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         M_SlotMax;                                         // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_TITLE_TOP_SELECTION>                 M_Selection;                                       // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Disp_OnHoveredMouse__DelegateSignature(int32 Param_Index);
	void Disp_OnClickedMouse__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_WB_TitleMainMenu_2(int32 EntryPoint);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Slot5_K2Node_ComponentBoundEvent_9_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Slot4_K2Node_ComponentBoundEvent_8_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Slot5_K2Node_ComponentBoundEvent_7_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Slot4_K2Node_ComponentBoundEvent_6_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Continue_K2Node_ComponentBoundEvent_5_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Option_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_NewGame_K2Node_ComponentBoundEvent_3_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Option_K2Node_ComponentBoundEvent_2_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_Continue_K2Node_ComponentBoundEvent_1_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_TitleMainMenu_2_ButtonS5_NewGame_K2Node_ComponentBoundEvent_0_ButtonSimpleEventS5__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InitPartsPos(class FName InPartsName, class UWidget* Widget);
	void InitTitleMenuPos(int32 SlotMax);
	void GetNewGameText(class FText* Text);
	void GetContinueText(class FText* Text);
	void GetOptionText(class FText* Text);
	void GetCopyrightText(class FText* Text);
	void GetEndText(class FText* Text);
	void GetConvertText(class FText* Text);
	void SetBigTextColor(class UTextBlock* Text, bool IsSelectable);
	void ShowStart(TArray<E_TITLE_TOP_SELECTION>& Selection, bool EnableContinue, int32 CurrentNum);
	void UpdateCursor(int32 InputPin);
	void CloseCommonWindow();
	void GetVersionText(class FText* Text);
	void GetHelpWindow(TScriptInterface<class IBPI_CommonHelpWindowCtrl_C>* Param_M_HelpWindow);
	void SetSmallTextColor(class UTextBlock* Text, bool IsSelectable);
	void Get_Title_Menu_Pos(int32 SlotMax, int32 Param_Index, float* OutputPin, float* Output_Get);
	class FText GetSelectionText(TArray<E_TITLE_TOP_SELECTION>& Selection, int32 Param_Index);
	class FName GetHelpLabel(TArray<E_TITLE_TOP_SELECTION>& Selection, int32 Param_Index);
	void SetContinueTextColor(bool IsSelectable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_TitleMainMenu_2_C">();
	}
	static class UWB_TitleMainMenu_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_TitleMainMenu_2_C>();
	}
};
static_assert(alignof(UWB_TitleMainMenu_2_C) == 0x000008, "Wrong alignment on UWB_TitleMainMenu_2_C");
static_assert(sizeof(UWB_TitleMainMenu_2_C) == 0x000390, "Wrong size on UWB_TitleMainMenu_2_C");
static_assert(offsetof(UWB_TitleMainMenu_2_C, UberGraphFrame) == 0x000260, "Member 'UWB_TitleMainMenu_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, ButtonS5_Continue) == 0x000268, "Member 'UWB_TitleMainMenu_2_C::ButtonS5_Continue' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, ButtonS5_NewGame) == 0x000270, "Member 'UWB_TitleMainMenu_2_C::ButtonS5_NewGame' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, ButtonS5_Option) == 0x000278, "Member 'UWB_TitleMainMenu_2_C::ButtonS5_Option' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, ButtonS5_Slot4) == 0x000280, "Member 'UWB_TitleMainMenu_2_C::ButtonS5_Slot4' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, ButtonS5_Slot5) == 0x000288, "Member 'UWB_TitleMainMenu_2_C::ButtonS5_Slot5' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerPosBG) == 0x000290, "Member 'UWB_TitleMainMenu_2_C::SsPlayerPosBG' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleCopyright) == 0x000298, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleCopyright' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleLogo) == 0x0002A0, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleLogo' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenu_Continue) == 0x0002A8, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenu_Continue' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenu_NewGame) == 0x0002B0, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenu_NewGame' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenu_Option) == 0x0002B8, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenu_Option' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenu_Slot4) == 0x0002C0, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenu_Slot4' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenu_Slot5) == 0x0002C8, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenu_Slot5' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, SsPlayerTitleMenuCursor) == 0x0002D0, "Member 'UWB_TitleMainMenu_2_C::SsPlayerTitleMenuCursor' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextContinueBig) == 0x0002D8, "Member 'UWB_TitleMainMenu_2_C::TextContinueBig' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextContinueSmall) == 0x0002E0, "Member 'UWB_TitleMainMenu_2_C::TextContinueSmall' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextNewGameBig) == 0x0002E8, "Member 'UWB_TitleMainMenu_2_C::TextNewGameBig' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextNewGameSmall) == 0x0002F0, "Member 'UWB_TitleMainMenu_2_C::TextNewGameSmall' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextOptionBig) == 0x0002F8, "Member 'UWB_TitleMainMenu_2_C::TextOptionBig' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextOptionSmall) == 0x000300, "Member 'UWB_TitleMainMenu_2_C::TextOptionSmall' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextSlot4Big) == 0x000308, "Member 'UWB_TitleMainMenu_2_C::TextSlot4Big' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextSlot4Small) == 0x000310, "Member 'UWB_TitleMainMenu_2_C::TextSlot4Small' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextSlot5Big) == 0x000318, "Member 'UWB_TitleMainMenu_2_C::TextSlot5Big' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextSlot5Small) == 0x000320, "Member 'UWB_TitleMainMenu_2_C::TextSlot5Small' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, TextVersionNumber) == 0x000328, "Member 'UWB_TitleMainMenu_2_C::TextVersionNumber' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_IsEndFadeOut) == 0x000330, "Member 'UWB_TitleMainMenu_2_C::M_IsEndFadeOut' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_HelpWindow) == 0x000338, "Member 'UWB_TitleMainMenu_2_C::M_HelpWindow' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_TitleMessageAsset) == 0x000348, "Member 'UWB_TitleMainMenu_2_C::M_TitleMessageAsset' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_SystemMessageAsset) == 0x000350, "Member 'UWB_TitleMainMenu_2_C::M_SystemMessageAsset' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, Disp_OnHoveredMouse) == 0x000358, "Member 'UWB_TitleMainMenu_2_C::Disp_OnHoveredMouse' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, Disp_OnClickedMouse) == 0x000368, "Member 'UWB_TitleMainMenu_2_C::Disp_OnClickedMouse' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_SlotMax) == 0x000378, "Member 'UWB_TitleMainMenu_2_C::M_SlotMax' has a wrong offset!");
static_assert(offsetof(UWB_TitleMainMenu_2_C, M_Selection) == 0x000380, "Member 'UWB_TitleMainMenu_2_C::M_Selection' has a wrong offset!");

}

