#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TokyoMapUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TokyoMapUI.BP_TokyoMapUI_C
// 0x0068 (0x0288 - 0x0220)
class ABP_TokyoMapUI_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_TokyoMapUIBase_C*                   UI;                                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SoftUI;                                            // 0x0238(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UWB_TokyoMap_Icon_C*>            IconList;                                          // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWB_TokyoMap_Icon_C*>            TempList;                                          // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsView;                                            // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsShowingPlaceName;                                // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UpdateButtonHelp();
	void ShowButtonHelp(bool SkipAnimation);
	void Add_IconMission(const struct FVector& ActorLocation, int32 MissionId, class AActor* Param_Owner);
	void HidePlaceNameByDataId(int32 DataId);
	void ShowPlaceNameByDataId(int32 DataId);
	void EndView();
	void StartView(bool First);
	void ShowAllTarget();
	void SortIcon();
	void UpdateIcon();
	void DeleteIcon(class AActor* Param_Owner);
	void Add_IconTalk(const struct FVector& ActorLocation, class FName InactiveFlag, class AActor* Param_Owner);
	void ShowAllPlace();
	void DestroyUI();
	void CreateUI();
	void OnLoaded_C475E009499091F7F90930B59748C128(TSubclassOf<class UObject> Loaded);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Start();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TokyoMapUI(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TokyoMapUI_C">();
	}
	static class ABP_TokyoMapUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TokyoMapUI_C>();
	}
};
static_assert(alignof(ABP_TokyoMapUI_C) == 0x000008, "Wrong alignment on ABP_TokyoMapUI_C");
static_assert(sizeof(ABP_TokyoMapUI_C) == 0x000288, "Wrong size on ABP_TokyoMapUI_C");
static_assert(offsetof(ABP_TokyoMapUI_C, UberGraphFrame) == 0x000220, "Member 'ABP_TokyoMapUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_TokyoMapUI_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, UI) == 0x000230, "Member 'ABP_TokyoMapUI_C::UI' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, SoftUI) == 0x000238, "Member 'ABP_TokyoMapUI_C::SoftUI' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, IconList) == 0x000260, "Member 'ABP_TokyoMapUI_C::IconList' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, TempList) == 0x000270, "Member 'ABP_TokyoMapUI_C::TempList' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, IsView) == 0x000280, "Member 'ABP_TokyoMapUI_C::IsView' has a wrong offset!");
static_assert(offsetof(ABP_TokyoMapUI_C, IsShowingPlaceName) == 0x000281, "Member 'ABP_TokyoMapUI_C::IsShowingPlaceName' has a wrong offset!");

}

