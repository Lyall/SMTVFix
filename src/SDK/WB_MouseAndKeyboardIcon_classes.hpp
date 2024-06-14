#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MouseAndKeyboardIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MouseAndKeyboardIcon.WB_MouseAndKeyboardIcon_C
// 0x0078 (0x02D8 - 0x0260)
class UWB_MouseAndKeyboardIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_64;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeyboardIcon_C*                     WB_KeyboardIcon;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MouseIcon_C*                        WB_MouseIcon;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               IconSize2;                                         // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635F[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           IconColor;                                         // 0x0284(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6360[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Debug_KeyInfo;                                     // 0x0298(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsMouse;                                           // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTN_HELP_MAPPING_KEY_TYPE                   OnClickedReactType;                                // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6361[0x2];                                     // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OnClickedReactIdx;                                 // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedKeyboardIcon;                             // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleasedKeyboardIcon;                            // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedKeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void OnReleasedKeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void ExecuteUbergraph_WB_MouseAndKeyboardIcon(int32 EntryPoint);
	void BndEvt__WB_MouseAndKeyboardIcon_ButtonS5_64_K2Node_ComponentBoundEvent_2_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__WB_MouseAndKeyboardIcon_ButtonS5_64_K2Node_ComponentBoundEvent_1_ButtonDragDrppEventS5__DelegateSignature(const struct FVector2D& StartPos, const struct FVector2D& StartUV, const struct FVector2D& CurrentPos, const struct FVector2D& CurrentUV);
	void BndEvt__WB_MouseAndKeyboardIcon_ButtonS5_64_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void PreConstruct(bool IsDesignTime);
	void SetIconInfo(const struct FKey& InKeyInfo);
	void SetIconSize(E_BTN_ICON_SIZE InIconSize2);
	void SetIconColor(const struct FLinearColor& InColor);
	void SetIconColor_ByActiveState(bool IsActiveColor);
	void SetClickedReactMapping(E_BTN_HELP_MAPPING_KEY_TYPE Param_OnClickedReactType, int32 Param_OnClickedReactIdx);
	void UpdateButtonS5();
	void IsMouseIcon(bool* Param_IsMouse);
	void IsExternalFont(bool* Param_IsExternalFont);
	void GetKeyText(class FText* KeyboardText);
	void GetKeyTextFont(struct FSlateFontInfo* Font);
	void GetKeyboardIconSsPlayerFrame(int32* KeyboardText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MouseAndKeyboardIcon_C">();
	}
	static class UWB_MouseAndKeyboardIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MouseAndKeyboardIcon_C>();
	}
};
static_assert(alignof(UWB_MouseAndKeyboardIcon_C) == 0x000008, "Wrong alignment on UWB_MouseAndKeyboardIcon_C");
static_assert(sizeof(UWB_MouseAndKeyboardIcon_C) == 0x0002D8, "Wrong size on UWB_MouseAndKeyboardIcon_C");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_MouseAndKeyboardIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, ButtonS5_64) == 0x000268, "Member 'UWB_MouseAndKeyboardIcon_C::ButtonS5_64' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, WB_KeyboardIcon) == 0x000270, "Member 'UWB_MouseAndKeyboardIcon_C::WB_KeyboardIcon' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, WB_MouseIcon) == 0x000278, "Member 'UWB_MouseAndKeyboardIcon_C::WB_MouseIcon' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, IconSize2) == 0x000280, "Member 'UWB_MouseAndKeyboardIcon_C::IconSize2' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, IconColor) == 0x000284, "Member 'UWB_MouseAndKeyboardIcon_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, Debug_KeyInfo) == 0x000298, "Member 'UWB_MouseAndKeyboardIcon_C::Debug_KeyInfo' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, IsMouse) == 0x0002B0, "Member 'UWB_MouseAndKeyboardIcon_C::IsMouse' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, OnClickedReactType) == 0x0002B1, "Member 'UWB_MouseAndKeyboardIcon_C::OnClickedReactType' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, OnClickedReactIdx) == 0x0002B4, "Member 'UWB_MouseAndKeyboardIcon_C::OnClickedReactIdx' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, OnClickedKeyboardIcon) == 0x0002B8, "Member 'UWB_MouseAndKeyboardIcon_C::OnClickedKeyboardIcon' has a wrong offset!");
static_assert(offsetof(UWB_MouseAndKeyboardIcon_C, OnReleasedKeyboardIcon) == 0x0002C8, "Member 'UWB_MouseAndKeyboardIcon_C::OnReleasedKeyboardIcon' has a wrong offset!");

}

