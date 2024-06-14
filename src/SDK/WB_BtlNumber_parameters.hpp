#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlNumber

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function WB_BtlNumber.WB_BtlNumber_C.ExecuteUbergraph_WB_BtlNumber
// 0x0008 (0x0008 - 0x0000)
struct WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber) == 0x000004, "Wrong alignment on WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber");
static_assert(sizeof(WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber) == 0x000008, "Wrong size on WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber");
static_assert(offsetof(WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber, EntryPoint) == 0x000000, "Member 'WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_BtlNumber_C_ExecuteUbergraph_WB_BtlNumber::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_BtlNumber.WB_BtlNumber_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlNumber_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlNumber_C_PreConstruct) == 0x000001, "Wrong alignment on WB_BtlNumber_C_PreConstruct");
static_assert(sizeof(WB_BtlNumber_C_PreConstruct) == 0x000001, "Wrong size on WB_BtlNumber_C_PreConstruct");
static_assert(offsetof(WB_BtlNumber_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_BtlNumber_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_BtlNumber.WB_BtlNumber_C.Show
// 0x00C0 (0x00C0 - 0x0000)
struct WB_BtlNumber_C_Show final
{
public:
	int32                                         HP_Value;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MP_Value;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_UTIL_ICON_TYPE                          HitType;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22BD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Level;                                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  NumEffectType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22BE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Ratio;                                             // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayRate;                                          // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeRatio;                                         // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTL_NUMEFF                                  Temp_byte_Variable_1;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  Temp_byte_Variable_2;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput;                    // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	E_BTL_NUMEFF                                  Temp_byte_Variable_3;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22BF[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput_1;                  // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput_2;                  // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BTL_NUMEFF                                  K2Node_Select_Default;                             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTL_NUMEFF                                  K2Node_Select_Default_1;                           // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C1[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput_3;                  // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C2[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput_4;                  // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C3[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Appear_self_CastInput_5;                  // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlNumber_C_Show) == 0x000008, "Wrong alignment on WB_BtlNumber_C_Show");
static_assert(sizeof(WB_BtlNumber_C_Show) == 0x0000C0, "Wrong size on WB_BtlNumber_C_Show");
static_assert(offsetof(WB_BtlNumber_C_Show, HP_Value) == 0x000000, "Member 'WB_BtlNumber_C_Show::HP_Value' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, MP_Value) == 0x000004, "Member 'WB_BtlNumber_C_Show::MP_Value' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, HitType) == 0x000008, "Member 'WB_BtlNumber_C_Show::HitType' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Level) == 0x00000C, "Member 'WB_BtlNumber_C_Show::Level' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, NumEffectType) == 0x000010, "Member 'WB_BtlNumber_C_Show::NumEffectType' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Ratio) == 0x000014, "Member 'WB_BtlNumber_C_Show::Ratio' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, PlayRate) == 0x000018, "Member 'WB_BtlNumber_C_Show::PlayRate' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, SizeRatio) == 0x00001C, "Member 'WB_BtlNumber_C_Show::SizeRatio' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_byte_Variable) == 0x000020, "Member 'WB_BtlNumber_C_Show::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Greater_IntInt_ReturnValue) == 0x000021, "Member 'WB_BtlNumber_C_Show::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000022, "Member 'WB_BtlNumber_C_Show::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_BooleanOR_ReturnValue) == 0x000023, "Member 'WB_BtlNumber_C_Show::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_bool_Variable) == 0x000024, "Member 'WB_BtlNumber_C_Show::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_byte_Variable_1) == 0x000025, "Member 'WB_BtlNumber_C_Show::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_byte_Variable_2) == 0x000026, "Member 'WB_BtlNumber_C_Show::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000027, "Member 'WB_BtlNumber_C_Show::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput) == 0x000028, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'WB_BtlNumber_C_Show::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_byte_Variable_3) == 0x000048, "Member 'WB_BtlNumber_C_Show::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput_1) == 0x000050, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'WB_BtlNumber_C_Show::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput_2) == 0x000068, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, Temp_bool_Variable_1) == 0x000078, "Member 'WB_BtlNumber_C_Show::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, K2Node_Select_Default) == 0x000079, "Member 'WB_BtlNumber_C_Show::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, K2Node_Select_Default_1) == 0x00007A, "Member 'WB_BtlNumber_C_Show::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput_3) == 0x000080, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput_3' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, K2Node_SwitchEnum_CmpSuccess) == 0x000090, "Member 'WB_BtlNumber_C_Show::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000091, "Member 'WB_BtlNumber_C_Show::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput_4) == 0x000098, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput_4' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_BooleanAND_ReturnValue) == 0x0000A8, "Member 'WB_BtlNumber_C_Show::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0000A9, "Member 'WB_BtlNumber_C_Show::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_GetTimeSeconds_ReturnValue) == 0x0000AC, "Member 'WB_BtlNumber_C_Show::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Show, CallFunc_Appear_self_CastInput_5) == 0x0000B0, "Member 'WB_BtlNumber_C_Show::CallFunc_Appear_self_CastInput_5' has a wrong offset!");

// Function WB_BtlNumber.WB_BtlNumber_C.IsFinished
// 0x0002 (0x0002 - 0x0000)
struct WB_BtlNumber_C_IsFinished final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlNumber_C_IsFinished) == 0x000001, "Wrong alignment on WB_BtlNumber_C_IsFinished");
static_assert(sizeof(WB_BtlNumber_C_IsFinished) == 0x000002, "Wrong size on WB_BtlNumber_C_IsFinished");
static_assert(offsetof(WB_BtlNumber_C_IsFinished, RetValue) == 0x000000, "Member 'WB_BtlNumber_C_IsFinished::RetValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_IsFinished, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WB_BtlNumber_C_IsFinished::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_BtlNumber.WB_BtlNumber_C.UpdateAnim
// 0x0020 (0x0020 - 0x0000)
struct WB_BtlNumber_C_UpdateAnim final
{
public:
	float                                         Pass;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BattleDesignDebugIsUseOldTaskSystem_Enable; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22C5[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlNumber_C_UpdateAnim) == 0x000004, "Wrong alignment on WB_BtlNumber_C_UpdateAnim");
static_assert(sizeof(WB_BtlNumber_C_UpdateAnim) == 0x000020, "Wrong size on WB_BtlNumber_C_UpdateAnim");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, Pass) == 0x000000, "Member 'WB_BtlNumber_C_UpdateAnim::Pass' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_BattleDesignDebugIsUseOldTaskSystem_Enable) == 0x000008, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_BattleDesignDebugIsUseOldTaskSystem_Enable' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_SelectFloat_ReturnValue) == 0x00000C, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_GetTimeRange_MinTime) == 0x000010, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_GetTimeRange_MaxTime) == 0x000014, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_UpdateAnim, CallFunc_Add_FloatFloat_ReturnValue) == 0x00001C, "Member 'WB_BtlNumber_C_UpdateAnim::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function WB_BtlNumber.WB_BtlNumber_C.Hide
// 0x0040 (0x0040 - 0x0000)
struct WB_BtlNumber_C_Hide final
{
public:
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Disappear_self_CastInput;                 // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Disappear_self_CastInput_1;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Disappear_self_CastInput_2;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWBPI_BtlCommon_C>     CallFunc_Disappear_self_CastInput_3;               // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlNumber_C_Hide) == 0x000008, "Wrong alignment on WB_BtlNumber_C_Hide");
static_assert(sizeof(WB_BtlNumber_C_Hide) == 0x000040, "Wrong size on WB_BtlNumber_C_Hide");
static_assert(offsetof(WB_BtlNumber_C_Hide, CallFunc_Disappear_self_CastInput) == 0x000000, "Member 'WB_BtlNumber_C_Hide::CallFunc_Disappear_self_CastInput' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Hide, CallFunc_Disappear_self_CastInput_1) == 0x000010, "Member 'WB_BtlNumber_C_Hide::CallFunc_Disappear_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Hide, CallFunc_Disappear_self_CastInput_2) == 0x000020, "Member 'WB_BtlNumber_C_Hide::CallFunc_Disappear_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(WB_BtlNumber_C_Hide, CallFunc_Disappear_self_CastInput_3) == 0x000030, "Member 'WB_BtlNumber_C_Hide::CallFunc_Disappear_self_CastInput_3' has a wrong offset!");

}
