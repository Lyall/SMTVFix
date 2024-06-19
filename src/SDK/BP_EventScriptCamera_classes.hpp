#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventScriptCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventScriptCamera.BP_EventScriptCamera_C
// 0x0078 (0x0298 - 0x0220)
class ABP_EventScriptCamera_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               BaseRotate;                                        // 0x0240(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         BaseRotateY;                                       // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseRotateZ;                                       // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39A4[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DefaultViewTarget;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateScale_Deprecated;                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxRotateY;                                        // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinRotateY;                                        // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Start;                                             // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Finish;                                            // 0x026D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39A5[0x2];                                     // 0x026E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CurrentLocation;                                   // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewLocation;                                       // 0x027C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentTime;                                       // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeyFree;                                           // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39A6[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ControllerInputScale;                              // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_EventScriptCamera(int32 EntryPoint);
	void ReceiveBeginPlay();
	void CheckStart(float Delay);
	void ReceiveTick(float DeltaSeconds);
	void InitializeCore(float ArmLength, float FieldOfView, float BlendTime, float CameraRot);
	void CheckFinish(float Delay);
	void Initialize(float ArmLength, float FieldOfView, float BlendTime, float CameraRot);
	void Finalize(float BlendTime);
	void ReturnCamera(float BlendTime);
	void MovePosition(const struct FVector& Location, float Param_Time);
	void SetKeyFree(bool Param_KeyFree);
	void GetRotateScale(E_AXIS_MAPPING_TYPE Axis, float* RotateScale);
	void CheckMouseButtonDown();
	void GetMouseAxis(E_AXIS_MAPPING_TYPE AxisMapping, float* Axis);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventScriptCamera_C">();
	}
	static class ABP_EventScriptCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventScriptCamera_C>();
	}
};
static_assert(alignof(ABP_EventScriptCamera_C) == 0x000008, "Wrong alignment on ABP_EventScriptCamera_C");
static_assert(sizeof(ABP_EventScriptCamera_C) == 0x000298, "Wrong size on ABP_EventScriptCamera_C");
static_assert(offsetof(ABP_EventScriptCamera_C, UberGraphFrame) == 0x000220, "Member 'ABP_EventScriptCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, Camera) == 0x000228, "Member 'ABP_EventScriptCamera_C::Camera' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, SpringArm) == 0x000230, "Member 'ABP_EventScriptCamera_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_EventScriptCamera_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, BaseRotate) == 0x000240, "Member 'ABP_EventScriptCamera_C::BaseRotate' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, BaseRotateY) == 0x00024C, "Member 'ABP_EventScriptCamera_C::BaseRotateY' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, BaseRotateZ) == 0x000250, "Member 'ABP_EventScriptCamera_C::BaseRotateZ' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, DefaultViewTarget) == 0x000258, "Member 'ABP_EventScriptCamera_C::DefaultViewTarget' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, RotateScale_Deprecated) == 0x000260, "Member 'ABP_EventScriptCamera_C::RotateScale_Deprecated' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, MaxRotateY) == 0x000264, "Member 'ABP_EventScriptCamera_C::MaxRotateY' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, MinRotateY) == 0x000268, "Member 'ABP_EventScriptCamera_C::MinRotateY' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, Start) == 0x00026C, "Member 'ABP_EventScriptCamera_C::Start' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, Finish) == 0x00026D, "Member 'ABP_EventScriptCamera_C::Finish' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, CurrentLocation) == 0x000270, "Member 'ABP_EventScriptCamera_C::CurrentLocation' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, NewLocation) == 0x00027C, "Member 'ABP_EventScriptCamera_C::NewLocation' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, Time) == 0x000288, "Member 'ABP_EventScriptCamera_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, CurrentTime) == 0x00028C, "Member 'ABP_EventScriptCamera_C::CurrentTime' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, KeyFree) == 0x000290, "Member 'ABP_EventScriptCamera_C::KeyFree' has a wrong offset!");
static_assert(offsetof(ABP_EventScriptCamera_C, ControllerInputScale) == 0x000294, "Member 'ABP_EventScriptCamera_C::ControllerInputScale' has a wrong offset!");

}

