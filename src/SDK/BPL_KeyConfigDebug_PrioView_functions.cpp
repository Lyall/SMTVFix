#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_KeyConfigDebug_PrioView

#include "Basic.hpp"

#include "BPL_KeyConfigDebug_PrioView_classes.hpp"
#include "BPL_KeyConfigDebug_PrioView_parameters.hpp"


namespace SDK
{

// Function BPL_KeyConfigDebug_PrioView.BPL_KeyConfigDebug_PrioView_C.BPL_ShowDebugInputPrio
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_KeyConfigDebug_PrioView_C::BPL_ShowDebugInputPrio(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_KeyConfigDebug_PrioView_C", "BPL_ShowDebugInputPrio");

	Params::BPL_KeyConfigDebug_PrioView_C_BPL_ShowDebugInputPrio Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

