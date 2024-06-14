#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OOMAGATOKI

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OOMAGATOKI.OOMAGATOKI_C.ExecuteUbergraph_OOMAGATOKI
// 0x0268 (0x0268 - 0x0000)
struct OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Step)>                   K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_Step;                           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BIGetPartySystem_retValue;                // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_UnitSetVisibilitySideAll_retValue;     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_UnitSetVisibilitySideAll_retValue_1;   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_BeHomeSideAll_NoUse;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Com_CallSkillPerformance_ComIndex;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Com_WaitTime_ComIndex;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291A[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BIGetMainWork_NewParam;                   // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Com_CallSkillPerformance_ComIndex_1;      // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue;           // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Com_WaitTime_ComIndex_1;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_OomagatokiUpdate_NoUse;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291C[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BIGetMainWork_NewParam_1;                 // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue_1;         // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_OomagatokiUpdate_NoUse_1;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291D[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Com_CallSkillPerformance_ComIndex_2;      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleTaskFactory_C> CallFunc_BIGetTaskFactory_retValue;                // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_BI_MakeUpliftingTask_Ret;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291E[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BIGetPartySystem_retValue_1;              // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> CallFunc_BI_GetHeroUnit_retValue;                  // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattleTaskFactory_C> CallFunc_BIGetTaskFactory_retValue_1;              // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_SetDefaultIdleMotion_NoUse;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291F[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_MakeArray_Array_1;                          // 0x0100(0x0010)(ReferenceParm)
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BIGetPartySystem_retValue_2;              // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetObjectName_ReturnValue_1;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_BI_GetHeroIndex_index;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2920[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_BAD_STATUS>                          K2Node_MakeArray_Array_2;                          // 0x0138(0x0010)(ReferenceParm)
	bool                                          CallFunc_BI_CheckBadStatus_retValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2921[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Com_MemberMotion_Com_Index;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayRate_PlayRate;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2922[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleMain_C>     CallFunc_BIGetMainWork_NewParam_2;                 // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue_2;         // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_OomagatokiUpdate_NoUse_2;              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2923[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleTaskFactory_C> CallFunc_BIGetTaskFactory_retValue_2;              // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int32>                                 K2Node_MakeArray_Array_3;                          // 0x0190(0x0010)(ReferenceParm)
	TScriptInterface<class IBPI_BattleTaskFactory_C> CallFunc_BIGetTaskFactory_retValue_3;              // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetObjectName_ReturnValue_2;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_BI_AddBlankExistTask_retValue;            // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BI_DestroyTaskForPecID_isSuccess;         // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2924[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActorPartyIndex_index;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHeroIndex_Index;                       // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BIGetPartySystem_retValue_3;              // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int32>                                 CallFunc_BI_GetSideIsTargetList_List;              // 0x01E0(0x0010)(ReferenceParm)
	class UProjectSoundManager*                   CallFunc_Get_ReturnValue;                          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2925[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Com_SetCamActorRelative_ComIndex;         // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2926[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectSoundManager*                   CallFunc_Get_ReturnValue_1;                        // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHeroIndex_Index_1;                     // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetHeroIndex_Index_2;                     // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2927[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Pla603_C>         K2Node_DynamicCast_AsBPI_Pla_603;                  // 0x0238(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2928[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Com_PlaySound2D_ComIndex;                 // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Com_PlaySound2D_ComIndex_1;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Com_MessageShowSkillName_ComIndex;        // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayRate_PlayRate_1;                   // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BI_AddSetUnitMotion_retValue;             // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI) == 0x000008, "Wrong alignment on OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI");
static_assert(sizeof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI) == 0x000268, "Wrong size on OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, EntryPoint) == 0x000000, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::EntryPoint' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_CustomEvent_Step) == 0x000014, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_CustomEvent_Step' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetPartySystem_retValue) == 0x000018, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetPartySystem_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_SwitchInteger_CmpSuccess) == 0x000028, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_UnitSetVisibilitySideAll_retValue) == 0x000029, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_UnitSetVisibilitySideAll_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_UnitSetVisibilitySideAll_retValue_1) == 0x00002A, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_UnitSetVisibilitySideAll_retValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_BeHomeSideAll_NoUse) == 0x00002B, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_BeHomeSideAll_NoUse' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_CallSkillPerformance_ComIndex) == 0x00002C, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_CallSkillPerformance_ComIndex' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_WaitTime_ComIndex) == 0x000030, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_WaitTime_ComIndex' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetMainWork_NewParam) == 0x000038, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetMainWork_NewParam' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_CallSkillPerformance_ComIndex_1) == 0x000048, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_CallSkillPerformance_ComIndex_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetPostProcessCtrl_retValue) == 0x000050, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetPostProcessCtrl_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_WaitTime_ComIndex_1) == 0x000060, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_WaitTime_ComIndex_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_OomagatokiUpdate_NoUse) == 0x000064, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_OomagatokiUpdate_NoUse' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetMainWork_NewParam_1) == 0x000068, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetMainWork_NewParam_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetPostProcessCtrl_retValue_1) == 0x000078, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetPostProcessCtrl_retValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_OomagatokiUpdate_NoUse_1) == 0x000088, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_OomagatokiUpdate_NoUse_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_CallSkillPerformance_ComIndex_2) == 0x00008C, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_CallSkillPerformance_ComIndex_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetTaskFactory_retValue) == 0x000090, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetTaskFactory_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_MakeArray_Array) == 0x0000A0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetObjectName_ReturnValue) == 0x0000B0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_MakeUpliftingTask_Ret) == 0x0000C0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_MakeUpliftingTask_Ret' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_Event_EndPlayReason) == 0x0000C4, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetPartySystem_retValue_1) == 0x0000C8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetPartySystem_retValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetHeroUnit_retValue) == 0x0000D8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetHeroUnit_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetTaskFactory_retValue_1) == 0x0000E8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetTaskFactory_retValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_SetDefaultIdleMotion_NoUse) == 0x0000F8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_SetDefaultIdleMotion_NoUse' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_MakeArray_Array_1) == 0x000100, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetPartySystem_retValue_2) == 0x000110, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetPartySystem_retValue_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetObjectName_ReturnValue_1) == 0x000120, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetObjectName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetHeroIndex_index) == 0x000130, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetHeroIndex_index' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_MakeArray_Array_2) == 0x000138, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_CheckBadStatus_retValue) == 0x000148, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_CheckBadStatus_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_MemberMotion_Com_Index) == 0x00014C, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_MemberMotion_Com_Index' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetPlayRate_PlayRate) == 0x000150, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetPlayRate_PlayRate' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetMainWork_NewParam_2) == 0x000158, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetMainWork_NewParam_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetPostProcessCtrl_retValue_2) == 0x000168, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetPostProcessCtrl_retValue_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_OomagatokiUpdate_NoUse_2) == 0x000178, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_OomagatokiUpdate_NoUse_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetTaskFactory_retValue_2) == 0x000180, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetTaskFactory_retValue_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_MakeArray_Array_3) == 0x000190, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetTaskFactory_retValue_3) == 0x0001A0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetTaskFactory_retValue_3' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetObjectName_ReturnValue_2) == 0x0001B0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetObjectName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_AddBlankExistTask_retValue) == 0x0001C0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_AddBlankExistTask_retValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_DestroyTaskForPecID_isSuccess) == 0x0001C4, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_DestroyTaskForPecID_isSuccess' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetActorPartyIndex_index) == 0x0001C8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetActorPartyIndex_index' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetHeroIndex_Index) == 0x0001CC, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetHeroIndex_Index' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BIGetPartySystem_retValue_3) == 0x0001D0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BIGetPartySystem_retValue_3' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_GetSideIsTargetList_List) == 0x0001E0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_GetSideIsTargetList_List' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Get_ReturnValue) == 0x0001F0, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Array_Length_ReturnValue) == 0x0001F8, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Greater_IntInt_ReturnValue) == 0x0001FC, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_SelectString_ReturnValue) == 0x000200, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_SetCamActorRelative_ComIndex) == 0x000210, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_SetCamActorRelative_ComIndex' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Get_ReturnValue_1) == 0x000218, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetHeroIndex_Index_1) == 0x000220, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetHeroIndex_Index_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetHeroIndex_Index_2) == 0x000224, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetHeroIndex_Index_2' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000228, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000229, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetPlayerPawn_ReturnValue) == 0x000230, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_DynamicCast_AsBPI_Pla_603) == 0x000238, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_DynamicCast_AsBPI_Pla_603' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, K2Node_DynamicCast_bSuccess) == 0x000248, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_PlaySound2D_ComIndex) == 0x00024C, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_PlaySound2D_ComIndex' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_PlaySound2D_ComIndex_1) == 0x000250, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_PlaySound2D_ComIndex_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Com_MessageShowSkillName_ComIndex) == 0x000254, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Com_MessageShowSkillName_ComIndex' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_GetPlayRate_PlayRate_1) == 0x000258, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_GetPlayRate_PlayRate_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00025C, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000260, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI, CallFunc_BI_AddSetUnitMotion_retValue) == 0x000264, "Member 'OOMAGATOKI_C_ExecuteUbergraph_OOMAGATOKI::CallFunc_BI_AddSetUnitMotion_retValue' has a wrong offset!");

// Function OOMAGATOKI.OOMAGATOKI_C.Performance
// 0x0004 (0x0004 - 0x0000)
struct OOMAGATOKI_C_Performance final
{
public:
	int32                                         Step;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OOMAGATOKI_C_Performance) == 0x000004, "Wrong alignment on OOMAGATOKI_C_Performance");
static_assert(sizeof(OOMAGATOKI_C_Performance) == 0x000004, "Wrong size on OOMAGATOKI_C_Performance");
static_assert(offsetof(OOMAGATOKI_C_Performance, Step) == 0x000000, "Member 'OOMAGATOKI_C_Performance::Step' has a wrong offset!");

// Function OOMAGATOKI.OOMAGATOKI_C.RecoverFading
// 0x0005 (0x0005 - 0x0000)
struct OOMAGATOKI_C_RecoverFading final
{
public:
	E_UI_FADE_STATE                               CallFunc_GetFadeState_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FadeIn_BeforeColor_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OOMAGATOKI_C_RecoverFading) == 0x000001, "Wrong alignment on OOMAGATOKI_C_RecoverFading");
static_assert(sizeof(OOMAGATOKI_C_RecoverFading) == 0x000005, "Wrong size on OOMAGATOKI_C_RecoverFading");
static_assert(offsetof(OOMAGATOKI_C_RecoverFading, CallFunc_GetFadeState_ReturnValue) == 0x000000, "Member 'OOMAGATOKI_C_RecoverFading::CallFunc_GetFadeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_RecoverFading, CallFunc_FadeIn_BeforeColor_ReturnValue) == 0x000001, "Member 'OOMAGATOKI_C_RecoverFading::CallFunc_FadeIn_BeforeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_RecoverFading, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'OOMAGATOKI_C_RecoverFading::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_RecoverFading, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'OOMAGATOKI_C_RecoverFading::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OOMAGATOKI_C_RecoverFading, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'OOMAGATOKI_C_RecoverFading::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function OOMAGATOKI.OOMAGATOKI_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct OOMAGATOKI_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OOMAGATOKI_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on OOMAGATOKI_C_ReceiveEndPlay");
static_assert(sizeof(OOMAGATOKI_C_ReceiveEndPlay) == 0x000001, "Wrong size on OOMAGATOKI_C_ReceiveEndPlay");
static_assert(offsetof(OOMAGATOKI_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'OOMAGATOKI_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}

