#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2380_Return

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function MM_M061_EM2380_Return.MM_M061_EM2380_Return_C.ExecuteUbergraph_MM_M061_EM2380_Return
// 0x0260 (0x0260 - 0x0000)
struct MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartMapEvent_Dummy;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActionPadCheck_Success;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_648F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor;         // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UProjectUIManager*                      CallFunc_Get_ReturnValue_1;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_1;              // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IWasConfirmedByMouse_bConfirmed;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6490[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IWasConfirmedByMouse_ItemIndex;           // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor_1;       // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpenDebugMenu_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IWasConfirmedByMouse_bConfirmed_1;        // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6491[0x1];                                     // 0x0083(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IWasConfirmedByMouse_ItemIndex_1;         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6492[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_Get_ReturnValue_2;                        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_2;              // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6493[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor_2;       // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UProjectSoundManager*                   CallFunc_Get_ReturnValue_3;                        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActionPadCheck_Success_1;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6494[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	class UProjectUIManager*                      CallFunc_Get_ReturnValue_4;                        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_3;              // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_2;               // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6495[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor_3;       // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_IGetDialogSelectedCursorPosition_OutIndex; // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6496[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectUIManager*                      CallFunc_Get_ReturnValue_5;                        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_4;              // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6497[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor_4;       // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_3;               // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IIsClosedDialogWindow_OutFinished;        // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6498[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UProjectUIManager*                      CallFunc_Get_ReturnValue_6;                        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_UIManager_C>      K2Node_DynamicCast_AsBPI_UIManager_5;              // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6499[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DialogCtrl_C>     CallFunc_BPI_GetDialogWindowCtrl_OutActor_5;       // 0x0188(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IIsClosedDialogWindow_OutFinished_1;      // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetActive_IsActive;                       // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_4;               // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649A[0x5];                                     // 0x019B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerDevilBase_C*                     K2Node_DynamicCast_AsPlayer_Devil_Base;            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649B[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_5;               // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActionPadCheck_Success_6;               // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649C[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_2;          // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649D[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649E[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAtomComponent*                         CallFunc_SpawnSound2D_ReturnValue;                 // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMouseCursorState                      CallFunc_PopShowMouseCursor_ReturnValue;           // 0x0240(0x0018)()
	bool                                          CallFunc_FadeOut_Black_ReturnValue;                // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EndMapEvent_Dummy;                        // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return) == 0x000008, "Wrong alignment on MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return");
static_assert(sizeof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return) == 0x000260, "Wrong size on MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, EntryPoint) == 0x000000, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::EntryPoint' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_StartMapEvent_Dummy) == 0x000004, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_StartMapEvent_Dummy' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue) == 0x000008, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success) == 0x000010, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager) == 0x000018, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Conv_BoolToString_ReturnValue) == 0x000030, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor) == 0x000040, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_1) == 0x000050, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager_1) == 0x000058, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IWasConfirmedByMouse_bConfirmed) == 0x000069, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IWasConfirmedByMouse_bConfirmed' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IWasConfirmedByMouse_ItemIndex) == 0x00006C, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IWasConfirmedByMouse_ItemIndex' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor_1) == 0x000070, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsOpenDebugMenu_ReturnValue) == 0x000080, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsOpenDebugMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Not_PreBool_ReturnValue) == 0x000081, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IWasConfirmedByMouse_bConfirmed_1) == 0x000082, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IWasConfirmedByMouse_bConfirmed_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IWasConfirmedByMouse_ItemIndex_1) == 0x000084, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IWasConfirmedByMouse_ItemIndex_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, Temp_int_Array_Index_Variable) == 0x000090, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_2) == 0x000098, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager_2) == 0x0000A0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_2) == 0x0000B0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor_2) == 0x0000B8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_3) == 0x0000C8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_1) == 0x0000D0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_MakeArray_Array) == 0x0000D8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_4) == 0x0000E8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager_3) == 0x0000F0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_3) == 0x000100, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_2) == 0x000101, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor_3) == 0x000108, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IGetDialogSelectedCursorPosition_OutIndex) == 0x000118, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IGetDialogSelectedCursorPosition_OutIndex' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_SwitchInteger_CmpSuccess) == 0x00011C, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011D, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_5) == 0x000120, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager_4) == 0x000128, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_4) == 0x000138, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_MakeLiteralByte_ReturnValue) == 0x000139, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor_4) == 0x000140, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_3) == 0x000150, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IIsClosedDialogWindow_OutFinished) == 0x000151, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IIsClosedDialogWindow_OutFinished' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Conv_BoolToString_ReturnValue_1) == 0x000158, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Conv_BoolToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Get_ReturnValue_6) == 0x000168, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Get_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsBPI_UIManager_5) == 0x000170, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsBPI_UIManager_5' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_5) == 0x000180, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_CheckEventFlag_ReturnValue) == 0x000181, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BPI_GetDialogWindowCtrl_OutActor_5) == 0x000188, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BPI_GetDialogWindowCtrl_OutActor_5' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IIsClosedDialogWindow_OutFinished_1) == 0x000198, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IIsClosedDialogWindow_OutFinished_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_GetActive_IsActive) == 0x000199, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_GetActive_IsActive' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_4) == 0x00019A, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_GetPlayerPawn_ReturnValue) == 0x0001A0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Array_Get_Item) == 0x0001A8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_AsPlayer_Devil_Base) == 0x0001B0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_AsPlayer_Devil_Base' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, K2Node_DynamicCast_bSuccess_6) == 0x0001B8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsValid_ReturnValue) == 0x0001B9, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Array_Length_ReturnValue) == 0x0001BC, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Less_IntInt_ReturnValue) == 0x0001C0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_5) == 0x0001C1, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_5' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BooleanOR_ReturnValue) == 0x0001C2, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_IsActionPadCheck_Success_6) == 0x0001C3, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_IsActionPadCheck_Success_6' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BooleanAND_ReturnValue) == 0x0001C4, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Conv_BoolToString_ReturnValue_2) == 0x0001C8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Conv_BoolToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Concat_StrStr_ReturnValue) == 0x0001D8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BooleanOR_ReturnValue_1) == 0x0001E8, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001F0, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_BooleanAND_ReturnValue_1) == 0x000200, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000208, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000218, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000228, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_SpawnSound2D_ReturnValue) == 0x000238, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_PopShowMouseCursor_ReturnValue) == 0x000240, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_PopShowMouseCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_FadeOut_Black_ReturnValue) == 0x000258, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_FadeOut_Black_ReturnValue' has a wrong offset!");
static_assert(offsetof(MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return, CallFunc_EndMapEvent_Dummy) == 0x000259, "Member 'MM_M061_EM2380_Return_C_ExecuteUbergraph_MM_M061_EM2380_Return::CallFunc_EndMapEvent_Dummy' has a wrong offset!");

}
