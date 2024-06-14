#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapCoasterLIne

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MinimapCoasterLIne.WB_MinimapCoasterLIne_C
// 0x0028 (0x0288 - 0x0260)
class UWB_MinimapCoasterLIne_C final : public UUserWidget
{
public:
	class UOverlay*                               AllOverlay;                                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MinimapImage;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MiniOverlay;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ParentOverlay;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      Coaster_MI;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StartCoasterLineAllMode();
	void FinishCoasterLineAllMode();
	void StartCoasterLineMinimapMode();
	void FinishCoasterLineMinimapMode();
	void SetMiniAlpha(float Alpha);
	void SetAllAlpha(float Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MinimapCoasterLIne_C">();
	}
	static class UWB_MinimapCoasterLIne_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MinimapCoasterLIne_C>();
	}
};
static_assert(alignof(UWB_MinimapCoasterLIne_C) == 0x000008, "Wrong alignment on UWB_MinimapCoasterLIne_C");
static_assert(sizeof(UWB_MinimapCoasterLIne_C) == 0x000288, "Wrong size on UWB_MinimapCoasterLIne_C");
static_assert(offsetof(UWB_MinimapCoasterLIne_C, AllOverlay) == 0x000260, "Member 'UWB_MinimapCoasterLIne_C::AllOverlay' has a wrong offset!");
static_assert(offsetof(UWB_MinimapCoasterLIne_C, MinimapImage) == 0x000268, "Member 'UWB_MinimapCoasterLIne_C::MinimapImage' has a wrong offset!");
static_assert(offsetof(UWB_MinimapCoasterLIne_C, MiniOverlay) == 0x000270, "Member 'UWB_MinimapCoasterLIne_C::MiniOverlay' has a wrong offset!");
static_assert(offsetof(UWB_MinimapCoasterLIne_C, ParentOverlay) == 0x000278, "Member 'UWB_MinimapCoasterLIne_C::ParentOverlay' has a wrong offset!");
static_assert(offsetof(UWB_MinimapCoasterLIne_C, Coaster_MI) == 0x000280, "Member 'UWB_MinimapCoasterLIne_C::Coaster_MI' has a wrong offset!");

}

