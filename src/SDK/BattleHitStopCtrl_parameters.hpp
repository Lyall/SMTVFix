#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleHitStopCtrl

#include "Basic.hpp"

#include "BattleSkillHitStop_T_structs.hpp"


namespace SDK::Params
{

// Function BattleHitStopCtrl.BattleHitStopCtrl_C.ExecuteUbergraph_BattleHitStopCtrl
// 0x0140 (0x0140 - 0x0000)
struct BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4957[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4958[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleAnimationCamera_C*               K2Node_DynamicCast_AsBattle_Animation_Camera;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4959[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleAnimationCamera_C*               K2Node_DynamicCast_AsBattle_Animation_Camera_1;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleCamera_C*                        K2Node_DynamicCast_AsBattle_Camera;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleCamera_C*                        K2Node_DynamicCast_AsBattle_Camera_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495C[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_495D[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         CallFunc_SpawnSound2D_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue_2;              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleAnimationCamera_C*               K2Node_DynamicCast_AsBattle_Animation_Camera_2;    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495E[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABattleCamera_C*                        K2Node_DynamicCast_AsBattle_Camera_2;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_495F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BI_GetBattleCameraFieldOfView_retValue;   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue;           // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_YugamiUpdate_NoUse;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_WhiteOutUpdate_NoUse;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4960[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue_1;         // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_WhiteOutUpdate_NoUse_1;                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_YugamiUpdate_NoUse_1;                  // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_WhiteOutUpdate_NoUse_2;                // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_YugamiUpdate_NoUse_2;                  // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_SetBattleCameraFovy_retValue;          // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4961[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FadeOut_White_ReturnValue;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4962[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleParty_C>    CallFunc_BI_GetPartySystem_ret;                    // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_CharaBaseAccessor_C> CallFunc_BI_GetPartyUnit_retValue;                 // 0x00F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4963[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAtomComponent*                         CallFunc_PlayDevilVoice_ReturnValue;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_SetBattleCameraFovy_retValue_1;        // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4964[0x6];                                     // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattlePostProcessCtrl_C> CallFunc_BI_GetPostProcessCtrl_retValue_2;         // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_RemoveYugami_NoUse;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BI_RemoveWhiteOut_NoUse;                  // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl) == 0x000008, "Wrong alignment on BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl");
static_assert(sizeof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl) == 0x000140, "Wrong size on BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, EntryPoint) == 0x000000, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_Add_FloatFloat_ReturnValue) == 0x000010, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetViewTarget_ReturnValue) == 0x000018, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetPlayerController_ReturnValue_1) == 0x000020, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Animation_Camera) == 0x000028, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Animation_Camera' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetViewTarget_ReturnValue_1) == 0x000038, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetViewTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Animation_Camera_1) == 0x000040, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Animation_Camera_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Camera) == 0x000050, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Camera' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Camera_1) == 0x000060, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Camera_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_3) == 0x000068, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x00006C, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000070, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_SpawnSound2D_ReturnValue) == 0x000078, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetPlayerController_ReturnValue_2) == 0x000080, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_GetViewTarget_ReturnValue_2) == 0x000088, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_GetViewTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Animation_Camera_2) == 0x000090, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Animation_Camera_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_4) == 0x000098, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsBattle_Camera_2) == 0x0000A0, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsBattle_Camera_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_5) == 0x0000A8, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetBattleCameraFieldOfView_retValue) == 0x0000AC, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetBattleCameraFieldOfView_retValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetPostProcessCtrl_retValue) == 0x0000B0, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetPostProcessCtrl_retValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_YugamiUpdate_NoUse) == 0x0000C0, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_YugamiUpdate_NoUse' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_WhiteOutUpdate_NoUse) == 0x0000C1, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_WhiteOutUpdate_NoUse' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetPostProcessCtrl_retValue_1) == 0x0000C8, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetPostProcessCtrl_retValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_WhiteOutUpdate_NoUse_1) == 0x0000D8, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_WhiteOutUpdate_NoUse_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_YugamiUpdate_NoUse_1) == 0x0000D9, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_YugamiUpdate_NoUse_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_WhiteOutUpdate_NoUse_2) == 0x0000DA, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_WhiteOutUpdate_NoUse_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_YugamiUpdate_NoUse_2) == 0x0000DB, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_YugamiUpdate_NoUse_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_SetBattleCameraFovy_retValue) == 0x0000DC, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_SetBattleCameraFovy_retValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000E0, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_FadeOut_White_ReturnValue) == 0x0000E4, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_FadeOut_White_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetPartySystem_ret) == 0x0000E8, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetPartySystem_ret' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetPartyUnit_retValue) == 0x0000F8, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetPartyUnit_retValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_AsActor) == 0x000108, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, K2Node_DynamicCast_bSuccess_6) == 0x000110, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_PlayDevilVoice_ReturnValue) == 0x000118, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_PlayDevilVoice_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BooleanAND_ReturnValue) == 0x000120, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_SetBattleCameraFovy_retValue_1) == 0x000121, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_SetBattleCameraFovy_retValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_GetPostProcessCtrl_retValue_2) == 0x000128, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_GetPostProcessCtrl_retValue_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_RemoveYugami_NoUse) == 0x000138, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_RemoveYugami_NoUse' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl, CallFunc_BI_RemoveWhiteOut_NoUse) == 0x000139, "Member 'BattleHitStopCtrl_C_ExecuteUbergraph_BattleHitStopCtrl::CallFunc_BI_RemoveWhiteOut_NoUse' has a wrong offset!");

// Function BattleHitStopCtrl.BattleHitStopCtrl_C.InitTimeLine
// 0x0110 (0x0110 - 0x0000)
struct BattleHitStopCtrl_C_InitTimeLine final
{
public:
	struct FBattleSkillHitStop_T                  Lo_HitStopParam;                                   // 0x0000(0x0038)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4965[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_1;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_1;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_2;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_2;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_3;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_3;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_4;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_4;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_5;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_5;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_6;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_6;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4966[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_1;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4967[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue_2;                       // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_3;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4968[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue_4;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_5;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4969[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBattleSkillHitStop_T                  K2Node_Select_Default;                             // 0x00A0(0x0038)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleSkillHitStop_T                  K2Node_Select_Default_1;                           // 0x00D8(0x0038)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleHitStopCtrl_C_InitTimeLine) == 0x000008, "Wrong alignment on BattleHitStopCtrl_C_InitTimeLine");
static_assert(sizeof(BattleHitStopCtrl_C_InitTimeLine) == 0x000110, "Wrong size on BattleHitStopCtrl_C_InitTimeLine");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, Lo_HitStopParam) == 0x000000, "Member 'BattleHitStopCtrl_C_InitTimeLine::Lo_HitStopParam' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, Temp_bool_Variable) == 0x000038, "Member 'BattleHitStopCtrl_C_InitTimeLine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime) == 0x00003C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime) == 0x000040, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_1) == 0x000044, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_1) == 0x000048, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_2) == 0x00004C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_2) == 0x000050, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_3) == 0x000054, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_3' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_3) == 0x000058, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_3' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_4) == 0x00005C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_4' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_4) == 0x000060, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_4' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_5) == 0x000064, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_5' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_5) == 0x000068, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_5' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MinTime_6) == 0x00006C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MinTime_6' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_GetTimeRange_MaxTime_6) == 0x000070, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_GetTimeRange_MaxTime_6' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue) == 0x000078, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue_1) == 0x00007C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue_2) == 0x000084, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue_3) == 0x000088, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_3) == 0x00008C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue_4) == 0x000090, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_FMax_ReturnValue_5) == 0x000094, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_FMax_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_4) == 0x000098, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_5) == 0x000099, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsValid_ReturnValue_6) == 0x00009A, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, Temp_bool_Variable_1) == 0x00009B, "Member 'BattleHitStopCtrl_C_InitTimeLine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, CallFunc_IsPlaying_ReturnValue) == 0x00009C, "Member 'BattleHitStopCtrl_C_InitTimeLine::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, K2Node_Select_Default) == 0x0000A0, "Member 'BattleHitStopCtrl_C_InitTimeLine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattleHitStopCtrl_C_InitTimeLine, K2Node_Select_Default_1) == 0x0000D8, "Member 'BattleHitStopCtrl_C_InitTimeLine::K2Node_Select_Default_1' has a wrong offset!");

// Function BattleHitStopCtrl.BattleHitStopCtrl_C.SetOverrideHitStopParam
// 0x0038 (0x0038 - 0x0000)
struct BattleHitStopCtrl_C_SetOverrideHitStopParam final
{
public:
	struct FBattleSkillHitStop_T                  OverrideParam;                                     // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleHitStopCtrl_C_SetOverrideHitStopParam) == 0x000008, "Wrong alignment on BattleHitStopCtrl_C_SetOverrideHitStopParam");
static_assert(sizeof(BattleHitStopCtrl_C_SetOverrideHitStopParam) == 0x000038, "Wrong size on BattleHitStopCtrl_C_SetOverrideHitStopParam");
static_assert(offsetof(BattleHitStopCtrl_C_SetOverrideHitStopParam, OverrideParam) == 0x000000, "Member 'BattleHitStopCtrl_C_SetOverrideHitStopParam::OverrideParam' has a wrong offset!");

}

