#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TurnChange

#include "Basic.hpp"

#include "WB_TurnChange_classes.hpp"
#include "WB_TurnChange_parameters.hpp"


namespace SDK
{

// Function WB_TurnChange.WB_TurnChange_C.OnFinishedTurnChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_TurnChange_C::OnFinishedTurnChange__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "OnFinishedTurnChange__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TurnChange.WB_TurnChange_C.ExecuteUbergraph_WB_TurnChange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TurnChange_C::ExecuteUbergraph_WB_TurnChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "ExecuteUbergraph_WB_TurnChange");

	Params::WB_TurnChange_C_ExecuteUbergraph_WB_TurnChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TurnChange.WB_TurnChange_C.BndEvt__SsPlayer_Turn_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TurnChange_C::BndEvt__SsPlayer_Turn_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "BndEvt__SsPlayer_Turn_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_TurnChange_C_BndEvt__SsPlayer_Turn_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TurnChange.WB_TurnChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TurnChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TurnChange.WB_TurnChange_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TurnChange_C::Play(bool IsPlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "Play");

	Params::WB_TurnChange_C_Play Parms{};

	Parms.IsPlayer = IsPlayer;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TurnChange.WB_TurnChange_C.IsPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Playing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TurnChange_C::IsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TurnChange_C", "IsPlaying");

	Params::WB_TurnChange_C_IsPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;
}

}

