#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_KeyboardIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_SetIconSize
// 0x0002 (0x0002 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_SetIconSize final
{
public:
	E_BTN_ICON_SIZE                               InIconSize;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_SetIconSize) == 0x000001, "Wrong alignment on BPI_KeyboardIcon_C_BPI_SetIconSize");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_SetIconSize) == 0x000002, "Wrong size on BPI_KeyboardIcon_C_BPI_SetIconSize");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconSize, InIconSize) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_SetIconSize::InIconSize' has a wrong offset!");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconSize, Ret) == 0x000001, "Member 'BPI_KeyboardIcon_C_BPI_SetIconSize::Ret' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_SetKeyInfo
// 0x0020 (0x0020 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_SetKeyInfo final
{
public:
	struct FKey                                   InKeyInfo;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_SetKeyInfo) == 0x000008, "Wrong alignment on BPI_KeyboardIcon_C_BPI_SetKeyInfo");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_SetKeyInfo) == 0x000020, "Wrong size on BPI_KeyboardIcon_C_BPI_SetKeyInfo");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetKeyInfo, InKeyInfo) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_SetKeyInfo::InKeyInfo' has a wrong offset!");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetKeyInfo, Ret) == 0x000018, "Member 'BPI_KeyboardIcon_C_BPI_SetKeyInfo::Ret' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_SetIconColor
// 0x0014 (0x0014 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_SetIconColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_SetIconColor) == 0x000004, "Wrong alignment on BPI_KeyboardIcon_C_BPI_SetIconColor");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_SetIconColor) == 0x000014, "Wrong size on BPI_KeyboardIcon_C_BPI_SetIconColor");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconColor, InColor) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_SetIconColor::InColor' has a wrong offset!");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconColor, Ret) == 0x000010, "Member 'BPI_KeyboardIcon_C_BPI_SetIconColor::Ret' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_SetIconColor_ByActiveState
// 0x0002 (0x0002 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState final
{
public:
	bool                                          InActiveColor;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Ret;                                               // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState) == 0x000001, "Wrong alignment on BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState) == 0x000002, "Wrong size on BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState, InActiveColor) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState::InActiveColor' has a wrong offset!");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState, Ret) == 0x000001, "Member 'BPI_KeyboardIcon_C_BPI_SetIconColor_ByActiveState::Ret' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_GetKeyText
// 0x0018 (0x0018 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_GetKeyText final
{
public:
	class FText                                   KeyboardText;                                      // 0x0000(0x0018)(Parm, OutParm)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_GetKeyText) == 0x000008, "Wrong alignment on BPI_KeyboardIcon_C_BPI_GetKeyText");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_GetKeyText) == 0x000018, "Wrong size on BPI_KeyboardIcon_C_BPI_GetKeyText");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_GetKeyText, KeyboardText) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_GetKeyText::KeyboardText' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_GetKeyTextFont
// 0x0058 (0x0058 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_GetKeyTextFont final
{
public:
	struct FSlateFontInfo                         Font;                                              // 0x0000(0x0058)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_GetKeyTextFont) == 0x000008, "Wrong alignment on BPI_KeyboardIcon_C_BPI_GetKeyTextFont");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_GetKeyTextFont) == 0x000058, "Wrong size on BPI_KeyboardIcon_C_BPI_GetKeyTextFont");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_GetKeyTextFont, Font) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_GetKeyTextFont::Font' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_GetSsPlayerFrame
// 0x0004 (0x0004 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame final
{
public:
	int32                                         AnimFrame;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame) == 0x000004, "Wrong alignment on BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame) == 0x000004, "Wrong size on BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame, AnimFrame) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_GetSsPlayerFrame::AnimFrame' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_IsExternalFontIcon
// 0x0001 (0x0001 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_IsExternalFontIcon final
{
public:
	bool                                          IsExternalFont;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_IsExternalFontIcon) == 0x000001, "Wrong alignment on BPI_KeyboardIcon_C_BPI_IsExternalFontIcon");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_IsExternalFontIcon) == 0x000001, "Wrong size on BPI_KeyboardIcon_C_BPI_IsExternalFontIcon");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_IsExternalFontIcon, IsExternalFont) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_IsExternalFontIcon::IsExternalFont' has a wrong offset!");

// Function BPI_KeyboardIcon.BPI_KeyboardIcon_C.BPI_UpdateParts
// 0x0001 (0x0001 - 0x0000)
struct BPI_KeyboardIcon_C_BPI_UpdateParts final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_KeyboardIcon_C_BPI_UpdateParts) == 0x000001, "Wrong alignment on BPI_KeyboardIcon_C_BPI_UpdateParts");
static_assert(sizeof(BPI_KeyboardIcon_C_BPI_UpdateParts) == 0x000001, "Wrong size on BPI_KeyboardIcon_C_BPI_UpdateParts");
static_assert(offsetof(BPI_KeyboardIcon_C_BPI_UpdateParts, Ret) == 0x000000, "Member 'BPI_KeyboardIcon_C_BPI_UpdateParts::Ret' has a wrong offset!");

}

