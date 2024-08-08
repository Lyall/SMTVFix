#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_SelectItem

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function WB_Message_SelectItem.WB_Message_SelectItem_C.ExecuteUbergraph_WB_Message_SelectItem
// 0x0090 (0x0090 - 0x0000)
struct WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsOn;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	const class UScriptMessageAsset*              K2Node_CustomEvent_InScriptMessage;                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMessageData                           K2Node_CustomEvent_MessageData;                    // 0x0010(0x0070)()
	TScriptInterface<class IMessageTagInterface>  CallFunc_SetScriptMessageByID_self_CastInput;      // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem) == 0x000008, "Wrong alignment on WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem");
static_assert(sizeof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem) == 0x000090, "Wrong size on WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, EntryPoint) == 0x000000, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, K2Node_CustomEvent_IsOn) == 0x000004, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::K2Node_CustomEvent_IsOn' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, K2Node_Event_IsDesignTime) == 0x000005, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, K2Node_CustomEvent_InScriptMessage) == 0x000008, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::K2Node_CustomEvent_InScriptMessage' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, K2Node_CustomEvent_MessageData) == 0x000010, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::K2Node_CustomEvent_MessageData' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem, CallFunc_SetScriptMessageByID_self_CastInput) == 0x000080, "Member 'WB_Message_SelectItem_C_ExecuteUbergraph_WB_Message_SelectItem::CallFunc_SetScriptMessageByID_self_CastInput' has a wrong offset!");

// Function WB_Message_SelectItem.WB_Message_SelectItem_C.Setting
// 0x0078 (0x0078 - 0x0000)
struct WB_Message_SelectItem_C_Setting final
{
public:
	const class UScriptMessageAsset*              InScriptMessage;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMessageData                           Param_MessageData;                                 // 0x0008(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WB_Message_SelectItem_C_Setting) == 0x000008, "Wrong alignment on WB_Message_SelectItem_C_Setting");
static_assert(sizeof(WB_Message_SelectItem_C_Setting) == 0x000078, "Wrong size on WB_Message_SelectItem_C_Setting");
static_assert(offsetof(WB_Message_SelectItem_C_Setting, InScriptMessage) == 0x000000, "Member 'WB_Message_SelectItem_C_Setting::InScriptMessage' has a wrong offset!");
static_assert(offsetof(WB_Message_SelectItem_C_Setting, Param_MessageData) == 0x000008, "Member 'WB_Message_SelectItem_C_Setting::Param_MessageData' has a wrong offset!");

// Function WB_Message_SelectItem.WB_Message_SelectItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_Message_SelectItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Message_SelectItem_C_PreConstruct) == 0x000001, "Wrong alignment on WB_Message_SelectItem_C_PreConstruct");
static_assert(sizeof(WB_Message_SelectItem_C_PreConstruct) == 0x000001, "Wrong size on WB_Message_SelectItem_C_PreConstruct");
static_assert(offsetof(WB_Message_SelectItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_Message_SelectItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_Message_SelectItem.WB_Message_SelectItem_C.SetSelect
// 0x0001 (0x0001 - 0x0000)
struct WB_Message_SelectItem_C_SetSelect final
{
public:
	bool                                          IsOn;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Message_SelectItem_C_SetSelect) == 0x000001, "Wrong alignment on WB_Message_SelectItem_C_SetSelect");
static_assert(sizeof(WB_Message_SelectItem_C_SetSelect) == 0x000001, "Wrong size on WB_Message_SelectItem_C_SetSelect");
static_assert(offsetof(WB_Message_SelectItem_C_SetSelect, IsOn) == 0x000000, "Member 'WB_Message_SelectItem_C_SetSelect::IsOn' has a wrong offset!");

}

