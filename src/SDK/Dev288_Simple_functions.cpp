#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dev288_Simple

#include "Basic.hpp"

#include "Dev288_Simple_classes.hpp"
#include "Dev288_Simple_parameters.hpp"


namespace SDK
{

// Function Dev288_Simple.Dev288_Simple_C.ExecuteUbergraph_Dev288_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADev288_Simple_C::ExecuteUbergraph_Dev288_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev288_Simple_C", "ExecuteUbergraph_Dev288_Simple");

	Params::Dev288_Simple_C_ExecuteUbergraph_Dev288_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Dev288_Simple.Dev288_Simple_C.BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature
// (BlueprintEvent)

void ADev288_Simple_C::BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev288_Simple_C", "BndEvt__DevilMovement_K2Node_ComponentBoundEvent_0_CharaMovementUpdatedSignature__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Dev288_Simple.Dev288_Simple_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADev288_Simple_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Dev288_Simple_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

