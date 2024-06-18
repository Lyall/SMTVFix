#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RailSightChecker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BP_RailActor_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RailSightChecker.BP_RailSightChecker_C
// 0x0020 (0x03B0 - 0x0390)
class ABP_RailSightChecker_C final : public ABP_RailActor_C
{
public:
	uint8                                         Pad_535E[0x2];                                     // 0x0386(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                M_TargetLocation;                                  // 0x0388(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_535F[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         M_IgnoreActor;                                     // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void CheckObstruction(int32 Divide, TArray<EObjectTypeQuery>& TraceObject, bool* IsClear);
	void SetCheckData(struct FTransform& Position, struct FTransform& OffsetTransform, TArray<struct FCustomSplinePoint>& SplinePoint, struct FRigRailPlayInfo& PlayInfo, float AdjustScale);
	void SetTargetLocation(const struct FVector& Location);
	void ResetIgnoreActor();
	void AddIgnoreActor(class AActor*& IgnoreActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RailSightChecker_C">();
	}
	static class ABP_RailSightChecker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RailSightChecker_C>();
	}
};
static_assert(alignof(ABP_RailSightChecker_C) == 0x000010, "Wrong alignment on ABP_RailSightChecker_C");
static_assert(sizeof(ABP_RailSightChecker_C) == 0x0003B0, "Wrong size on ABP_RailSightChecker_C");
static_assert(offsetof(ABP_RailSightChecker_C, M_TargetLocation) == 0x000388, "Member 'ABP_RailSightChecker_C::M_TargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_RailSightChecker_C, M_IgnoreActor) == 0x000398, "Member 'ABP_RailSightChecker_C::M_IgnoreActor' has a wrong offset!");

}

