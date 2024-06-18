#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RailActor

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CustomRigRail_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RailActor.BP_RailActor_C
// 0x0060 (0x0390 - 0x0330)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_RailActor_C : public ACustomRigRail_C
{
public:
	uint8                                         Pad_2F8E[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   M_RailName;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                M_OriginUpVec;                                     // 0x0338(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   M_OverrideSocketName;                              // 0x0344(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         M_MaxSightRange;                                   // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         M_PlayRate;                                        // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F8F[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USpringArmComponent*                    M_AttachTarget;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsAttachedSpringArm;                             // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F90[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleCamActorFactory_C> M_BPICamFactory;                                   // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCommandRail;                                     // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F91[0x3];                                     // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_CommandTargetIndex;                              // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_CommandSelectedIndex;                            // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SKILL_TARGET                                M_CommandTargetType;                               // 0x0384(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsSelectingTarget;                               // 0x0385(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_RailActor(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Reset_Transform();
	void UserConstructionScript();
	void GetCurrentLocationAndRotation(float Length, bool Loop, struct FVector* RetLocation, struct FVector* RetDirection, struct FRotator* RetRotation);
	void IsArrived(float Length, bool* RetValue);
	void DbgPrintSplinePoint();
	void GetPlayInfo(struct FRigRailPlayInfo* Param_M_PlayInfo);
	void GetSplinePointNum(int32* RetValue);
	void GetCameraSideType(E_CAMERA_SIDE_BF_TYPE* BF_Type, E_CAMERA_SIDE_LR_TYPE* LR_Type);
	void SetPlayRate(float PlayRate);
	void GetPlayRate(float* PlayRate);
	void ResetTransformImpl();
	void AttachToSpringArm(class AActor* Target, class FName SpringArmName, bool* IsAttached);
	void GetCamFactory(TScriptInterface<class IBPI_BattleCamActorFactory_C>* Factory);
	void SetCamFactory(TScriptInterface<class IBPI_BattleCamActorFactory_C> Factory);
	void SetCommandCamInfo(int32 CommandTargetIndex, int32 SelectedIndex, E_SKILL_TARGET TargetType, bool IsSelectingTarget);
	void IsSameCommandCamInfo(int32 CommandTargetIndex, int32 SelectedIndex, E_SKILL_TARGET TargetType, bool IsSeletingTarget, bool* IsSame);
	void IsAttachToSpringArm(bool* IsAttached);
	void DetachToSpringArm();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RailActor_C">();
	}
	static class ABP_RailActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RailActor_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_RailActor_C) == 0x000010, "Wrong alignment on ABP_RailActor_C");
static_assert(sizeof(ABP_RailActor_C) == 0x000390, "Wrong size on ABP_RailActor_C");
static_assert(offsetof(ABP_RailActor_C, UberGraphFrame) == 0x000328, "Member 'ABP_RailActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_RailName) == 0x000330, "Member 'ABP_RailActor_C::M_RailName' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_OriginUpVec) == 0x000338, "Member 'ABP_RailActor_C::M_OriginUpVec' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_OverrideSocketName) == 0x000344, "Member 'ABP_RailActor_C::M_OverrideSocketName' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_MaxSightRange) == 0x00034C, "Member 'ABP_RailActor_C::M_MaxSightRange' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_PlayRate) == 0x000350, "Member 'ABP_RailActor_C::M_PlayRate' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_AttachTarget) == 0x000358, "Member 'ABP_RailActor_C::M_AttachTarget' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_IsAttachedSpringArm) == 0x000360, "Member 'ABP_RailActor_C::M_IsAttachedSpringArm' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_BPICamFactory) == 0x000368, "Member 'ABP_RailActor_C::M_BPICamFactory' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, IsCommandRail) == 0x000378, "Member 'ABP_RailActor_C::IsCommandRail' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_CommandTargetIndex) == 0x00037C, "Member 'ABP_RailActor_C::M_CommandTargetIndex' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_CommandSelectedIndex) == 0x000380, "Member 'ABP_RailActor_C::M_CommandSelectedIndex' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_CommandTargetType) == 0x000384, "Member 'ABP_RailActor_C::M_CommandTargetType' has a wrong offset!");
static_assert(offsetof(ABP_RailActor_C, M_IsSelectingTarget) == 0x000385, "Member 'ABP_RailActor_C::M_IsSelectingTarget' has a wrong offset!");

}

