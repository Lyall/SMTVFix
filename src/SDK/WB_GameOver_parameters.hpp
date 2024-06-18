#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GameOver

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_GameOver.WB_GameOver_C.ExecuteUbergraph_WB_GameOver
// 0x00F0 (0x00F0 - 0x0000)
struct WB_GameOver_C_ExecuteUbergraph_WB_GameOver final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EDC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetColorAndOpacity_1_ReturnValue;         // 0x0008(0x0028)()
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_WaitLoadAllSaveDataHeaderAsync_ReturnValue; // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDD[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMaxDateTimeSlotIndex_ReturnValue;      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GAMEOVER_RESULT                             Temp_byte_Variable;                                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SaveExistsResult                            CallFunc_Check_ReturnValue;                        // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDE[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_GAMEOVER_RESULT                             Temp_byte_Variable_1;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0060(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success;                 // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_1;               // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_2;               // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EDF[0x1];                                     // 0x00A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_GAMEOVER_RESULT                             K2Node_Select_Default_1;                           // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EE0[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EE1[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            CallFunc_GetColorAndOpacity_0_ReturnValue;         // 0x00C8(0x0028)()
};
static_assert(alignof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver) == 0x000008, "Wrong alignment on WB_GameOver_C_ExecuteUbergraph_WB_GameOver");
static_assert(sizeof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver) == 0x0000F0, "Wrong size on WB_GameOver_C_ExecuteUbergraph_WB_GameOver");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, EntryPoint) == 0x000000, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_GetColorAndOpacity_1_ReturnValue) == 0x000008, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_GetColorAndOpacity_1_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_int_Variable) == 0x000030, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_int_Variable_1) == 0x000034, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_int_Variable_2) == 0x000038, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_WaitLoadAllSaveDataHeaderAsync_ReturnValue) == 0x00004C, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_WaitLoadAllSaveDataHeaderAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_GetMaxDateTimeSlotIndex_ReturnValue) == 0x000050, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_GetMaxDateTimeSlotIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_byte_Variable) == 0x000054, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_Check_ReturnValue) == 0x000055, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_Check_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000056, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_int_Variable_3) == 0x000058, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_bool_Variable) == 0x00005C, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_byte_Variable_1) == 0x00005D, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_bool_Variable_1) == 0x00005E, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_Event_IsDesignTime) == 0x00005F, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_Event_MyGeometry) == 0x000060, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_Event_InDeltaTime) == 0x000098, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, Temp_int_Variable_4) == 0x00009C, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_SwitchInteger_CmpSuccess) == 0x0000A0, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_IsActionPadCheck_Success) == 0x0000A1, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_IsActionPadCheck_Success' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_IsActionPadCheck_Success_1) == 0x0000A2, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_IsActionPadCheck_Success_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_BooleanOR_ReturnValue) == 0x0000A3, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_IsActionPadCheck_Success_2) == 0x0000A5, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_IsActionPadCheck_Success_2' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A6, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_Select_Default) == 0x0000A8, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000AC, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, K2Node_Select_Default_1) == 0x0000AD, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_PlayAnimation_ReturnValue) == 0x0000B8, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C0, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C4, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_ExecuteUbergraph_WB_GameOver, CallFunc_GetColorAndOpacity_0_ReturnValue) == 0x0000C8, "Member 'WB_GameOver_C_ExecuteUbergraph_WB_GameOver::CallFunc_GetColorAndOpacity_0_ReturnValue' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_GameOver_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_GameOver_C_Tick) == 0x000004, "Wrong alignment on WB_GameOver_C_Tick");
static_assert(sizeof(WB_GameOver_C_Tick) == 0x00003C, "Wrong size on WB_GameOver_C_Tick");
static_assert(offsetof(WB_GameOver_C_Tick, MyGeometry) == 0x000000, "Member 'WB_GameOver_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_GameOver_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_GameOver_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_GameOver_C_PreConstruct) == 0x000001, "Wrong alignment on WB_GameOver_C_PreConstruct");
static_assert(sizeof(WB_GameOver_C_PreConstruct) == 0x000001, "Wrong size on WB_GameOver_C_PreConstruct");
static_assert(offsetof(WB_GameOver_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_GameOver_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.GetColorAndOpacity_0
// 0x0130 (0x0130 - 0x0000)
struct WB_GameOver_C_GetColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            Lo_Color;                                          // 0x0028(0x0028)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0058(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE3[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0088(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00B0(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE4[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00E0(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0108(0x0028)()
};
static_assert(alignof(WB_GameOver_C_GetColorAndOpacity_0) == 0x000008, "Wrong alignment on WB_GameOver_C_GetColorAndOpacity_0");
static_assert(sizeof(WB_GameOver_C_GetColorAndOpacity_0) == 0x000130, "Wrong size on WB_GameOver_C_GetColorAndOpacity_0");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'WB_GameOver_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, Lo_Color) == 0x000028, "Member 'WB_GameOver_C_GetColorAndOpacity_0::Lo_Color' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, Temp_bool_Variable) == 0x000050, "Member 'WB_GameOver_C_GetColorAndOpacity_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x000058, "Member 'WB_GameOver_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, Temp_bool_Variable_1) == 0x000080, "Member 'WB_GameOver_C_GetColorAndOpacity_0::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_1) == 0x000088, "Member 'WB_GameOver_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, K2Node_MakeStruct_SlateColor_2) == 0x0000B0, "Member 'WB_GameOver_C_GetColorAndOpacity_0::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D8, "Member 'WB_GameOver_C_GetColorAndOpacity_0::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D9, "Member 'WB_GameOver_C_GetColorAndOpacity_0::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, K2Node_Select_Default) == 0x0000E0, "Member 'WB_GameOver_C_GetColorAndOpacity_0::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_0, K2Node_Select_Default_1) == 0x000108, "Member 'WB_GameOver_C_GetColorAndOpacity_0::K2Node_Select_Default_1' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.GetColorAndOpacity_1
// 0x00B0 (0x00B0 - 0x0000)
struct WB_GameOver_C_GetColorAndOpacity_1 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0058(0x0028)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EE6[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0088(0x0028)()
};
static_assert(alignof(WB_GameOver_C_GetColorAndOpacity_1) == 0x000008, "Wrong alignment on WB_GameOver_C_GetColorAndOpacity_1");
static_assert(sizeof(WB_GameOver_C_GetColorAndOpacity_1) == 0x0000B0, "Wrong size on WB_GameOver_C_GetColorAndOpacity_1");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, ReturnValue) == 0x000000, "Member 'WB_GameOver_C_GetColorAndOpacity_1::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, Temp_bool_Variable) == 0x000028, "Member 'WB_GameOver_C_GetColorAndOpacity_1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'WB_GameOver_C_GetColorAndOpacity_1::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, K2Node_MakeStruct_SlateColor_1) == 0x000058, "Member 'WB_GameOver_C_GetColorAndOpacity_1::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000080, "Member 'WB_GameOver_C_GetColorAndOpacity_1::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_GetColorAndOpacity_1, K2Node_Select_Default) == 0x000088, "Member 'WB_GameOver_C_GetColorAndOpacity_1::K2Node_Select_Default' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.IsFinished
// 0x0003 (0x0003 - 0x0000)
struct WB_GameOver_C_IsFinished final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_GameOver_C_IsFinished) == 0x000001, "Wrong alignment on WB_GameOver_C_IsFinished");
static_assert(sizeof(WB_GameOver_C_IsFinished) == 0x000003, "Wrong size on WB_GameOver_C_IsFinished");
static_assert(offsetof(WB_GameOver_C_IsFinished, RetValue) == 0x000000, "Member 'WB_GameOver_C_IsFinished::RetValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_IsFinished, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'WB_GameOver_C_IsFinished::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GameOver_C_IsFinished, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'WB_GameOver_C_IsFinished::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.GetResult
// 0x0001 (0x0001 - 0x0000)
struct WB_GameOver_C_GetResult final
{
public:
	E_GAMEOVER_RESULT                             RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_GameOver_C_GetResult) == 0x000001, "Wrong alignment on WB_GameOver_C_GetResult");
static_assert(sizeof(WB_GameOver_C_GetResult) == 0x000001, "Wrong size on WB_GameOver_C_GetResult");
static_assert(offsetof(WB_GameOver_C_GetResult, RetValue) == 0x000000, "Member 'WB_GameOver_C_GetResult::RetValue' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.GetTargetSlot
// 0x0004 (0x0004 - 0x0000)
struct WB_GameOver_C_GetTargetSlot final
{
public:
	int32                                         RetValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_GameOver_C_GetTargetSlot) == 0x000004, "Wrong alignment on WB_GameOver_C_GetTargetSlot");
static_assert(sizeof(WB_GameOver_C_GetTargetSlot) == 0x000004, "Wrong size on WB_GameOver_C_GetTargetSlot");
static_assert(offsetof(WB_GameOver_C_GetTargetSlot, RetValue) == 0x000000, "Member 'WB_GameOver_C_GetTargetSlot::RetValue' has a wrong offset!");

// Function WB_GameOver.WB_GameOver_C.IsDebugFinish
// 0x0001 (0x0001 - 0x0000)
struct WB_GameOver_C_IsDebugFinish final
{
public:
	bool                                          RetValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_GameOver_C_IsDebugFinish) == 0x000001, "Wrong alignment on WB_GameOver_C_IsDebugFinish");
static_assert(sizeof(WB_GameOver_C_IsDebugFinish) == 0x000001, "Wrong size on WB_GameOver_C_IsDebugFinish");
static_assert(offsetof(WB_GameOver_C_IsDebugFinish, RetValue) == 0x000000, "Member 'WB_GameOver_C_IsDebugFinish::RetValue' has a wrong offset!");

}

