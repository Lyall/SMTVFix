#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NkmPlaceInFieldActor

#include "Basic.hpp"

#include "NkmPlaceInFieldActor_classes.hpp"
#include "NkmPlaceInFieldActor_parameters.hpp"


namespace SDK
{

// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.FinishedNkmPlaceInfield__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ANkmPlaceInFieldActor_C::FinishedNkmPlaceInfield__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "FinishedNkmPlaceInfield__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.ExecuteUbergraph_NkmPlaceInFieldActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANkmPlaceInFieldActor_C::ExecuteUbergraph_NkmPlaceInFieldActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "ExecuteUbergraph_NkmPlaceInFieldActor");

	Params::NkmPlaceInFieldActor_C_ExecuteUbergraph_NkmPlaceInFieldActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.Evt_BackStep
// (BlueprintCallable, BlueprintEvent)

void ANkmPlaceInFieldActor_C::Evt_BackStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "Evt_BackStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANkmPlaceInFieldActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "ReceiveTick");

	Params::NkmPlaceInFieldActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.Evt_NkmSpawn
// (BlueprintCallable, BlueprintEvent)

void ANkmPlaceInFieldActor_C::Evt_NkmSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "Evt_NkmSpawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANkmPlaceInFieldActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANkmPlaceInFieldActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NkmPlaceInFieldActor.NkmPlaceInFieldActor_C.FlipColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANkmPlaceInFieldActor_C::FlipColor(int32 Param_Index, bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NkmPlaceInFieldActor_C", "FlipColor");

	Params::NkmPlaceInFieldActor_C_FlipColor Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}

}

