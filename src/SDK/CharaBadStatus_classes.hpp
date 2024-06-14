#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaBadStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "CharaBadStatusBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaBadStatus.CharaBadStatus_C
// 0x0228 (0x0310 - 0x00E8)
class UCharaBadStatus_C final : public UCharaBadStatusBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CharaBadStatus_C;                   // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         CurrentBadStatus;                                  // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_272E[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_BAD_STATUS>                          CurrentBadStatus_A;                                // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          CurrentBadStatus_B;                                // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          CurrentBadStatus_C;                                // 0x0118(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          CurrentBadStatus_D;                                // 0x0128(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          AddedBadStatus_A;                                  // 0x0138(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          RemovedBadStatus_A;                                // 0x0148(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          AddedBadStatus_B;                                  // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          RemovedBadStatus_B;                                // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          AddedBadStatus_C;                                  // 0x0178(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          RemovedBadStatus_C;                                // 0x0188(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          AddedBadStatus_D;                                  // 0x0198(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          RemovedBadStatus_D;                                // 0x01A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BeforeBadStatus;                                   // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_272F[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_BAD_STATUS>                          BeforeSurfaceBadStatus;                            // 0x01C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*               TypeA;                                             // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeB;                                             // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeC;                                             // 0x01E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeD;                                             // 0x01E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdjustScale;                                       // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TypeA_Dulation;                                    // 0x01F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TypeA_Spend;                                       // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TypeA_Index;                                       // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BAD_STATUS                                  TypeA_State;                                       // 0x0200(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2730[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Instant;                                           // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNeedResetMaterial;                               // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2731[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OffBadStatus;                                      // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<E_BAD_STATUS>                          TypeB_State;                                       // 0x0218(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<E_BAD_STATUS>                          TypeC_State;                                       // 0x0228(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDecalComponent*                        TypeD_Decal;                                       // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNoCureEffect;                                    // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLacerationDamage;                                // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_BAD_STATUS                                  TypeD_State;                                       // 0x0242(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2732[0x5];                                     // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               TypeA2;                                            // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeA_Before;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeA_Current;                                     // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChangeBadStatus;                                 // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2733[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      DecalMaterial;                                     // 0x0268(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<E_BAD_STATUS, class UParticleSystemComponent*> TypeB_PSs;                                         // 0x0290(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UParticleSystemComponent*               TypeB2;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeB3;                                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TypeB4;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        InstantDecal;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialized;                                     // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2734[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               TypeB5;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CharaBadStatus(int32 EntryPoint);
	void ResetBadStatusScale();
	void OnInstantParticleFinished(class UParticleSystemComponent* PSystem);
	void SetBadParticle_TypeB_DARKNESS(TSoftObjectPtr<class UParticleSystem> Asset);
	void ResetEffect();
	void SpawnDecal_Instant(const struct FBadStatusDecal_T& DecalData);
	void SetBadParticle_TypeB_MUD(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle_TypeB_SHOCK(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle_TypeB_BURN(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle_TypeB_STAN(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetCharaBaseAccessor(TScriptInterface<class IBPI_CharaBaseAccessor_C> Accessor);
	void SpawnDecal(const struct FBadStatusDecal_T& DecalSetting);
	void ReceiveBeginPlay();
	void PlayBadStatusSound(TSoftObjectPtr<class USoundAtomCue> Sound, const struct FVector& Location);
	void Initialize();
	void ReceiveTick(float DeltaSeconds);
	void SetBadParticle_Instant(TSoftObjectPtr<class UParticleSystem> Asset);
	void UpdateBadStatusParticle();
	void SetBadParticle_TypeD(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle(const class UParticleSystemComponent*& PSComp, TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle_TypeC(TSoftObjectPtr<class UParticleSystem> Asset);
	void SetBadParticle_TypeB(TSoftObjectPtr<class UParticleSystem> Asset, E_BAD_STATUS BadStatus);
	void SetBadParticle_TypeA(TSoftObjectPtr<class UParticleSystem> Asset);
	void OnLoaded_17CADA884A2180FB92BEC19804AFBD3A(class UObject* Loaded);
	void OnLoaded_AE7783DA4CD2C45175384C836E74C048(class UObject* Loaded);
	void OnLoaded_7A5D1D754EC45DD51350A6B17FB863A6(class UObject* Loaded);
	void OnLoaded_ABCDB69641ACB22C071415A6671BEE5B(class UObject* Loaded);
	void OnLoaded_E49EE1F74CE66147C8411CAA664B967A(class UObject* Loaded);
	void OnLoaded_33898C054AD70512867958B85BAA6FA6(class UObject* Loaded);
	void OnLoaded_FB7B16F644F6116F18CDAE957629FA3D(class UObject* Loaded);
	void OnLoaded_2C36155A403C719208BED39CA1C10AB7(class UObject* Loaded);
	void OnLoaded_439024D14E39F2D1FD9BF28D508D3C01(class UObject* Loaded);
	void OnLoaded_7A18704E428AB0926DCD3B933D825CD7(class UObject* Loaded);
	void OnLoaded_7DB2AD9B447B846D1310019C86FD0D65(class UObject* Loaded);
	void OnLoaded_BE1FD54A4ECED4921235E4BD64057F2C(class UObject* Loaded);
	void OnLoaded_290DCAEC4D120EF6CEB47A8B9A9D2E3B(class UObject* Loaded);
	void CalcBadStatus(int32 State);
	void SetUpState(TArray<E_BAD_STATUS>& BadStatus, int32* State);
	void CalcBadStatusImpl(int32 State, TArray<E_BAD_STATUS>& Current, TArray<E_BAD_STATUS>& Added, TArray<E_BAD_STATUS>& Remove);
	void ApplyCharaStatus(int32 State, bool Param_IsNoCureEffect, bool Param_IsLacerationDamage);
	void UpdateTypeA(float DeltaSec);
	void UpdateTypeB(float DeltaSec);
	void UpdateTypeC(float DeltaSec);
	void UpdateTypeD(float DeltaSec);
	void UpdateSurfaceMaterial();
	void UpdateDecal();
	void ResetPSComp(class UParticleSystemComponent*& PSComp);
	void Update_PSLocation(class UParticleSystemComponent*& SPComp, E_BAD_STATUS State);
	void IsIncludeStatus(E_BAD_STATUS Data, TArray<E_BAD_STATUS>& List, bool* IsInclude, int32* Param_Index);
	void UpdateBadStateDirectioin(float DeltaSec);
	void ResetEffectImpl();
	void UpdateAddStatusDirection();
	void UpdateAddStatusDirectionImpl(TArray<struct FBadStatusParticles_T>& ParticleArray, TArray<struct FBadStatusDecal_T>& DecalArray);
	void UpdateRemoveStatusDirection();
	void UpdateRemoveStatusDirectionImpl(TArray<struct FBadStatusParticles_T>& Array);
	void PickupSurfaceStatusMaterial(int32 State, TArray<E_BAD_STATUS>& BeforeState, TArray<E_BAD_STATUS>* Ret, bool* Param_IsNeedResetMaterial);
	void UpdateRemoveDamageDirectionImpl(TArray<struct FBadStatusParticles_T>& Array);
	void InitializeImpl();
	void HasBadStatus(bool* Param_HasBadStatus);
	void IsSameArray(TArray<E_BAD_STATUS>& A, TArray<E_BAD_STATUS>& B, bool* IsSame);
	void InstantEmitterCheck();
	void ActivateBadStatusParticle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaBadStatus_C">();
	}
	static class UCharaBadStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaBadStatus_C>();
	}
};
static_assert(alignof(UCharaBadStatus_C) == 0x000008, "Wrong alignment on UCharaBadStatus_C");
static_assert(sizeof(UCharaBadStatus_C) == 0x000310, "Wrong size on UCharaBadStatus_C");
static_assert(offsetof(UCharaBadStatus_C, UberGraphFrame_CharaBadStatus_C) == 0x0000E8, "Member 'UCharaBadStatus_C::UberGraphFrame_CharaBadStatus_C' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, CurrentBadStatus) == 0x0000F0, "Member 'UCharaBadStatus_C::CurrentBadStatus' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, CurrentBadStatus_A) == 0x0000F8, "Member 'UCharaBadStatus_C::CurrentBadStatus_A' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, CurrentBadStatus_B) == 0x000108, "Member 'UCharaBadStatus_C::CurrentBadStatus_B' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, CurrentBadStatus_C) == 0x000118, "Member 'UCharaBadStatus_C::CurrentBadStatus_C' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, CurrentBadStatus_D) == 0x000128, "Member 'UCharaBadStatus_C::CurrentBadStatus_D' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, AddedBadStatus_A) == 0x000138, "Member 'UCharaBadStatus_C::AddedBadStatus_A' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, RemovedBadStatus_A) == 0x000148, "Member 'UCharaBadStatus_C::RemovedBadStatus_A' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, AddedBadStatus_B) == 0x000158, "Member 'UCharaBadStatus_C::AddedBadStatus_B' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, RemovedBadStatus_B) == 0x000168, "Member 'UCharaBadStatus_C::RemovedBadStatus_B' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, AddedBadStatus_C) == 0x000178, "Member 'UCharaBadStatus_C::AddedBadStatus_C' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, RemovedBadStatus_C) == 0x000188, "Member 'UCharaBadStatus_C::RemovedBadStatus_C' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, AddedBadStatus_D) == 0x000198, "Member 'UCharaBadStatus_C::AddedBadStatus_D' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, RemovedBadStatus_D) == 0x0001A8, "Member 'UCharaBadStatus_C::RemovedBadStatus_D' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, BeforeBadStatus) == 0x0001B8, "Member 'UCharaBadStatus_C::BeforeBadStatus' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, BeforeSurfaceBadStatus) == 0x0001C0, "Member 'UCharaBadStatus_C::BeforeSurfaceBadStatus' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA) == 0x0001D0, "Member 'UCharaBadStatus_C::TypeA' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB) == 0x0001D8, "Member 'UCharaBadStatus_C::TypeB' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeC) == 0x0001E0, "Member 'UCharaBadStatus_C::TypeC' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeD) == 0x0001E8, "Member 'UCharaBadStatus_C::TypeD' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, AdjustScale) == 0x0001F0, "Member 'UCharaBadStatus_C::AdjustScale' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_Dulation) == 0x0001F4, "Member 'UCharaBadStatus_C::TypeA_Dulation' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_Spend) == 0x0001F8, "Member 'UCharaBadStatus_C::TypeA_Spend' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_Index) == 0x0001FC, "Member 'UCharaBadStatus_C::TypeA_Index' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_State) == 0x000200, "Member 'UCharaBadStatus_C::TypeA_State' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, Instant) == 0x000208, "Member 'UCharaBadStatus_C::Instant' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, IsNeedResetMaterial) == 0x000210, "Member 'UCharaBadStatus_C::IsNeedResetMaterial' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, OffBadStatus) == 0x000214, "Member 'UCharaBadStatus_C::OffBadStatus' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB_State) == 0x000218, "Member 'UCharaBadStatus_C::TypeB_State' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeC_State) == 0x000228, "Member 'UCharaBadStatus_C::TypeC_State' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeD_Decal) == 0x000238, "Member 'UCharaBadStatus_C::TypeD_Decal' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, IsNoCureEffect) == 0x000240, "Member 'UCharaBadStatus_C::IsNoCureEffect' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, IsLacerationDamage) == 0x000241, "Member 'UCharaBadStatus_C::IsLacerationDamage' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeD_State) == 0x000242, "Member 'UCharaBadStatus_C::TypeD_State' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA2) == 0x000248, "Member 'UCharaBadStatus_C::TypeA2' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_Before) == 0x000250, "Member 'UCharaBadStatus_C::TypeA_Before' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeA_Current) == 0x000258, "Member 'UCharaBadStatus_C::TypeA_Current' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, IsChangeBadStatus) == 0x000260, "Member 'UCharaBadStatus_C::IsChangeBadStatus' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, DecalMaterial) == 0x000268, "Member 'UCharaBadStatus_C::DecalMaterial' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB_PSs) == 0x000290, "Member 'UCharaBadStatus_C::TypeB_PSs' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB2) == 0x0002E0, "Member 'UCharaBadStatus_C::TypeB2' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB3) == 0x0002E8, "Member 'UCharaBadStatus_C::TypeB3' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB4) == 0x0002F0, "Member 'UCharaBadStatus_C::TypeB4' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, InstantDecal) == 0x0002F8, "Member 'UCharaBadStatus_C::InstantDecal' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, IsInitialized) == 0x000300, "Member 'UCharaBadStatus_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(UCharaBadStatus_C, TypeB5) == 0x000308, "Member 'UCharaBadStatus_C::TypeB5' has a wrong offset!");

}
