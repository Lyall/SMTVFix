#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvChange

#include "Basic.hpp"

#include "ST_LightParam_structs.hpp"


namespace SDK::Params
{

// Function BP_EnvChange.BP_EnvChange_C.ExecuteUbergraph_BP_EnvChange
// 0x11A8 (0x11A8 - 0x0000)
struct BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94A7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94A8[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94A9[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance_1;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94AA[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         CallFunc_GetDaathEnvCtrl_Index_LightParam;         // 0x0090(0x0318)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         CallFunc_GetDaathEnvCtrl_Index_LightParam_1;       // 0x03AC(0x0318)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94AB[0x4];                                     // 0x06C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance_2;      // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94AC[0x7];                                     // 0x06D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x06E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3; // 0x06F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0700(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0710(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0720(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94AD[0x4];                                     // 0x0724(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0728(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_3;            // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0740(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94AE[0x7];                                     // 0x0741(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance_3;      // 0x0748(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94AF[0x7];                                     // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn;                      // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common;               // 0x0760(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B0[0x3];                                     // 0x0771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B1[0x7];                                     // 0x0779(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x0790(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94B2[0x4];                                     // 0x0794(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMapCommon_rerutn_1;                    // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         CallFunc_GetDaathEnvCtrl_Index_LightParam_2;       // 0x07A0(0x0318)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common_1;             // 0x0AB8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0AC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B3[0x7];                                     // 0x0AC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_4;            // 0x0AD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetMapCommon_rerutn_2;                    // 0x0AD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance_4;      // 0x0AE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0AE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B4[0x7];                                     // 0x0AE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_MapCommon_C>      K2Node_DynamicCast_AsBPI_Map_Common_2;             // 0x0AF0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0B00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0B01(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B5[0x2];                                     // 0x0B02(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x0B04(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         CallFunc_GetDaathEnvCtrl_Index_LightParam_3;       // 0x0B08(0x0318)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x0E20(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_LightParam                         CallFunc_GetDaathEnvCtrl_Index_LightParam_4;       // 0x0E24(0x0318)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94B6[0x4];                                     // 0x113C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_5;            // 0x1140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstance_C*                 K2Node_DynamicCast_AsProject_Game_Instance_5;      // 0x1148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x1150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94B7[0x7];                                     // 0x1151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4; // 0x1158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_5; // 0x1168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x1198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange) == 0x000008, "Wrong alignment on BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange");
static_assert(sizeof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange) == 0x0011A8, "Wrong size on BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, EntryPoint) == 0x000000, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, Temp_int_Variable) == 0x000010, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance) == 0x000018, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, Temp_int_Variable_1) == 0x000024, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000028, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000038, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue_1) == 0x000078, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance_1) == 0x000080, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00008C, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetDaathEnvCtrl_Index_LightParam) == 0x000090, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetDaathEnvCtrl_Index_LightParam' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x0003A8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetDaathEnvCtrl_Index_LightParam_1) == 0x0003AC, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetDaathEnvCtrl_Index_LightParam_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue_2) == 0x0006C8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance_2) == 0x0006D0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_2) == 0x0006D8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2) == 0x0006E0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3) == 0x0006F0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000700, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000710, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Add_IntInt_ReturnValue) == 0x000720, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000728, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue_3) == 0x000738, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000740, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance_3) == 0x000748, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_3) == 0x000750, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetMapCommon_rerutn) == 0x000758, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetMapCommon_rerutn' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsBPI_Map_Common) == 0x000760, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsBPI_Map_Common' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_4) == 0x000770, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Subtract_IntInt_ReturnValue) == 0x000774, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000778, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_Event_OtherActor_1) == 0x000780, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_Event_OtherActor) == 0x000788, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000790, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetMapCommon_rerutn_1) == 0x000798, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetMapCommon_rerutn_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetDaathEnvCtrl_Index_LightParam_2) == 0x0007A0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetDaathEnvCtrl_Index_LightParam_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsBPI_Map_Common_1) == 0x000AB8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsBPI_Map_Common_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_5) == 0x000AC8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue_4) == 0x000AD0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetMapCommon_rerutn_2) == 0x000AD8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetMapCommon_rerutn_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance_4) == 0x000AE0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_6) == 0x000AE8, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsBPI_Map_Common_2) == 0x000AF0, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsBPI_Map_Common_2' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_7) == 0x000B00, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000B01, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000B04, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetDaathEnvCtrl_Index_LightParam_3) == 0x000B08, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetDaathEnvCtrl_Index_LightParam_3' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x000E20, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetDaathEnvCtrl_Index_LightParam_4) == 0x000E24, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetDaathEnvCtrl_Index_LightParam_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetGameInstance_ReturnValue_5) == 0x001140, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetGameInstance_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_AsProject_Game_Instance_5) == 0x001148, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_AsProject_Game_Instance_5' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, K2Node_DynamicCast_bSuccess_8) == 0x001150, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4) == 0x001158, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_5) == 0x001168, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_6) == 0x001178, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_7) == 0x001188, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange, CallFunc_Concat_StrStr_ReturnValue_8) == 0x001198, "Member 'BP_EnvChange_C_ExecuteUbergraph_BP_EnvChange::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");

// Function BP_EnvChange.BP_EnvChange_C.ReceiveActorEndOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_EnvChange_C_ReceiveActorEndOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnvChange_C_ReceiveActorEndOverlap) == 0x000008, "Wrong alignment on BP_EnvChange_C_ReceiveActorEndOverlap");
static_assert(sizeof(BP_EnvChange_C_ReceiveActorEndOverlap) == 0x000008, "Wrong size on BP_EnvChange_C_ReceiveActorEndOverlap");
static_assert(offsetof(BP_EnvChange_C_ReceiveActorEndOverlap, OtherActor) == 0x000000, "Member 'BP_EnvChange_C_ReceiveActorEndOverlap::OtherActor' has a wrong offset!");

// Function BP_EnvChange.BP_EnvChange_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_EnvChange_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnvChange_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_EnvChange_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_EnvChange_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_EnvChange_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_EnvChange_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_EnvChange_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

}

