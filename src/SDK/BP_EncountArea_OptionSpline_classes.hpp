#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountArea_OptionSpline

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EncountArea_OptionSpline.BP_EncountArea_OptionSpline_C
// 0x0028 (0x0248 - 0x0220)
class ABP_EncountArea_OptionSpline_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineLoop;                                        // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900E[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_EncountArea_OptionHit_C*>    OtherDiscoveryHitList;                             // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)

public:
	void UserConstructionScript();
	void GetSpline(class USplineComponent** Param_Spline);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EncountArea_OptionSpline_C">();
	}
	static class ABP_EncountArea_OptionSpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EncountArea_OptionSpline_C>();
	}
};
static_assert(alignof(ABP_EncountArea_OptionSpline_C) == 0x000008, "Wrong alignment on ABP_EncountArea_OptionSpline_C");
static_assert(sizeof(ABP_EncountArea_OptionSpline_C) == 0x000248, "Wrong size on ABP_EncountArea_OptionSpline_C");
static_assert(offsetof(ABP_EncountArea_OptionSpline_C, Spline) == 0x000220, "Member 'ABP_EncountArea_OptionSpline_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionSpline_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_EncountArea_OptionSpline_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionSpline_C, SplineLoop) == 0x000230, "Member 'ABP_EncountArea_OptionSpline_C::SplineLoop' has a wrong offset!");
static_assert(offsetof(ABP_EncountArea_OptionSpline_C, OtherDiscoveryHitList) == 0x000238, "Member 'ABP_EncountArea_OptionSpline_C::OtherDiscoveryHitList' has a wrong offset!");

}
