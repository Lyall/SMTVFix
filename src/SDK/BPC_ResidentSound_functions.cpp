#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_ResidentSound

#include "Basic.hpp"

#include "BPC_ResidentSound_classes.hpp"
#include "BPC_ResidentSound_parameters.hpp"


namespace SDK
{

// Function BPC_ResidentSound.BPC_ResidentSound_C.ExecuteUbergraph_BPC_ResidentSound
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ResidentSound_C::ExecuteUbergraph_BPC_ResidentSound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "ExecuteUbergraph_BPC_ResidentSound");

	Params::BPC_ResidentSound_C_ExecuteUbergraph_BPC_ResidentSound Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ResidentSound.BPC_ResidentSound_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ResidentSound_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "ReceiveEndPlay");

	Params::BPC_ResidentSound_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ResidentSound.BPC_ResidentSound_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UBPC_ResidentSound_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_ResidentSound.BPC_ResidentSound_C.Play
// (BlueprintCallable, BlueprintEvent)

void UBPC_ResidentSound_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_ResidentSound.BPC_ResidentSound_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_ResidentSound_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "ReceiveTick");

	Params::BPC_ResidentSound_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_ResidentSound.BPC_ResidentSound_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_ResidentSound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_ResidentSound_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

