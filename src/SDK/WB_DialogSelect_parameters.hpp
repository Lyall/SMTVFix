#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DialogSelect

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_DialogSelect.WB_DialogSelect_C.OnMouseClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WB_DialogSelect_C_OnMouseClicked__DelegateSignature final
{
public:
	int32                                         Param_ItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_OnMouseClicked__DelegateSignature) == 0x000004, "Wrong alignment on WB_DialogSelect_C_OnMouseClicked__DelegateSignature");
static_assert(sizeof(WB_DialogSelect_C_OnMouseClicked__DelegateSignature) == 0x000004, "Wrong size on WB_DialogSelect_C_OnMouseClicked__DelegateSignature");
static_assert(offsetof(WB_DialogSelect_C_OnMouseClicked__DelegateSignature, Param_ItemIndex) == 0x000000, "Member 'WB_DialogSelect_C_OnMouseClicked__DelegateSignature::Param_ItemIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.OnMouseSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WB_DialogSelect_C_OnMouseSelected__DelegateSignature final
{
public:
	int32                                         Param_ItemIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_OnMouseSelected__DelegateSignature) == 0x000004, "Wrong alignment on WB_DialogSelect_C_OnMouseSelected__DelegateSignature");
static_assert(sizeof(WB_DialogSelect_C_OnMouseSelected__DelegateSignature) == 0x000004, "Wrong size on WB_DialogSelect_C_OnMouseSelected__DelegateSignature");
static_assert(offsetof(WB_DialogSelect_C_OnMouseSelected__DelegateSignature, Param_ItemIndex) == 0x000000, "Member 'WB_DialogSelect_C_OnMouseSelected__DelegateSignature::Param_ItemIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.ExecuteUbergraph_WB_DialogSelect
// 0x0070 (0x0070 - 0x0000)
struct WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F02[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    K2Node_CustomEvent_InScriptMessageAsset_1;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InIndex;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName_1;         // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName_1;        // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex_1;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_1;                       // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F03[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    K2Node_CustomEvent_InScriptMessageAsset;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InName;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue_2;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F04[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName;           // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName;          // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_3;                       // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_4;                       // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              K2Node_ComponentBoundEvent_Pos;                    // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_ComponentBoundEvent_UV;                     // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect) == 0x000008, "Wrong alignment on WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect");
static_assert(sizeof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect) == 0x000070, "Wrong size on WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, EntryPoint) == 0x000000, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_CustomEvent_InScriptMessageAsset_1) == 0x000008, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_CustomEvent_InScriptMessageAsset_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_CustomEvent_InIndex) == 0x000010, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_CustomEvent_InIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimPackName_1) == 0x000014, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimPackName_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimationName_1) == 0x00001C, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimationName_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimPackIndex_1) == 0x000024, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimPackIndex_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimationIndex_1) == 0x000028, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimationIndex_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_SwitchName_CmpSuccess) == 0x00002C, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_Play_ReturnValue) == 0x00002D, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_Play_ReturnValue_1) == 0x00002E, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_Play_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_CustomEvent_InScriptMessageAsset) == 0x000030, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_CustomEvent_InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_CustomEvent_InName) == 0x000038, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_CustomEvent_InName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_Play_ReturnValue_2) == 0x000040, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_Play_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimPackName) == 0x000044, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimationName) == 0x00004C, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimationName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimPackIndex) == 0x000054, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_AnimationIndex) == 0x000058, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_AnimationIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_SwitchName_CmpSuccess_1) == 0x00005C, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_SwitchName_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_Play_ReturnValue_3) == 0x00005D, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_Play_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_IsVisible_ReturnValue) == 0x00005E, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, CallFunc_Play_ReturnValue_4) == 0x00005F, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::CallFunc_Play_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_Pos) == 0x000060, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_Pos' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect, K2Node_ComponentBoundEvent_UV) == 0x000068, "Member 'WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect::K2Node_ComponentBoundEvent_UV' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature final
{
public:
	struct FVector2D                              Pos;                                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UV;                                                // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature) == 0x000004, "Wrong alignment on WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature");
static_assert(sizeof(WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature) == 0x000010, "Wrong size on WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature, Pos) == 0x000000, "Member 'WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature::Pos' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature, UV) == 0x000008, "Member 'WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature::UV' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SetSelectItemName
// 0x0010 (0x0010 - 0x0000)
struct WB_DialogSelect_C_SetSelectItemName final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InName;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_SetSelectItemName) == 0x000008, "Wrong alignment on WB_DialogSelect_C_SetSelectItemName");
static_assert(sizeof(WB_DialogSelect_C_SetSelectItemName) == 0x000010, "Wrong size on WB_DialogSelect_C_SetSelectItemName");
static_assert(offsetof(WB_DialogSelect_C_SetSelectItemName, InScriptMessageAsset) == 0x000000, "Member 'WB_DialogSelect_C_SetSelectItemName::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SetSelectItemName, InName) == 0x000008, "Member 'WB_DialogSelect_C_SetSelectItemName::InName' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SetSelectItemNameByIndex
// 0x0010 (0x0010 - 0x0000)
struct WB_DialogSelect_C_SetSelectItemNameByIndex final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DialogSelect_C_SetSelectItemNameByIndex) == 0x000008, "Wrong alignment on WB_DialogSelect_C_SetSelectItemNameByIndex");
static_assert(sizeof(WB_DialogSelect_C_SetSelectItemNameByIndex) == 0x000010, "Wrong size on WB_DialogSelect_C_SetSelectItemNameByIndex");
static_assert(offsetof(WB_DialogSelect_C_SetSelectItemNameByIndex, InScriptMessageAsset) == 0x000000, "Member 'WB_DialogSelect_C_SetSelectItemNameByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SetSelectItemNameByIndex, InIndex) == 0x000008, "Member 'WB_DialogSelect_C_SetSelectItemNameByIndex::InIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SetText
// 0x0010 (0x0010 - 0x0000)
struct WB_DialogSelect_C_SetText final
{
public:
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByLabel_self_CastInput;   // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SetText) == 0x000008, "Wrong alignment on WB_DialogSelect_C_SetText");
static_assert(sizeof(WB_DialogSelect_C_SetText) == 0x000010, "Wrong size on WB_DialogSelect_C_SetText");
static_assert(offsetof(WB_DialogSelect_C_SetText, CallFunc_SetScriptMessageByLabel_self_CastInput) == 0x000000, "Member 'WB_DialogSelect_C_SetText::CallFunc_SetScriptMessageByLabel_self_CastInput' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SetTextByIndex
// 0x0010 (0x0010 - 0x0000)
struct WB_DialogSelect_C_SetTextByIndex final
{
public:
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByID_self_CastInput;      // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SetTextByIndex) == 0x000008, "Wrong alignment on WB_DialogSelect_C_SetTextByIndex");
static_assert(sizeof(WB_DialogSelect_C_SetTextByIndex) == 0x000010, "Wrong size on WB_DialogSelect_C_SetTextByIndex");
static_assert(offsetof(WB_DialogSelect_C_SetTextByIndex, CallFunc_SetScriptMessageByID_self_CastInput) == 0x000000, "Member 'WB_DialogSelect_C_SetTextByIndex::CallFunc_SetScriptMessageByID_self_CastInput' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.GetRichTextParam
// 0x0020 (0x0020 - 0x0000)
struct WB_DialogSelect_C_GetRichTextParam final
{
public:
	class UMessageRichTextWidget*                 OutMessageRichText;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptMessageAsset*                    OutScriptMessageAsset;                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OutLabel;                                          // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutIndex;                                          // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutUseIndex;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_GetRichTextParam) == 0x000008, "Wrong alignment on WB_DialogSelect_C_GetRichTextParam");
static_assert(sizeof(WB_DialogSelect_C_GetRichTextParam) == 0x000020, "Wrong size on WB_DialogSelect_C_GetRichTextParam");
static_assert(offsetof(WB_DialogSelect_C_GetRichTextParam, OutMessageRichText) == 0x000000, "Member 'WB_DialogSelect_C_GetRichTextParam::OutMessageRichText' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_GetRichTextParam, OutScriptMessageAsset) == 0x000008, "Member 'WB_DialogSelect_C_GetRichTextParam::OutScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_GetRichTextParam, OutLabel) == 0x000010, "Member 'WB_DialogSelect_C_GetRichTextParam::OutLabel' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_GetRichTextParam, OutIndex) == 0x000018, "Member 'WB_DialogSelect_C_GetRichTextParam::OutIndex' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_GetRichTextParam, OutUseIndex) == 0x00001C, "Member 'WB_DialogSelect_C_GetRichTextParam::OutUseIndex' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.sSetRichTextParam
// 0x0058 (0x0058 - 0x0000)
struct WB_DialogSelect_C_SSetRichTextParam final
{
public:
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByLabel_self_CastInput;   // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByID_self_CastInput;      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMessageTagInterface>  CallFunc_GetValueParam_self_CastInput;             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetValueParam_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7F05[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetValueParam_self_CastInput;             // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SSetRichTextParam) == 0x000008, "Wrong alignment on WB_DialogSelect_C_SSetRichTextParam");
static_assert(sizeof(WB_DialogSelect_C_SSetRichTextParam) == 0x000058, "Wrong size on WB_DialogSelect_C_SSetRichTextParam");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_SetScriptMessageByLabel_self_CastInput) == 0x000000, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_SetScriptMessageByLabel_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_SetScriptMessageByID_self_CastInput) == 0x000010, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_SetScriptMessageByID_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, Temp_int_Variable) == 0x000020, "Member 'WB_DialogSelect_C_SSetRichTextParam::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_GetValueParam_self_CastInput) == 0x000028, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_GetValueParam_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_GetValueParam_ReturnValue) == 0x000038, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_GetValueParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_SetValueParam_self_CastInput) == 0x000040, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_SetValueParam_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SSetRichTextParam, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'WB_DialogSelect_C_SSetRichTextParam::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOn
// 0x0002 (0x0002 - 0x0000)
struct WB_DialogSelect_C_SelectCursorOn final
{
public:
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_1;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SelectCursorOn) == 0x000001, "Wrong alignment on WB_DialogSelect_C_SelectCursorOn");
static_assert(sizeof(WB_DialogSelect_C_SelectCursorOn) == 0x000002, "Wrong size on WB_DialogSelect_C_SelectCursorOn");
static_assert(offsetof(WB_DialogSelect_C_SelectCursorOn, CallFunc_Play_ReturnValue) == 0x000000, "Member 'WB_DialogSelect_C_SelectCursorOn::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_SelectCursorOn, CallFunc_Play_ReturnValue_1) == 0x000001, "Member 'WB_DialogSelect_C_SelectCursorOn::CallFunc_Play_ReturnValue_1' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOff
// 0x0001 (0x0001 - 0x0000)
struct WB_DialogSelect_C_SelectCursorOff final
{
public:
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SelectCursorOff) == 0x000001, "Wrong alignment on WB_DialogSelect_C_SelectCursorOff");
static_assert(sizeof(WB_DialogSelect_C_SelectCursorOff) == 0x000001, "Wrong size on WB_DialogSelect_C_SelectCursorOff");
static_assert(offsetof(WB_DialogSelect_C_SelectCursorOff, CallFunc_Play_ReturnValue) == 0x000000, "Member 'WB_DialogSelect_C_SelectCursorOff::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorIn
// 0x0001 (0x0001 - 0x0000)
struct WB_DialogSelect_C_SelectCursorIn final
{
public:
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SelectCursorIn) == 0x000001, "Wrong alignment on WB_DialogSelect_C_SelectCursorIn");
static_assert(sizeof(WB_DialogSelect_C_SelectCursorIn) == 0x000001, "Wrong size on WB_DialogSelect_C_SelectCursorIn");
static_assert(offsetof(WB_DialogSelect_C_SelectCursorIn, CallFunc_Play_ReturnValue) == 0x000000, "Member 'WB_DialogSelect_C_SelectCursorIn::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOut
// 0x0001 (0x0001 - 0x0000)
struct WB_DialogSelect_C_SelectCursorOut final
{
public:
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_SelectCursorOut) == 0x000001, "Wrong alignment on WB_DialogSelect_C_SelectCursorOut");
static_assert(sizeof(WB_DialogSelect_C_SelectCursorOut) == 0x000001, "Wrong size on WB_DialogSelect_C_SelectCursorOut");
static_assert(offsetof(WB_DialogSelect_C_SelectCursorOut, CallFunc_Play_ReturnValue) == 0x000000, "Member 'WB_DialogSelect_C_SelectCursorOut::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function WB_DialogSelect.WB_DialogSelect_C.IsClosedSelect
// 0x0006 (0x0006 - 0x0000)
struct WB_DialogSelect_C_IsClosedSelect final
{
public:
	bool                                          OutParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_DialogSelect_C_IsClosedSelect) == 0x000001, "Wrong alignment on WB_DialogSelect_C_IsClosedSelect");
static_assert(sizeof(WB_DialogSelect_C_IsClosedSelect) == 0x000006, "Wrong size on WB_DialogSelect_C_IsClosedSelect");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, OutParam) == 0x000000, "Member 'WB_DialogSelect_C_IsClosedSelect::OutParam' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'WB_DialogSelect_C_IsClosedSelect::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, CallFunc_GetVisibility_ReturnValue_1) == 0x000002, "Member 'WB_DialogSelect_C_IsClosedSelect::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WB_DialogSelect_C_IsClosedSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'WB_DialogSelect_C_IsClosedSelect::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_DialogSelect_C_IsClosedSelect, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WB_DialogSelect_C_IsClosedSelect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

