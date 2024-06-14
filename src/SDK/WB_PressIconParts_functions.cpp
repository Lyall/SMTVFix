#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PressIconParts

#include "Basic.hpp"

#include "WB_PressIconParts_classes.hpp"
#include "WB_PressIconParts_parameters.hpp"


namespace SDK
{

// Function WB_PressIconParts.WB_PressIconParts_C.ExecuteUbergraph_WB_PressIconParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIconParts_C::ExecuteUbergraph_WB_PressIconParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "ExecuteUbergraph_WB_PressIconParts");

	Params::WB_PressIconParts_C_ExecuteUbergraph_WB_PressIconParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIconParts_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "Tick");

	Params::WB_PressIconParts_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.Evt_PlayIconAnim_ShowFirstFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LoopCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIconParts_C::Evt_PlayIconAnim_ShowFirstFrame(class FName AnimPackName, class FName AnimationName, int32 LoopCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "Evt_PlayIconAnim_ShowFirstFrame");

	Params::WB_PressIconParts_C_Evt_PlayIconAnim_ShowFirstFrame Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.LoopCount = LoopCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_HalfIconAddEffectStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    AutoLoop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::BP_HalfIconAddEffectStart(bool AutoLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_HalfIconAddEffectStart");

	Params::WB_PressIconParts_C_BP_HalfIconAddEffectStart Parms{};

	Parms.AutoLoop = AutoLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AnimPackIndex                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIconParts_C::BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 Param_AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_PressIconParts_C_BndEvt__SsPlayerIcon_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.Param_AnimPackIndex = Param_AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_NormalIconHideStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsImmediately                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsIconBreak                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::BP_NormalIconHideStart(bool IsImmediately, bool IsIconBreak)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_NormalIconHideStart");

	Params::WB_PressIconParts_C_BP_NormalIconHideStart Parms{};

	Parms.IsImmediately = IsImmediately;
	Parms.IsIconBreak = IsIconBreak;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_NormalIconDrawStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsExtendedIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::BP_NormalIconDrawStart(bool IsExtendedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_NormalIconDrawStart");

	Params::WB_PressIconParts_C_BP_NormalIconDrawStart Parms{};

	Parms.IsExtendedIcon = IsExtendedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_HalfIconHideStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsImmediately                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsIconBreak                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::BP_HalfIconHideStart(bool IsImmediately, bool IsIconBreak)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_HalfIconHideStart");

	Params::WB_PressIconParts_C_BP_HalfIconHideStart Parms{};

	Parms.IsImmediately = IsImmediately;
	Parms.IsIconBreak = IsIconBreak;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_HalfIconDrawStart
// (Event, Public, BlueprintEvent)

void UWB_PressIconParts_C::BP_HalfIconDrawStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_HalfIconDrawStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PressIconParts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.NormalIconDrawStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsExtended                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::NormalIconDrawStart(bool IsExtended)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "NormalIconDrawStart");

	Params::WB_PressIconParts_C_NormalIconDrawStart Parms{};

	Parms.IsExtended = IsExtended;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.NormalIconHideStart
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::NormalIconHideStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "NormalIconHideStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.HalfIconDrawStart
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::HalfIconDrawStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "HalfIconDrawStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.HalfIconHideStart
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::HalfIconHideStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "HalfIconHideStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.DecidePressIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::DecidePressIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "DecidePressIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.PlayIconAnim
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::PlayIconAnim(int32 AnimationIndex, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "PlayIconAnim");

	Params::WB_PressIconParts_C_PlayIconAnim Parms{};

	Parms.AnimationIndex = AnimationIndex;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIconParts.WB_PressIconParts_C.CheckEndHalfBlink
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::CheckEndHalfBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "CheckEndHalfBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.HalfIconAddEffectStart
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_PressIconParts_C::HalfIconAddEffectStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "HalfIconAddEffectStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIconParts.WB_PressIconParts_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Playing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::IsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "IsPlaying");

	Params::WB_PressIconParts_C_IsPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;
}


// Function WB_PressIconParts.WB_PressIconParts_C.IsChangable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Playing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::IsChangable(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "IsChangable");

	Params::WB_PressIconParts_C_IsChangable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;
}


// Function WB_PressIconParts.WB_PressIconParts_C.isIconShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Shown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::IsIconShown(bool* Shown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "isIconShown");

	Params::WB_PressIconParts_C_IsIconShown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shown != nullptr)
		*Shown = Parms.Shown;
}


// Function WB_PressIconParts.WB_PressIconParts_C.IsIconHide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIconParts_C::IsIconHide(bool* Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "IsIconHide");

	Params::WB_PressIconParts_C_IsIconHide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hide != nullptr)
		*Hide = Parms.Hide;
}


// Function WB_PressIconParts.WB_PressIconParts_C.BP_IsChangable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_PressIconParts_C::BP_IsChangable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIconParts_C", "BP_IsChangable");

	Params::WB_PressIconParts_C_BP_IsChangable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
