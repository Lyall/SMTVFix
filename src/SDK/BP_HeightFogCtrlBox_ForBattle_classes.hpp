#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeightFogCtrlBox_ForBattle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ST_HeightFogParameter_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HeightFogCtrlBox_ForBattle.BP_HeightFogCtrlBox_ForBattle_C
// 0x00F8 (0x0318 - 0x0220)
class ABP_HeightFogCtrlBox_ForBattle_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  TargetFogActor;                                    // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetStartDistance;                               // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogCtrlHolder_C*                    CtrlHolder;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_HeightFogParameter                 InitialParam;                                      // 0x0250(0x0040)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_HeightFogParameter                 SrcParam;                                          // 0x0290(0x0040)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_HeightFogParameter                 DstParam;                                          // 0x02D0(0x0040)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHitting;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_HeightFogCtrlBox_ForBattle(int32 EntryPoint);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void BPI_EnvReset();
	void UserConstructionScript();
	void GetOrSpawnCtrlHolder(class ABP_FogCtrlHolder_C** OutCtrlHolder);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeightFogCtrlBox_ForBattle_C">();
	}
	static class ABP_HeightFogCtrlBox_ForBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HeightFogCtrlBox_ForBattle_C>();
	}
};
static_assert(alignof(ABP_HeightFogCtrlBox_ForBattle_C) == 0x000008, "Wrong alignment on ABP_HeightFogCtrlBox_ForBattle_C");
static_assert(sizeof(ABP_HeightFogCtrlBox_ForBattle_C) == 0x000318, "Wrong size on ABP_HeightFogCtrlBox_ForBattle_C");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, UberGraphFrame) == 0x000220, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, Box) == 0x000228, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, TargetFogActor) == 0x000238, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::TargetFogActor' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, TargetStartDistance) == 0x000240, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::TargetStartDistance' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, CtrlHolder) == 0x000248, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::CtrlHolder' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, InitialParam) == 0x000250, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::InitialParam' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, SrcParam) == 0x000290, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::SrcParam' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, DstParam) == 0x0002D0, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::DstParam' has a wrong offset!");
static_assert(offsetof(ABP_HeightFogCtrlBox_ForBattle_C, bHitting) == 0x000310, "Member 'ABP_HeightFogCtrlBox_ForBattle_C::bHitting' has a wrong offset!");

}

