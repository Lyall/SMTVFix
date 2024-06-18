#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharaChanger_Camp2

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.GetDevilCameraRowName
// 0x00C0 (0x00C0 - 0x0000)
struct BP_CharaChanger_Camp2_C_GetDevilCameraRowName final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_128E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ExtensionPart;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Lo_EnemyId;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_128F[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDevilCameraRowName_ExtensionPart;      // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetDevilAssetClassData_ClassAssetID;      // 0x0030(0x0028)(HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CallFunc_GetDevilAssetClassData_PlayerBaseAssetID; // 0x0058(0x0028)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_SoftClassReferenceToString_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_PathPart;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_FilenamePart;                       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_ExtensionPart;                      // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName) == 0x000008, "Wrong alignment on BP_CharaChanger_Camp2_C_GetDevilCameraRowName");
static_assert(sizeof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName) == 0x0000C0, "Wrong size on BP_CharaChanger_Camp2_C_GetDevilCameraRowName");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, ID) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::ID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, ExtensionPart) == 0x000008, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::ExtensionPart' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, Lo_EnemyId) == 0x000018, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::Lo_EnemyId' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00001D, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00001E, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_GetDevilCameraRowName_ExtensionPart) == 0x000020, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_GetDevilCameraRowName_ExtensionPart' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_GetDevilAssetClassData_ClassAssetID) == 0x000030, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_GetDevilAssetClassData_ClassAssetID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_GetDevilAssetClassData_PlayerBaseAssetID) == 0x000058, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_GetDevilAssetClassData_PlayerBaseAssetID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_Conv_SoftClassReferenceToString_ReturnValue) == 0x000080, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_Conv_SoftClassReferenceToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_Split_PathPart) == 0x000090, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_Split_PathPart' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_Split_FilenamePart) == 0x0000A0, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_Split_FilenamePart' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilCameraRowName, CallFunc_Split_ExtensionPart) == 0x0000B0, "Member 'BP_CharaChanger_Camp2_C_GetDevilCameraRowName::CallFunc_Split_ExtensionPart' has a wrong offset!");

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.SetMotionTable
// 0x0030 (0x0030 - 0x0000)
struct BP_CharaChanger_Camp2_C_SetMotionTable final
{
public:
	class ACharaBase_C*                           CharaBase;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DevilID;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCharaMotionTable*                      CallFunc_LoadMotionTable_return;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionTable*                      CallFunc_LoadMotionTable_return_1;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionTable*                      CallFunc_LoadMotionTable_return_2;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionTable*                      CallFunc_LoadMotionTable_return_3;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharaChanger_Camp2_C_SetMotionTable) == 0x000008, "Wrong alignment on BP_CharaChanger_Camp2_C_SetMotionTable");
static_assert(sizeof(BP_CharaChanger_Camp2_C_SetMotionTable) == 0x000030, "Wrong size on BP_CharaChanger_Camp2_C_SetMotionTable");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CharaBase) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CharaBase' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, DevilID) == 0x000008, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::DevilID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000E, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00000F, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_LoadMotionTable_return) == 0x000010, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_LoadMotionTable_return' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_LoadMotionTable_return_1) == 0x000018, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_LoadMotionTable_return_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_LoadMotionTable_return_2) == 0x000020, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_LoadMotionTable_return_2' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetMotionTable, CallFunc_LoadMotionTable_return_3) == 0x000028, "Member 'BP_CharaChanger_Camp2_C_SetMotionTable::CallFunc_LoadMotionTable_return_3' has a wrong offset!");

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.LoadMotionTable
// 0x0050 (0x0050 - 0x0000)
struct BP_CharaChanger_Camp2_C_LoadMotionTable final
{
public:
	TSoftObjectPtr<class UObject>                 Reference;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
	class UCharaMotionTable*                      AlreadyLoadedTable;                                // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionTable*                      Return;                                            // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadObjectBlocking_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaMotionTable*                      K2Node_DynamicCast_AsChara_Motion_Table;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharaChanger_Camp2_C_LoadMotionTable) == 0x000008, "Wrong alignment on BP_CharaChanger_Camp2_C_LoadMotionTable");
static_assert(sizeof(BP_CharaChanger_Camp2_C_LoadMotionTable) == 0x000050, "Wrong size on BP_CharaChanger_Camp2_C_LoadMotionTable");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, Reference) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::Reference' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, AlreadyLoadedTable) == 0x000028, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::AlreadyLoadedTable' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, Return) == 0x000030, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::Return' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, CallFunc_LoadObjectBlocking_ReturnValue) == 0x000038, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::CallFunc_LoadObjectBlocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, K2Node_DynamicCast_AsChara_Motion_Table) == 0x000040, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::K2Node_DynamicCast_AsChara_Motion_Table' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_LoadMotionTable, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_CharaChanger_Camp2_C_LoadMotionTable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.GetDevilIDForAsset
// 0x0078 (0x0078 - 0x0000)
struct BP_CharaChanger_Camp2_C_GetDevilIDForAsset final
{
public:
	int32                                         InDevilId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutDevilId;                                        // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_DevilIDForAsset;                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1290[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1291[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1292[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetDevilIDForAsset_OutDevilID;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset) == 0x000008, "Wrong alignment on BP_CharaChanger_Camp2_C_GetDevilIDForAsset");
static_assert(sizeof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset) == 0x000078, "Wrong size on BP_CharaChanger_Camp2_C_GetDevilIDForAsset");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, InDevilId) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::InDevilId' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, OutDevilId) == 0x000004, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::OutDevilId' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, Lo_DevilIDForAsset) == 0x000008, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::Lo_DevilIDForAsset' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000E, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_BooleanOR_ReturnValue) == 0x000020, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_BooleanOR_ReturnValue_1) == 0x000038, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000050, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000051, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000052, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000053, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_GetDevilIDForAsset_OutDevilID) == 0x000054, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_GetDevilIDForAsset_OutDevilID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000058, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_GetDevilIDForAsset, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'BP_CharaChanger_Camp2_C_GetDevilIDForAsset::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.SetDevilMaterial
// 0x0038 (0x0038 - 0x0000)
struct BP_CharaChanger_Camp2_C_SetDevilMaterial final
{
public:
	class ACharaBase_C*                           CharaBase;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DevilID;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1293[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1294[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0028(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_CharaChanger_Camp2_C_SetDevilMaterial) == 0x000008, "Wrong alignment on BP_CharaChanger_Camp2_C_SetDevilMaterial");
static_assert(sizeof(BP_CharaChanger_Camp2_C_SetDevilMaterial) == 0x000038, "Wrong size on BP_CharaChanger_Camp2_C_SetDevilMaterial");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetDevilMaterial, CharaBase) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_SetDevilMaterial::CharaBase' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetDevilMaterial, DevilID) == 0x000008, "Member 'BP_CharaChanger_Camp2_C_SetDevilMaterial::DevilID' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetDevilMaterial, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_CharaChanger_Camp2_C_SetDevilMaterial::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetDevilMaterial, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'BP_CharaChanger_Camp2_C_SetDevilMaterial::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_SetDevilMaterial, K2Node_MakeArray_Array_1) == 0x000028, "Member 'BP_CharaChanger_Camp2_C_SetDevilMaterial::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function BP_CharaChanger_Camp2.BP_CharaChanger_Camp2_C.UserConstructionScript
// 0x05D0 (0x05D0 - 0x0000)
struct BP_CharaChanger_Camp2_C_UserConstructionScript final
{
public:
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0000(0x0010)(NoDestructor)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable_1;             // 0x0010(0x0010)(NoDestructor)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable_2;             // 0x0020(0x0010)(NoDestructor)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable_3;             // 0x0030(0x0010)(NoDestructor)
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsOriginalMovieResolution_ReturnValue;    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1295[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0058(0x0010)()
	uint8                                         Pad_1296[0x8];                                     // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0070(0x0560)()
};
static_assert(alignof(BP_CharaChanger_Camp2_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_CharaChanger_Camp2_C_UserConstructionScript");
static_assert(sizeof(BP_CharaChanger_Camp2_C_UserConstructionScript) == 0x0005D0, "Wrong size on BP_CharaChanger_Camp2_C_UserConstructionScript");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendable) == 0x000000, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendable_1) == 0x000010, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendable_1' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendable_2) == 0x000020, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendable_2' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendable_3) == 0x000030, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendable_3' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000040, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, CallFunc_IsOriginalMovieResolution_ReturnValue) == 0x000050, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::CallFunc_IsOriginalMovieResolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_WeightedBlendables) == 0x000058, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(BP_CharaChanger_Camp2_C_UserConstructionScript, K2Node_MakeStruct_PostProcessSettings) == 0x000070, "Member 'BP_CharaChanger_Camp2_C_UserConstructionScript::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}

