#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevilAssetTableInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DevilAssetTableInstance.DevilAssetTableInstance_C
// 0x0060 (0x0280 - 0x0220)
class ADevilAssetTableInstance_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FDevilAssetTable_Raw>      DevilAssetTableRaw;                                // 0x0230(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_DevilAssetTableInstance(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Load_DevilAsset();
	void Get_DevilAssetRaw(int32 DevilAssetID, struct FDevilAssetTable_Raw* AssetData, bool* IsValid);
	void BI_GetDevilAsset(int32 DevilAssetID, struct FDevilAssetTable_Raw* AssetData, bool* IsValid);
	void BI_GetDevilAssetMapValue(TArray<struct FDevilAssetTable_Raw>* Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DevilAssetTableInstance_C">();
	}
	static class ADevilAssetTableInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADevilAssetTableInstance_C>();
	}
};
static_assert(alignof(ADevilAssetTableInstance_C) == 0x000008, "Wrong alignment on ADevilAssetTableInstance_C");
static_assert(sizeof(ADevilAssetTableInstance_C) == 0x000280, "Wrong size on ADevilAssetTableInstance_C");
static_assert(offsetof(ADevilAssetTableInstance_C, UberGraphFrame) == 0x000220, "Member 'ADevilAssetTableInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADevilAssetTableInstance_C, DefaultSceneRoot) == 0x000228, "Member 'ADevilAssetTableInstance_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADevilAssetTableInstance_C, DevilAssetTableRaw) == 0x000230, "Member 'ADevilAssetTableInstance_C::DevilAssetTableRaw' has a wrong offset!");

}
