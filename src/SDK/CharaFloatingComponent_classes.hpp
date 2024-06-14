#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaFloatingComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_classes.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaFloatingComponent.CharaFloatingComponent_C
// 0x0078 (0x0128 - 0x00B0)
class UCharaFloatingComponent_C final : public UCustomComponent
{
public:
	bool                                          Debug;                                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ImmediatelyIK;                                     // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_235B[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SampleBone1;                                       // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SampleBone2;                                       // 0x00BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SampleBone3;                                       // 0x00C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SampleRadius;                                      // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetLimit;                                       // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ViewPointBone;                                     // 0x00D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootLocationUpSpeed;                               // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootLocationDownSpeed;                             // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RootLocationCurrent;                               // 0x00E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RootRotationSpeed;                                 // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RootRotationCurrent;                               // 0x00F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         AnglePitchMin;                                     // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnglePitchMax;                                     // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleRollMin;                                      // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleRollMax;                                      // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleVerticalMin;                                  // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleVerticalMax;                                  // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMin;                                // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMax;                                // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoIdleFloat;                                       // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Update(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, float IKPerch, bool WatchOnesStep, const struct FVector& GazePoint, bool GazePointEnable, struct FVector* Offset, struct FRotator* DeltaRotation);
	void UpdateFloatingRotation(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, float IKPerch, bool WatchOnesStep, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* DeltaRotation);
	void UpdateFloatingLocation(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, float IKPerch, struct FVector* Offset);
	struct FRotator ModifyRotation(const struct FRotator& Rotation, class USkinnedMeshComponent* Mesh, const struct FVector& GazePoint, bool GazePointEnable);

	struct FRotator MakeRotation(class USkinnedMeshComponent* Mesh, const struct FVector& NormalBefore, const struct FVector& NormalAfter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaFloatingComponent_C">();
	}
	static class UCharaFloatingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaFloatingComponent_C>();
	}
};
static_assert(alignof(UCharaFloatingComponent_C) == 0x000008, "Wrong alignment on UCharaFloatingComponent_C");
static_assert(sizeof(UCharaFloatingComponent_C) == 0x000128, "Wrong size on UCharaFloatingComponent_C");
static_assert(offsetof(UCharaFloatingComponent_C, Debug) == 0x0000B0, "Member 'UCharaFloatingComponent_C::Debug' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, ImmediatelyIK) == 0x0000B1, "Member 'UCharaFloatingComponent_C::ImmediatelyIK' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, SampleBone1) == 0x0000B4, "Member 'UCharaFloatingComponent_C::SampleBone1' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, SampleBone2) == 0x0000BC, "Member 'UCharaFloatingComponent_C::SampleBone2' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, SampleBone3) == 0x0000C4, "Member 'UCharaFloatingComponent_C::SampleBone3' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, SampleRadius) == 0x0000CC, "Member 'UCharaFloatingComponent_C::SampleRadius' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, OffsetLimit) == 0x0000D0, "Member 'UCharaFloatingComponent_C::OffsetLimit' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, ViewPointBone) == 0x0000D4, "Member 'UCharaFloatingComponent_C::ViewPointBone' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, RootLocationUpSpeed) == 0x0000DC, "Member 'UCharaFloatingComponent_C::RootLocationUpSpeed' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, RootLocationDownSpeed) == 0x0000E0, "Member 'UCharaFloatingComponent_C::RootLocationDownSpeed' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, RootLocationCurrent) == 0x0000E4, "Member 'UCharaFloatingComponent_C::RootLocationCurrent' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, RootRotationSpeed) == 0x0000F0, "Member 'UCharaFloatingComponent_C::RootRotationSpeed' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, RootRotationCurrent) == 0x0000F4, "Member 'UCharaFloatingComponent_C::RootRotationCurrent' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AnglePitchMin) == 0x000100, "Member 'UCharaFloatingComponent_C::AnglePitchMin' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AnglePitchMax) == 0x000104, "Member 'UCharaFloatingComponent_C::AnglePitchMax' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleRollMin) == 0x000108, "Member 'UCharaFloatingComponent_C::AngleRollMin' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleRollMax) == 0x00010C, "Member 'UCharaFloatingComponent_C::AngleRollMax' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleVerticalMin) == 0x000110, "Member 'UCharaFloatingComponent_C::AngleVerticalMin' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleVerticalMax) == 0x000114, "Member 'UCharaFloatingComponent_C::AngleVerticalMax' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleHorizontalMin) == 0x000118, "Member 'UCharaFloatingComponent_C::AngleHorizontalMin' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, AngleHorizontalMax) == 0x00011C, "Member 'UCharaFloatingComponent_C::AngleHorizontalMax' has a wrong offset!");
static_assert(offsetof(UCharaFloatingComponent_C, NoIdleFloat) == 0x000120, "Member 'UCharaFloatingComponent_C::NoIdleFloat' has a wrong offset!");

}

