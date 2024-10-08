#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PressIconParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_PressIconParts.WB_PressIconParts_C
// 0x0028 (0x02D0 - 0x02A8)
class UWB_PressIconParts_C final : public UUIBtlPressIconPartsBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USsPlayerWidget*                        SsPlayerIcon;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   AnimPackIndex;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentFrame;                                      // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsAutoStartHalfIcon;                             // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsLooping;                                       // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsIconBreak;                                     // 0x02C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsHide;                                          // 0x02C7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsResumeIconAnim;                                // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_PressIconParts(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Evt_PlayIconAnim_ShowFirstFrame(class FName AnimPackName, class FName AnimationName, int32 LoopCount);
	void BP_HalfIconAddEffectStart(bool AutoLoop);
	void BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 Param_AnimPackIndex, int32 AnimationIndex);
	void BP_NormalIconHideStart(bool IsImmediately, bool IsIconBreak);
	void BP_NormalIconDrawStart(bool IsExtendedIcon);
	void BP_HalfIconHideStart(bool IsImmediately, bool IsIconBreak);
	void BP_HalfIconDrawStart();
	void Construct();
	void NormalIconDrawStart(bool IsExtended);
	void NormalIconHideStart();
	void HalfIconDrawStart();
	void HalfIconHideStart();
	void DecidePressIcon();
	void PlayIconAnim(int32 AnimationIndex, bool IsLoop);
	void CheckEndHalfBlink();
	void HalfIconAddEffectStart();
	void IsPlaying(bool* Playing);
	void IsChangable(bool* Playing);
	void IsIconShown(bool* Shown);
	void IsIconHide(bool* Hide);
	bool BP_IsChangable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_PressIconParts_C">();
	}
	static class UWB_PressIconParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_PressIconParts_C>();
	}
};
static_assert(alignof(UWB_PressIconParts_C) == 0x000008, "Wrong alignment on UWB_PressIconParts_C");
static_assert(sizeof(UWB_PressIconParts_C) == 0x0002D0, "Wrong size on UWB_PressIconParts_C");
static_assert(offsetof(UWB_PressIconParts_C, UberGraphFrame) == 0x0002A8, "Member 'UWB_PressIconParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, SsPlayerIcon) == 0x0002B0, "Member 'UWB_PressIconParts_C::SsPlayerIcon' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, AnimPackIndex) == 0x0002B8, "Member 'UWB_PressIconParts_C::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, CurrentFrame) == 0x0002C0, "Member 'UWB_PressIconParts_C::CurrentFrame' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, M_IsAutoStartHalfIcon) == 0x0002C4, "Member 'UWB_PressIconParts_C::M_IsAutoStartHalfIcon' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, M_IsLooping) == 0x0002C5, "Member 'UWB_PressIconParts_C::M_IsLooping' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, M_IsIconBreak) == 0x0002C6, "Member 'UWB_PressIconParts_C::M_IsIconBreak' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, M_IsHide) == 0x0002C7, "Member 'UWB_PressIconParts_C::M_IsHide' has a wrong offset!");
static_assert(offsetof(UWB_PressIconParts_C, M_IsResumeIconAnim) == 0x0002C8, "Member 'UWB_PressIconParts_C::M_IsResumeIconAnim' has a wrong offset!");

}

