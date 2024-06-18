#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SymbolDebugText

#include "Basic.hpp"

#include "E_Symbol_ActPattern_structs.hpp"
#include "E_MapSymbolState_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_SymbolDebugText.WB_SymbolDebugText_C.ExecuteUbergraph_WB_SymbolDebugText
// 0x0020 (0x0020 - 0x0000)
struct WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61AF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDevilName_ReturnValue;                 // 0x0008(0x0018)(ConstParm)
};
static_assert(alignof(WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText) == 0x000008, "Wrong alignment on WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText");
static_assert(sizeof(WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText) == 0x000020, "Wrong size on WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText");
static_assert(offsetof(WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText, EntryPoint) == 0x000000, "Member 'WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText, CallFunc_GetDevilName_ReturnValue) == 0x000008, "Member 'WB_SymbolDebugText_C_ExecuteUbergraph_WB_SymbolDebugText::CallFunc_GetDevilName_ReturnValue' has a wrong offset!");

// Function WB_SymbolDebugText.WB_SymbolDebugText_C.Update
// 0x0358 (0x0358 - 0x0000)
struct WB_SymbolDebugText_C_Update final
{
public:
	TArray<E_Symbol_ActPattern>                   Param_ActPatternList;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Param_ActIndex;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_Counter;                                     // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_CounterEnd;                                  // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MapSymbolState                              Param_State;                                       // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Param_Speed;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Discovery_LevelDiff;                               // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          L_Discovery_LevelDiff;                             // 0x0025(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B1[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 L_Str;                                             // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B2[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable_2;                            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_3;                            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	E_MapSymbolState                              Temp_byte_Variable_1;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B4[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0090(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x00A8(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x00C0(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x00D8(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x00F0(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0108(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x0120(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x0138(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B5[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0168(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0190(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B6[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_Symbol_ActPattern                           CallFunc_Array_Get_Item;                           // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B7[0x5];                                     // 0x01FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B8[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_3;                           // 0x0258(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0270(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_2;           // 0x0298(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B9[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61BA[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02F0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61BB[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0330(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0340(0x0018)()
};
static_assert(alignof(WB_SymbolDebugText_C_Update) == 0x000008, "Wrong alignment on WB_SymbolDebugText_C_Update");
static_assert(sizeof(WB_SymbolDebugText_C_Update) == 0x000358, "Wrong size on WB_SymbolDebugText_C_Update");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_ActPatternList) == 0x000000, "Member 'WB_SymbolDebugText_C_Update::Param_ActPatternList' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_ActIndex) == 0x000010, "Member 'WB_SymbolDebugText_C_Update::Param_ActIndex' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_Counter) == 0x000014, "Member 'WB_SymbolDebugText_C_Update::Param_Counter' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_CounterEnd) == 0x000018, "Member 'WB_SymbolDebugText_C_Update::Param_CounterEnd' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_State) == 0x00001C, "Member 'WB_SymbolDebugText_C_Update::Param_State' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Param_Speed) == 0x000020, "Member 'WB_SymbolDebugText_C_Update::Param_Speed' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Discovery_LevelDiff) == 0x000024, "Member 'WB_SymbolDebugText_C_Update::Discovery_LevelDiff' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, L_Discovery_LevelDiff) == 0x000025, "Member 'WB_SymbolDebugText_C_Update::L_Discovery_LevelDiff' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, L_Str) == 0x000028, "Member 'WB_SymbolDebugText_C_Update::L_Str' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_byte_Variable) == 0x000038, "Member 'WB_SymbolDebugText_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_bool_Variable) == 0x000039, "Member 'WB_SymbolDebugText_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_string_Variable) == 0x000040, "Member 'WB_SymbolDebugText_C_Update::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_string_Variable_1) == 0x000050, "Member 'WB_SymbolDebugText_C_Update::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_bool_Variable_1) == 0x000060, "Member 'WB_SymbolDebugText_C_Update::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_string_Variable_2) == 0x000068, "Member 'WB_SymbolDebugText_C_Update::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_string_Variable_3) == 0x000078, "Member 'WB_SymbolDebugText_C_Update::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_byte_Variable_1) == 0x000088, "Member 'WB_SymbolDebugText_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable) == 0x000090, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_1) == 0x0000A8, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_2) == 0x0000C0, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_3) == 0x0000D8, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_4) == 0x0000F0, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_5) == 0x000108, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_6) == 0x000120, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_text_Variable_7) == 0x000138, "Member 'WB_SymbolDebugText_C_Update::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_int_Array_Index_Variable) == 0x000150, "Member 'WB_SymbolDebugText_C_Update::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_byte_Variable_2) == 0x000154, "Member 'WB_SymbolDebugText_C_Update::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_IntToString_ReturnValue) == 0x000158, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_FloatToText_ReturnValue) == 0x000168, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_TextToString_ReturnValue) == 0x000180, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_StringToText_ReturnValue) == 0x000190, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue) == 0x0001A8, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001D0, "Member 'WB_SymbolDebugText_C_Update::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, K2Node_Select_Default) == 0x0001D8, "Member 'WB_SymbolDebugText_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, K2Node_Select_Default_1) == 0x0001E8, "Member 'WB_SymbolDebugText_C_Update::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_bool_Variable_2) == 0x0001F8, "Member 'WB_SymbolDebugText_C_Update::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Array_Get_Item) == 0x0001F9, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, K2Node_Select_Default_2) == 0x0001FA, "Member 'WB_SymbolDebugText_C_Update::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000200, "Member 'WB_SymbolDebugText_C_Update::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Array_Length_ReturnValue) == 0x000210, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000218, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000228, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000238, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000248, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, K2Node_Select_Default_3) == 0x000258, "Member 'WB_SymbolDebugText_C_Update::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000270, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000288, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_FloatToText_ReturnValue_2) == 0x000298, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_FloatToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0002B0, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, Temp_int_Loop_Counter_Variable) == 0x0002C0, "Member 'WB_SymbolDebugText_C_Update::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0002C8, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_6) == 0x0002D8, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Less_IntInt_ReturnValue) == 0x0002E8, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002F0, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x000308, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_TextToString_ReturnValue_3) == 0x000310, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_TextToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000320, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000330, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WB_SymbolDebugText_C_Update, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000340, "Member 'WB_SymbolDebugText_C_Update::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

}

