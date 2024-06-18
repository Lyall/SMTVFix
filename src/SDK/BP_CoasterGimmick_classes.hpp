#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterGimmick

#include "Basic.hpp"

#include "BP_CoasterGimmickBase_classes.hpp"
#include "Engine_structs.hpp"
#include "E_CoasterBeginningState_structs.hpp"
#include "E_MapGimmickHideReason_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CoasterGimmick.BP_CoasterGimmick_C
// 0x0098 (0x0500 - 0x0468)
class ABP_CoasterGimmick_C final : public ABP_CoasterGimmickBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_CoasterGimmick_C;                // 0x0468(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Scene8;                                            // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene7;                                            // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene6;                                            // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene5;                                            // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene4;                                            // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene3;                                            // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene2;                                            // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene1;                                            // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        NaviPositionList;                                  // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MapGimmickAreaEntry_C*             BPC_MapGimmickAreaEntry;                           // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_Alpha_E84B40CC433E395C092BED8CAACB2D4E;   // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_E84B40CC433E395C092BED8CAACB2D4E; // 0x04C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B7F[0x3];                                     // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CoasterBeginningState                       BeginningState;                                    // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B80[0x3];                                     // 0x04D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HideReason;                                        // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CoasterRelayPoint_C*                RelayPoint;                                        // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalcRelayPoint;                                    // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active_WhenFlag;                                   // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B81[0x6];                                     // 0x04E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  NaviPositionIgnores;                               // 0x04E8(0x0010)(Edit, BlueprintVisible)
	bool                                          NaviPositionView;                                  // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CoasterGimmick(int32 EntryPoint);
	void BPI_CallAfterNaviFound();
	void BndEvt__BP_CoasterGimmick_Hit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_CoasterGimmick_Hit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEvtDis_CallVisible(bool Visible);
	void OnEvtDis_StartMoveSpline();
	void SetMeshParam(bool Open, bool Animation);
	void FoundGimmick();
	void _EvtDis_EndShowSpline_();
	void EvtDis_Show_WalkedIn_(bool WalkedIn);
	void EvtDis_Hide_();
	void BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason);
	void BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason);
	void ReceiveBeginPlay();
	void Init();
	void OnEvtDis_EndMoveSpline();
	void EventHitAction();
	void OnLoaded_F3C8ACCB48DFF75596E91DAE0009CFD9(class UObject* Loaded);
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void UserConstructionScript();
	void CheckActive(bool* Active);
	void CheckExist(bool* Exist);
	void CalcIconDataID();
	void OpenIcon();
	void CalcNaviPosition(struct FVector* NaviPosition);
	void ProcRelay(bool RideOn);
	void GetMinimapDataID(int32* DataId);
	void CheckStartGimmick(bool* StartGimmick);
	void CheckNaviPositionEnable(int32 Param_Index, bool* Enable);
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);
	void BPI_SetDataId(int32 DataId, bool* Dummy);
	void BPI_CheckExist(bool* Exist);
	void BPI_CheckActive_WhenFlag(bool* Active);
	void BPI_GetMinimapDataID(int32* DataId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CoasterGimmick_C">();
	}
	static class ABP_CoasterGimmick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CoasterGimmick_C>();
	}
};
static_assert(alignof(ABP_CoasterGimmick_C) == 0x000008, "Wrong alignment on ABP_CoasterGimmick_C");
static_assert(sizeof(ABP_CoasterGimmick_C) == 0x000500, "Wrong size on ABP_CoasterGimmick_C");
static_assert(offsetof(ABP_CoasterGimmick_C, UberGraphFrame_BP_CoasterGimmick_C) == 0x000468, "Member 'ABP_CoasterGimmick_C::UberGraphFrame_BP_CoasterGimmick_C' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene8) == 0x000470, "Member 'ABP_CoasterGimmick_C::Scene8' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene7) == 0x000478, "Member 'ABP_CoasterGimmick_C::Scene7' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene6) == 0x000480, "Member 'ABP_CoasterGimmick_C::Scene6' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene5) == 0x000488, "Member 'ABP_CoasterGimmick_C::Scene5' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene4) == 0x000490, "Member 'ABP_CoasterGimmick_C::Scene4' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene3) == 0x000498, "Member 'ABP_CoasterGimmick_C::Scene3' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene2) == 0x0004A0, "Member 'ABP_CoasterGimmick_C::Scene2' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Scene1) == 0x0004A8, "Member 'ABP_CoasterGimmick_C::Scene1' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, NaviPositionList) == 0x0004B0, "Member 'ABP_CoasterGimmick_C::NaviPositionList' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, BPC_MapGimmickAreaEntry) == 0x0004B8, "Member 'ABP_CoasterGimmick_C::BPC_MapGimmickAreaEntry' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, _______0_Alpha_E84B40CC433E395C092BED8CAACB2D4E) == 0x0004C0, "Member 'ABP_CoasterGimmick_C::_______0_Alpha_E84B40CC433E395C092BED8CAACB2D4E' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, _______0__Direction_E84B40CC433E395C092BED8CAACB2D4E) == 0x0004C4, "Member 'ABP_CoasterGimmick_C::_______0__Direction_E84B40CC433E395C092BED8CAACB2D4E' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, _______0) == 0x0004C8, "Member 'ABP_CoasterGimmick_C::_______0' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, BeginningState) == 0x0004D0, "Member 'ABP_CoasterGimmick_C::BeginningState' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, HideReason) == 0x0004D4, "Member 'ABP_CoasterGimmick_C::HideReason' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, RelayPoint) == 0x0004D8, "Member 'ABP_CoasterGimmick_C::RelayPoint' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, CalcRelayPoint) == 0x0004E0, "Member 'ABP_CoasterGimmick_C::CalcRelayPoint' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, Active_WhenFlag) == 0x0004E1, "Member 'ABP_CoasterGimmick_C::Active_WhenFlag' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, NaviPositionIgnores) == 0x0004E8, "Member 'ABP_CoasterGimmick_C::NaviPositionIgnores' has a wrong offset!");
static_assert(offsetof(ABP_CoasterGimmick_C, NaviPositionView) == 0x0004F8, "Member 'ABP_CoasterGimmick_C::NaviPositionView' has a wrong offset!");

}

