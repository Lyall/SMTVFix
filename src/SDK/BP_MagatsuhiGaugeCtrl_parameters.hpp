#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MagatsuhiGaugeCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_GetCurrentWidgetPrio
// 0x0001 (0x0001 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio final
{
public:
	E_WIDGET_PRIO                                 CurrentPrio;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio) == 0x000001, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio) == 0x000001, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio, CurrentPrio) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_GetCurrentWidgetPrio::CurrentPrio' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_GetWidgetBase
// 0x0008 (0x0008 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase final
{
public:
	class UUIBtlUpliftingGaugeBase*               WidgetBase;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase) == 0x000008, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase) == 0x000008, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase, WidgetBase) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_GetWidgetBase::WidgetBase' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_SlideIn
// 0x000C (0x000C - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_SlideIn final
{
public:
	bool                                          UpperPos;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InitialValue;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_SlideIn) == 0x000004, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_SlideIn");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_SlideIn) == 0x00000C, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_SlideIn");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_SlideIn, UpperPos) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_SlideIn::UpperPos' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_SlideIn, InitialValue) == 0x000004, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_SlideIn::InitialValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_SlideIn, Immediately) == 0x000008, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_SlideIn::Immediately' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_SetGaugeValue
// 0x0004 (0x0004 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue) == 0x000004, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue) == 0x000004, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue, Value) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeValue::Value' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_SetGaugeReduceFlash
// 0x0001 (0x0001 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash) == 0x000001, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash) == 0x000001, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash, Show) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_SetGaugeReduceFlash::Show' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_IncreaseGauge
// 0x0004 (0x0004 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge final
{
public:
	int32                                         Increase;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge) == 0x000004, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge) == 0x000004, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge, Increase) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_IncreaseGauge::Increase' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_ReduceGauge
// 0x0004 (0x0004 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge final
{
public:
	int32                                         Reduce;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge) == 0x000004, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge) == 0x000004, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge, Reduce) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_ReduceGauge::Reduce' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.BI_ChangeWidgetPrio
// 0x0001 (0x0001 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio final
{
public:
	E_WIDGET_PRIO                                 Prio;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio) == 0x000001, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio) == 0x000001, "Wrong size on BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio, Prio) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_BI_ChangeWidgetPrio::Prio' has a wrong offset!");

// Function BP_MagatsuhiGaugeCtrl.BP_MagatsuhiGaugeCtrl_C.ExecuteUbergraph_BP_MagatsuhiGaugeCtrl
// 0x0058 (0x0058 - 0x0000)
struct BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_UpperPos;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InitialValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Immediately;                          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Value;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_Show;                                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Increase;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Reduce;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_2;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_WIDGET_PRIO                                 K2Node_Event_Prio;                                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_3;                      // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue;              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue_1;            // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F[0x1];                                       // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MagatsuhiGauge_C*                   CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl) == 0x000008, "Wrong alignment on BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl");
static_assert(sizeof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl) == 0x000058, "Wrong size on BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, EntryPoint) == 0x000000, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_UpperPos) == 0x000004, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_UpperPos' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_InitialValue) == 0x000008, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_InitialValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Immediately) == 0x00000C, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Immediately' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Clamp_ReturnValue) == 0x000010, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Value) == 0x000018, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Clamp_ReturnValue_1) == 0x000020, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Show) == 0x000024, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Show' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue_2) == 0x000025, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Increase) == 0x000028, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Increase' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue_3) == 0x00002C, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Reduce) == 0x000030, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Reduce' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue_4) == 0x000034, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Clamp_ReturnValue_2) == 0x00003C, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Clamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_IsValid_ReturnValue_5) == 0x000040, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, K2Node_Event_Prio) == 0x000041, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::K2Node_Event_Prio' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Clamp_ReturnValue_3) == 0x000048, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Clamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_AddToWidgetPrio_ReturnValue) == 0x00004C, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_AddToWidgetPrio_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00004D, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_AddToWidgetPrio_ReturnValue_1) == 0x00004E, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_AddToWidgetPrio_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl, CallFunc_Create_ReturnValue) == 0x000050, "Member 'BP_MagatsuhiGaugeCtrl_C_ExecuteUbergraph_BP_MagatsuhiGaugeCtrl::CallFunc_Create_ReturnValue' has a wrong offset!");

}

