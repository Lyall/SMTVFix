#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DevilDMAssetTable

#include "Basic.hpp"

#include "Project_structs.hpp"


namespace SDK::Params
{

// Function BPL_DevilDMAssetTable.BPL_DevilDMAssetTable_C.GetDevilDMAssetID
// 0x01B8 (0x01B8 - 0x0000)
struct BPL_DevilDMAssetTable_C_GetDevilDMAssetID final
{
public:
	int32                                         DevilID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UDestructibleMesh>       DM;                                                // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDestructibleMesh>       Lo_DMAsset;                                        // 0x0040(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Lo_DevilID;                                        // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C> CallFunc_GetDevilAssetTableInstance_Instance;      // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDevilAssetTableInstance_isValid;       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UDestructibleMesh>       CallFunc_FindMDAsset_AssetData;                    // 0x0088(0x0028)(HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   CallFunc_BI_GetDevilAsset_AssetData;               // 0x00B0(0x00B0)()
	bool                                          CallFunc_BI_GetDevilAsset_IsValid;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CopySoftObjRef_ReturnValue;               // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjRef_ReturnValue;            // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_LeftPad_ReturnValue;                      // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID) == 0x000008, "Wrong alignment on BPL_DevilDMAssetTable_C_GetDevilDMAssetID");
static_assert(sizeof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID) == 0x0001B8, "Wrong size on BPL_DevilDMAssetTable_C_GetDevilDMAssetID");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, DevilID) == 0x000000, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::DevilID' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, __WorldContext) == 0x000008, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, DM) == 0x000010, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::DM' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, IsValid) == 0x000038, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::IsValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, Lo_DMAsset) == 0x000040, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::Lo_DMAsset' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, Lo_DevilID) == 0x000068, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::Lo_DevilID' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_GetDevilAssetTableInstance_Instance) == 0x000070, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_GetDevilAssetTableInstance_Instance' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_GetDevilAssetTableInstance_isValid) == 0x000080, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_GetDevilAssetTableInstance_isValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_FindMDAsset_AssetData) == 0x000088, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_FindMDAsset_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_BI_GetDevilAsset_AssetData) == 0x0000B0, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_BI_GetDevilAsset_AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_BI_GetDevilAsset_IsValid) == 0x000160, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_BI_GetDevilAsset_IsValid' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000161, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_CopySoftObjRef_ReturnValue) == 0x000162, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_CopySoftObjRef_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_IsValidSoftObjRef_ReturnValue) == 0x000163, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_IsValidSoftObjRef_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_Conv_IntToString_ReturnValue) == 0x000168, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_LeftPad_ReturnValue) == 0x000178, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_LeftPad_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_Replace_ReturnValue) == 0x000188, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_Concat_StrStr_ReturnValue) == 0x000198, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_GetDevilDMAssetID, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001A8, "Member 'BPL_DevilDMAssetTable_C_GetDevilDMAssetID::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BPL_DevilDMAssetTable.BPL_DevilDMAssetTable_C.FindMDAsset
// 0x0138 (0x0138 - 0x0000)
struct BPL_DevilDMAssetTable_C_FindMDAsset final
{
public:
	int32                                         EnemyID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UDestructibleMesh>       AssetData;                                         // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UDestructibleMesh>       DMAsset;                                           // 0x0038(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0068(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDevilAssetTable_Raw                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0080(0x00B0)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CopySoftObjRef_ReturnValue;               // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_DevilDMAssetTable_C_FindMDAsset) == 0x000008, "Wrong alignment on BPL_DevilDMAssetTable_C_FindMDAsset");
static_assert(sizeof(BPL_DevilDMAssetTable_C_FindMDAsset) == 0x000138, "Wrong size on BPL_DevilDMAssetTable_C_FindMDAsset");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, EnemyID) == 0x000000, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::EnemyID' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, __WorldContext) == 0x000008, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, AssetData) == 0x000010, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::AssetData' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, DMAsset) == 0x000038, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::DMAsset' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000068, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_Array_Get_Item) == 0x000078, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_GetDataTableRowFromName_OutRow) == 0x000080, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000130, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_DevilDMAssetTable_C_FindMDAsset, CallFunc_CopySoftObjRef_ReturnValue) == 0x000131, "Member 'BPL_DevilDMAssetTable_C_FindMDAsset::CallFunc_CopySoftObjRef_ReturnValue' has a wrong offset!");

}

