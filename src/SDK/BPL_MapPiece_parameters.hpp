#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MapPiece

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_MapPiece.BPL_MapPiece_C.UnlockMapPiece
// 0x0048 (0x0048 - 0x0000)
struct BPL_MapPiece_C_UnlockMapPiece final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Gimic_Chest_Piece_C*>        CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Gimic_Chest_Piece_C*                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapGimmick_C>     CallFunc_BPI_ShowGimmick_self_CastInput;           // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6992[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_MapPiece_C_UnlockMapPiece) == 0x000008, "Wrong alignment on BPL_MapPiece_C_UnlockMapPiece");
static_assert(sizeof(BPL_MapPiece_C_UnlockMapPiece) == 0x000048, "Wrong size on BPL_MapPiece_C_UnlockMapPiece");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, __WorldContext) == 0x000000, "Member 'BPL_MapPiece_C_UnlockMapPiece::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BPL_MapPiece_C_UnlockMapPiece::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_Array_Get_Item) == 0x000020, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_BPI_ShowGimmick_self_CastInput) == 0x000028, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_BPI_ShowGimmick_self_CastInput' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BPL_MapPiece_C_UnlockMapPiece::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_CheckEventFlag_ReturnValue) == 0x00003C, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_MapPiece_C_UnlockMapPiece, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BPL_MapPiece_C_UnlockMapPiece::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
