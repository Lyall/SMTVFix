#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StatusUICtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_StartCtrl
// 0x0028 (0x0028 - 0x0000)
struct BPI_StatusUICtrl_C_BPI_StartCtrl final
{
public:
	class UUIStatusCtrlDataObjBase*               DataObj;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UI_STATUS_CTRL_TYPE                         CtrlType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20D7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_StatusCharaChanger_C> StatusCharaChanger;                                // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_WIDGET_PRIO                                 WidgetPriority;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusUICtrl_C_BPI_StartCtrl) == 0x000008, "Wrong alignment on BPI_StatusUICtrl_C_BPI_StartCtrl");
static_assert(sizeof(BPI_StatusUICtrl_C_BPI_StartCtrl) == 0x000028, "Wrong size on BPI_StatusUICtrl_C_BPI_StartCtrl");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_StartCtrl, DataObj) == 0x000000, "Member 'BPI_StatusUICtrl_C_BPI_StartCtrl::DataObj' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_StartCtrl, CtrlType) == 0x000008, "Member 'BPI_StatusUICtrl_C_BPI_StartCtrl::CtrlType' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_StartCtrl, StatusCharaChanger) == 0x000010, "Member 'BPI_StatusUICtrl_C_BPI_StartCtrl::StatusCharaChanger' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_StartCtrl, WidgetPriority) == 0x000020, "Member 'BPI_StatusUICtrl_C_BPI_StartCtrl::WidgetPriority' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_StartCtrl, Success) == 0x000021, "Member 'BPI_StatusUICtrl_C_BPI_StartCtrl::Success' has a wrong offset!");

// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_IsComplete
// 0x0001 (0x0001 - 0x0000)
struct BPI_StatusUICtrl_C_BPI_IsComplete final
{
public:
	bool                                          IsComplete;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusUICtrl_C_BPI_IsComplete) == 0x000001, "Wrong alignment on BPI_StatusUICtrl_C_BPI_IsComplete");
static_assert(sizeof(BPI_StatusUICtrl_C_BPI_IsComplete) == 0x000001, "Wrong size on BPI_StatusUICtrl_C_BPI_IsComplete");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_IsComplete, IsComplete) == 0x000000, "Member 'BPI_StatusUICtrl_C_BPI_IsComplete::IsComplete' has a wrong offset!");

// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_TickEvent
// 0x0008 (0x0008 - 0x0000)
struct BPI_StatusUICtrl_C_BPI_TickEvent final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StatusEnd;                                         // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusUICtrl_C_BPI_TickEvent) == 0x000004, "Wrong alignment on BPI_StatusUICtrl_C_BPI_TickEvent");
static_assert(sizeof(BPI_StatusUICtrl_C_BPI_TickEvent) == 0x000008, "Wrong size on BPI_StatusUICtrl_C_BPI_TickEvent");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_TickEvent, DeltaSeconds) == 0x000000, "Member 'BPI_StatusUICtrl_C_BPI_TickEvent::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_TickEvent, StatusEnd) == 0x000004, "Member 'BPI_StatusUICtrl_C_BPI_TickEvent::StatusEnd' has a wrong offset!");

// Function BPI_StatusUICtrl.BPI_StatusUICtrl_C.BPI_SetTaskBeforeViewEnd
// 0x0010 (0x0010 - 0x0000)
struct BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd final
{
public:
	class UObject*                                Runner;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd) == 0x000008, "Wrong alignment on BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd");
static_assert(sizeof(BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd) == 0x000010, "Wrong size on BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd, Runner) == 0x000000, "Member 'BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd::Runner' has a wrong offset!");
static_assert(offsetof(BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd, Success) == 0x000008, "Member 'BPI_StatusUICtrl_C_BPI_SetTaskBeforeViewEnd::Success' has a wrong offset!");

}

