#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialAnimDecalComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MaterialAnimSetting_T_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MaterialAnimDecalComponent.MaterialAnimDecalComponent_C
// 0x0088 (0x0138 - 0x00B0)
class UMaterialAnimDecalComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      DecalMaterial;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               M_DMI;                                             // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMaterialAnimSetting_T>         MaterialAnimSetting;                               // 0x00D0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FVector                                DecalSize;                                         // 0x00E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                OffsetLocation;                                    // 0x00EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   AttachPointName;                                   // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USceneComponent*                        AttachComponent;                                   // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         M_EndSec;                                          // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_SpendSec;                                        // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverrideLifeSec;                                   // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         M_FailCnt;                                         // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsMortal;                                        // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAttachLocation                               LocationType;                                      // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x011C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          M_IsActivated;                                     // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_PlayRate;                                        // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          M_IsCastOnlyStaticMesh;                            // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MaterialAnimDecalComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Attach_Decal();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void GetMaxTimeRange(float CurrentMax, const struct FMaterialAnimSetting_T& Param_MaterialAnimSetting, float* Max);
	void UpdateDecalMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaterialAnimDecalComponent_C">();
	}
	static class UMaterialAnimDecalComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialAnimDecalComponent_C>();
	}
};
static_assert(alignof(UMaterialAnimDecalComponent_C) == 0x000008, "Wrong alignment on UMaterialAnimDecalComponent_C");
static_assert(sizeof(UMaterialAnimDecalComponent_C) == 0x000138, "Wrong size on UMaterialAnimDecalComponent_C");
static_assert(offsetof(UMaterialAnimDecalComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UMaterialAnimDecalComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, Decal) == 0x0000B8, "Member 'UMaterialAnimDecalComponent_C::Decal' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, DecalMaterial) == 0x0000C0, "Member 'UMaterialAnimDecalComponent_C::DecalMaterial' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_DMI) == 0x0000C8, "Member 'UMaterialAnimDecalComponent_C::M_DMI' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, MaterialAnimSetting) == 0x0000D0, "Member 'UMaterialAnimDecalComponent_C::MaterialAnimSetting' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, DecalSize) == 0x0000E0, "Member 'UMaterialAnimDecalComponent_C::DecalSize' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, OffsetLocation) == 0x0000EC, "Member 'UMaterialAnimDecalComponent_C::OffsetLocation' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, AttachPointName) == 0x0000F8, "Member 'UMaterialAnimDecalComponent_C::AttachPointName' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, AttachComponent) == 0x000100, "Member 'UMaterialAnimDecalComponent_C::AttachComponent' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_EndSec) == 0x000108, "Member 'UMaterialAnimDecalComponent_C::M_EndSec' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_SpendSec) == 0x00010C, "Member 'UMaterialAnimDecalComponent_C::M_SpendSec' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, OverrideLifeSec) == 0x000110, "Member 'UMaterialAnimDecalComponent_C::OverrideLifeSec' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_FailCnt) == 0x000114, "Member 'UMaterialAnimDecalComponent_C::M_FailCnt' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_IsMortal) == 0x000118, "Member 'UMaterialAnimDecalComponent_C::M_IsMortal' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, LocationType) == 0x000119, "Member 'UMaterialAnimDecalComponent_C::LocationType' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, Rotation) == 0x00011C, "Member 'UMaterialAnimDecalComponent_C::Rotation' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_IsActivated) == 0x000128, "Member 'UMaterialAnimDecalComponent_C::M_IsActivated' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_PlayRate) == 0x00012C, "Member 'UMaterialAnimDecalComponent_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimDecalComponent_C, M_IsCastOnlyStaticMesh) == 0x000130, "Member 'UMaterialAnimDecalComponent_C::M_IsCastOnlyStaticMesh' has a wrong offset!");

}

