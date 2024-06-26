#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2191

#include "Basic.hpp"

#include "MM_M061_EM2191_classes.hpp"
#include "MM_M061_EM2191_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM2191.MM_M061_EM2191_C.ExecuteUbergraph_MM_M061_EM2191
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2191_C::ExecuteUbergraph_MM_M061_EM2191(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "ExecuteUbergraph_MM_M061_EM2191");

	Params::MM_M061_EM2191_C_ExecuteUbergraph_MM_M061_EM2191 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2191.MM_M061_EM2191_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2191_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2191.MM_M061_EM2191_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM2191_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2191.MM_M061_EM2191_C.OnLoaded_CA4C919B47E016D1B6B5949FF69A78D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2191_C::OnLoaded_CA4C919B47E016D1B6B5949FF69A78D8(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "OnLoaded_CA4C919B47E016D1B6B5949FF69A78D8");

	Params::MM_M061_EM2191_C_OnLoaded_CA4C919B47E016D1B6B5949FF69A78D8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2191.MM_M061_EM2191_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2191_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2191.MM_M061_EM2191_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2191_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2191_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

