#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_InfoWindowCtrl

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowCreate
// 0x0001 (0x0001 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowCreate final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowCreate) == 0x000001, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowCreate");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowCreate) == 0x000001, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowCreate");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowCreate, InPrio) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowCreate::InPrio' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IIsFinishedInfoWindowOpen
// 0x0001 (0x0001 - 0x0000)
struct BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen) == 0x000001, "Wrong alignment on BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen) == 0x000001, "Wrong size on BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen, OutFinished) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowOpen::OutFinished' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IIsFinishedInfoWindowClose
// 0x0001 (0x0001 - 0x0000)
struct BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose) == 0x000001, "Wrong alignment on BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose) == 0x000001, "Wrong size on BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose, OutFinished) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IIsFinishedInfoWindowClose::OutFinished' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowSetMessage
// 0x0018 (0x0018 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowSetMessage final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InLabel;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InFrame;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage) == 0x000008, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowSetMessage");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage) == 0x000018, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowSetMessage");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage, InScriptMessageAsset) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessage::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage, InLabel) == 0x000008, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessage::InLabel' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage, InExecutionText) == 0x000010, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessage::InExecutionText' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessage, InFrame) == 0x000014, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessage::InFrame' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowSetMessageByIndex
// 0x0018 (0x0018 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InFrame;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex) == 0x000008, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex) == 0x000018, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex, InScriptMessageAsset) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex, InIndex) == 0x000008, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex, InExecutionText) == 0x00000C, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex::InExecutionText' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex, InFrame) == 0x000010, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetMessageByIndex::InFrame' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowSetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility) == 0x000001, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility) == 0x000001, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility, InVisibility) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetVisibility::InVisibility' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowGetVisibility
// 0x0001 (0x0001 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility final
{
public:
	ESlateVisibility                              Visibility;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility) == 0x000001, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility) == 0x000001, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility, Visibility) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowGetVisibility::Visibility' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowSetRichTextProgramValue
// 0x0018 (0x0018 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InString;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue) == 0x000008, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue) == 0x000018, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue, InIndex) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue, InString) == 0x000008, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextProgramValue::InString' has a wrong offset!");

// Function BPI_InfoWindowCtrl.BPI_InfoWindowCtrl_C.IInfoWindowSetRichTextValueParam
// 0x0008 (0x0008 - 0x0000)
struct BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InValueParam;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam) == 0x000004, "Wrong alignment on BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam");
static_assert(sizeof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam) == 0x000008, "Wrong size on BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam, InIndex) == 0x000000, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam, InValueParam) == 0x000004, "Member 'BPI_InfoWindowCtrl_C_IInfoWindowSetRichTextValueParam::InValueParam' has a wrong offset!");

}

