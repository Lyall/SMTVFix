#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_ItemWindow.WB_ItemWindow_C.ExecuteUbergraph_WB_ItemWindow
// 0x0050 (0x0050 - 0x0000)
struct WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId_1;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6476[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemIconIdByItemId_ReturnValue;        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemIconIdByItemId_ReturnValue_1;      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue_1;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_2;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_3;                       // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6477[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName;           // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName;          // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6478[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow) == 0x000008, "Wrong alignment on WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow");
static_assert(sizeof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow) == 0x000050, "Wrong size on WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, EntryPoint) == 0x000000, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_CustomEvent_InItemId_1) == 0x000004, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_CustomEvent_InItemId_1' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_Play_ReturnValue) == 0x000008, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_GetItemIconIdByItemId_ReturnValue) == 0x00000C, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_GetItemIconIdByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_MakeStruct_LinearColor) == 0x000010, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_CustomEvent_InItemId) == 0x000020, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_GetItemIconIdByItemId_ReturnValue_1) == 0x000024, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_GetItemIconIdByItemId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_Play_ReturnValue_1) == 0x000028, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_Play_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_Play_ReturnValue_2) == 0x000029, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_Play_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_Play_ReturnValue_3) == 0x00002A, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_Play_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_ComponentBoundEvent_AnimPackName) == 0x00002C, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_ComponentBoundEvent_AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_ComponentBoundEvent_AnimationName) == 0x000034, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_ComponentBoundEvent_AnimationName' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_ComponentBoundEvent_AnimPackIndex) == 0x00003C, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_ComponentBoundEvent_AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_ComponentBoundEvent_AnimationIndex) == 0x000040, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_ComponentBoundEvent_AnimationIndex' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, K2Node_SwitchName_CmpSuccess) == 0x000044, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000048, "Member 'WB_ItemWindow_C_ExecuteUbergraph_WB_ItemWindow::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_ItemWindow_C_BndEvt__SsPlayerWidgetWindow_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.ExecutionItemWindowOpen
// 0x0004 (0x0004 - 0x0000)
struct WB_ItemWindow_C_ExecutionItemWindowOpen final
{
public:
	int32                                         InItemId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_ExecutionItemWindowOpen) == 0x000004, "Wrong alignment on WB_ItemWindow_C_ExecutionItemWindowOpen");
static_assert(sizeof(WB_ItemWindow_C_ExecutionItemWindowOpen) == 0x000004, "Wrong size on WB_ItemWindow_C_ExecutionItemWindowOpen");
static_assert(offsetof(WB_ItemWindow_C_ExecutionItemWindowOpen, InItemId) == 0x000000, "Member 'WB_ItemWindow_C_ExecutionItemWindowOpen::InItemId' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.ItemWindowOpen
// 0x0004 (0x0004 - 0x0000)
struct WB_ItemWindow_C_ItemWindowOpen final
{
public:
	int32                                         InItemId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_ItemWindowOpen) == 0x000004, "Wrong alignment on WB_ItemWindow_C_ItemWindowOpen");
static_assert(sizeof(WB_ItemWindow_C_ItemWindowOpen) == 0x000004, "Wrong size on WB_ItemWindow_C_ItemWindowOpen");
static_assert(offsetof(WB_ItemWindow_C_ItemWindowOpen, InItemId) == 0x000000, "Member 'WB_ItemWindow_C_ItemWindowOpen::InItemId' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.IsFinishedOpenWindow
// 0x0001 (0x0001 - 0x0000)
struct WB_ItemWindow_C_IsFinishedOpenWindow final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ItemWindow_C_IsFinishedOpenWindow) == 0x000001, "Wrong alignment on WB_ItemWindow_C_IsFinishedOpenWindow");
static_assert(sizeof(WB_ItemWindow_C_IsFinishedOpenWindow) == 0x000001, "Wrong size on WB_ItemWindow_C_IsFinishedOpenWindow");
static_assert(offsetof(WB_ItemWindow_C_IsFinishedOpenWindow, OutFinished) == 0x000000, "Member 'WB_ItemWindow_C_IsFinishedOpenWindow::OutFinished' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.IsFinishedCloseWindow
// 0x0001 (0x0001 - 0x0000)
struct WB_ItemWindow_C_IsFinishedCloseWindow final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ItemWindow_C_IsFinishedCloseWindow) == 0x000001, "Wrong alignment on WB_ItemWindow_C_IsFinishedCloseWindow");
static_assert(sizeof(WB_ItemWindow_C_IsFinishedCloseWindow) == 0x000001, "Wrong size on WB_ItemWindow_C_IsFinishedCloseWindow");
static_assert(offsetof(WB_ItemWindow_C_IsFinishedCloseWindow, OutFinished) == 0x000000, "Member 'WB_ItemWindow_C_IsFinishedCloseWindow::OutFinished' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.SetItemText
// 0x0028 (0x0028 - 0x0000)
struct WB_ItemWindow_C_SetItemText final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InLabel;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6479[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByLabel_self_CastInput;   // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ItemWindow_C_SetItemText) == 0x000008, "Wrong alignment on WB_ItemWindow_C_SetItemText");
static_assert(sizeof(WB_ItemWindow_C_SetItemText) == 0x000028, "Wrong size on WB_ItemWindow_C_SetItemText");
static_assert(offsetof(WB_ItemWindow_C_SetItemText, InScriptMessageAsset) == 0x000000, "Member 'WB_ItemWindow_C_SetItemText::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemText, InLabel) == 0x000008, "Member 'WB_ItemWindow_C_SetItemText::InLabel' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemText, InExecutionText) == 0x000010, "Member 'WB_ItemWindow_C_SetItemText::InExecutionText' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemText, CallFunc_SetScriptMessageByLabel_self_CastInput) == 0x000018, "Member 'WB_ItemWindow_C_SetItemText::CallFunc_SetScriptMessageByLabel_self_CastInput' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.SetItemTextByIndex
// 0x0020 (0x0020 - 0x0000)
struct WB_ItemWindow_C_SetItemTextByIndex final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByID_self_CastInput;      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ItemWindow_C_SetItemTextByIndex) == 0x000008, "Wrong alignment on WB_ItemWindow_C_SetItemTextByIndex");
static_assert(sizeof(WB_ItemWindow_C_SetItemTextByIndex) == 0x000020, "Wrong size on WB_ItemWindow_C_SetItemTextByIndex");
static_assert(offsetof(WB_ItemWindow_C_SetItemTextByIndex, InScriptMessageAsset) == 0x000000, "Member 'WB_ItemWindow_C_SetItemTextByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemTextByIndex, InIndex) == 0x000008, "Member 'WB_ItemWindow_C_SetItemTextByIndex::InIndex' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemTextByIndex, InExecutionText) == 0x00000C, "Member 'WB_ItemWindow_C_SetItemTextByIndex::InExecutionText' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemTextByIndex, CallFunc_SetScriptMessageByID_self_CastInput) == 0x000010, "Member 'WB_ItemWindow_C_SetItemTextByIndex::CallFunc_SetScriptMessageByID_self_CastInput' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.ClearItemText
// 0x0018 (0x0018 - 0x0000)
struct WB_ItemWindow_C_ClearItemText final
{
public:
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_647B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByID_self_CastInput;      // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ItemWindow_C_ClearItemText) == 0x000008, "Wrong alignment on WB_ItemWindow_C_ClearItemText");
static_assert(sizeof(WB_ItemWindow_C_ClearItemText) == 0x000018, "Wrong size on WB_ItemWindow_C_ClearItemText");
static_assert(offsetof(WB_ItemWindow_C_ClearItemText, CallFunc_IsVisible_ReturnValue) == 0x000000, "Member 'WB_ItemWindow_C_ClearItemText::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_ClearItemText, CallFunc_SetScriptMessageByID_self_CastInput) == 0x000008, "Member 'WB_ItemWindow_C_ClearItemText::CallFunc_SetScriptMessageByID_self_CastInput' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.GetItemText
// 0x0008 (0x0008 - 0x0000)
struct WB_ItemWindow_C_GetItemText final
{
public:
	class UAtRichText*                            OutMessage;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_GetItemText) == 0x000008, "Wrong alignment on WB_ItemWindow_C_GetItemText");
static_assert(sizeof(WB_ItemWindow_C_GetItemText) == 0x000008, "Wrong size on WB_ItemWindow_C_GetItemText");
static_assert(offsetof(WB_ItemWindow_C_GetItemText, OutMessage) == 0x000000, "Member 'WB_ItemWindow_C_GetItemText::OutMessage' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.SetWindowPosition
// 0x0010 (0x0010 - 0x0000)
struct WB_ItemWindow_C_SetWindowPosition final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSSPPositionDataByPartsName_OutVec;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_SetWindowPosition) == 0x000008, "Wrong alignment on WB_ItemWindow_C_SetWindowPosition");
static_assert(sizeof(WB_ItemWindow_C_SetWindowPosition) == 0x000010, "Wrong size on WB_ItemWindow_C_SetWindowPosition");
static_assert(offsetof(WB_ItemWindow_C_SetWindowPosition, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'WB_ItemWindow_C_SetWindowPosition::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetWindowPosition, CallFunc_GetSSPPositionDataByPartsName_OutVec) == 0x000008, "Member 'WB_ItemWindow_C_SetWindowPosition::CallFunc_GetSSPPositionDataByPartsName_OutVec' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.SetItemName
// 0x0020 (0x0020 - 0x0000)
struct WB_ItemWindow_C_SetItemName final
{
public:
	int32                                         InItemId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_647C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_ItemGetName_ReturnValue;                  // 0x0008(0x0018)(ConstParm)
};
static_assert(alignof(WB_ItemWindow_C_SetItemName) == 0x000008, "Wrong alignment on WB_ItemWindow_C_SetItemName");
static_assert(sizeof(WB_ItemWindow_C_SetItemName) == 0x000020, "Wrong size on WB_ItemWindow_C_SetItemName");
static_assert(offsetof(WB_ItemWindow_C_SetItemName, InItemId) == 0x000000, "Member 'WB_ItemWindow_C_SetItemName::InItemId' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemName, CallFunc_ItemGetName_ReturnValue) == 0x000008, "Member 'WB_ItemWindow_C_SetItemName::CallFunc_ItemGetName_ReturnValue' has a wrong offset!");

// Function WB_ItemWindow.WB_ItemWindow_C.SetItemNumber
// 0x0008 (0x0008 - 0x0000)
struct WB_ItemWindow_C_SetItemNumber final
{
public:
	int32                                         InItemNumber;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemMax;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemWindow_C_SetItemNumber) == 0x000004, "Wrong alignment on WB_ItemWindow_C_SetItemNumber");
static_assert(sizeof(WB_ItemWindow_C_SetItemNumber) == 0x000008, "Wrong size on WB_ItemWindow_C_SetItemNumber");
static_assert(offsetof(WB_ItemWindow_C_SetItemNumber, InItemNumber) == 0x000000, "Member 'WB_ItemWindow_C_SetItemNumber::InItemNumber' has a wrong offset!");
static_assert(offsetof(WB_ItemWindow_C_SetItemNumber, InItemMax) == 0x000004, "Member 'WB_ItemWindow_C_SetItemNumber::InItemMax' has a wrong offset!");

}

