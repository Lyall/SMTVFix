#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_LocationWin

#include "Basic.hpp"

#include "WB_LocationWin_classes.hpp"
#include "WB_LocationWin_parameters.hpp"


namespace SDK
{

// Function WB_LocationWin.WB_LocationWin_C.ExecuteUbergraph_WB_LocationWin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LocationWin_C::ExecuteUbergraph_WB_LocationWin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "ExecuteUbergraph_WB_LocationWin");

	Params::WB_LocationWin_C_ExecuteUbergraph_WB_LocationWin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LocationWin.WB_LocationWin_C.BndEvt__SsPlayerMapAreaName_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LocationWin_C::BndEvt__SsPlayerMapAreaName_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "BndEvt__SsPlayerMapAreaName_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_LocationWin_C_BndEvt__SsPlayerMapAreaName_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LocationWin.WB_LocationWin_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LocationWin_C::Close(bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "Close");

	Params::WB_LocationWin_C_Close Parms{};

	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LocationWin.WB_LocationWin_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_LocationWin_C::Open(bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "Open");

	Params::WB_LocationWin_C_Open Parms{};

	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_LocationWin.WB_LocationWin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_LocationWin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LocationWin.WB_LocationWin_C.GetMapAreaNameText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_LocationWin_C::GetMapAreaNameText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "GetMapAreaNameText");

	Params::WB_LocationWin_C_GetMapAreaNameText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_LocationWin.WB_LocationWin_C.SetOtherColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_LocationWin_C::SetOtherColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "SetOtherColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LocationWin.WB_LocationWin_C.SetNormalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_LocationWin_C::SetNormalColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "SetNormalColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_LocationWin.WB_LocationWin_C.Get_AtRichText_Location_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWB_LocationWin_C::Get_AtRichText_Location_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "Get_AtRichText_Location_ColorAndOpacity_0");

	Params::WB_LocationWin_C_Get_AtRichText_Location_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_LocationWin.WB_LocationWin_C.SetCurrentText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_LocationWin_C::SetCurrentText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "SetCurrentText");

	Params::WB_LocationWin_C_SetCurrentText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	InText = std::move(Parms.InText);
}


// Function WB_LocationWin.WB_LocationWin_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_LOCATION_WINDOW_STATE                 State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LocationWin_C::GetState(E_LOCATION_WINDOW_STATE* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_LocationWin_C", "GetState");

	Params::WB_LocationWin_C_GetState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}

}

