#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RailMoveComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RailMoveComponent.BP_RailMoveComponent_C
// 0x00E0 (0x0190 - 0x00B0)
class UBP_RailMoveComponent_C final : public URailMoveComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         M_Speed;                                           // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_MoveDistance;                                    // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Loop;                                            // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_Return;                                          // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Reverse;                                         // 0x00C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Play;                                            // 0x00C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                M_OriginTargetLocation;                            // 0x00C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RailActor_C*                        M_Rail;                                            // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_LockTarget;                                      // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_EndStop;                                         // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_ChangeSpeedPoint;                                // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_FirstSpeed;                                      // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_SecondSpeed;                                     // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_CurrentTick;                                     // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Wait;                                            // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsPanCameara;                                    // 0x00ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_DaathEnable;                                     // 0x00EE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EF[0x1];                                       // 0x00EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 M_TargetActor;                                     // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleLookAtSphere_C*                  M_LookAtSphere;                                    // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                M_TargetLocation;                                  // 0x0100(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_OverrideTargetSocket;                            // 0x010C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_OverrideTagretProgress;                          // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_OverrideTargetEnable;                            // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             M_FirstTransform;                                  // 0x0120(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             M_PreviousForceMove;                               // 0x0150(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsPaused;                                        // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_TargetActorValid;                                // 0x0181(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_182[0x2];                                      // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         M_UpdateTargetCount;                               // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RailMoveComponent(int32 EntryPoint);
	void Update(float DeltaSec);
	void ReceiveTick(float DeltaSeconds);
	void SetSpline(class ABP_RailActor_C* InRail);
	void IsArrived(bool* RetValue);
	void GetSplineLength(float* RetValue);
	void SetMoveDistance(float InDistance);
	void AddMoveDistance(float AddDistance);
	struct FTransform ForceMove();
	void Pause(bool IsPause);
	void Play();
	void Stop();
	void VectorToOrientationRotate(const struct FVector& InVec, const struct FVector& InUp, struct FRotator* RetValue);
	void SetMoveSpeed();
	struct FTransform GetFirstTransform();
	void UpdateMoveDistance(float Tick);
	void SetPlayInfo(bool IsLoop, bool IsReturn, const struct FVector& Target, bool IsLockTarget, float ChangeSpeedPoint, float FirstSpeed, float SecondSpeed, bool IsPanCamera);
	void IsPlaying(bool* RetValue);
	void UpdateTargetLocation();
	void SetTargetActor(class AActor* Target);
	void SetOverrideTarget(class FName SocketName);
	void ResetOverrideTarget();
	struct FVector CalcTargetLocation_with_Offset(const struct FVector& TargetLocation, bool IsValidTargetLocation, bool IsOverrideTargetSocket);
	void Reculc_Camera_Look_At();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RailMoveComponent_C">();
	}
	static class UBP_RailMoveComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RailMoveComponent_C>();
	}
};
static_assert(alignof(UBP_RailMoveComponent_C) == 0x000010, "Wrong alignment on UBP_RailMoveComponent_C");
static_assert(sizeof(UBP_RailMoveComponent_C) == 0x000190, "Wrong size on UBP_RailMoveComponent_C");
static_assert(offsetof(UBP_RailMoveComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_RailMoveComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Speed) == 0x0000B8, "Member 'UBP_RailMoveComponent_C::M_Speed' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_MoveDistance) == 0x0000BC, "Member 'UBP_RailMoveComponent_C::M_MoveDistance' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Loop) == 0x0000C0, "Member 'UBP_RailMoveComponent_C::M_Loop' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Return) == 0x0000C1, "Member 'UBP_RailMoveComponent_C::M_Return' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Reverse) == 0x0000C2, "Member 'UBP_RailMoveComponent_C::M_Reverse' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Play) == 0x0000C3, "Member 'UBP_RailMoveComponent_C::M_Play' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_OriginTargetLocation) == 0x0000C4, "Member 'UBP_RailMoveComponent_C::M_OriginTargetLocation' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Rail) == 0x0000D0, "Member 'UBP_RailMoveComponent_C::M_Rail' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_LockTarget) == 0x0000D8, "Member 'UBP_RailMoveComponent_C::M_LockTarget' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_EndStop) == 0x0000D9, "Member 'UBP_RailMoveComponent_C::M_EndStop' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_ChangeSpeedPoint) == 0x0000DC, "Member 'UBP_RailMoveComponent_C::M_ChangeSpeedPoint' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_FirstSpeed) == 0x0000E0, "Member 'UBP_RailMoveComponent_C::M_FirstSpeed' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_SecondSpeed) == 0x0000E4, "Member 'UBP_RailMoveComponent_C::M_SecondSpeed' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_CurrentTick) == 0x0000E8, "Member 'UBP_RailMoveComponent_C::M_CurrentTick' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_Wait) == 0x0000EC, "Member 'UBP_RailMoveComponent_C::M_Wait' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_IsPanCameara) == 0x0000ED, "Member 'UBP_RailMoveComponent_C::M_IsPanCameara' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_DaathEnable) == 0x0000EE, "Member 'UBP_RailMoveComponent_C::M_DaathEnable' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_TargetActor) == 0x0000F0, "Member 'UBP_RailMoveComponent_C::M_TargetActor' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_LookAtSphere) == 0x0000F8, "Member 'UBP_RailMoveComponent_C::M_LookAtSphere' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_TargetLocation) == 0x000100, "Member 'UBP_RailMoveComponent_C::M_TargetLocation' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_OverrideTargetSocket) == 0x00010C, "Member 'UBP_RailMoveComponent_C::M_OverrideTargetSocket' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_OverrideTagretProgress) == 0x000114, "Member 'UBP_RailMoveComponent_C::M_OverrideTagretProgress' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_OverrideTargetEnable) == 0x000118, "Member 'UBP_RailMoveComponent_C::M_OverrideTargetEnable' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_FirstTransform) == 0x000120, "Member 'UBP_RailMoveComponent_C::M_FirstTransform' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_PreviousForceMove) == 0x000150, "Member 'UBP_RailMoveComponent_C::M_PreviousForceMove' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_IsPaused) == 0x000180, "Member 'UBP_RailMoveComponent_C::M_IsPaused' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_TargetActorValid) == 0x000181, "Member 'UBP_RailMoveComponent_C::M_TargetActorValid' has a wrong offset!");
static_assert(offsetof(UBP_RailMoveComponent_C, M_UpdateTargetCount) == 0x000184, "Member 'UBP_RailMoveComponent_C::M_UpdateTargetCount' has a wrong offset!");

}

