#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndOfBattle

#include "Basic.hpp"

#include "EndOfBattle_classes.hpp"
#include "EndOfBattle_parameters.hpp"


namespace SDK
{

// Function EndOfBattle.EndOfBattle_C.ExecuteUbergraph_EndOfBattle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEndOfBattle_C::ExecuteUbergraph_EndOfBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "ExecuteUbergraph_EndOfBattle");

	Params::EndOfBattle_C_ExecuteUbergraph_EndOfBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndOfBattle.EndOfBattle_C.Performe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEndOfBattle_C::Performe(int32 Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "Performe");

	Params::EndOfBattle_C_Performe Parms{};

	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndOfBattle.EndOfBattle_C.MagatukaPost__UpdateFunc
// (BlueprintEvent)

void AEndOfBattle_C::MagatukaPost__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "MagatukaPost__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.MagatukaPost__FinishedFunc
// (BlueprintEvent)

void AEndOfBattle_C::MagatukaPost__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "MagatukaPost__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEndOfBattle_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "ReceiveEndPlay");

	Params::EndOfBattle_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EndOfBattle.EndOfBattle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEndOfBattle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.CounterFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEndOfBattle_C::CounterFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "CounterFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.DeadFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEndOfBattle_C::DeadFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "DeadFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.HitFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEndOfBattle_C::HitFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "HitFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.IntroductionFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEndOfBattle_C::IntroductionFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "IntroductionFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EndOfBattle.EndOfBattle_C.FinishFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEndOfBattle_C::FinishFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EndOfBattle_C", "FinishFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

