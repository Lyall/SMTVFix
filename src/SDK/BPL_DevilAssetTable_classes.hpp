#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DevilAssetTable

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_DevilAssetTable.BPL_DevilAssetTable_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_DevilAssetTable_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetDevilAssetClassData(int32 EnemyID, class UObject* __WorldContext, TSoftClassPtr<class UClass>* ClassAssetID, TSoftClassPtr<class UClass>* PlayerBaseAssetID);
	static void GetDevilPostData(int32 EnemyID, class UObject* __WorldContext, struct FST_DevilPostData* PostData);
	static void GetDevilAssetTableInstance(class UObject* __WorldContext, TScriptInterface<class IBPI_DevilAssetTableInstanceAccessor_C>* Instance, bool* IsValid);
	static void FindAssetData(int32 EnemyID, class UObject* __WorldContext, struct FDevilAssetTable_Raw* AssetData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_DevilAssetTable_C">();
	}
	static class UBPL_DevilAssetTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_DevilAssetTable_C>();
	}
};
static_assert(alignof(UBPL_DevilAssetTable_C) == 0x000008, "Wrong alignment on UBPL_DevilAssetTable_C");
static_assert(sizeof(UBPL_DevilAssetTable_C) == 0x000028, "Wrong size on UBPL_DevilAssetTable_C");

}

