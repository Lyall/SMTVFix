#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleUtilIconActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleUtilIconActor.BattleUtilIconActor_C
// 0x0060 (0x0280 - 0x0220)
class ABattleUtilIconActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         M_PartyIndex;                                      // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   M_SocketName;                                      // 0x0234(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FE2[0x4];                                     // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             M_Transform;                                       // 0x0240(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UWB_BtlUtilIcon_C*                      M_UtilIcon;                                        // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            M_AnimCurve;                                       // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BattleUtilIconActor(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Show(E_BTL_UTIL_ICON_TYPE Type, const struct FVector& Location, float PlayRate);
	void IsFinished(bool* RetValue);
	void ShowByPartyIndex(E_BTL_UTIL_ICON_TYPE Type, float PlayRate, int32 PartyIndex, class FName SocketName);
	void GetBIPartySystem(TScriptInterface<class IBPI_BattleParty_C>* RetValue);
	void GetBIMainWork(TScriptInterface<class IBPI_BattleMain_C>* RetValue);
	void UpdateActorPosition(float Tick);
	void SetWidgetVisibility(bool IsVisible);
	void OnDisappearFinished();
	void Hide();
	void BI_IsFinished(bool* IsFinished);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleUtilIconActor_C">();
	}
	static class ABattleUtilIconActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABattleUtilIconActor_C>();
	}
};
static_assert(alignof(ABattleUtilIconActor_C) == 0x000010, "Wrong alignment on ABattleUtilIconActor_C");
static_assert(sizeof(ABattleUtilIconActor_C) == 0x000280, "Wrong size on ABattleUtilIconActor_C");
static_assert(offsetof(ABattleUtilIconActor_C, UberGraphFrame) == 0x000220, "Member 'ABattleUtilIconActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, DefaultSceneRoot) == 0x000228, "Member 'ABattleUtilIconActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, M_PartyIndex) == 0x000230, "Member 'ABattleUtilIconActor_C::M_PartyIndex' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, M_SocketName) == 0x000234, "Member 'ABattleUtilIconActor_C::M_SocketName' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, M_Transform) == 0x000240, "Member 'ABattleUtilIconActor_C::M_Transform' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, M_UtilIcon) == 0x000270, "Member 'ABattleUtilIconActor_C::M_UtilIcon' has a wrong offset!");
static_assert(offsetof(ABattleUtilIconActor_C, M_AnimCurve) == 0x000278, "Member 'ABattleUtilIconActor_C::M_AnimCurve' has a wrong offset!");

}

