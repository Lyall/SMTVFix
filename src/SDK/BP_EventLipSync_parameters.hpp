#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventLipSync

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BP_EventLipSync.BP_EventLipSync_C.ExecuteUbergraph_BP_EventLipSync
// 0x00C8 (0x00C8 - 0x0000)
struct BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActionPadCheck_Success;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EAF[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded_1;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          K2Node_DynamicCast_AsSound_Atom_Cue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaLipSync*                          K2Node_DynamicCast_AsChara_Lip_Sync;               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         CallFunc_SpawnSound2D_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CharaLipSync_C>   K2Node_DynamicCast_AsBPI_Chara_Lip_Sync;           // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaLipSync_C>   K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_1;         // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB3[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4EB4[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB5[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaLipSync_C>   K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_2;         // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB6[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync) == 0x000008, "Wrong alignment on BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync");
static_assert(sizeof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync) == 0x0000C8, "Wrong size on BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, EntryPoint) == 0x000000, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_IsActionPadCheck_Success) == 0x000004, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_IsActionPadCheck_Success' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, Temp_object_Variable) == 0x000008, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000014, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000015, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_CustomEvent_Loaded_1) == 0x000018, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_CustomEvent_Loaded) == 0x000020, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_AsSound_Atom_Cue) == 0x000028, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_AsSound_Atom_Cue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_AsChara_Lip_Sync) == 0x000038, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_AsChara_Lip_Sync' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_SpawnSound2D_ReturnValue) == 0x000048, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_AsBPI_Chara_Lip_Sync) == 0x000050, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_AsBPI_Chara_Lip_Sync' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_1) == 0x000068, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_bSuccess_3) == 0x000078, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, Temp_object_Variable_1) == 0x000090, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_IsPlaying_ReturnValue) == 0x000098, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_2) == 0x0000A0, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_AsBPI_Chara_Lip_Sync_2' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_DynamicCast_bSuccess_4) == 0x0000B0, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B4, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync, CallFunc_BooleanAND_ReturnValue) == 0x0000C4, "Member 'BP_EventLipSync_C_ExecuteUbergraph_BP_EventLipSync::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_EventLipSync_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventLipSync_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_EventLipSync_C_ReceiveTick");
static_assert(sizeof(BP_EventLipSync_C_ReceiveTick) == 0x000004, "Wrong size on BP_EventLipSync_C_ReceiveTick");
static_assert(offsetof(BP_EventLipSync_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_EventLipSync_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.OnLoaded_439F8D954E62CD9656376695E1D3D554
// 0x0008 (0x0008 - 0x0000)
struct BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554) == 0x000008, "Wrong alignment on BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554");
static_assert(sizeof(BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554) == 0x000008, "Wrong size on BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554");
static_assert(offsetof(BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554, Loaded) == 0x000000, "Member 'BP_EventLipSync_C_OnLoaded_439F8D954E62CD9656376695E1D3D554::Loaded' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431
// 0x0008 (0x0008 - 0x0000)
struct BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431) == 0x000008, "Wrong alignment on BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431");
static_assert(sizeof(BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431) == 0x000008, "Wrong size on BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431");
static_assert(offsetof(BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431, Loaded) == 0x000000, "Member 'BP_EventLipSync_C_OnLoaded_8B6B6EC64F26F58BEEAE27AB6DC42431::Loaded' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.Initialize
// 0x0080 (0x0080 - 0x0000)
struct BP_EventLipSync_C_Initialize final
{
public:
	class UScriptMessageAsset*                    Param_ScriptMessageAsset;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_Label;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Param_SpeakingActor;                               // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EB8[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptMessage                         CallFunc_Array_Get_Item;                           // 0x0028(0x0040)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EB9[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBA[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventLipSync_C_Initialize) == 0x000008, "Wrong alignment on BP_EventLipSync_C_Initialize");
static_assert(sizeof(BP_EventLipSync_C_Initialize) == 0x000080, "Wrong size on BP_EventLipSync_C_Initialize");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Param_ScriptMessageAsset) == 0x000000, "Member 'BP_EventLipSync_C_Initialize::Param_ScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Param_Label) == 0x000008, "Member 'BP_EventLipSync_C_Initialize::Param_Label' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Param_SpeakingActor) == 0x000010, "Member 'BP_EventLipSync_C_Initialize::Param_SpeakingActor' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_EventLipSync_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Temp_bool_True_if_break_was_hit_Variable) == 0x00001C, "Member 'BP_EventLipSync_C_Initialize::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_EventLipSync_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_EventLipSync_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'BP_EventLipSync_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BP_EventLipSync_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_EventLipSync_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_EventLipSync_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'BP_EventLipSync_C_Initialize::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_Initialize, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000079, "Member 'BP_EventLipSync_C_Initialize::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.GetFinish
// 0x0002 (0x0002 - 0x0000)
struct BP_EventLipSync_C_GetFinish final
{
public:
	bool                                          IsFinish;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventLipSync_C_GetFinish) == 0x000001, "Wrong alignment on BP_EventLipSync_C_GetFinish");
static_assert(sizeof(BP_EventLipSync_C_GetFinish) == 0x000002, "Wrong size on BP_EventLipSync_C_GetFinish");
static_assert(offsetof(BP_EventLipSync_C_GetFinish, IsFinish) == 0x000000, "Member 'BP_EventLipSync_C_GetFinish::IsFinish' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_GetFinish, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_EventLipSync_C_GetFinish::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_EventLipSync.BP_EventLipSync_C.InitializeIndex
// 0x0080 (0x0080 - 0x0000)
struct BP_EventLipSync_C_InitializeIndex final
{
public:
	class UScriptMessageAsset*                    Param_ScriptMessageAsset;                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Param_SpeakingActor;                               // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBC[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBD[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptMessage                         CallFunc_Array_Get_Item;                           // 0x0028(0x0040)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBE[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4EBF[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EventLipSync_C_InitializeIndex) == 0x000008, "Wrong alignment on BP_EventLipSync_C_InitializeIndex");
static_assert(sizeof(BP_EventLipSync_C_InitializeIndex) == 0x000080, "Wrong size on BP_EventLipSync_C_InitializeIndex");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Param_ScriptMessageAsset) == 0x000000, "Member 'BP_EventLipSync_C_InitializeIndex::Param_ScriptMessageAsset' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Param_Index) == 0x000008, "Member 'BP_EventLipSync_C_InitializeIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Param_SpeakingActor) == 0x000010, "Member 'BP_EventLipSync_C_InitializeIndex::Param_SpeakingActor' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'BP_EventLipSync_C_InitializeIndex::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_EventLipSync_C_InitializeIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, Temp_int_Loop_Counter_Variable) == 0x00006C, "Member 'BP_EventLipSync_C_InitializeIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EventLipSync_C_InitializeIndex, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'BP_EventLipSync_C_InitializeIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

