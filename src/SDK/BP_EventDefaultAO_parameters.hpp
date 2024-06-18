#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventDefaultAO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EventDefaultAO_Struct_structs.hpp"


namespace SDK::Params
{

// Function BP_EventDefaultAO.BP_EventDefaultAO_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EventDefaultAO_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventDefaultAO_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EventDefaultAO_C_ReceiveEndPlay");
static_assert(sizeof(BP_EventDefaultAO_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EventDefaultAO_C_ReceiveEndPlay");
static_assert(offsetof(BP_EventDefaultAO_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EventDefaultAO_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EventDefaultAO.BP_EventDefaultAO_C.ExecuteUbergraph_BP_EventDefaultAO
// 0x0B60 (0x0B60 - 0x0000)
struct BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APostProcessVolume*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0028(0x0010)(ReferenceParm)
	class APostProcessVolume*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E11[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E12[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E13[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventDefaultAO_Struct                 K2Node_MakeStruct_EventDefaultAO_Struct;           // 0x0060(0x0570)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x05D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x05D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E14[0xB];                                     // 0x05D5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventDefaultAO_Struct                 CallFunc_Array_Get_Item_2;                         // 0x05E0(0x0570)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0B50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0B54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO) == 0x000010, "Wrong alignment on BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO");
static_assert(sizeof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO) == 0x000B60, "Wrong size on BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, EntryPoint) == 0x000000, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, Temp_int_Array_Index_Variable_2) == 0x000024, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000050, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Length_ReturnValue_1) == 0x000054, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Less_IntInt_ReturnValue_1) == 0x000058, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, K2Node_MakeStruct_EventDefaultAO_Struct) == 0x000060, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::K2Node_MakeStruct_EventDefaultAO_Struct' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Add_ReturnValue) == 0x0005D0, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, K2Node_Event_EndPlayReason) == 0x0005D4, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Get_Item_2) == 0x0005E0, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Array_Length_ReturnValue_2) == 0x000B50, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO, CallFunc_Less_IntInt_ReturnValue_2) == 0x000B54, "Member 'BP_EventDefaultAO_C_ExecuteUbergraph_BP_EventDefaultAO::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

}

