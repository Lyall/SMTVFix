#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MovePiece

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_MovePiece.BPL_MovePiece_C.ShowAgainMovePieceAll
// 0x0048 (0x0048 - 0x0000)
struct BPL_MovePiece_C_ShowAgainMovePieceAll final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MovePiece_C>      K2Node_DynamicCast_AsBPI_Move_Piece;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_MovePiece_C_ShowAgainMovePieceAll) == 0x000008, "Wrong alignment on BPL_MovePiece_C_ShowAgainMovePieceAll");
static_assert(sizeof(BPL_MovePiece_C_ShowAgainMovePieceAll) == 0x000048, "Wrong size on BPL_MovePiece_C_ShowAgainMovePieceAll");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, __WorldContext) == 0x000000, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000008, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, CallFunc_Array_Get_Item) == 0x000020, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, K2Node_DynamicCast_AsBPI_Move_Piece) == 0x000028, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::K2Node_DynamicCast_AsBPI_Move_Piece' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_ShowAgainMovePieceAll, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BPL_MovePiece_C_ShowAgainMovePieceAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPL_MovePiece.BPL_MovePiece_C.HideMovePieceAll
// 0x0048 (0x0048 - 0x0000)
struct BPL_MovePiece_C_HideMovePieceAll final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithInterface_OutActors;      // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MovePiece_C>      K2Node_DynamicCast_AsBPI_Move_Piece;               // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_MovePiece_C_HideMovePieceAll) == 0x000008, "Wrong alignment on BPL_MovePiece_C_HideMovePieceAll");
static_assert(sizeof(BPL_MovePiece_C_HideMovePieceAll) == 0x000048, "Wrong size on BPL_MovePiece_C_HideMovePieceAll");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, __WorldContext) == 0x000000, "Member 'BPL_MovePiece_C_HideMovePieceAll::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, CallFunc_GetAllActorsWithInterface_OutActors) == 0x000008, "Member 'BPL_MovePiece_C_HideMovePieceAll::CallFunc_GetAllActorsWithInterface_OutActors' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_MovePiece_C_HideMovePieceAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BPL_MovePiece_C_HideMovePieceAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, CallFunc_Array_Get_Item) == 0x000020, "Member 'BPL_MovePiece_C_HideMovePieceAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, K2Node_DynamicCast_AsBPI_Move_Piece) == 0x000028, "Member 'BPL_MovePiece_C_HideMovePieceAll::K2Node_DynamicCast_AsBPI_Move_Piece' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BPL_MovePiece_C_HideMovePieceAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BPL_MovePiece_C_HideMovePieceAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BPL_MovePiece_C_HideMovePieceAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MovePiece_C_HideMovePieceAll, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BPL_MovePiece_C_HideMovePieceAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

