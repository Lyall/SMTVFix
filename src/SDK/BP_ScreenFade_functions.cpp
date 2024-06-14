#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScreenFade

#include "Basic.hpp"

#include "BP_ScreenFade_classes.hpp"
#include "BP_ScreenFade_parameters.hpp"


namespace SDK
{

// Function BP_ScreenFade.BP_ScreenFade_C.ExecuteUbergraph_BP_ScreenFade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScreenFade_C::ExecuteUbergraph_BP_ScreenFade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "ExecuteUbergraph_BP_ScreenFade");

	Params::BP_ScreenFade_C_ExecuteUbergraph_BP_ScreenFade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScreenFade.BP_ScreenFade_C.BPI_EndFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ScreenFade_C::BPI_EndFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "BPI_EndFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScreenFade.BP_ScreenFade_C.BPI_EndFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ScreenFade_C::BPI_EndFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "BPI_EndFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScreenFade.BP_ScreenFade_C.GetWBScreenFade
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCreate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_ScreenFade_C*                 Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ScreenFade_C::GetWBScreenFade(bool IsCreate, class UWB_ScreenFade_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "GetWBScreenFade");

	Params::BP_ScreenFade_C_GetWBScreenFade Parms{};

	Parms.IsCreate = IsCreate;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BP_ScreenFade.BP_ScreenFade_C.DeleteWBScreenFade
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ScreenFade_C::DeleteWBScreenFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "DeleteWBScreenFade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScreenFade.BP_ScreenFade_C.IsFadeOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::IsFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "IsFadeOut");

	Params::BP_ScreenFade_C_IsFadeOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.IsFadeIn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::IsFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "IsFadeIn");

	Params::BP_ScreenFade_C_IsFadeIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.IsFadeAnim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::IsFadeAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "IsFadeAnim");

	Params::BP_ScreenFade_C_IsFadeAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.GetFadeState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_UI_FADE_STATE                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

E_UI_FADE_STATE UBP_ScreenFade_C::GetFadeState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "GetFadeState");

	Params::BP_ScreenFade_C_GetFadeState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.FadeIn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                           Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInterrupt                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::FadeIn(const struct FColor& Color, float Time, bool IsInterrupt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "FadeIn");

	Params::BP_ScreenFade_C_FadeIn Parms{};

	Parms.Color = std::move(Color);
	Parms.Time = Time;
	Parms.IsInterrupt = IsInterrupt;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.FadeOut
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FColor                           Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInterrupt                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::FadeOut(const struct FColor& Color, float Time, bool IsInterrupt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "FadeOut");

	Params::BP_ScreenFade_C_FadeOut Parms{};

	Parms.Color = std::move(Color);
	Parms.Time = Time;
	Parms.IsInterrupt = IsInterrupt;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.FadeClear
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::FadeClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "FadeClear");

	Params::BP_ScreenFade_C_FadeClear Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.DebugPrint_NoWidget
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_ScreenFade_C::DebugPrint_NoWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "DebugPrint_NoWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScreenFade.BP_ScreenFade_C.IsFadePaused
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::IsFadePaused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "IsFadePaused");

	Params::BP_ScreenFade_C_IsFadePaused Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ScreenFade.BP_ScreenFade_C.SetFadePaused
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_ScreenFade_C::SetFadePaused(bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScreenFade_C", "SetFadePaused");

	Params::BP_ScreenFade_C_SetFadePaused Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

