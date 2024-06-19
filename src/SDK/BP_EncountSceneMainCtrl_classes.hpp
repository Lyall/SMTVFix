#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncountSceneMainCtrl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EncountSceneMainCtrl.BP_EncountSceneMainCtrl_C
// 0x0070 (0x0290 - 0x0220)
class ABP_EncountSceneMainCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_CenterY_4FF379314763697BF38EC093688E30A9; // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_CenterX_4FF379314763697BF38EC093688E30A9; // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_Amount_4FF379314763697BF38EC093688E30A9;  // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         _______0_Stride_4FF379314763697BF38EC093688E30A9;  // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            _______0__Direction_4FF379314763697BF38EC093688E30A9; // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526B[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     _______0;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_FadeOut_Alpha_77C9572D41764CAA7BD5B0AAEF120737; // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_FadeOut__Direction_77C9572D41764CAA7BD5B0AAEF120737; // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526C[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_FadeOut;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_EncountScene_C*                     Widget;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EvtDis_ReadyEncount;                               // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NewEffect;                                         // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReadyEncount;                                      // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Danger;                                            // 0x0282(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_526D[0x1];                                     // 0x0283(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ExposureSpeedUp;                                   // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExposureSpeedDown;                                 // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvtDis_ReadyEncount__DelegateSignature();
	void ExecuteUbergraph_BP_EncountSceneMainCtrl(int32 EntryPoint);
	void BPI_EncountSceneFadeIn(float Time);
	void ReceiveBeginPlay();
	void Timeline_FadeOut__UpdateFunc();
	void Timeline_FadeOut__FinishedFunc();
	void _______0__FadeStart__EventFunc();
	void _______0__Capture__EventFunc();
	void _______0__UpdateFunc();
	void _______0__FinishedFunc();
	void GetPostProcessVolume(class APostProcessVolume** Post);
	void BPI_ReadyEncountSceneFade(bool* Ready);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EncountSceneMainCtrl_C">();
	}
	static class ABP_EncountSceneMainCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EncountSceneMainCtrl_C>();
	}
};
static_assert(alignof(ABP_EncountSceneMainCtrl_C) == 0x000008, "Wrong alignment on ABP_EncountSceneMainCtrl_C");
static_assert(sizeof(ABP_EncountSceneMainCtrl_C) == 0x000290, "Wrong size on ABP_EncountSceneMainCtrl_C");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_EncountSceneMainCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, SceneCaptureComponent2D) == 0x000228, "Member 'ABP_EncountSceneMainCtrl_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_EncountSceneMainCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0_CenterY_4FF379314763697BF38EC093688E30A9) == 0x000238, "Member 'ABP_EncountSceneMainCtrl_C::_______0_CenterY_4FF379314763697BF38EC093688E30A9' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0_CenterX_4FF379314763697BF38EC093688E30A9) == 0x00023C, "Member 'ABP_EncountSceneMainCtrl_C::_______0_CenterX_4FF379314763697BF38EC093688E30A9' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0_Amount_4FF379314763697BF38EC093688E30A9) == 0x000240, "Member 'ABP_EncountSceneMainCtrl_C::_______0_Amount_4FF379314763697BF38EC093688E30A9' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0_Stride_4FF379314763697BF38EC093688E30A9) == 0x000244, "Member 'ABP_EncountSceneMainCtrl_C::_______0_Stride_4FF379314763697BF38EC093688E30A9' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0__Direction_4FF379314763697BF38EC093688E30A9) == 0x000248, "Member 'ABP_EncountSceneMainCtrl_C::_______0__Direction_4FF379314763697BF38EC093688E30A9' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, _______0) == 0x000250, "Member 'ABP_EncountSceneMainCtrl_C::_______0' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, Timeline_FadeOut_Alpha_77C9572D41764CAA7BD5B0AAEF120737) == 0x000258, "Member 'ABP_EncountSceneMainCtrl_C::Timeline_FadeOut_Alpha_77C9572D41764CAA7BD5B0AAEF120737' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, Timeline_FadeOut__Direction_77C9572D41764CAA7BD5B0AAEF120737) == 0x00025C, "Member 'ABP_EncountSceneMainCtrl_C::Timeline_FadeOut__Direction_77C9572D41764CAA7BD5B0AAEF120737' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, Timeline_FadeOut) == 0x000260, "Member 'ABP_EncountSceneMainCtrl_C::Timeline_FadeOut' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, Widget) == 0x000268, "Member 'ABP_EncountSceneMainCtrl_C::Widget' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, EvtDis_ReadyEncount) == 0x000270, "Member 'ABP_EncountSceneMainCtrl_C::EvtDis_ReadyEncount' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, NewEffect) == 0x000280, "Member 'ABP_EncountSceneMainCtrl_C::NewEffect' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, ReadyEncount) == 0x000281, "Member 'ABP_EncountSceneMainCtrl_C::ReadyEncount' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, Danger) == 0x000282, "Member 'ABP_EncountSceneMainCtrl_C::Danger' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, ExposureSpeedUp) == 0x000284, "Member 'ABP_EncountSceneMainCtrl_C::ExposureSpeedUp' has a wrong offset!");
static_assert(offsetof(ABP_EncountSceneMainCtrl_C, ExposureSpeedDown) == 0x000288, "Member 'ABP_EncountSceneMainCtrl_C::ExposureSpeedDown' has a wrong offset!");

}

