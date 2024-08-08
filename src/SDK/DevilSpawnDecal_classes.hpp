#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DevilSpawnDecal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MaterialAnimSetting_T_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DevilSpawnDecal.DevilSpawnDecal_C
// 0x0050 (0x0278 - 0x0228)
class ADevilSpawnDecal_C final : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         M_SpendSec;                                        // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsActivated;                                     // 0x0234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               M_DMI;                                             // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMaterialAnimSetting_T>         MaterialAnimSettings;                              // 0x0240(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         M_TimeRange;                                       // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      M_DecalMaterial;                                   // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                M_InitialDecalSize;                                // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         M_PlayRate;                                        // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_CastOnlyStaticMesh;                              // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_DevilSpawnDecal(int32 EntryPoint);
	void StartDecalAnim(float PlayRate);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void GetMaxTimeRange(const struct FMaterialAnimSetting_T& Param, float* MaxRange);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DevilSpawnDecal_C">();
	}
	static class ADevilSpawnDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADevilSpawnDecal_C>();
	}
};
static_assert(alignof(ADevilSpawnDecal_C) == 0x000008, "Wrong alignment on ADevilSpawnDecal_C");
static_assert(sizeof(ADevilSpawnDecal_C) == 0x000278, "Wrong size on ADevilSpawnDecal_C");
static_assert(offsetof(ADevilSpawnDecal_C, UberGraphFrame) == 0x000228, "Member 'ADevilSpawnDecal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_SpendSec) == 0x000230, "Member 'ADevilSpawnDecal_C::M_SpendSec' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_IsActivated) == 0x000234, "Member 'ADevilSpawnDecal_C::M_IsActivated' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_DMI) == 0x000238, "Member 'ADevilSpawnDecal_C::M_DMI' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, MaterialAnimSettings) == 0x000240, "Member 'ADevilSpawnDecal_C::MaterialAnimSettings' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_TimeRange) == 0x000250, "Member 'ADevilSpawnDecal_C::M_TimeRange' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_DecalMaterial) == 0x000258, "Member 'ADevilSpawnDecal_C::M_DecalMaterial' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_InitialDecalSize) == 0x000260, "Member 'ADevilSpawnDecal_C::M_InitialDecalSize' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_PlayRate) == 0x00026C, "Member 'ADevilSpawnDecal_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(ADevilSpawnDecal_C, M_CastOnlyStaticMesh) == 0x000270, "Member 'ADevilSpawnDecal_C::M_CastOnlyStaticMesh' has a wrong offset!");

}

