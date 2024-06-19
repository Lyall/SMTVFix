#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapCoasterLIne

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C.StartCoasterLineAllMode
// 0x0048 (0x0048 - 0x0000)
struct WB_MinimapCoasterLIne_C_StartCoasterLineAllMode final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         CallFunc_GetCoasterLineImageArray_ReturnValue;     // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue_1;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode) == 0x000008, "Wrong alignment on WB_MinimapCoasterLIne_C_StartCoasterLineAllMode");
static_assert(sizeof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode) == 0x000048, "Wrong size on WB_MinimapCoasterLIne_C_StartCoasterLineAllMode");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_GetMinimapManager_ReturnValue) == 0x000010, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_GetCoasterLineImageArray_ReturnValue) == 0x000018, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_GetCoasterLineImageArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_GetMinimapManager_ReturnValue_1) == 0x000028, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_GetMinimapManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_Array_Get_Item) == 0x000030, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_AddChildToOverlay_ReturnValue) == 0x000038, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineAllMode, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineAllMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C.FinishCoasterLineAllMode
// 0x0040 (0x0040 - 0x0000)
struct WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         CallFunc_GetCoasterLineImageArray_ReturnValue;     // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode) == 0x000008, "Wrong alignment on WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode");
static_assert(sizeof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode) == 0x000040, "Wrong size on WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_GetMinimapManager_ReturnValue) == 0x000010, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_GetCoasterLineImageArray_ReturnValue) == 0x000018, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_GetCoasterLineImageArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_Array_Get_Item) == 0x000030, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WB_MinimapCoasterLIne_C_FinishCoasterLineAllMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C.StartCoasterLineMinimapMode
// 0x0010 (0x0010 - 0x0000)
struct WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode final
{
public:
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode) == 0x000008, "Wrong alignment on WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode");
static_assert(sizeof(WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode) == 0x000010, "Wrong size on WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode, CallFunc_AddChildToOverlay_ReturnValue) == 0x000000, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode, CallFunc_GetMinimapManager_ReturnValue) == 0x000008, "Member 'WB_MinimapCoasterLIne_C_StartCoasterLineMinimapMode::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");

// Function WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C.SetMiniAlpha
// 0x0004 (0x0004 - 0x0000)
struct WB_MinimapCoasterLIne_C_SetMiniAlpha final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapCoasterLIne_C_SetMiniAlpha) == 0x000004, "Wrong alignment on WB_MinimapCoasterLIne_C_SetMiniAlpha");
static_assert(sizeof(WB_MinimapCoasterLIne_C_SetMiniAlpha) == 0x000004, "Wrong size on WB_MinimapCoasterLIne_C_SetMiniAlpha");
static_assert(offsetof(WB_MinimapCoasterLIne_C_SetMiniAlpha, Alpha) == 0x000000, "Member 'WB_MinimapCoasterLIne_C_SetMiniAlpha::Alpha' has a wrong offset!");

// Function WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C.SetAllAlpha
// 0x0004 (0x0004 - 0x0000)
struct WB_MinimapCoasterLIne_C_SetAllAlpha final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapCoasterLIne_C_SetAllAlpha) == 0x000004, "Wrong alignment on WB_MinimapCoasterLIne_C_SetAllAlpha");
static_assert(sizeof(WB_MinimapCoasterLIne_C_SetAllAlpha) == 0x000004, "Wrong size on WB_MinimapCoasterLIne_C_SetAllAlpha");
static_assert(offsetof(WB_MinimapCoasterLIne_C_SetAllAlpha, Alpha) == 0x000000, "Member 'WB_MinimapCoasterLIne_C_SetAllAlpha::Alpha' has a wrong offset!");

}

