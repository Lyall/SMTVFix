#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_ButtonEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Message_ButtonEffect.WB_Message_ButtonEffect_C
// 0x0020 (0x0280 - 0x0260)
class UWB_Message_ButtonEffect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_AutoView;                                     // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_ButtonAuto;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Auto;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_Message_ButtonEffect(int32 EntryPoint);
	void Play_AutoAnim(bool IsOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Message_ButtonEffect_C">();
	}
	static class UWB_Message_ButtonEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Message_ButtonEffect_C>();
	}
};
static_assert(alignof(UWB_Message_ButtonEffect_C) == 0x000008, "Wrong alignment on UWB_Message_ButtonEffect_C");
static_assert(sizeof(UWB_Message_ButtonEffect_C) == 0x000280, "Wrong size on UWB_Message_ButtonEffect_C");
static_assert(offsetof(UWB_Message_ButtonEffect_C, UberGraphFrame) == 0x000260, "Member 'UWB_Message_ButtonEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Message_ButtonEffect_C, Anim_AutoView) == 0x000268, "Member 'UWB_Message_ButtonEffect_C::Anim_AutoView' has a wrong offset!");
static_assert(offsetof(UWB_Message_ButtonEffect_C, Canvas_ButtonAuto) == 0x000270, "Member 'UWB_Message_ButtonEffect_C::Canvas_ButtonAuto' has a wrong offset!");
static_assert(offsetof(UWB_Message_ButtonEffect_C, Text_Auto) == 0x000278, "Member 'UWB_Message_ButtonEffect_C::Text_Auto' has a wrong offset!");

}

