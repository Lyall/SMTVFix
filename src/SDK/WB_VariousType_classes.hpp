#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_VariousType

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_VariousType.WB_VariousType_C
// 0x0030 (0x0290 - 0x0260)
class UWB_VariousType_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanelMain;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerAnimation;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerData;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsStartAnimation;                                  // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5418[0x3];                                     // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Numbertype;                                        // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YPosition;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Animerate;                                         // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_VariousType(int32 EntryPoint);
	void BndEvt__SsPlayerAnimation_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartAnimation();
	void EndAnimation();
	void SetType(int32 InType);
	void IsAnimationEnd(bool* OutFinished);
	void SetAnimeRate(float InRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_VariousType_C">();
	}
	static class UWB_VariousType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_VariousType_C>();
	}
};
static_assert(alignof(UWB_VariousType_C) == 0x000008, "Wrong alignment on UWB_VariousType_C");
static_assert(sizeof(UWB_VariousType_C) == 0x000290, "Wrong size on UWB_VariousType_C");
static_assert(offsetof(UWB_VariousType_C, UberGraphFrame) == 0x000260, "Member 'UWB_VariousType_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, CanvasPanelMain) == 0x000268, "Member 'UWB_VariousType_C::CanvasPanelMain' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, SsPlayerAnimation) == 0x000270, "Member 'UWB_VariousType_C::SsPlayerAnimation' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, SsPlayerData) == 0x000278, "Member 'UWB_VariousType_C::SsPlayerData' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, IsStartAnimation) == 0x000280, "Member 'UWB_VariousType_C::IsStartAnimation' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, Numbertype) == 0x000284, "Member 'UWB_VariousType_C::Numbertype' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, YPosition) == 0x000288, "Member 'UWB_VariousType_C::YPosition' has a wrong offset!");
static_assert(offsetof(UWB_VariousType_C, Animerate) == 0x00028C, "Member 'UWB_VariousType_C::Animerate' has a wrong offset!");

}

