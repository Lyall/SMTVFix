#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ItemWindowCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IItemWindowCreate
// 0x0001 (0x0001 - 0x0000)
struct BPI_ItemWindowCtrl_C_IItemWindowCreate final
{
public:
	E_WIDGET_PRIO                                 InPrio;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IItemWindowCreate) == 0x000001, "Wrong alignment on BPI_ItemWindowCtrl_C_IItemWindowCreate");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IItemWindowCreate) == 0x000001, "Wrong size on BPI_ItemWindowCtrl_C_IItemWindowCreate");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowCreate, InPrio) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IItemWindowCreate::InPrio' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IIsFinishedItemWindowOpen
// 0x0001 (0x0001 - 0x0000)
struct BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen) == 0x000001, "Wrong alignment on BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen) == 0x000001, "Wrong size on BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen, OutFinished) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IIsFinishedItemWindowOpen::OutFinished' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IIsFinishedItemWindowClose
// 0x0001 (0x0001 - 0x0000)
struct BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose final
{
public:
	bool                                          OutFinished;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose) == 0x000001, "Wrong alignment on BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose) == 0x000001, "Wrong size on BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose, OutFinished) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IIsFinishedItemWindowClose::OutFinished' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IItemWindowSetMessage
// 0x0018 (0x0018 - 0x0000)
struct BPI_ItemWindowCtrl_C_IItemWindowSetMessage final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InLabel;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F5[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InFrame;                                           // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage) == 0x000008, "Wrong alignment on BPI_ItemWindowCtrl_C_IItemWindowSetMessage");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage) == 0x000018, "Wrong size on BPI_ItemWindowCtrl_C_IItemWindowSetMessage");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage, InScriptMessageAsset) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessage::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage, InLabel) == 0x000008, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessage::InLabel' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage, InExecutionText) == 0x000010, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessage::InExecutionText' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessage, InFrame) == 0x000014, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessage::InFrame' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IItemWindowSetMessageByIndex
// 0x0018 (0x0018 - 0x0000)
struct BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex final
{
public:
	class UScriptMessageAsset*                    InScriptMessageAsset;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InIndex;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InExecutionText;                                   // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F6[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InFrame;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex) == 0x000008, "Wrong alignment on BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex) == 0x000018, "Wrong size on BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex, InScriptMessageAsset) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex::InScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex, InIndex) == 0x000008, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex::InIndex' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex, InExecutionText) == 0x00000C, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex::InExecutionText' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex, InFrame) == 0x000010, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetMessageByIndex::InFrame' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IItemWindowGetMessage
// 0x0008 (0x0008 - 0x0000)
struct BPI_ItemWindowCtrl_C_IItemWindowGetMessage final
{
public:
	class UAtRichText*                            OutMessage;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IItemWindowGetMessage) == 0x000008, "Wrong alignment on BPI_ItemWindowCtrl_C_IItemWindowGetMessage");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IItemWindowGetMessage) == 0x000008, "Wrong size on BPI_ItemWindowCtrl_C_IItemWindowGetMessage");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowGetMessage, OutMessage) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IItemWindowGetMessage::OutMessage' has a wrong offset!");

// Function BPI_ItemWindowCtrl.BPI_ItemWindowCtrl_C.IItemWindowSetParameter
// 0x000C (0x000C - 0x0000)
struct BPI_ItemWindowCtrl_C_IItemWindowSetParameter final
{
public:
	int32                                         InItemId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemNum;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemAdd;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ItemWindowCtrl_C_IItemWindowSetParameter) == 0x000004, "Wrong alignment on BPI_ItemWindowCtrl_C_IItemWindowSetParameter");
static_assert(sizeof(BPI_ItemWindowCtrl_C_IItemWindowSetParameter) == 0x00000C, "Wrong size on BPI_ItemWindowCtrl_C_IItemWindowSetParameter");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetParameter, InItemId) == 0x000000, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetParameter::InItemId' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetParameter, InItemNum) == 0x000004, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetParameter::InItemNum' has a wrong offset!");
static_assert(offsetof(BPI_ItemWindowCtrl_C_IItemWindowSetParameter, InItemAdd) == 0x000008, "Member 'BPI_ItemWindowCtrl_C_IItemWindowSetParameter::InItemAdd' has a wrong offset!");

}

