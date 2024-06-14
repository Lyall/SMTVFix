#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GameOver

#include "Basic.hpp"

#include "WB_GameOver_classes.hpp"
#include "WB_GameOver_parameters.hpp"


namespace SDK
{

// Function WB_GameOver.WB_GameOver_C.ExecuteUbergraph_WB_GameOver
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameOver_C::ExecuteUbergraph_WB_GameOver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "ExecuteUbergraph_WB_GameOver");

	Params::WB_GameOver_C_ExecuteUbergraph_WB_GameOver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameOver.WB_GameOver_C.OnAnimationFinished_����_0
// (BlueprintCallable, BlueprintEvent)

void UWB_GameOver_C::OnAnimationFinished______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "OnAnimationFinished_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GameOver.WB_GameOver_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameOver_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "Tick");

	Params::WB_GameOver_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameOver.WB_GameOver_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_GameOver_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GameOver.WB_GameOver_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_GameOver_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "PreConstruct");

	Params::WB_GameOver_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_GameOver.WB_GameOver_C.GetColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWB_GameOver_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "GetColorAndOpacity_0");

	Params::WB_GameOver_C_GetColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_GameOver.WB_GameOver_C.GetColorAndOpacity_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWB_GameOver_C::GetColorAndOpacity_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "GetColorAndOpacity_1");

	Params::WB_GameOver_C_GetColorAndOpacity_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_GameOver.WB_GameOver_C.IsFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_GameOver_C::IsFinished(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "IsFinished");

	Params::WB_GameOver_C_IsFinished Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function WB_GameOver.WB_GameOver_C.GetResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GAMEOVER_RESULT                       RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameOver_C::GetResult(E_GAMEOVER_RESULT* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "GetResult");

	Params::WB_GameOver_C_GetResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function WB_GameOver.WB_GameOver_C.GetTargetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GameOver_C::GetTargetSlot(int32* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "GetTargetSlot");

	Params::WB_GameOver_C_GetTargetSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function WB_GameOver.WB_GameOver_C.IsDebugFinish
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_GameOver_C::IsDebugFinish(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GameOver_C", "IsDebugFinish");

	Params::WB_GameOver_C_IsDebugFinish Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}

}

