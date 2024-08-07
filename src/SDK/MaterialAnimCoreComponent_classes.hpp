#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialAnimCoreComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MaterialAnimCoreComponent.MaterialAnimCoreComponent_C
// 0x00D0 (0x0180 - 0x00B0)
class UMaterialAnimCoreComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          M_IsMatrialInitialized;                            // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       BaseMaterialInstance;                              // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 BaseMaterialElemIdx;                               // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_EnableOutLine;                                   // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       OutlineMaterialInstance;                           // 0x00E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       StateMaterialInstance;                             // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 StateMaterialElemIdx;                              // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         M_InitialDitherDistance;                           // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_InitialDitherRate;                               // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsDitherEnable;                                  // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_DitherDest_Distance;                             // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherInterpSecSpend_Distance;                   // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherInterpSec_Distance;                        // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherSrc_Distance;                              // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherInterpSec_Rate;                            // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherInterpSecSpend_Rate;                       // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherDest_Rate;                                 // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_DitherSrc_Rate;                                  // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinishDitherRate;                                // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         M_CurrentDitherRate;                               // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_CurrentDitherDistance;                           // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             BaseMaterialOrigin;                                // 0x0160(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             StateMaterialOrigin;                               // 0x0170(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnFinishDitherRate__DelegateSignature(E_CHARA_ACTION_TYPE CharaAction);
	void ExecuteUbergraph_MaterialAnimCoreComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CreateMeshMID(class UMeshComponent* MeshComp);
	void ApplyInitialize();
	void BI_GetAllMID(TArray<class UMaterialInstanceDynamic*>* Mid);
	void BI_SetScalarParam(const TArray<class FName>& ParamNames, const float Val, bool* NoUse);
	void BI_IsDitherEnable(bool* IsEnable);
	void BI_ResetScalarParam(const TArray<class FName>& ParamNmaes, bool* NoUse);
	void BI_SetVectorParam(const TArray<class FName>& ParamNames, const struct FLinearColor& Val, bool* NoUse);
	void BI_SetScalarParamByArray(const TArray<class UMaterialInstanceDynamic*>& Materials, const TArray<class FName>& ParamNames, const float Val, bool* NoUse);
	void BI_SetVectorParamByArray(const TArray<class UMaterialInstanceDynamic*>& Materials, const TArray<class FName>& ParamNames, const struct FLinearColor& Val, bool* NoUse);
	void BI_OutLineSwitch(bool Value, bool* NoUse);
	void BI_SelectFresnelSwitch(bool Value, bool* NoUse);
	void BI_SelectSwitch(const bool Value, bool* NoUse);
	void BI_SetDitherEnable(bool IsEnable, bool* NoUse);
	void BI_SetDitherDistance(float Distance, float InterpSec, bool* NoUse);
	void BI_ResetDitherDistance(float InterpSec, bool* NoUse);
	void BI_UpdateDither(float DeltaTime, float* CurrentDitherRate);
	void BI_SetDitherRate(float Rate, float InterpSec, bool* NoUse);
	void BI_ResetDitherRate(float InterpSec, bool* NoUse);
	void BI_ToggleDitherEnable(bool* NoUse);
	void BI_RetrieveMIDs(const TArray<int32>& ElementNo, TArray<class UMaterialInstanceDynamic*>* Materials);
	void BI_CalcMaterialAnimSettingSec(const TArray<struct FMaterialAnimSetting_T>& MaterialAnimSettings, float* Sec);
	void BI_InitializeMaterial(class UMeshComponent* Mesh, bool* NoUse);
	void BI_GetDitherRate(float* DitherRate);
	void BI_GetDitherDistance(float* DitherDistance);
	void BI_MultiMeshInitializeMaterial(const TArray<class UMeshComponent*>& Meshes, bool* NoUse);
	void BI_ResetAllParam(bool* NoUse);
	void BI_AddMaterial(class UMeshComponent* MeshComponent, bool* NoUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaterialAnimCoreComponent_C">();
	}
	static class UMaterialAnimCoreComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialAnimCoreComponent_C>();
	}
};
static_assert(alignof(UMaterialAnimCoreComponent_C) == 0x000008, "Wrong alignment on UMaterialAnimCoreComponent_C");
static_assert(sizeof(UMaterialAnimCoreComponent_C) == 0x000180, "Wrong size on UMaterialAnimCoreComponent_C");
static_assert(offsetof(UMaterialAnimCoreComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UMaterialAnimCoreComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_IsMatrialInitialized) == 0x0000B8, "Member 'UMaterialAnimCoreComponent_C::M_IsMatrialInitialized' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, BaseMaterialInstance) == 0x0000C0, "Member 'UMaterialAnimCoreComponent_C::BaseMaterialInstance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, BaseMaterialElemIdx) == 0x0000D0, "Member 'UMaterialAnimCoreComponent_C::BaseMaterialElemIdx' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_EnableOutLine) == 0x0000E0, "Member 'UMaterialAnimCoreComponent_C::M_EnableOutLine' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, OutlineMaterialInstance) == 0x0000E8, "Member 'UMaterialAnimCoreComponent_C::OutlineMaterialInstance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, StateMaterialInstance) == 0x0000F8, "Member 'UMaterialAnimCoreComponent_C::StateMaterialInstance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, StateMaterialElemIdx) == 0x000108, "Member 'UMaterialAnimCoreComponent_C::StateMaterialElemIdx' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_InitialDitherDistance) == 0x000118, "Member 'UMaterialAnimCoreComponent_C::M_InitialDitherDistance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_InitialDitherRate) == 0x00011C, "Member 'UMaterialAnimCoreComponent_C::M_InitialDitherRate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_IsDitherEnable) == 0x000120, "Member 'UMaterialAnimCoreComponent_C::M_IsDitherEnable' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherDest_Distance) == 0x000124, "Member 'UMaterialAnimCoreComponent_C::M_DitherDest_Distance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherInterpSecSpend_Distance) == 0x000128, "Member 'UMaterialAnimCoreComponent_C::M_DitherInterpSecSpend_Distance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherInterpSec_Distance) == 0x00012C, "Member 'UMaterialAnimCoreComponent_C::M_DitherInterpSec_Distance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherSrc_Distance) == 0x000130, "Member 'UMaterialAnimCoreComponent_C::M_DitherSrc_Distance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherInterpSec_Rate) == 0x000134, "Member 'UMaterialAnimCoreComponent_C::M_DitherInterpSec_Rate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherInterpSecSpend_Rate) == 0x000138, "Member 'UMaterialAnimCoreComponent_C::M_DitherInterpSecSpend_Rate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherDest_Rate) == 0x00013C, "Member 'UMaterialAnimCoreComponent_C::M_DitherDest_Rate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_DitherSrc_Rate) == 0x000140, "Member 'UMaterialAnimCoreComponent_C::M_DitherSrc_Rate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, OnFinishDitherRate) == 0x000148, "Member 'UMaterialAnimCoreComponent_C::OnFinishDitherRate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_CurrentDitherRate) == 0x000158, "Member 'UMaterialAnimCoreComponent_C::M_CurrentDitherRate' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, M_CurrentDitherDistance) == 0x00015C, "Member 'UMaterialAnimCoreComponent_C::M_CurrentDitherDistance' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, BaseMaterialOrigin) == 0x000160, "Member 'UMaterialAnimCoreComponent_C::BaseMaterialOrigin' has a wrong offset!");
static_assert(offsetof(UMaterialAnimCoreComponent_C, StateMaterialOrigin) == 0x000170, "Member 'UMaterialAnimCoreComponent_C::StateMaterialOrigin' has a wrong offset!");

}

