#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_m061_01

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function esNPC_m061_01.esNPC_m061_01_C.ExecuteUbergraph_esNPC_m061_01
// 0x00B8 (0x00B8 - 0x0000)
struct EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A307[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A308[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_DynamicCast_AsAnim_Sequence_Base;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A309[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Character_SpawnActor;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActive_IsActive;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A30A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor;      // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_StopMotion_NoUse;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A30B[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1;    // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_EventPlayMotion_NoUse;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A30C[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_2;    // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_FloatNoRotation_NoUse;                 // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A30D[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_CharaBaseAccessor_C> K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_3;    // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_IKEnableFlag_NoUse;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_OldNewRoute                                 CallFunc_GetOldNewRoute_ReturnValue;               // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_OldNewRoute                                 CallFunc_GetOldNewRoute_ReturnValue_1;             // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A30E[0x1];                                     // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckEventFlag_ReturnValue_1;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01) == 0x000008, "Wrong alignment on EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01");
static_assert(sizeof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01) == 0x0000B8, "Wrong size on EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, EntryPoint) == 0x000000, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, Temp_object_Variable) == 0x000018, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_AsAnim_Sequence_Base) == 0x000020, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_AsAnim_Sequence_Base' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_Character_SpawnActor) == 0x000030, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_Character_SpawnActor' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_GetActive_IsActive) == 0x000038, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_GetActive_IsActive' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor) == 0x000040, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_BI_StopMotion_NoUse) == 0x000051, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_BI_StopMotion_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1) == 0x000058, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_BI_EventPlayMotion_NoUse) == 0x000069, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_BI_EventPlayMotion_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_2) == 0x000070, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_2' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_bSuccess_3) == 0x000080, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_BI_FloatNoRotation_NoUse) == 0x000081, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_BI_FloatNoRotation_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_3) == 0x000088, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_AsBPI_Chara_Base_Accessor_3' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_DynamicCast_bSuccess_4) == 0x000098, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_BI_IKEnableFlag_NoUse) == 0x000099, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_BI_IKEnableFlag_NoUse' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_GetOldNewRoute_ReturnValue) == 0x00009A, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_GetOldNewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_GetOldNewRoute_ReturnValue_1) == 0x00009B, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_GetOldNewRoute_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00009C, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00009D, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_CheckEventFlag_ReturnValue) == 0x00009E, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_CheckEventFlag_ReturnValue_1) == 0x0000B0, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_CheckEventFlag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01, CallFunc_BooleanOR_ReturnValue) == 0x0000B1, "Member 'EsNPC_m061_01_C_ExecuteUbergraph_esNPC_m061_01::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function esNPC_m061_01.esNPC_m061_01_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934
// 0x0008 (0x0008 - 0x0000)
struct EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934) == 0x000008, "Wrong alignment on EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934");
static_assert(sizeof(EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934) == 0x000008, "Wrong size on EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934");
static_assert(offsetof(EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934, Loaded) == 0x000000, "Member 'EsNPC_m061_01_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD5FFCC934::Loaded' has a wrong offset!");

}

