#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaEyeComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaEyeComponent.CharaEyeComponent_C
// 0x0040 (0x00F0 - 0x00B0)
class UCharaEyeComponent_C final : public UCustomComponent
{
public:
	int32                                         Index_CharaEyeComponent_C;                         // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EyeBone;                                           // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ImmediatelyIK;                                     // 0x00BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_237E[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ViewPointBone;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   IrisBone;                                          // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyeRotationSpeed;                                  // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               EyeRotationCurrent;                                // 0x00D4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         AngleVerticalMin;                                  // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleVerticalMax;                                  // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMin;                                // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMax;                                // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation);
	void UpdateEyeRotation(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaEyeComponent_C">();
	}
	static class UCharaEyeComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaEyeComponent_C>();
	}
};
static_assert(alignof(UCharaEyeComponent_C) == 0x000008, "Wrong alignment on UCharaEyeComponent_C");
static_assert(sizeof(UCharaEyeComponent_C) == 0x0000F0, "Wrong size on UCharaEyeComponent_C");
static_assert(offsetof(UCharaEyeComponent_C, Index_CharaEyeComponent_C) == 0x0000B0, "Member 'UCharaEyeComponent_C::Index_CharaEyeComponent_C' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, EyeBone) == 0x0000B4, "Member 'UCharaEyeComponent_C::EyeBone' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, Debug) == 0x0000BC, "Member 'UCharaEyeComponent_C::Debug' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, ImmediatelyIK) == 0x0000BD, "Member 'UCharaEyeComponent_C::ImmediatelyIK' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, ViewPointBone) == 0x0000C0, "Member 'UCharaEyeComponent_C::ViewPointBone' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, IrisBone) == 0x0000C8, "Member 'UCharaEyeComponent_C::IrisBone' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, EyeRotationSpeed) == 0x0000D0, "Member 'UCharaEyeComponent_C::EyeRotationSpeed' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, EyeRotationCurrent) == 0x0000D4, "Member 'UCharaEyeComponent_C::EyeRotationCurrent' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, AngleVerticalMin) == 0x0000E0, "Member 'UCharaEyeComponent_C::AngleVerticalMin' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, AngleVerticalMax) == 0x0000E4, "Member 'UCharaEyeComponent_C::AngleVerticalMax' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, AngleHorizontalMin) == 0x0000E8, "Member 'UCharaEyeComponent_C::AngleHorizontalMin' has a wrong offset!");
static_assert(offsetof(UCharaEyeComponent_C, AngleHorizontalMax) == 0x0000EC, "Member 'UCharaEyeComponent_C::AngleHorizontalMax' has a wrong offset!");

}

