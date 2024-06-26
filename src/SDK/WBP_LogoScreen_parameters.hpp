#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LogoScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_LogoScreen.WBP_LogoScreen_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_LogoScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_LogoScreen_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_LogoScreen_C_PreConstruct");
static_assert(sizeof(WBP_LogoScreen_C_PreConstruct) == 0x000001, "Wrong size on WBP_LogoScreen_C_PreConstruct");
static_assert(offsetof(WBP_LogoScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_LogoScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_LogoScreen.WBP_LogoScreen_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_LogoScreen_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LogoScreen_C_Tick) == 0x000004, "Wrong alignment on WBP_LogoScreen_C_Tick");
static_assert(sizeof(WBP_LogoScreen_C_Tick) == 0x00003C, "Wrong size on WBP_LogoScreen_C_Tick");
static_assert(offsetof(WBP_LogoScreen_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_LogoScreen_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_LogoScreen_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_LogoScreen.WBP_LogoScreen_C.ExecuteUbergraph_WBP_LogoScreen
// 0x0128 (0x0128 - 0x0000)
struct WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666F[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0050(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6670[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentCulture_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6671[0x1];                                     // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6672[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6673[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_6;                               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6674[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_4;    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6675[0x1];                                     // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_5;    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6676[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_6;    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_7;    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6677[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_8;                               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6678[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_8;    // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6679[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_6;          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_9;    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_10;   // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667A[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_10;                              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667B[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_11;                              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_7;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_11;   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_667C[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_12;                              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen) == 0x000008, "Wrong alignment on WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen");
static_assert(sizeof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen) == 0x000128, "Wrong size on WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, EntryPoint) == 0x000000, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable) == 0x000004, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_2) == 0x000010, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_1) == 0x000014, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_3) == 0x000018, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_4) == 0x00001C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_5) == 0x000020, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_2) == 0x000024, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_6) == 0x000028, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_7) == 0x00002C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_8) == 0x000030, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_9) == 0x000034, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_10) == 0x000038, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_11) == 0x00003C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_3) == 0x000040, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_IntInt_ReturnValue_12) == 0x000044, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_4) == 0x000048, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, K2Node_Event_IsDesignTime) == 0x00004C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, K2Node_Event_MyGeometry) == 0x000050, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, K2Node_Event_InDeltaTime) == 0x000088, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, K2Node_SwitchInteger_CmpSuccess) == 0x00008C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GetCurrentCulture_ReturnValue) == 0x000090, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0000A1, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_BooleanOR_ReturnValue) == 0x0000A2, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000A4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_5) == 0x0000A8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000AC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_BooleanOR_ReturnValue_1) == 0x0000AD, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_MakeLiteralFloat_ReturnValue) == 0x0000B0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0000B8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_6) == 0x0000BC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000C0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000C4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x0000C8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000CC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_3) == 0x0000D0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_4) == 0x0000D1, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_BooleanOR_ReturnValue_2) == 0x0000D2, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_3) == 0x0000D4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0000D8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_5) == 0x0000DC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_7) == 0x0000E0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_4) == 0x0000E4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_6) == 0x0000E8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_7) == 0x0000E9, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_8) == 0x0000EC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_BooleanOR_ReturnValue_3) == 0x0000F0, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_5) == 0x0000F4, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x0000F8, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_8) == 0x0000FC, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_9) == 0x000100, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_6) == 0x000104, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_9) == 0x000108, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_10) == 0x000109, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_10) == 0x00010C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_BooleanOR_ReturnValue_4) == 0x000110, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_11) == 0x000114, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Divide_FloatFloat_ReturnValue_7) == 0x000118, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Divide_FloatFloat_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x00011C, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_11) == 0x000120, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen, Temp_int_Variable_12) == 0x000124, "Member 'WBP_LogoScreen_C_ExecuteUbergraph_WBP_LogoScreen::Temp_int_Variable_12' has a wrong offset!");

}

