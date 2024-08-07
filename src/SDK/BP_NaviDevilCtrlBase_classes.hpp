#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilCtrlBase

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NaviDevilCtrlBase.BP_NaviDevilCtrlBase_C
// 0x0050 (0x0270 - 0x0220)
class ABP_NaviDevilCtrlBase_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  NaviDevilPawn;                                     // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         NaviDevilGimmicks;                                 // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                          FromLoad;                                          // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EvtDis_DeleteNaviDevil;                            // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EvtDis_SpawnNaviDevil;                             // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NaviMermaidDivingHitCount;                         // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_DeleteNaviDevil__DelegateSignature();
	void EvtDis_SpawnNaviDevil__DelegateSignature();
	void ChangeNaviDevil_FromEnum(E_NAVI_DEVIL NaviDevil, bool CalcOnGround);
	void ClearNaviDevil();
	void ChangeNaviDevil_FromPawn(class APawn* Pawn, E_NAVI_DEVIL NaviDevil);
	void CalcNaviGimmickExist_FromCategory(TArray<int32>& CategoryList, bool* NewParam);
	void GetGimmickInfoList(TArray<struct FNaviDevilGimmickActors>* List);
	void CalcNaviGimmickExist_Other();
	void RespawnNaviDevil_AfterEvent();
	void DestroyNaviDevil_BeforeEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NaviDevilCtrlBase_C">();
	}
	static class ABP_NaviDevilCtrlBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NaviDevilCtrlBase_C>();
	}
};
static_assert(alignof(ABP_NaviDevilCtrlBase_C) == 0x000008, "Wrong alignment on ABP_NaviDevilCtrlBase_C");
static_assert(sizeof(ABP_NaviDevilCtrlBase_C) == 0x000270, "Wrong size on ABP_NaviDevilCtrlBase_C");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_NaviDevilCtrlBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, NaviDevilPawn) == 0x000228, "Member 'ABP_NaviDevilCtrlBase_C::NaviDevilPawn' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, NaviDevilGimmicks) == 0x000230, "Member 'ABP_NaviDevilCtrlBase_C::NaviDevilGimmicks' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, FromLoad) == 0x000240, "Member 'ABP_NaviDevilCtrlBase_C::FromLoad' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, EvtDis_DeleteNaviDevil) == 0x000248, "Member 'ABP_NaviDevilCtrlBase_C::EvtDis_DeleteNaviDevil' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, EvtDis_SpawnNaviDevil) == 0x000258, "Member 'ABP_NaviDevilCtrlBase_C::EvtDis_SpawnNaviDevil' has a wrong offset!");
static_assert(offsetof(ABP_NaviDevilCtrlBase_C, NaviMermaidDivingHitCount) == 0x000268, "Member 'ABP_NaviDevilCtrlBase_C::NaviMermaidDivingHitCount' has a wrong offset!");

}

