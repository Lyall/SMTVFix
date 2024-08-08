#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnHelp_ActionMappingIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtnHelp_ActionMappingIcon.WB_BtnHelp_ActionMappingIcon_C
// 0x0090 (0x02F0 - 0x0260)
class UWB_BtnHelp_ActionMappingIcon_C final : public UBtnHelp_ActionMappingIconBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           BaseCanvas;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           KeyboardCanvas;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MouseAndKeyboardIcon_C*             MouseKeyboard_Icon0;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MouseAndKeyboardIcon_C*             MouseKeyboard_Icon1;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MouseAndKeyboardIcon_C*             MouseKeyboard_Icon2;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MouseAndKeyboardIcon_C*             MouseKeyboard_Icon3;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtnIcon2_C*                         PadButton_Icon;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDesignTime;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug_IsGamePad;                                   // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTN_HELP_MAPPING_KEY_TYPE                   Debug_HelpMappingType;                             // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A3[0x1];                                      // 0x02A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           IconColor;                                         // 0x02A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWB_MouseAndKeyboardIcon_C*>     MouseKeyboardIcon;                                 // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsGamePadMode;                                     // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BTN_ICON_SIZE                               IconSize2;                                         // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_MAPPING_KEY_TYPE                   HelpMappingType;                                   // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CB[0x5];                                      // 0x02CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked_KeyboardIcon;                            // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased_KeyboardIcon;                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked_KeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void OnReleased_KeyboardIcon__DelegateSignature(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void ExecuteUbergraph_WB_BtnHelp_ActionMappingIcon(int32 EntryPoint);
	void Destruct();
	void SetIconTranslation(const struct FVector2D& InTranslation);
	void SetIconInfo(E_BTN_HELP_MAPPING_KEY_TYPE InIconMappingType);
	void SetIconDispMode(bool IsGamePad);
	void SetIconSize(E_BTN_ICON_SIZE InIconSize);
	void SetIconColor_ByActiveState(bool IsActive);
	void SetIconColor(const struct FLinearColor& InColor);
	void PreConstruct(bool Param_IsDesignTime);
	void Init();
	void SetSize(E_BTN_ICON_SIZE InSIze2);
	void SetTranslation(const struct FVector2D& InTranslation);
	void SetInfo(E_BTN_HELP_MAPPING_KEY_TYPE InHelpMappingType);
	void SetColor(const struct FLinearColor& InColor);
	void SetColor_ByActiveState(bool IsActive);
	void SetDispMode(bool IsGamePad);
	bool GetIconDispMode();
	TArray<int32> GetKeyboardIconSsPlayerFrame();
	TArray<class FString> GetKeyboardIconText();
	struct FSlateFontInfo GetKeyboardIconFont();
	int32 GetKeyboardIconDispNum();
	void ReloadPadIcon();
	void ReloadKeyboardText();
	void OnClickedKeyboardIcon(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void OnReleasedKeyboardIcon(E_BTN_HELP_MAPPING_KEY_TYPE OnClickedHelpType, int32 OnClickedHelpIdx);
	void GetClickedKeyboardIconInfo(E_BTN_HELP_MAPPING_KEY_TYPE* Param_HelpMappingType, int32* DiscIconLastIdx);
	void UpdateKeyboardIconPos();
	void GetCurrentMappingType(E_BTN_HELP_MAPPING_KEY_TYPE* MappingType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtnHelp_ActionMappingIcon_C">();
	}
	static class UWB_BtnHelp_ActionMappingIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtnHelp_ActionMappingIcon_C>();
	}
};
static_assert(alignof(UWB_BtnHelp_ActionMappingIcon_C) == 0x000008, "Wrong alignment on UWB_BtnHelp_ActionMappingIcon_C");
static_assert(sizeof(UWB_BtnHelp_ActionMappingIcon_C) == 0x0002F0, "Wrong size on UWB_BtnHelp_ActionMappingIcon_C");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtnHelp_ActionMappingIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, BaseCanvas) == 0x000268, "Member 'UWB_BtnHelp_ActionMappingIcon_C::BaseCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, KeyboardCanvas) == 0x000270, "Member 'UWB_BtnHelp_ActionMappingIcon_C::KeyboardCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, MouseKeyboard_Icon0) == 0x000278, "Member 'UWB_BtnHelp_ActionMappingIcon_C::MouseKeyboard_Icon0' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, MouseKeyboard_Icon1) == 0x000280, "Member 'UWB_BtnHelp_ActionMappingIcon_C::MouseKeyboard_Icon1' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, MouseKeyboard_Icon2) == 0x000288, "Member 'UWB_BtnHelp_ActionMappingIcon_C::MouseKeyboard_Icon2' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, MouseKeyboard_Icon3) == 0x000290, "Member 'UWB_BtnHelp_ActionMappingIcon_C::MouseKeyboard_Icon3' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, PadButton_Icon) == 0x000298, "Member 'UWB_BtnHelp_ActionMappingIcon_C::PadButton_Icon' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, IsDesignTime) == 0x0002A0, "Member 'UWB_BtnHelp_ActionMappingIcon_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, Debug_IsGamePad) == 0x0002A1, "Member 'UWB_BtnHelp_ActionMappingIcon_C::Debug_IsGamePad' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, Debug_HelpMappingType) == 0x0002A2, "Member 'UWB_BtnHelp_ActionMappingIcon_C::Debug_HelpMappingType' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, IconColor) == 0x0002A4, "Member 'UWB_BtnHelp_ActionMappingIcon_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, MouseKeyboardIcon) == 0x0002B8, "Member 'UWB_BtnHelp_ActionMappingIcon_C::MouseKeyboardIcon' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, IsGamePadMode) == 0x0002C8, "Member 'UWB_BtnHelp_ActionMappingIcon_C::IsGamePadMode' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, IconSize2) == 0x0002C9, "Member 'UWB_BtnHelp_ActionMappingIcon_C::IconSize2' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, HelpMappingType) == 0x0002CA, "Member 'UWB_BtnHelp_ActionMappingIcon_C::HelpMappingType' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, OnClicked_KeyboardIcon) == 0x0002D0, "Member 'UWB_BtnHelp_ActionMappingIcon_C::OnClicked_KeyboardIcon' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp_ActionMappingIcon_C, OnReleased_KeyboardIcon) == 0x0002E0, "Member 'UWB_BtnHelp_ActionMappingIcon_C::OnReleased_KeyboardIcon' has a wrong offset!");

}

