#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TalkAngryLight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TalkAngryLight.BP_TalkAngryLight_C
// 0x0050 (0x0270 - 0x0220)
class ABP_TalkAngryLight_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight1;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                _______1_Moving_3B82250E4CEB8D667D97429BF1E4E7AB;  // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______1__Direction_3B82250E4CEB8D667D97429BF1E4E7AB; // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______1;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                _______0_Moving_15548B6249704A019EC2A0AF0E70B629;  // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_15548B6249704A019EC2A0AF0E70B629; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TalkAngryLight(int32 EntryPoint);
	void ReceiveBeginPlay();
	void _______1__UpdateFunc();
	void _______1__FinishedFunc();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TalkAngryLight_C">();
	}
	static class ABP_TalkAngryLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TalkAngryLight_C>();
	}
};
static_assert(alignof(ABP_TalkAngryLight_C) == 0x000008, "Wrong alignment on ABP_TalkAngryLight_C");
static_assert(sizeof(ABP_TalkAngryLight_C) == 0x000270, "Wrong size on ABP_TalkAngryLight_C");
static_assert(offsetof(ABP_TalkAngryLight_C, UberGraphFrame) == 0x000220, "Member 'ABP_TalkAngryLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, PointLight1) == 0x000228, "Member 'ABP_TalkAngryLight_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, PointLight) == 0x000230, "Member 'ABP_TalkAngryLight_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_TalkAngryLight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______1_Moving_3B82250E4CEB8D667D97429BF1E4E7AB) == 0x000240, "Member 'ABP_TalkAngryLight_C::_______1_Moving_3B82250E4CEB8D667D97429BF1E4E7AB' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______1__Direction_3B82250E4CEB8D667D97429BF1E4E7AB) == 0x00024C, "Member 'ABP_TalkAngryLight_C::_______1__Direction_3B82250E4CEB8D667D97429BF1E4E7AB' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______1) == 0x000250, "Member 'ABP_TalkAngryLight_C::_______1' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______0_Moving_15548B6249704A019EC2A0AF0E70B629) == 0x000258, "Member 'ABP_TalkAngryLight_C::_______0_Moving_15548B6249704A019EC2A0AF0E70B629' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______0__Direction_15548B6249704A019EC2A0AF0E70B629) == 0x000264, "Member 'ABP_TalkAngryLight_C::_______0__Direction_15548B6249704A019EC2A0AF0E70B629' has a wrong offset!");
static_assert(offsetof(ABP_TalkAngryLight_C, _______0) == 0x000268, "Member 'ABP_TalkAngryLight_C::_______0' has a wrong offset!");

}

