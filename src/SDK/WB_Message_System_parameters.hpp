#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_System

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_Message_System.WB_Message_System_C.ExecuteUbergraph_WB_Message_System
// 0x0050 (0x0050 - 0x0000)
struct WB_Message_System_C_ExecuteUbergraph_WB_Message_System final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFontSizeOffset_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System) == 0x000004, "Wrong alignment on WB_Message_System_C_ExecuteUbergraph_WB_Message_System");
static_assert(sizeof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System) == 0x000050, "Wrong size on WB_Message_System_C_ExecuteUbergraph_WB_Message_System");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, EntryPoint) == 0x000000, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, CallFunc_GetFontSizeOffset_ReturnValue) == 0x000004, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::CallFunc_GetFontSizeOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, CallFunc_MakeVector2D_ReturnValue) == 0x00000C, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, K2Node_Event_MyGeometry) == 0x000014, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_ExecuteUbergraph_WB_Message_System, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WB_Message_System_C_ExecuteUbergraph_WB_Message_System::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WB_Message_System.WB_Message_System_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_Message_System_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Message_System_C_Tick) == 0x000004, "Wrong alignment on WB_Message_System_C_Tick");
static_assert(sizeof(WB_Message_System_C_Tick) == 0x00003C, "Wrong size on WB_Message_System_C_Tick");
static_assert(offsetof(WB_Message_System_C_Tick, MyGeometry) == 0x000000, "Member 'WB_Message_System_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Message_System_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_Message_System_C_Tick::InDeltaTime' has a wrong offset!");

}

