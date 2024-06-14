#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadAssetByAssetData

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class LoadAssetByAssetData.AssetDataAsyncLoader
// 0x0000 (0x0028 - 0x0028)
class UAssetDataAsyncLoader final : public UObject
{
public:
	static void LoadAssetData(class UObject* WorldContextObject, const struct FAssetData& AssetData, TDelegate<void(class UObject* Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo);
	static void LoadClassAssetData(class UObject* WorldContextObject, const struct FAssetData& AssetData, TDelegate<void(TSubclassOf<class UObject> Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo);

	void OnAssetDataLoaded__DelegateSignature(class UObject* Loaded);
	void OnAssetClassDataLoaded__DelegateSignature(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AssetDataAsyncLoader">();
	}
	static class UAssetDataAsyncLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetDataAsyncLoader>();
	}
};
static_assert(alignof(UAssetDataAsyncLoader) == 0x000008, "Wrong alignment on UAssetDataAsyncLoader");
static_assert(sizeof(UAssetDataAsyncLoader) == 0x000028, "Wrong size on UAssetDataAsyncLoader");

}

