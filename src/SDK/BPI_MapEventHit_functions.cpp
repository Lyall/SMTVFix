#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MapEventHit

#include "Basic.hpp"

#include "BPI_MapEventHit_classes.hpp"
#include "BPI_MapEventHit_parameters.hpp"


namespace SDK
{

// Function BPI_MapEventHit.BPI_MapEventHit_C.EventHitAction
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MapEventHit_C::EventHitAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "EventHitAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_MapEventHit.BPI_MapEventHit_C.EventHitIN
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MapEventHit_C::EventHitIN()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "EventHitIN");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_MapEventHit.BPI_MapEventHit_C.EventHitOUT
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_MapEventHit_C::EventHitOUT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "EventHitOUT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_MapEventHit.BPI_MapEventHit_C.DebugView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Bool                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MapEventHit_C::DebugView(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "DebugView");

	Params::BPI_MapEventHit_C_DebugView Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_MapEventHit.BPI_MapEventHit_C.HiddenVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MapEventHit_C::HiddenVolume(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "HiddenVolume");

	Params::BPI_MapEventHit_C_HiddenVolume Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_MapEventHit.BPI_MapEventHit_C.EventHitActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_MapEventHit_C::EventHitActivate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_MapEventHit_C", "EventHitActivate");

	Params::BPI_MapEventHit_C_EventHitActivate Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

}

