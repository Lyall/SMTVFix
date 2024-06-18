#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapInfoWinCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapInfoWinCtrl.BP_MapInfoWinCtrl_C
// 0x0118 (0x0338 - 0x0220)
class ABP_MapInfoWinCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_InfoWindowCtrl_C> BPI_Info;                                          // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Step;                                              // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSec;                                          // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CounterAfterOpen;                                  // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Lock;                                              // 0x024C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD53[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShowTime;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD54[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMapInfoData>                   RequestInfoList;                                   // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMapInfoData                           CurrentMapInfo;                                    // 0x0268(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMapInfoData                           Temp;                                              // 0x02C0(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          RecordWaiting;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD55[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMapInfoData>                   Temps;                                             // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LoadingSE;                                         // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MapInfoWinCtrl(int32 EntryPoint);
	void BPI_OpenMapInfo_Mission(class FName Label, const TArray<int32>& TagParams, TSoftObjectPtr<class USoundAtomCue> OpenSE, int32 MissionId);
	void BPI_CancelMissionMapInfo(int32 MissionId);
	void BPI_ClearMapInfo(class FName Label);
	void BPI_OpenWaitingMapInfo();
	void BPI_OpenMapInfo_AndMakkaWindow(int32 PrevMakka, int32 AddMakka);
	void BPI_OpenMapInfo(class FName Label, const TArray<int32>& TagParams, TSoftObjectPtr<class USoundAtomCue> OpenSE, bool RemoveSameInfo, int32 RemoveSameInfoID);
	void BPI_DefaultShowTime();
	void BPI_SetShowTime(float Time);
	void BPI_SetLock_MapInfo(bool Param_Lock);
	void OpenInfo_Core(const struct FMapInfoData& MapInfo);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_061010E64F261AEA3C2CF7AF916F603F(class UObject* Loaded);
	void OnLoaded_2DB4BB56418FE0CFCAEFF8BD4FF5F24A(class UObject* Loaded);
	void CompareMissionInfo(int32 MissionId, struct FMapInfoData& MapInfoData, bool* Equal);
	void BPI_CheckActive(bool* Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapInfoWinCtrl_C">();
	}
	static class ABP_MapInfoWinCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapInfoWinCtrl_C>();
	}
};
static_assert(alignof(ABP_MapInfoWinCtrl_C) == 0x000008, "Wrong alignment on ABP_MapInfoWinCtrl_C");
static_assert(sizeof(ABP_MapInfoWinCtrl_C) == 0x000338, "Wrong size on ABP_MapInfoWinCtrl_C");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_MapInfoWinCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_MapInfoWinCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, BPI_Info) == 0x000230, "Member 'ABP_MapInfoWinCtrl_C::BPI_Info' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, Step) == 0x000240, "Member 'ABP_MapInfoWinCtrl_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, DeltaSec) == 0x000244, "Member 'ABP_MapInfoWinCtrl_C::DeltaSec' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, CounterAfterOpen) == 0x000248, "Member 'ABP_MapInfoWinCtrl_C::CounterAfterOpen' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, Lock) == 0x00024C, "Member 'ABP_MapInfoWinCtrl_C::Lock' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, ShowTime) == 0x000250, "Member 'ABP_MapInfoWinCtrl_C::ShowTime' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, RequestInfoList) == 0x000258, "Member 'ABP_MapInfoWinCtrl_C::RequestInfoList' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, CurrentMapInfo) == 0x000268, "Member 'ABP_MapInfoWinCtrl_C::CurrentMapInfo' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, Temp) == 0x0002C0, "Member 'ABP_MapInfoWinCtrl_C::Temp' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, RecordWaiting) == 0x000318, "Member 'ABP_MapInfoWinCtrl_C::RecordWaiting' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, Temps) == 0x000320, "Member 'ABP_MapInfoWinCtrl_C::Temps' has a wrong offset!");
static_assert(offsetof(ABP_MapInfoWinCtrl_C, LoadingSE) == 0x000330, "Member 'ABP_MapInfoWinCtrl_C::LoadingSE' has a wrong offset!");

}

