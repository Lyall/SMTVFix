#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleTaskModelManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BattleTaskModelManager.BattleTaskModelManager_C.ExecuteUbergraph_BattleTaskModelManager
// 0x0008 (0x0008 - 0x0000)
struct BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager) == 0x000004, "Wrong alignment on BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager");
static_assert(sizeof(BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager) == 0x000008, "Wrong size on BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager");
static_assert(offsetof(BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager, EntryPoint) == 0x000000, "Member 'BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BattleTaskModelManager_C_ExecuteUbergraph_BattleTaskModelManager::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BattleTaskModelManager_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleTaskModelManager_C_ReceiveTick) == 0x000004, "Wrong alignment on BattleTaskModelManager_C_ReceiveTick");
static_assert(sizeof(BattleTaskModelManager_C_ReceiveTick) == 0x000004, "Wrong size on BattleTaskModelManager_C_ReceiveTick");
static_assert(offsetof(BattleTaskModelManager_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BattleTaskModelManager_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.AddUnit
// 0x0010 (0x0010 - 0x0000)
struct BattleTaskModelManager_C_AddUnit final
{
public:
	int32                                         TaskIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61EF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           InUnit;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleTaskModelManager_C_AddUnit) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_AddUnit");
static_assert(sizeof(BattleTaskModelManager_C_AddUnit) == 0x000010, "Wrong size on BattleTaskModelManager_C_AddUnit");
static_assert(offsetof(BattleTaskModelManager_C_AddUnit, TaskIndex) == 0x000000, "Member 'BattleTaskModelManager_C_AddUnit::TaskIndex' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddUnit, InUnit) == 0x000008, "Member 'BattleTaskModelManager_C_AddUnit::InUnit' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.IsExist
// 0x0018 (0x0018 - 0x0000)
struct BattleTaskModelManager_C_IsExist final
{
public:
	int32                                         TaskIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F0[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_IsExist) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_IsExist");
static_assert(sizeof(BattleTaskModelManager_C_IsExist) == 0x000018, "Wrong size on BattleTaskModelManager_C_IsExist");
static_assert(offsetof(BattleTaskModelManager_C_IsExist, TaskIndex) == 0x000000, "Member 'BattleTaskModelManager_C_IsExist::TaskIndex' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_IsExist, RetValue) == 0x000004, "Member 'BattleTaskModelManager_C_IsExist::RetValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_IsExist, CallFunc_Map_Find_Value) == 0x000008, "Member 'BattleTaskModelManager_C_IsExist::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_IsExist, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BattleTaskModelManager_C_IsExist::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.GetModelUnit
// 0x0020 (0x0020 - 0x0000)
struct BattleTaskModelManager_C_GetModelUnit final
{
public:
	int32                                         TaskIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           RetValue;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase_C*                           CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_GetModelUnit) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_GetModelUnit");
static_assert(sizeof(BattleTaskModelManager_C_GetModelUnit) == 0x000020, "Wrong size on BattleTaskModelManager_C_GetModelUnit");
static_assert(offsetof(BattleTaskModelManager_C_GetModelUnit, TaskIndex) == 0x000000, "Member 'BattleTaskModelManager_C_GetModelUnit::TaskIndex' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_GetModelUnit, RetValue) == 0x000008, "Member 'BattleTaskModelManager_C_GetModelUnit::RetValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_GetModelUnit, CallFunc_Map_Find_Value) == 0x000010, "Member 'BattleTaskModelManager_C_GetModelUnit::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_GetModelUnit, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'BattleTaskModelManager_C_GetModelUnit::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.DeleteIndex
// 0x0018 (0x0018 - 0x0000)
struct BattleTaskModelManager_C_DeleteIndex final
{
public:
	int32                                         TaskIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_DeleteIndex) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_DeleteIndex");
static_assert(sizeof(BattleTaskModelManager_C_DeleteIndex) == 0x000018, "Wrong size on BattleTaskModelManager_C_DeleteIndex");
static_assert(offsetof(BattleTaskModelManager_C_DeleteIndex, TaskIndex) == 0x000000, "Member 'BattleTaskModelManager_C_DeleteIndex::TaskIndex' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteIndex, CallFunc_Map_Find_Value) == 0x000008, "Member 'BattleTaskModelManager_C_DeleteIndex::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteIndex, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'BattleTaskModelManager_C_DeleteIndex::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteIndex, CallFunc_Map_Remove_ReturnValue) == 0x000011, "Member 'BattleTaskModelManager_C_DeleteIndex::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.UpdateReserveDestroy
// 0x0030 (0x0030 - 0x0000)
struct BattleTaskModelManager_C_UpdateReserveDestroy final
{
public:
	class ACharaBase_C*                           Lo_Unit;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompletelyDead_RetVal;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F3[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F4[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_UpdateReserveDestroy) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_UpdateReserveDestroy");
static_assert(sizeof(BattleTaskModelManager_C_UpdateReserveDestroy) == 0x000030, "Wrong size on BattleTaskModelManager_C_UpdateReserveDestroy");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, Lo_Unit) == 0x000000, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::Lo_Unit' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_IsCompletelyDead_RetVal) == 0x000014, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_IsCompletelyDead_RetVal' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Array_Get_Item) == 0x000018, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Array_RemoveItem_ReturnValue) == 0x000024, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Greater_IntInt_ReturnValue) == 0x000025, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_UpdateReserveDestroy, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BattleTaskModelManager_C_UpdateReserveDestroy::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.AddReserveDestroy
// 0x0018 (0x0018 - 0x0000)
struct BattleTaskModelManager_C_AddReserveDestroy final
{
public:
	class ACharaBase_C*                           InUnit;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61F5[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_AddReserveDestroy) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_AddReserveDestroy");
static_assert(sizeof(BattleTaskModelManager_C_AddReserveDestroy) == 0x000018, "Wrong size on BattleTaskModelManager_C_AddReserveDestroy");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, InUnit) == 0x000000, "Member 'BattleTaskModelManager_C_AddReserveDestroy::InUnit' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BattleTaskModelManager_C_AddReserveDestroy::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, CallFunc_Array_Add_ReturnValue) == 0x00000C, "Member 'BattleTaskModelManager_C_AddReserveDestroy::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BattleTaskModelManager_C_AddReserveDestroy::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000011, "Member 'BattleTaskModelManager_C_AddReserveDestroy::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddReserveDestroy, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'BattleTaskModelManager_C_AddReserveDestroy::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.ReserveDestroyDeleteAll
// 0x0028 (0x0028 - 0x0000)
struct BattleTaskModelManager_C_ReserveDestroyDeleteAll final
{
public:
	class ACharaBase_C*                           Lo_Unit;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F6[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_ReserveDestroyDeleteAll) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_ReserveDestroyDeleteAll");
static_assert(sizeof(BattleTaskModelManager_C_ReserveDestroyDeleteAll) == 0x000028, "Wrong size on BattleTaskModelManager_C_ReserveDestroyDeleteAll");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, Lo_Unit) == 0x000000, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::Lo_Unit' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, CallFunc_Array_Get_Item) == 0x000018, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_ReserveDestroyDeleteAll, CallFunc_IsValid_ReturnValue) == 0x000025, "Member 'BattleTaskModelManager_C_ReserveDestroyDeleteAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.AddKeepRefUnit
// 0x0010 (0x0010 - 0x0000)
struct BattleTaskModelManager_C_AddKeepRefUnit final
{
public:
	const class ACharaBase_C*                     InUnit;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleTaskModelManager_C_AddKeepRefUnit) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_AddKeepRefUnit");
static_assert(sizeof(BattleTaskModelManager_C_AddKeepRefUnit) == 0x000010, "Wrong size on BattleTaskModelManager_C_AddKeepRefUnit");
static_assert(offsetof(BattleTaskModelManager_C_AddKeepRefUnit, InUnit) == 0x000000, "Member 'BattleTaskModelManager_C_AddKeepRefUnit::InUnit' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_AddKeepRefUnit, CallFunc_Array_Add_ReturnValue) == 0x000008, "Member 'BattleTaskModelManager_C_AddKeepRefUnit::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.DeleteKeepRefUnit
// 0x0020 (0x0020 - 0x0000)
struct BattleTaskModelManager_C_DeleteKeepRefUnit final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharaBase_C*                           CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_DeleteKeepRefUnit) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_DeleteKeepRefUnit");
static_assert(sizeof(BattleTaskModelManager_C_DeleteKeepRefUnit) == 0x000020, "Wrong size on BattleTaskModelManager_C_DeleteKeepRefUnit");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, CallFunc_Array_Get_Item) == 0x000010, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleTaskModelManager_C_DeleteKeepRefUnit, CallFunc_Less_IntInt_ReturnValue) == 0x00001D, "Member 'BattleTaskModelManager_C_DeleteKeepRefUnit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.GetKeepRefUnitList
// 0x0010 (0x0010 - 0x0000)
struct BattleTaskModelManager_C_GetKeepRefUnitList final
{
public:
	TArray<class ACharaBase_C*>                   RetValue;                                          // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BattleTaskModelManager_C_GetKeepRefUnitList) == 0x000008, "Wrong alignment on BattleTaskModelManager_C_GetKeepRefUnitList");
static_assert(sizeof(BattleTaskModelManager_C_GetKeepRefUnitList) == 0x000010, "Wrong size on BattleTaskModelManager_C_GetKeepRefUnitList");
static_assert(offsetof(BattleTaskModelManager_C_GetKeepRefUnitList, RetValue) == 0x000000, "Member 'BattleTaskModelManager_C_GetKeepRefUnitList::RetValue' has a wrong offset!");

// Function BattleTaskModelManager.BattleTaskModelManager_C.BI_DestroyReserveUnits
// 0x0001 (0x0001 - 0x0000)
struct BattleTaskModelManager_C_BI_DestroyReserveUnits final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleTaskModelManager_C_BI_DestroyReserveUnits) == 0x000001, "Wrong alignment on BattleTaskModelManager_C_BI_DestroyReserveUnits");
static_assert(sizeof(BattleTaskModelManager_C_BI_DestroyReserveUnits) == 0x000001, "Wrong size on BattleTaskModelManager_C_BI_DestroyReserveUnits");
static_assert(offsetof(BattleTaskModelManager_C_BI_DestroyReserveUnits, NoUse) == 0x000000, "Member 'BattleTaskModelManager_C_BI_DestroyReserveUnits::NoUse' has a wrong offset!");

}

