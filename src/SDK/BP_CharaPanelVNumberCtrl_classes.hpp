#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharaPanelVNumberCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharaPanelVNumberCtrl.BP_CharaPanelVNumberCtrl_C
// 0x0038 (0x02A0 - 0x0268)
class ABP_CharaPanelVNumberCtrl_C final : public ACharaPanelVNumberCtrlBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_CharaPanelVNumber_C*                WB_CharaPanelVNumber;                              // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_WIDGET_PRIO                                 WidgetPrio;                                        // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAddWidget;                                       // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C6B[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Animetime;                                         // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStartAnimation;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C6C[0x3];                                     // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         YPosition;                                         // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Gstatus;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speedrate;                                         // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CharaPanelVNumberCtrl(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Clearvnumber();
	void StartNumberAnimation(float InStartTime, const struct FVector2D& InAddVec);
	void BIESetStartFadeOutVNumberAnimation(int32 InIndex, int32 InDataType);
	void SetWidgetData(E_WIDGET_PRIO InPrio, const struct FVector2D& InPosition);
	void BIESetInitializeVNumberAnimation(int32 InIndex, int32 InDataType, int32 InNumber);
	void StopNumberAnimation();
	void GetMovePosition(float* OutYPosition);
	void CalcMove();
	void SetAnimationRate(float InRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharaPanelVNumberCtrl_C">();
	}
	static class ABP_CharaPanelVNumberCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CharaPanelVNumberCtrl_C>();
	}
};
static_assert(alignof(ABP_CharaPanelVNumberCtrl_C) == 0x000008, "Wrong alignment on ABP_CharaPanelVNumberCtrl_C");
static_assert(sizeof(ABP_CharaPanelVNumberCtrl_C) == 0x0002A0, "Wrong size on ABP_CharaPanelVNumberCtrl_C");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, UberGraphFrame) == 0x000268, "Member 'ABP_CharaPanelVNumberCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, DefaultSceneRoot) == 0x000270, "Member 'ABP_CharaPanelVNumberCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, WB_CharaPanelVNumber) == 0x000278, "Member 'ABP_CharaPanelVNumberCtrl_C::WB_CharaPanelVNumber' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, Position) == 0x000280, "Member 'ABP_CharaPanelVNumberCtrl_C::Position' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, WidgetPrio) == 0x000288, "Member 'ABP_CharaPanelVNumberCtrl_C::WidgetPrio' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, IsAddWidget) == 0x000289, "Member 'ABP_CharaPanelVNumberCtrl_C::IsAddWidget' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, Animetime) == 0x00028C, "Member 'ABP_CharaPanelVNumberCtrl_C::Animetime' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, IsStartAnimation) == 0x000290, "Member 'ABP_CharaPanelVNumberCtrl_C::IsStartAnimation' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, YPosition) == 0x000294, "Member 'ABP_CharaPanelVNumberCtrl_C::YPosition' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, Gstatus) == 0x000298, "Member 'ABP_CharaPanelVNumberCtrl_C::Gstatus' has a wrong offset!");
static_assert(offsetof(ABP_CharaPanelVNumberCtrl_C, Speedrate) == 0x00029C, "Member 'ABP_CharaPanelVNumberCtrl_C::Speedrate' has a wrong offset!");

}

