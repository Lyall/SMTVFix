#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoasterCamera.BP_CoasterCamera_C
// 0x0068 (0x0288 - 0x0220)
class ABP_CoasterCamera_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        LookScene;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TargetComponent;                                   // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CameraRInterpSpeed;                                // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C5[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       SplineComp;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPC_CharaSplineMover_C*                SplineMover;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataBP_MapCoaster_C*                   DataAsset;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Current_PlayerToLook;                              // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstCalc;                                         // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C6[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Counter;                                           // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreCameraCollision;                             // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CoasterCamera(int32 EntryPoint);
	void Update(float DeltaSec);
	void ReceiveBeginPlay();
	void Setting(float FOV, float RInterpSpeed, bool Param_IgnoreCameraCollision);
	void RInterp(const struct FRotator& CurrentRot, const struct FRotator& TargetRor, float DeltaSec, float InterpSpeed, struct FRotator* Result);
	void CalcCameraUpVec(struct FVector* UpVec);
	void SettingSpline(class USplineComponent* Param_SplineComp, class UBPC_CharaSplineMover_C* Param_SplineMover);
	void UpdateCamera(float DeltaSec);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoasterCamera_C">();
	}
	static class ABP_CoasterCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CoasterCamera_C>();
	}
};
static_assert(alignof(ABP_CoasterCamera_C) == 0x000008, "Wrong alignment on ABP_CoasterCamera_C");
static_assert(sizeof(ABP_CoasterCamera_C) == 0x000288, "Wrong size on ABP_CoasterCamera_C");
static_assert(offsetof(ABP_CoasterCamera_C, UberGraphFrame) == 0x000220, "Member 'ABP_CoasterCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, LookScene) == 0x000228, "Member 'ABP_CoasterCamera_C::LookScene' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, Camera) == 0x000230, "Member 'ABP_CoasterCamera_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, SpringArm) == 0x000238, "Member 'ABP_CoasterCamera_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_CoasterCamera_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, TargetComponent) == 0x000248, "Member 'ABP_CoasterCamera_C::TargetComponent' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, CameraRInterpSpeed) == 0x000250, "Member 'ABP_CoasterCamera_C::CameraRInterpSpeed' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, SplineComp) == 0x000258, "Member 'ABP_CoasterCamera_C::SplineComp' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, SplineMover) == 0x000260, "Member 'ABP_CoasterCamera_C::SplineMover' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, DataAsset) == 0x000268, "Member 'ABP_CoasterCamera_C::DataAsset' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, Current_PlayerToLook) == 0x000270, "Member 'ABP_CoasterCamera_C::Current_PlayerToLook' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, FirstCalc) == 0x00027C, "Member 'ABP_CoasterCamera_C::FirstCalc' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, Counter) == 0x000280, "Member 'ABP_CoasterCamera_C::Counter' has a wrong offset!");
static_assert(offsetof(ABP_CoasterCamera_C, IgnoreCameraCollision) == 0x000284, "Member 'ABP_CoasterCamera_C::IgnoreCameraCollision' has a wrong offset!");

}
