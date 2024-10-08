#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_BattleBGM

#include "Basic.hpp"

#include "BattleBGM_T_structs.hpp"
#include "Project_structs.hpp"
#include "BattleBGMType_structs.hpp"


namespace SDK::Params
{

// Function BPL_BattleBGM.BPL_BattleBGM_C.GetBattleBGMID
// 0x00D0 (0x00D0 - 0x0000)
struct BPL_BattleBGM_C_GetBattleBGMID final
{
public:
	int32                                         EncountID;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEvent;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BGM_ID;                                            // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPrimeMinisterNahobino_ReturnValue;   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPrimeMinisterNahobino_ReturnValue_1; // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOneEncountData                        CallFunc_GetEncountData_ReturnValue;               // 0x0018(0x0040)(ConstParm)
	struct FEventEncountData                      CallFunc_GetEvtEncountData_ReturnValue;            // 0x0058(0x0068)(ConstParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_BattleBGM_C_GetBattleBGMID) == 0x000008, "Wrong alignment on BPL_BattleBGM_C_GetBattleBGMID");
static_assert(sizeof(BPL_BattleBGM_C_GetBattleBGMID) == 0x0000D0, "Wrong size on BPL_BattleBGM_C_GetBattleBGMID");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, EncountID) == 0x000000, "Member 'BPL_BattleBGM_C_GetBattleBGMID::EncountID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, IsEvent) == 0x000004, "Member 'BPL_BattleBGM_C_GetBattleBGMID::IsEvent' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, __WorldContext) == 0x000008, "Member 'BPL_BattleBGM_C_GetBattleBGMID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, BGM_ID) == 0x000010, "Member 'BPL_BattleBGM_C_GetBattleBGMID::BGM_ID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_CheckPrimeMinisterNahobino_ReturnValue) == 0x000014, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_CheckPrimeMinisterNahobino_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_CheckPrimeMinisterNahobino_ReturnValue_1) == 0x000015, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_CheckPrimeMinisterNahobino_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_GetEncountData_ReturnValue) == 0x000018, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_GetEncountData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_GetEvtEncountData_ReturnValue) == 0x000058, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_GetEvtEncountData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C0, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000C1, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_BooleanAND_ReturnValue) == 0x0000C2, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C3, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_SelectInt_ReturnValue) == 0x0000C4, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGMID, CallFunc_SelectInt_ReturnValue_1) == 0x0000C8, "Member 'BPL_BattleBGM_C_GetBattleBGMID::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");

// Function BPL_BattleBGM.BPL_BattleBGM_C.ChoiceBattleBGM
// 0x0038 (0x0038 - 0x0000)
struct BPL_BattleBGM_C_ChoiceBattleBGM final
{
public:
	int32                                         BGMID;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBattleBGMType                                BGM_Type;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          Out;                                               // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Lo_BgmID;                                          // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckEventFlag_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAtomCue*                          CallFunc_GetBattleBGM_Out;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleBGM_Valid;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPrimeMinisterNahobino_ReturnValue;   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_BattleBGM_C_ChoiceBattleBGM) == 0x000008, "Wrong alignment on BPL_BattleBGM_C_ChoiceBattleBGM");
static_assert(sizeof(BPL_BattleBGM_C_ChoiceBattleBGM) == 0x000038, "Wrong size on BPL_BattleBGM_C_ChoiceBattleBGM");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, BGMID) == 0x000000, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::BGMID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, BGM_Type) == 0x000004, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::BGM_Type' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, __WorldContext) == 0x000008, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, Out) == 0x000010, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::Out' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, Valid) == 0x000018, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::Valid' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, Lo_BgmID) == 0x00001C, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::Lo_BgmID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, CallFunc_CheckEventFlag_ReturnValue) == 0x000020, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::CallFunc_CheckEventFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, CallFunc_GetBattleBGM_Out) == 0x000028, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::CallFunc_GetBattleBGM_Out' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, CallFunc_GetBattleBGM_Valid) == 0x000030, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::CallFunc_GetBattleBGM_Valid' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, CallFunc_CheckPrimeMinisterNahobino_ReturnValue) == 0x000031, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::CallFunc_CheckPrimeMinisterNahobino_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_ChoiceBattleBGM, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000032, "Member 'BPL_BattleBGM_C_ChoiceBattleBGM::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BPL_BattleBGM.BPL_BattleBGM_C.GetBattleBGM
// 0x00B8 (0x00B8 - 0x0000)
struct BPL_BattleBGM_C_GetBattleBGM final
{
public:
	int32                                         BGM_ID;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBattleBGMType                                BGM_Type;                                          // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          Out;                                               // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UProjectSoundManager*                   CallFunc_Get_ReturnValue;                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAtomCue*                          CallFunc_GetCurrentBGM_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0038(0x0010)(ReferenceParm)
	struct FBattleBGM_T                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAtomCue*                          CallFunc_Map_Find_Value;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_BattleBGM_C_GetBattleBGM) == 0x000008, "Wrong alignment on BPL_BattleBGM_C_GetBattleBGM");
static_assert(sizeof(BPL_BattleBGM_C_GetBattleBGM) == 0x0000B8, "Wrong size on BPL_BattleBGM_C_GetBattleBGM");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, BGM_ID) == 0x000000, "Member 'BPL_BattleBGM_C_GetBattleBGM::BGM_ID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, BGM_Type) == 0x000004, "Member 'BPL_BattleBGM_C_GetBattleBGM::BGM_Type' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, __WorldContext) == 0x000008, "Member 'BPL_BattleBGM_C_GetBattleBGM::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, Out) == 0x000010, "Member 'BPL_BattleBGM_C_GetBattleBGM::Out' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, Valid) == 0x000018, "Member 'BPL_BattleBGM_C_GetBattleBGM::Valid' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_Get_ReturnValue) == 0x000020, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_GetCurrentBGM_ReturnValue) == 0x000030, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_GetCurrentBGM_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000038, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A0, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_Map_Find_ReturnValue) == 0x0000B0, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_GetBattleBGM, CallFunc_BooleanAND_ReturnValue) == 0x0000B2, "Member 'BPL_BattleBGM_C_GetBattleBGM::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BPL_BattleBGM.BPL_BattleBGM_C.IsDungeonBattleBGM
// 0x0088 (0x0088 - 0x0000)
struct BPL_BattleBGM_C_IsDungeonBattleBGM final
{
public:
	int32                                         BGM_ID;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForDungeon;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0018(0x0010)(ReferenceParm)
	struct FBattleBGM_T                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0028(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_BattleBGM_C_IsDungeonBattleBGM) == 0x000008, "Wrong alignment on BPL_BattleBGM_C_IsDungeonBattleBGM");
static_assert(sizeof(BPL_BattleBGM_C_IsDungeonBattleBGM) == 0x000088, "Wrong size on BPL_BattleBGM_C_IsDungeonBattleBGM");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, BGM_ID) == 0x000000, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::BGM_ID' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, __WorldContext) == 0x000008, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, ForDungeon) == 0x000010, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::ForDungeon' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000018, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, CallFunc_GetDataTableRowFromName_OutRow) == 0x000028, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_BattleBGM_C_IsDungeonBattleBGM, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'BPL_BattleBGM_C_IsDungeonBattleBGM::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

