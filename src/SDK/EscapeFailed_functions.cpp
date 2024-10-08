#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EscapeFailed

#include "Basic.hpp"

#include "EscapeFailed_classes.hpp"
#include "EscapeFailed_parameters.hpp"


namespace SDK
{

// Function EscapeFailed.EscapeFailed_C.ExecuteUbergraph_EscapeFailed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapeFailed_C::ExecuteUbergraph_EscapeFailed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "ExecuteUbergraph_EscapeFailed");

	Params::EscapeFailed_C_ExecuteUbergraph_EscapeFailed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapeFailed.EscapeFailed_C.SkillPerform
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapeFailed_C::SkillPerform(int32 Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "SkillPerform");

	Params::EscapeFailed_C_SkillPerform Parms{};

	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapeFailed.EscapeFailed_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapeFailed_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "ReceiveEndPlay");

	Params::EscapeFailed_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapeFailed.EscapeFailed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEscapeFailed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapeFailed.EscapeFailed_C.CounterFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEscapeFailed_C::CounterFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "CounterFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapeFailed.EscapeFailed_C.DeadFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEscapeFailed_C::DeadFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "DeadFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapeFailed.EscapeFailed_C.HitFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEscapeFailed_C::HitFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "HitFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapeFailed.EscapeFailed_C.IntroductionFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEscapeFailed_C::IntroductionFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "IntroductionFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapeFailed.EscapeFailed_C.FinishFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void AEscapeFailed_C::FinishFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapeFailed_C", "FinishFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

