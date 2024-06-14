#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DevilAssetTableInstanceAccessor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DevilAssetTableInstanceAccessor.BPI_DevilAssetTableInstanceAccessor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DevilAssetTableInstanceAccessor_C final : public IInterface
{
public:
	void BI_GetDevilAsset(int32 DevilAssetID, struct FDevilAssetTable_Raw* AssetData, bool* IsValid);
	void BI_GetDevilAssetMapValue(TArray<struct FDevilAssetTable_Raw>* Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DevilAssetTableInstanceAccessor_C">();
	}
	static class IBPI_DevilAssetTableInstanceAccessor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DevilAssetTableInstanceAccessor_C>();
	}
};
static_assert(alignof(IBPI_DevilAssetTableInstanceAccessor_C) == 0x000008, "Wrong alignment on IBPI_DevilAssetTableInstanceAccessor_C");
static_assert(sizeof(IBPI_DevilAssetTableInstanceAccessor_C) == 0x000028, "Wrong size on IBPI_DevilAssetTableInstanceAccessor_C");

}
