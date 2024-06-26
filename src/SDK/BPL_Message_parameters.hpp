#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Message

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_Message.BPL_Message_C.CreateMessageWidget
// 0x0018 (0x0018 - 0x0000)
struct BPL_Message_C_CreateMessageWidget final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Message_C*                          MessWidget;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Message_C*                          CallFunc_GetMessageWidget_Widget;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_Message_C_CreateMessageWidget) == 0x000008, "Wrong alignment on BPL_Message_C_CreateMessageWidget");
static_assert(sizeof(BPL_Message_C_CreateMessageWidget) == 0x000018, "Wrong size on BPL_Message_C_CreateMessageWidget");
static_assert(offsetof(BPL_Message_C_CreateMessageWidget, __WorldContext) == 0x000000, "Member 'BPL_Message_C_CreateMessageWidget::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_CreateMessageWidget, MessWidget) == 0x000008, "Member 'BPL_Message_C_CreateMessageWidget::MessWidget' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_CreateMessageWidget, CallFunc_GetMessageWidget_Widget) == 0x000010, "Member 'BPL_Message_C_CreateMessageWidget::CallFunc_GetMessageWidget_Widget' has a wrong offset!");

// Function BPL_Message.BPL_Message_C.DeleteMessageWidget
// 0x0018 (0x0018 - 0x0000)
struct BPL_Message_C_DeleteMessageWidget final
{
public:
	class UWB_Message_C*                          MessageWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAllDelete;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE0[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_Message_C_DeleteMessageWidget) == 0x000008, "Wrong alignment on BPL_Message_C_DeleteMessageWidget");
static_assert(sizeof(BPL_Message_C_DeleteMessageWidget) == 0x000018, "Wrong size on BPL_Message_C_DeleteMessageWidget");
static_assert(offsetof(BPL_Message_C_DeleteMessageWidget, MessageWidget) == 0x000000, "Member 'BPL_Message_C_DeleteMessageWidget::MessageWidget' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_DeleteMessageWidget, IsAllDelete) == 0x000008, "Member 'BPL_Message_C_DeleteMessageWidget::IsAllDelete' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_DeleteMessageWidget, __WorldContext) == 0x000010, "Member 'BPL_Message_C_DeleteMessageWidget::__WorldContext' has a wrong offset!");

// Function BPL_Message.BPL_Message_C.GetMessageWidget
// 0x0050 (0x0050 - 0x0000)
struct BPL_Message_C_GetMessageWidget final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Message_C*                          Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CE1[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_BPI_GetUIManager_UIManager;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetMessageWidget_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Message_C*                          K2Node_DynamicCast_AsWB_Message;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_Message_C_GetMessageWidget) == 0x000008, "Wrong alignment on BPL_Message_C_GetMessageWidget");
static_assert(sizeof(BPL_Message_C_GetMessageWidget) == 0x000050, "Wrong size on BPL_Message_C_GetMessageWidget");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, __WorldContext) == 0x000000, "Member 'BPL_Message_C_GetMessageWidget::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, Widget) == 0x000008, "Member 'BPL_Message_C_GetMessageWidget::Widget' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'BPL_Message_C_GetMessageWidget::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'BPL_Message_C_GetMessageWidget::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BPL_Message_C_GetMessageWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, CallFunc_BPI_GetUIManager_UIManager) == 0x000030, "Member 'BPL_Message_C_GetMessageWidget::CallFunc_BPI_GetUIManager_UIManager' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, CallFunc_GetMessageWidget_ReturnValue) == 0x000038, "Member 'BPL_Message_C_GetMessageWidget::CallFunc_GetMessageWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, K2Node_DynamicCast_AsWB_Message) == 0x000040, "Member 'BPL_Message_C_GetMessageWidget::K2Node_DynamicCast_AsWB_Message' has a wrong offset!");
static_assert(offsetof(BPL_Message_C_GetMessageWidget, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BPL_Message_C_GetMessageWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

