#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnHelpSlot2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtnHelpSlot2.WB_BtnHelpSlot2_C
// 0x0078 (0x02D8 - 0x0260)
class UWB_BtnHelpSlot2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_261;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HelpText;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LastText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PartsCanvas;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_HoldEffect;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtnHelp_ActionMappingIcon_C*        WB_MappingIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBtnHelpInfo                           Debug_HelpInfo;                                    // 0x0298(0x0020)(Edit, BlueprintVisible)
	bool                                          IsActiveColor;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_IsActiveColor;                               // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDrawEffect;                                      // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_IsHoldEffect;                                // 0x02BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641C[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    ScriptMsg_Shop;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_IsGamePad;                                   // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMouseHovered;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsClickingKeyboardIcon;                            // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTN_HELP_MAPPING_KEY_TYPE                   ClickedKeyboardIconInfo_HelpType;                  // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClickedKeyboarrdIconInfo_HelpIdx;                  // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconToTextSpace;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_BtnHelpSlot2(int32 EntryPoint);
	void BndEvt__WB_BtnHelpSlot2_ButtonS5_261_K2Node_ComponentBoundEvent_2_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_BtnHelpSlot2_ButtonS5_261_K2Node_ComponentBoundEvent_1_ButtonDragDrppEventS5__DelegateSignature(const struct FVector2D& StartPos, const struct FVector2D& StartUV, const struct FVector2D& CurrentPos, const struct FVector2D& CurrentUV);
	void BndEvt__WB_BtnHelpSlot2_ButtonS5_261_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ResetParam();
	void SetHelpInfo2(struct FBtnHelpInfo& InInfo2);
	void SetActiveColor(bool Param_IsActiveColor);
	void SetHoldEffect(bool Param_IsDrawEffect);
	void SetCollapsedHoldEffect(bool IsCollapsed);
	void GetActiveColor(bool* Param_IsActiveColor);
	void GetTextEndOffset(float* OffsetX);
	void GetNowTextWidth(float* Width);
	void GetLastCharWidth(float* LastCharWidth);
	void SetDispMode(bool IsGamePad);
	void UpdatePartsLayout();
	void ReloadKeyboardText();
	void UpdateHoverKeyboardHelp();
	void UpdateClickKeyboardHelp();
	void ResetClickedKeyboardHelpInfo();
	void OnClickedKeyboardHelp(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void OnReleasedKeyboardHelp(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtnHelpSlot2_C">();
	}
	static class UWB_BtnHelpSlot2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtnHelpSlot2_C>();
	}
};
static_assert(alignof(UWB_BtnHelpSlot2_C) == 0x000008, "Wrong alignment on UWB_BtnHelpSlot2_C");
static_assert(sizeof(UWB_BtnHelpSlot2_C) == 0x0002D8, "Wrong size on UWB_BtnHelpSlot2_C");
static_assert(offsetof(UWB_BtnHelpSlot2_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtnHelpSlot2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, ButtonS5_261) == 0x000268, "Member 'UWB_BtnHelpSlot2_C::ButtonS5_261' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, HelpText) == 0x000270, "Member 'UWB_BtnHelpSlot2_C::HelpText' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, LastText) == 0x000278, "Member 'UWB_BtnHelpSlot2_C::LastText' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, PartsCanvas) == 0x000280, "Member 'UWB_BtnHelpSlot2_C::PartsCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, SsPlayer_HoldEffect) == 0x000288, "Member 'UWB_BtnHelpSlot2_C::SsPlayer_HoldEffect' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, WB_MappingIcon) == 0x000290, "Member 'UWB_BtnHelpSlot2_C::WB_MappingIcon' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, Debug_HelpInfo) == 0x000298, "Member 'UWB_BtnHelpSlot2_C::Debug_HelpInfo' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, IsActiveColor) == 0x0002B8, "Member 'UWB_BtnHelpSlot2_C::IsActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, Debug_IsActiveColor) == 0x0002B9, "Member 'UWB_BtnHelpSlot2_C::Debug_IsActiveColor' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, IsDrawEffect) == 0x0002BA, "Member 'UWB_BtnHelpSlot2_C::IsDrawEffect' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, Debug_IsHoldEffect) == 0x0002BB, "Member 'UWB_BtnHelpSlot2_C::Debug_IsHoldEffect' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, ScriptMsg_Shop) == 0x0002C0, "Member 'UWB_BtnHelpSlot2_C::ScriptMsg_Shop' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, Debug_IsGamePad) == 0x0002C8, "Member 'UWB_BtnHelpSlot2_C::Debug_IsGamePad' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, IsMouseHovered) == 0x0002C9, "Member 'UWB_BtnHelpSlot2_C::IsMouseHovered' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, IsClickingKeyboardIcon) == 0x0002CA, "Member 'UWB_BtnHelpSlot2_C::IsClickingKeyboardIcon' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, ClickedKeyboardIconInfo_HelpType) == 0x0002CB, "Member 'UWB_BtnHelpSlot2_C::ClickedKeyboardIconInfo_HelpType' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, ClickedKeyboarrdIconInfo_HelpIdx) == 0x0002CC, "Member 'UWB_BtnHelpSlot2_C::ClickedKeyboarrdIconInfo_HelpIdx' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelpSlot2_C, IconToTextSpace) == 0x0002D0, "Member 'UWB_BtnHelpSlot2_C::IconToTextSpace' has a wrong offset!");

}

