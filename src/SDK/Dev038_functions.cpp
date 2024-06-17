#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev038

#include "Basic.hpp"

#include "Dev038_classes.hpp"
#include "Dev038_parameters.hpp"


namespace SDK
{

// Function Dev038.Dev038_C.ActivateDyingParticle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADev038_C::ActivateDyingParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "ActivateDyingParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev038.Dev038_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADev038_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev038.Dev038_C.BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature
// (BlueprintEvent)

void ADev038_C::BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev038.Dev038_C.PlaySpeakingMotion
// (Public, BlueprintCallable, BlueprintEvent)

void ADev038_C::PlaySpeakingMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "PlaySpeakingMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev038.Dev038_C.ActivateAttachedParticles
// (Public, BlueprintCallable, BlueprintEvent)

void ADev038_C::ActivateAttachedParticles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "ActivateAttachedParticles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev038.Dev038_C.ExecuteUbergraph_Dev038
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADev038_C::ExecuteUbergraph_Dev038(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev038_C", "ExecuteUbergraph_Dev038");

	Params::Dev038_C_ExecuteUbergraph_Dev038 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

