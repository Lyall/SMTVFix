#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Loading

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_LoadingList_structs.hpp"
#include "ST_ViewList_structs.hpp"
#include "UMG_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Loading.WB_Loading_C
// 0x0070 (0x02D0 - 0x0260)
class UWB_Loading_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LoadingAnimation;                                  // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Character;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SSPlayerLoadingBlack;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SSPlayerLoadingWhite;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MultiLineRichText_C*                WB_MultiLineRichText;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flag;                                              // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29D[0x3];                                      // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FST_LoadingList>                List;                                              // 0x02A0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FST_ViewList>                   ViewList;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Rand;                                              // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Counter;                                           // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NOT_DevilView;                                     // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x3];                                      // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MapId;                                             // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Loading(int32 EntryPoint);
	void DebugChangeView(int32 Num);
	void DebugViewSetup();
	void HIddenDevil();
	void SetProfile(int32 Count);
	void OnInitialized();
	void SetNowLoadingBlackFadeOut();
	void SetNowLoadingWhiteFadeOut();
	void SetNowLoadingBlack();
	void BndEvt__SSPlayerLoadingWhite_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SSPlayerLoadingBlack_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void SetNowLoadingWhite();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetCharacterLabel(class FName InCharacterLabel, class FName InMessageLabel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Loading_C">();
	}
	static class UWB_Loading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Loading_C>();
	}
};
static_assert(alignof(UWB_Loading_C) == 0x000008, "Wrong alignment on UWB_Loading_C");
static_assert(sizeof(UWB_Loading_C) == 0x0002D0, "Wrong size on UWB_Loading_C");
static_assert(offsetof(UWB_Loading_C, UberGraphFrame) == 0x000260, "Member 'UWB_Loading_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, LoadingAnimation) == 0x000268, "Member 'UWB_Loading_C::LoadingAnimation' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Image_Background) == 0x000270, "Member 'UWB_Loading_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Image_Character) == 0x000278, "Member 'UWB_Loading_C::Image_Character' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, SSPlayerLoadingBlack) == 0x000280, "Member 'UWB_Loading_C::SSPlayerLoadingBlack' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, SSPlayerLoadingWhite) == 0x000288, "Member 'UWB_Loading_C::SSPlayerLoadingWhite' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, WB_MultiLineRichText) == 0x000290, "Member 'UWB_Loading_C::WB_MultiLineRichText' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Time) == 0x000298, "Member 'UWB_Loading_C::Time' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Flag) == 0x00029C, "Member 'UWB_Loading_C::Flag' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, List) == 0x0002A0, "Member 'UWB_Loading_C::List' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, ViewList) == 0x0002B0, "Member 'UWB_Loading_C::ViewList' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Rand) == 0x0002C0, "Member 'UWB_Loading_C::Rand' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, Counter) == 0x0002C4, "Member 'UWB_Loading_C::Counter' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, NOT_DevilView) == 0x0002C8, "Member 'UWB_Loading_C::NOT_DevilView' has a wrong offset!");
static_assert(offsetof(UWB_Loading_C, MapId) == 0x0002CC, "Member 'UWB_Loading_C::MapId' has a wrong offset!");

}

