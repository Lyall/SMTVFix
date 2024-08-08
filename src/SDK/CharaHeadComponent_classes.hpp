#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaHeadComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaHeadComponent.CharaHeadComponent_C
// 0x0038 (0x00E8 - 0x00B0)
class UCharaHeadComponent_C final : public UCustomComponent
{
public:
	int32                                         Index_CharaHeadComponent_C;                        // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   HeadBone;                                          // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ImmediatelyIK;                                     // 0x00BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BE[0x2];                                       // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ViewPointBone;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadRotationSpeed;                                 // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               HeadRotationCurrent;                               // 0x00CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         AngleVerticalMin;                                  // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleVerticalMax;                                  // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMin;                                // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AngleHorizontalMax;                                // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Update(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation);
	void UpdateHeadRotation(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaHeadComponent_C">();
	}
	static class UCharaHeadComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaHeadComponent_C>();
	}
};
static_assert(alignof(UCharaHeadComponent_C) == 0x000008, "Wrong alignment on UCharaHeadComponent_C");
static_assert(sizeof(UCharaHeadComponent_C) == 0x0000E8, "Wrong size on UCharaHeadComponent_C");
static_assert(offsetof(UCharaHeadComponent_C, Index_CharaHeadComponent_C) == 0x0000B0, "Member 'UCharaHeadComponent_C::Index_CharaHeadComponent_C' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, HeadBone) == 0x0000B4, "Member 'UCharaHeadComponent_C::HeadBone' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, Debug) == 0x0000BC, "Member 'UCharaHeadComponent_C::Debug' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, ImmediatelyIK) == 0x0000BD, "Member 'UCharaHeadComponent_C::ImmediatelyIK' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, ViewPointBone) == 0x0000C0, "Member 'UCharaHeadComponent_C::ViewPointBone' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, HeadRotationSpeed) == 0x0000C8, "Member 'UCharaHeadComponent_C::HeadRotationSpeed' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, HeadRotationCurrent) == 0x0000CC, "Member 'UCharaHeadComponent_C::HeadRotationCurrent' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, AngleVerticalMin) == 0x0000D8, "Member 'UCharaHeadComponent_C::AngleVerticalMin' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, AngleVerticalMax) == 0x0000DC, "Member 'UCharaHeadComponent_C::AngleVerticalMax' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, AngleHorizontalMin) == 0x0000E0, "Member 'UCharaHeadComponent_C::AngleHorizontalMin' has a wrong offset!");
static_assert(offsetof(UCharaHeadComponent_C, AngleHorizontalMax) == 0x0000E4, "Member 'UCharaHeadComponent_C::AngleHorizontalMax' has a wrong offset!");

}

