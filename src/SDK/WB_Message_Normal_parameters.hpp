#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_Normal

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_Message_Normal.WB_Message_Normal_C.ExecuteUbergraph_WB_Message_Normal
// 0x0054 (0x0054 - 0x0000)
struct WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFontSizeOffset_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal) == 0x000004, "Wrong alignment on WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal");
static_assert(sizeof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal) == 0x000054, "Wrong size on WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, EntryPoint) == 0x000000, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, CallFunc_GetFontSizeOffset_ReturnValue) == 0x000004, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::CallFunc_GetFontSizeOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, CallFunc_MakeVector2D_ReturnValue) == 0x00000C, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, K2Node_Event_MyGeometry) == 0x000014, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal, K2Node_Event_IsDesignTime) == 0x000050, "Member 'WB_Message_Normal_C_ExecuteUbergraph_WB_Message_Normal::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_Message_Normal.WB_Message_Normal_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_Message_Normal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_Message_Normal_C_PreConstruct) == 0x000001, "Wrong alignment on WB_Message_Normal_C_PreConstruct");
static_assert(sizeof(WB_Message_Normal_C_PreConstruct) == 0x000001, "Wrong size on WB_Message_Normal_C_PreConstruct");
static_assert(offsetof(WB_Message_Normal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_Message_Normal_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_Message_Normal.WB_Message_Normal_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_Message_Normal_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Message_Normal_C_Tick) == 0x000004, "Wrong alignment on WB_Message_Normal_C_Tick");
static_assert(sizeof(WB_Message_Normal_C_Tick) == 0x00003C, "Wrong size on WB_Message_Normal_C_Tick");
static_assert(offsetof(WB_Message_Normal_C_Tick, MyGeometry) == 0x000000, "Member 'WB_Message_Normal_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Message_Normal_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_Message_Normal_C_Tick::InDeltaTime' has a wrong offset!");

}
