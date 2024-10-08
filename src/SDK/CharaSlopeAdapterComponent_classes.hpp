#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaSlopeAdapterComponent

#include "Basic.hpp"

#include "CharaSinkTesterInterface_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaSlopeAdapterComponent.CharaSlopeAdapterComponent_C
// 0x0058 (0x0108 - 0x00B0)
class UCharaSlopeAdapterComponent_C final : public UCharaSinkTesterInterface_C
{
public:
	class FName                                   SampleBone1;                                       // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SampleBone2;                                       // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SampleBone3;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SampleRadius;                                      // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetLimit;                                       // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ViewPointBone;                                     // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationSpeed;                                     // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleLimit;                                        // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationCurrent;                                   // 0x00E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Debug;                                             // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AngleVerticalMin;                                  // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleVerticalMax;                                  // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMin;                                // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMax;                                // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ImmediatelyIK;                                     // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Update(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation);
	void ModifyRotation(const struct FRotator& Rotation, class USkinnedMeshComponent* Mesh, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* ModifiedRotation);

	void TestSink(class USkinnedMeshComponent* Mesh, float SinkLimit, bool Param_Debug, float* SinkMin, float* SinkMax) const;
	struct FRotator MakeRotation(class USkinnedMeshComponent* Mesh, const struct FVector& NormalBefore, const struct FVector& NormalAfter, bool IgnoreAngleLimit) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaSlopeAdapterComponent_C">();
	}
	static class UCharaSlopeAdapterComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaSlopeAdapterComponent_C>();
	}
};
static_assert(alignof(UCharaSlopeAdapterComponent_C) == 0x000008, "Wrong alignment on UCharaSlopeAdapterComponent_C");
static_assert(sizeof(UCharaSlopeAdapterComponent_C) == 0x000108, "Wrong size on UCharaSlopeAdapterComponent_C");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, SampleBone1) == 0x0000B0, "Member 'UCharaSlopeAdapterComponent_C::SampleBone1' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, SampleBone2) == 0x0000B8, "Member 'UCharaSlopeAdapterComponent_C::SampleBone2' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, SampleBone3) == 0x0000C0, "Member 'UCharaSlopeAdapterComponent_C::SampleBone3' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, SampleRadius) == 0x0000C8, "Member 'UCharaSlopeAdapterComponent_C::SampleRadius' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, OffsetLimit) == 0x0000CC, "Member 'UCharaSlopeAdapterComponent_C::OffsetLimit' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, ViewPointBone) == 0x0000D0, "Member 'UCharaSlopeAdapterComponent_C::ViewPointBone' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, RotationSpeed) == 0x0000D8, "Member 'UCharaSlopeAdapterComponent_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, AngleLimit) == 0x0000DC, "Member 'UCharaSlopeAdapterComponent_C::AngleLimit' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, RotationCurrent) == 0x0000E0, "Member 'UCharaSlopeAdapterComponent_C::RotationCurrent' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, Debug) == 0x0000EC, "Member 'UCharaSlopeAdapterComponent_C::Debug' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, AngleVerticalMin) == 0x0000F0, "Member 'UCharaSlopeAdapterComponent_C::AngleVerticalMin' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, AngleVerticalMax) == 0x0000F4, "Member 'UCharaSlopeAdapterComponent_C::AngleVerticalMax' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, AngleHorizontalMin) == 0x0000F8, "Member 'UCharaSlopeAdapterComponent_C::AngleHorizontalMin' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, AngleHorizontalMax) == 0x0000FC, "Member 'UCharaSlopeAdapterComponent_C::AngleHorizontalMax' has a wrong offset!");
static_assert(offsetof(UCharaSlopeAdapterComponent_C, ImmediatelyIK) == 0x000100, "Member 'UCharaSlopeAdapterComponent_C::ImmediatelyIK' has a wrong offset!");

}

