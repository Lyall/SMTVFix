#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_KeyboardIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_KeyboardIcon.WB_KeyboardIcon_C
// 0x0090 (0x02F0 - 0x0260)
class UWB_KeyboardIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           BaseCanvas;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyText;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BG;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TextBorder;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ExternalFontIcon_C*                 WB_ExternalFontIcon;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               IconSize;                                          // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           IconColor;                                         // 0x0294(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimPack;                                          // 0x02A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimFrame;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   Debug_KeyInfo;                                     // 0x02B0(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         SingleCharMaxWidth;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseCanvasWidth;                                   // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExternalFont;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KeyboardText;                                      // 0x02D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_KeyboardIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void BPI_IsExternalFontIcon(bool* Param_IsExternalFont);
	void BPI_GetSsPlayerFrame(int32* Param_AnimFrame);
	void BPI_GetKeyTextFont(struct FSlateFontInfo* Font);
	void BPI_GetKeyText(class FText* Param_KeyboardText);
	void BPI_SetIconSize(E_BTN_ICON_SIZE InIconSize, bool* Ret);
	void BPI_SetKeyInfo(const struct FKey& InKeyInfo, bool* Ret);
	void BPI_SetIconColor(const struct FLinearColor& InColor, bool* Ret);
	void BPI_SetIconColor_ByActiveState(bool InActiveColor, bool* Ret);
	void BPI_UpdateParts(bool* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_KeyboardIcon_C">();
	}
	static class UWB_KeyboardIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_KeyboardIcon_C>();
	}
};
static_assert(alignof(UWB_KeyboardIcon_C) == 0x000008, "Wrong alignment on UWB_KeyboardIcon_C");
static_assert(sizeof(UWB_KeyboardIcon_C) == 0x0002F0, "Wrong size on UWB_KeyboardIcon_C");
static_assert(offsetof(UWB_KeyboardIcon_C, UberGraphFrame) == 0x000260, "Member 'UWB_KeyboardIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, BaseCanvas) == 0x000268, "Member 'UWB_KeyboardIcon_C::BaseCanvas' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, KeyText) == 0x000270, "Member 'UWB_KeyboardIcon_C::KeyText' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, SsPlayer_BG) == 0x000278, "Member 'UWB_KeyboardIcon_C::SsPlayer_BG' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, TextBorder) == 0x000280, "Member 'UWB_KeyboardIcon_C::TextBorder' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, WB_ExternalFontIcon) == 0x000288, "Member 'UWB_KeyboardIcon_C::WB_ExternalFontIcon' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, IconSize) == 0x000290, "Member 'UWB_KeyboardIcon_C::IconSize' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, IconColor) == 0x000294, "Member 'UWB_KeyboardIcon_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, AnimPack) == 0x0002A4, "Member 'UWB_KeyboardIcon_C::AnimPack' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, AnimFrame) == 0x0002AC, "Member 'UWB_KeyboardIcon_C::AnimFrame' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, Debug_KeyInfo) == 0x0002B0, "Member 'UWB_KeyboardIcon_C::Debug_KeyInfo' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, SingleCharMaxWidth) == 0x0002C8, "Member 'UWB_KeyboardIcon_C::SingleCharMaxWidth' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, BaseCanvasWidth) == 0x0002CC, "Member 'UWB_KeyboardIcon_C::BaseCanvasWidth' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, IsExternalFont) == 0x0002D0, "Member 'UWB_KeyboardIcon_C::IsExternalFont' has a wrong offset!");
static_assert(offsetof(UWB_KeyboardIcon_C, KeyboardText) == 0x0002D8, "Member 'UWB_KeyboardIcon_C::KeyboardText' has a wrong offset!");

}

