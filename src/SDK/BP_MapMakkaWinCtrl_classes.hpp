#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapMakkaWinCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Project_structs.hpp"
#include "E_MakkaWindowAnimState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapMakkaWinCtrl.BP_MapMakkaWinCtrl_C
// 0x0058 (0x0278 - 0x0220)
class ABP_MapMakkaWinCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevMakka;                                         // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Add;                                               // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Counter;                                           // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Step;                                              // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 AddMakkaRequests;                                  // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PrevMakkaSet;                                      // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Lock;                                              // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A[0x2];                                      // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevMiitsu;                                        // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 AddMiitsuRequests;                                 // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMiitsu;                                          // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PrevMiitsuSet;                                     // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ManualNext;                                        // 0x0272(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MapMakkaWinCtrl(int32 EntryPoint);
	void BPI_SetLock_MapMakkaWin(bool Param_Lock, bool ReturnAreaName);
	void BPI_SetPrevMakka_MakkaWindow(int32 Param_PrevMakka);
	void BPI_OpenMapMakkaWin(int32 Param_PrevMakka, int32 AddMakka);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BPI_OpenMapMiitsuWin_ManualNext(int32 Param_PrevMiitsu, int32 AddMiitsu);
	void BPI_SetPrevMiitsu_MiitsuWindow(int32 Param_PrevMiitsu);
	void BPI_OpenMapMiitsuWin(int32 Param_PrevMiitsu, int32 AddMiitsu);
	void Tick_Miitsu();
	void ShowAreaName();
	void HideAreaName();
	void BPI_CheckActive(bool* Param_Active);
	void BPI_NextMapMiitsuWin(bool* Success);
	void BPI_CheckNext_MapMiitsuWin(bool* Next);
	void BPI_CheckActive_Miitsu(bool* Param_Active);
	void BPI_CheckNext_MimanMiitsu(bool* Next);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapMakkaWinCtrl_C">();
	}
	static class ABP_MapMakkaWinCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapMakkaWinCtrl_C>();
	}
};
static_assert(alignof(ABP_MapMakkaWinCtrl_C) == 0x000008, "Wrong alignment on ABP_MapMakkaWinCtrl_C");
static_assert(sizeof(ABP_MapMakkaWinCtrl_C) == 0x000278, "Wrong size on ABP_MapMakkaWinCtrl_C");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_MapMakkaWinCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_MapMakkaWinCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, PrevMakka) == 0x000230, "Member 'ABP_MapMakkaWinCtrl_C::PrevMakka' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, Add) == 0x000234, "Member 'ABP_MapMakkaWinCtrl_C::Add' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, Active) == 0x000238, "Member 'ABP_MapMakkaWinCtrl_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, Counter) == 0x00023C, "Member 'ABP_MapMakkaWinCtrl_C::Counter' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, Step) == 0x000240, "Member 'ABP_MapMakkaWinCtrl_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, AddMakkaRequests) == 0x000248, "Member 'ABP_MapMakkaWinCtrl_C::AddMakkaRequests' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, PrevMakkaSet) == 0x000258, "Member 'ABP_MapMakkaWinCtrl_C::PrevMakkaSet' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, Lock) == 0x000259, "Member 'ABP_MapMakkaWinCtrl_C::Lock' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, PrevMiitsu) == 0x00025C, "Member 'ABP_MapMakkaWinCtrl_C::PrevMiitsu' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, AddMiitsuRequests) == 0x000260, "Member 'ABP_MapMakkaWinCtrl_C::AddMiitsuRequests' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, IsMiitsu) == 0x000270, "Member 'ABP_MapMakkaWinCtrl_C::IsMiitsu' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, PrevMiitsuSet) == 0x000271, "Member 'ABP_MapMakkaWinCtrl_C::PrevMiitsuSet' has a wrong offset!");
static_assert(offsetof(ABP_MapMakkaWinCtrl_C, ManualNext) == 0x000272, "Member 'ABP_MapMakkaWinCtrl_C::ManualNext' has a wrong offset!");

}

