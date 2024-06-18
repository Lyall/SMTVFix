#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_KeyConfigDebug_PrioView

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPL_KeyConfigDebug_PrioView.BPL_KeyConfigDebug_PrioView_C.BPL_ShowDebugInputPrio
// 0x0118 (0x0118 - 0x0000)
struct BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_KeyConfigDebug_PrioView_C*          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWB_KeyConfigDebug_PrioView_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C6[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_KeyConfigDebug_PrioView_C*          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C7[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDebugMenuItemData                     CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue; // 0x0040(0x00D0)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio) == 0x000008, "Wrong alignment on BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio");
static_assert(sizeof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio) == 0x000118, "Wrong size on BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, __WorldContext) == 0x000000, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_Create_ReturnValue) == 0x000008, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000010, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_AddToWidgetPrio_ReturnValue) == 0x000020, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_AddToWidgetPrio_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_Array_Get_Item) == 0x000030, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue) == 0x000040, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_GetDebugMenuItemFromPathName_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000110, "Member 'BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

