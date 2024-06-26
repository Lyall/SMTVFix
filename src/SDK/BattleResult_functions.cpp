#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleResult

#include "Basic.hpp"

#include "BattleResult_classes.hpp"
#include "BattleResult_parameters.hpp"


namespace SDK
{

// Function BattleResult.BattleResult_C.NewStartDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleResult_C::NewStartDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "NewStartDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.RenzokuEncountDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleResult_C::RenzokuEncountDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "RenzokuEncountDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.ExecuteUbergraph_BattleResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResult_C::ExecuteUbergraph_BattleResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "ExecuteUbergraph_BattleResult");

	Params::BattleResult_C_ExecuteUbergraph_BattleResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleResult.BattleResult_C.NewResultEnd
// (BlueprintCallable, BlueprintEvent)

void UBattleResult_C::NewResultEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "NewResultEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.RenzokuEncountResult
// (BlueprintCallable, BlueprintEvent)

void UBattleResult_C::RenzokuEncountResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "RenzokuEncountResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBattleResult_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.NewResultStart
// (BlueprintCallable, BlueprintEvent)

void UBattleResult_C::NewResultStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "NewResultStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.GetMainWork
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleMain_C*                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResult_C::GetMainWork(class ABattleMain_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "GetMainWork");

	Params::BattleResult_C_GetMainWork Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleResult.BattleResult_C.GetPartySystem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBattlePartySystem_C*             RetValue                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleResult_C::GetPartySystem(class UBattlePartySystem_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "GetPartySystem");

	Params::BattleResult_C_GetPartySystem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleResult.BattleResult_C.IsFinished
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBattleResult_C::IsFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "IsFinished");

	Params::BattleResult_C_IsFinished Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleResult.BattleResult_C.ApplyPartyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleResult_C::ApplyPartyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "ApplyPartyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleResult.BattleResult_C.ClearResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleResult_C::ClearResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleResult_C", "ClearResult");

	UObject::ProcessEvent(Func, nullptr);
}

}

