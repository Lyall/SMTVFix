#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AtRichTextWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AtRichTextWidget.AtRichText.ClearInsertText
// 0x0010 (0x0010 - 0x0000)
struct AtRichText_ClearInsertText final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_ClearInsertText) == 0x000008, "Wrong alignment on AtRichText_ClearInsertText");
static_assert(sizeof(AtRichText_ClearInsertText) == 0x000010, "Wrong size on AtRichText_ClearInsertText");
static_assert(offsetof(AtRichText_ClearInsertText, Tag) == 0x000000, "Member 'AtRichText_ClearInsertText::Tag' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.GetDrawStrLen
// 0x0004 (0x0004 - 0x0000)
struct AtRichText_GetDrawStrLen final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_GetDrawStrLen) == 0x000004, "Wrong alignment on AtRichText_GetDrawStrLen");
static_assert(sizeof(AtRichText_GetDrawStrLen) == 0x000004, "Wrong size on AtRichText_GetDrawStrLen");
static_assert(offsetof(AtRichText_GetDrawStrLen, ReturnValue) == 0x000000, "Member 'AtRichText_GetDrawStrLen::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.GetFontGlowColor
// 0x0014 (0x0014 - 0x0000)
struct AtRichText_GetFontGlowColor final
{
public:
	int32                                         ArgsIndex;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReturnValue;                                       // 0x0004(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_GetFontGlowColor) == 0x000004, "Wrong alignment on AtRichText_GetFontGlowColor");
static_assert(sizeof(AtRichText_GetFontGlowColor) == 0x000014, "Wrong size on AtRichText_GetFontGlowColor");
static_assert(offsetof(AtRichText_GetFontGlowColor, ArgsIndex) == 0x000000, "Member 'AtRichText_GetFontGlowColor::ArgsIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_GetFontGlowColor, ReturnValue) == 0x000004, "Member 'AtRichText_GetFontGlowColor::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.GetInsertImageNum
// 0x0004 (0x0004 - 0x0000)
struct AtRichText_GetInsertImageNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_GetInsertImageNum) == 0x000004, "Wrong alignment on AtRichText_GetInsertImageNum");
static_assert(sizeof(AtRichText_GetInsertImageNum) == 0x000004, "Wrong size on AtRichText_GetInsertImageNum");
static_assert(offsetof(AtRichText_GetInsertImageNum, ReturnValue) == 0x000000, "Member 'AtRichText_GetInsertImageNum::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.GetStrLenExcludingTag
// 0x0004 (0x0004 - 0x0000)
struct AtRichText_GetStrLenExcludingTag final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_GetStrLenExcludingTag) == 0x000004, "Wrong alignment on AtRichText_GetStrLenExcludingTag");
static_assert(sizeof(AtRichText_GetStrLenExcludingTag) == 0x000004, "Wrong size on AtRichText_GetStrLenExcludingTag");
static_assert(offsetof(AtRichText_GetStrLenExcludingTag, ReturnValue) == 0x000000, "Member 'AtRichText_GetStrLenExcludingTag::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.IsFontGlow
// 0x0001 (0x0001 - 0x0000)
struct AtRichText_IsFontGlow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_IsFontGlow) == 0x000001, "Wrong alignment on AtRichText_IsFontGlow");
static_assert(sizeof(AtRichText_IsFontGlow) == 0x000001, "Wrong size on AtRichText_IsFontGlow");
static_assert(offsetof(AtRichText_IsFontGlow, ReturnValue) == 0x000000, "Member 'AtRichText_IsFontGlow::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.IsUseInsertImage
// 0x0008 (0x0008 - 0x0000)
struct AtRichText_IsUseInsertImage final
{
public:
	int32                                         ImageIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_167[0x3];                                      // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AtRichText_IsUseInsertImage) == 0x000004, "Wrong alignment on AtRichText_IsUseInsertImage");
static_assert(sizeof(AtRichText_IsUseInsertImage) == 0x000008, "Wrong size on AtRichText_IsUseInsertImage");
static_assert(offsetof(AtRichText_IsUseInsertImage, ImageIndex) == 0x000000, "Member 'AtRichText_IsUseInsertImage::ImageIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_IsUseInsertImage, ReturnValue) == 0x000004, "Member 'AtRichText_IsUseInsertImage::ReturnValue' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetColor_TextAndBrushIcon_All
// 0x0020 (0x0020 - 0x0000)
struct AtRichText_SetColor_TextAndBrushIcon_All final
{
public:
	struct FLinearColor                           InColor_BG;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InColor_Text;                                      // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetColor_TextAndBrushIcon_All) == 0x000004, "Wrong alignment on AtRichText_SetColor_TextAndBrushIcon_All");
static_assert(sizeof(AtRichText_SetColor_TextAndBrushIcon_All) == 0x000020, "Wrong size on AtRichText_SetColor_TextAndBrushIcon_All");
static_assert(offsetof(AtRichText_SetColor_TextAndBrushIcon_All, InColor_BG) == 0x000000, "Member 'AtRichText_SetColor_TextAndBrushIcon_All::InColor_BG' has a wrong offset!");
static_assert(offsetof(AtRichText_SetColor_TextAndBrushIcon_All, InColor_Text) == 0x000010, "Member 'AtRichText_SetColor_TextAndBrushIcon_All::InColor_Text' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetColorAndOpacity
// 0x0028 (0x0028 - 0x0000)
struct AtRichText_SetColorAndOpacity final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetColorAndOpacity) == 0x000008, "Wrong alignment on AtRichText_SetColorAndOpacity");
static_assert(sizeof(AtRichText_SetColorAndOpacity) == 0x000028, "Wrong size on AtRichText_SetColorAndOpacity");
static_assert(offsetof(AtRichText_SetColorAndOpacity, InColorAndOpacity) == 0x000000, "Member 'AtRichText_SetColorAndOpacity::InColorAndOpacity' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetFont
// 0x0058 (0x0058 - 0x0000)
struct AtRichText_SetFont final
{
public:
	struct FSlateFontInfo                         InFontInfo;                                        // 0x0000(0x0058)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetFont) == 0x000008, "Wrong alignment on AtRichText_SetFont");
static_assert(sizeof(AtRichText_SetFont) == 0x000058, "Wrong size on AtRichText_SetFont");
static_assert(offsetof(AtRichText_SetFont, InFontInfo) == 0x000000, "Member 'AtRichText_SetFont::InFontInfo' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetFontGlow
// 0x0001 (0x0001 - 0x0000)
struct AtRichText_SetFontGlow final
{
public:
	bool                                          ArgbFlag;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetFontGlow) == 0x000001, "Wrong alignment on AtRichText_SetFontGlow");
static_assert(sizeof(AtRichText_SetFontGlow) == 0x000001, "Wrong size on AtRichText_SetFontGlow");
static_assert(offsetof(AtRichText_SetFontGlow, ArgbFlag) == 0x000000, "Member 'AtRichText_SetFontGlow::ArgbFlag' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetFontGlowColor
// 0x0014 (0x0014 - 0x0000)
struct AtRichText_SetFontGlowColor final
{
public:
	int32                                         ArgsIndex;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ArgsColor;                                         // 0x0004(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetFontGlowColor) == 0x000004, "Wrong alignment on AtRichText_SetFontGlowColor");
static_assert(sizeof(AtRichText_SetFontGlowColor) == 0x000014, "Wrong size on AtRichText_SetFontGlowColor");
static_assert(offsetof(AtRichText_SetFontGlowColor, ArgsIndex) == 0x000000, "Member 'AtRichText_SetFontGlowColor::ArgsIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_SetFontGlowColor, ArgsColor) == 0x000004, "Member 'AtRichText_SetFontGlowColor::ArgsColor' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetGrayOutColor
// 0x0001 (0x0001 - 0x0000)
struct AtRichText_SetGrayOutColor final
{
public:
	bool                                          IsGrayOut;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetGrayOutColor) == 0x000001, "Wrong alignment on AtRichText_SetGrayOutColor");
static_assert(sizeof(AtRichText_SetGrayOutColor) == 0x000001, "Wrong size on AtRichText_SetGrayOutColor");
static_assert(offsetof(AtRichText_SetGrayOutColor, IsGrayOut) == 0x000000, "Member 'AtRichText_SetGrayOutColor::IsGrayOut' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageColor
// 0x0014 (0x0014 - 0x0000)
struct AtRichText_SetInsertImageColor final
{
public:
	int32                                         ImageIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color;                                             // 0x0004(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageColor) == 0x000004, "Wrong alignment on AtRichText_SetInsertImageColor");
static_assert(sizeof(AtRichText_SetInsertImageColor) == 0x000014, "Wrong size on AtRichText_SetInsertImageColor");
static_assert(offsetof(AtRichText_SetInsertImageColor, ImageIndex) == 0x000000, "Member 'AtRichText_SetInsertImageColor::ImageIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertImageColor, Color) == 0x000004, "Member 'AtRichText_SetInsertImageColor::Color' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageColor_All
// 0x0010 (0x0010 - 0x0000)
struct AtRichText_SetInsertImageColor_All final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageColor_All) == 0x000004, "Wrong alignment on AtRichText_SetInsertImageColor_All");
static_assert(sizeof(AtRichText_SetInsertImageColor_All) == 0x000010, "Wrong size on AtRichText_SetInsertImageColor_All");
static_assert(offsetof(AtRichText_SetInsertImageColor_All, Color) == 0x000000, "Member 'AtRichText_SetInsertImageColor_All::Color' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageColor_ContainsTag
// 0x0020 (0x0020 - 0x0000)
struct AtRichText_SetInsertImageColor_ContainsTag final
{
public:
	class FString                                 InTag;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InColor;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageColor_ContainsTag) == 0x000008, "Wrong alignment on AtRichText_SetInsertImageColor_ContainsTag");
static_assert(sizeof(AtRichText_SetInsertImageColor_ContainsTag) == 0x000020, "Wrong size on AtRichText_SetInsertImageColor_ContainsTag");
static_assert(offsetof(AtRichText_SetInsertImageColor_ContainsTag, InTag) == 0x000000, "Member 'AtRichText_SetInsertImageColor_ContainsTag::InTag' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertImageColor_ContainsTag, InColor) == 0x000010, "Member 'AtRichText_SetInsertImageColor_ContainsTag::InColor' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageOffset
// 0x000C (0x000C - 0x0000)
struct AtRichText_SetInsertImageOffset final
{
public:
	int32                                         ImageIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              OffsetPos;                                         // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageOffset) == 0x000004, "Wrong alignment on AtRichText_SetInsertImageOffset");
static_assert(sizeof(AtRichText_SetInsertImageOffset) == 0x00000C, "Wrong size on AtRichText_SetInsertImageOffset");
static_assert(offsetof(AtRichText_SetInsertImageOffset, ImageIndex) == 0x000000, "Member 'AtRichText_SetInsertImageOffset::ImageIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertImageOffset, OffsetPos) == 0x000004, "Member 'AtRichText_SetInsertImageOffset::OffsetPos' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageOffset_All
// 0x0008 (0x0008 - 0x0000)
struct AtRichText_SetInsertImageOffset_All final
{
public:
	struct FVector2D                              OffsetPos;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageOffset_All) == 0x000004, "Wrong alignment on AtRichText_SetInsertImageOffset_All");
static_assert(sizeof(AtRichText_SetInsertImageOffset_All) == 0x000008, "Wrong size on AtRichText_SetInsertImageOffset_All");
static_assert(offsetof(AtRichText_SetInsertImageOffset_All, OffsetPos) == 0x000000, "Member 'AtRichText_SetInsertImageOffset_All::OffsetPos' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertImageSize
// 0x000C (0x000C - 0x0000)
struct AtRichText_SetInsertImageSize final
{
public:
	int32                                         ImageIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Size;                                              // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertImageSize) == 0x000004, "Wrong alignment on AtRichText_SetInsertImageSize");
static_assert(sizeof(AtRichText_SetInsertImageSize) == 0x00000C, "Wrong size on AtRichText_SetInsertImageSize");
static_assert(offsetof(AtRichText_SetInsertImageSize, ImageIndex) == 0x000000, "Member 'AtRichText_SetInsertImageSize::ImageIndex' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertImageSize, Size) == 0x000004, "Member 'AtRichText_SetInsertImageSize::Size' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetInsertText
// 0x0030 (0x0030 - 0x0000)
struct AtRichText_SetInsertText final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_168[0x4];                                      // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InText;                                            // 0x0018(0x0018)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetInsertText) == 0x000008, "Wrong alignment on AtRichText_SetInsertText");
static_assert(sizeof(AtRichText_SetInsertText) == 0x000030, "Wrong size on AtRichText_SetInsertText");
static_assert(offsetof(AtRichText_SetInsertText, Tag) == 0x000000, "Member 'AtRichText_SetInsertText::Tag' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertText, Param_Index) == 0x000010, "Member 'AtRichText_SetInsertText::Param_Index' has a wrong offset!");
static_assert(offsetof(AtRichText_SetInsertText, InText) == 0x000018, "Member 'AtRichText_SetInsertText::InText' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetOffset_TextAndBrushIcon_All
// 0x0008 (0x0008 - 0x0000)
struct AtRichText_SetOffset_TextAndBrushIcon_All final
{
public:
	struct FVector2D                              OffsetPos;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetOffset_TextAndBrushIcon_All) == 0x000004, "Wrong alignment on AtRichText_SetOffset_TextAndBrushIcon_All");
static_assert(sizeof(AtRichText_SetOffset_TextAndBrushIcon_All) == 0x000008, "Wrong size on AtRichText_SetOffset_TextAndBrushIcon_All");
static_assert(offsetof(AtRichText_SetOffset_TextAndBrushIcon_All, OffsetPos) == 0x000000, "Member 'AtRichText_SetOffset_TextAndBrushIcon_All::OffsetPos' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetOpacity
// 0x0004 (0x0004 - 0x0000)
struct AtRichText_SetOpacity final
{
public:
	float                                         InOpacity;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetOpacity) == 0x000004, "Wrong alignment on AtRichText_SetOpacity");
static_assert(sizeof(AtRichText_SetOpacity) == 0x000004, "Wrong size on AtRichText_SetOpacity");
static_assert(offsetof(AtRichText_SetOpacity, InOpacity) == 0x000000, "Member 'AtRichText_SetOpacity::InOpacity' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetShadowColorAndOpacity
// 0x0010 (0x0010 - 0x0000)
struct AtRichText_SetShadowColorAndOpacity final
{
public:
	struct FLinearColor                           InShadowColorAndOpacity;                           // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetShadowColorAndOpacity) == 0x000004, "Wrong alignment on AtRichText_SetShadowColorAndOpacity");
static_assert(sizeof(AtRichText_SetShadowColorAndOpacity) == 0x000010, "Wrong size on AtRichText_SetShadowColorAndOpacity");
static_assert(offsetof(AtRichText_SetShadowColorAndOpacity, InShadowColorAndOpacity) == 0x000000, "Member 'AtRichText_SetShadowColorAndOpacity::InShadowColorAndOpacity' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetShadowOffset
// 0x0008 (0x0008 - 0x0000)
struct AtRichText_SetShadowOffset final
{
public:
	struct FVector2D                              InShadowOffset;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetShadowOffset) == 0x000004, "Wrong alignment on AtRichText_SetShadowOffset");
static_assert(sizeof(AtRichText_SetShadowOffset) == 0x000008, "Wrong size on AtRichText_SetShadowOffset");
static_assert(offsetof(AtRichText_SetShadowOffset, InShadowOffset) == 0x000000, "Member 'AtRichText_SetShadowOffset::InShadowOffset' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.SetText
// 0x0018 (0x0018 - 0x0000)
struct AtRichText_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_SetText) == 0x000008, "Wrong alignment on AtRichText_SetText");
static_assert(sizeof(AtRichText_SetText) == 0x000018, "Wrong size on AtRichText_SetText");
static_assert(offsetof(AtRichText_SetText, InText) == 0x000000, "Member 'AtRichText_SetText::InText' has a wrong offset!");

// Function AtRichTextWidget.AtRichText.GetText
// 0x0018 (0x0018 - 0x0000)
struct AtRichText_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AtRichText_GetText) == 0x000008, "Wrong alignment on AtRichText_GetText");
static_assert(sizeof(AtRichText_GetText) == 0x000018, "Wrong size on AtRichText_GetText");
static_assert(offsetof(AtRichText_GetText, ReturnValue) == 0x000000, "Member 'AtRichText_GetText::ReturnValue' has a wrong offset!");

}

