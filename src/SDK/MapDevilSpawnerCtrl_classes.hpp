#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapDevilSpawnerCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapDevilSpawnerCtrl.MapDevilSpawnerCtrl_C
// 0x0080 (0x02A0 - 0x0220)
class AMapDevilSpawnerCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NkmId;                                             // 0x0238(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         SpawnNum;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         TestScale;                                         // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharaBase_C*>                   DevilArray;                                        // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LoadFinish;                                        // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<E_BTL_CHAR_TYPE>                       CharTypeList;                                      // 0x0270(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class AMapDevilSpawner_C*                     DevilSpawner;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMapPlayerSpawner_C*                    PlayerSpawner;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartIndex;                                        // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_InitialVisibility;                               // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_Delay;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_ValidDevils;                                     // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void LoadFinish__DelegateSignature();
	void ExecuteUbergraph_MapDevilSpawnerCtrl(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void GetPlayerUnit(E_BTL_CHAR_TYPE Type, class ACharaBase_C** RetValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapDevilSpawnerCtrl_C">();
	}
	static class AMapDevilSpawnerCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapDevilSpawnerCtrl_C>();
	}
};
static_assert(alignof(AMapDevilSpawnerCtrl_C) == 0x000008, "Wrong alignment on AMapDevilSpawnerCtrl_C");
static_assert(sizeof(AMapDevilSpawnerCtrl_C) == 0x0002A0, "Wrong size on AMapDevilSpawnerCtrl_C");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, UberGraphFrame) == 0x000220, "Member 'AMapDevilSpawnerCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'AMapDevilSpawnerCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, DeltaTime) == 0x000230, "Member 'AMapDevilSpawnerCtrl_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, NkmId) == 0x000238, "Member 'AMapDevilSpawnerCtrl_C::NkmId' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, SpawnNum) == 0x000248, "Member 'AMapDevilSpawnerCtrl_C::SpawnNum' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, TestScale) == 0x00024C, "Member 'AMapDevilSpawnerCtrl_C::TestScale' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, DevilArray) == 0x000250, "Member 'AMapDevilSpawnerCtrl_C::DevilArray' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, LoadFinish) == 0x000260, "Member 'AMapDevilSpawnerCtrl_C::LoadFinish' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, CharTypeList) == 0x000270, "Member 'AMapDevilSpawnerCtrl_C::CharTypeList' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, DevilSpawner) == 0x000280, "Member 'AMapDevilSpawnerCtrl_C::DevilSpawner' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, PlayerSpawner) == 0x000288, "Member 'AMapDevilSpawnerCtrl_C::PlayerSpawner' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, StartIndex) == 0x000290, "Member 'AMapDevilSpawnerCtrl_C::StartIndex' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, M_InitialVisibility) == 0x000294, "Member 'AMapDevilSpawnerCtrl_C::M_InitialVisibility' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, M_Delay) == 0x000298, "Member 'AMapDevilSpawnerCtrl_C::M_Delay' has a wrong offset!");
static_assert(offsetof(AMapDevilSpawnerCtrl_C, M_ValidDevils) == 0x00029C, "Member 'AMapDevilSpawnerCtrl_C::M_ValidDevils' has a wrong offset!");

}

