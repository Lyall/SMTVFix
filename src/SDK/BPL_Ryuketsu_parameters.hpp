#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Ryuketsu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_Ryuketsu.BPL_Ryuketsu_C.CallRyuketsu
// 0x0078 (0x0078 - 0x0000)
struct BPL_Ryuketsu_C_CallRyuketsu final
{
public:
	int32                                         RyuketsuIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Ryuketsu_C>       K2Node_DynamicCast_AsBPI_Ryuketsu;                 // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_Ryuketsu_C>       K2Node_DynamicCast_AsBPI_Ryuketsu_1;               // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_BPI_GetRyuketsuIndex_RyuketsuIndex;       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_Ryuketsu_C_CallRyuketsu) == 0x000008, "Wrong alignment on BPL_Ryuketsu_C_CallRyuketsu");
static_assert(sizeof(BPL_Ryuketsu_C_CallRyuketsu) == 0x000078, "Wrong size on BPL_Ryuketsu_C_CallRyuketsu");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, RyuketsuIndex) == 0x000000, "Member 'BPL_Ryuketsu_C_CallRyuketsu::RyuketsuIndex' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, __WorldContext) == 0x000008, "Member 'BPL_Ryuketsu_C_CallRyuketsu::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, Success) == 0x000010, "Member 'BPL_Ryuketsu_C_CallRyuketsu::Success' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000018, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BPL_Ryuketsu_C_CallRyuketsu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_Array_Get_Item) == 0x000030, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, K2Node_DynamicCast_AsBPI_Ryuketsu) == 0x000038, "Member 'BPL_Ryuketsu_C_CallRyuketsu::K2Node_DynamicCast_AsBPI_Ryuketsu' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BPL_Ryuketsu_C_CallRyuketsu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, K2Node_DynamicCast_AsBPI_Ryuketsu_1) == 0x000050, "Member 'BPL_Ryuketsu_C_CallRyuketsu::K2Node_DynamicCast_AsBPI_Ryuketsu_1' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BPL_Ryuketsu_C_CallRyuketsu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_BPI_GetRyuketsuIndex_RyuketsuIndex) == 0x000064, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_BPI_GetRyuketsuIndex_RyuketsuIndex' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'BPL_Ryuketsu_C_CallRyuketsu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_Ryuketsu_C_CallRyuketsu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000074, "Member 'BPL_Ryuketsu_C_CallRyuketsu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

