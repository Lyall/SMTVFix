#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_UIDebugMenu

#include "Basic.hpp"

#include "BPL_UIDebugMenu_classes.hpp"
#include "BPL_UIDebugMenu_parameters.hpp"


namespace SDK
{

// Function BPL_UIDebugMenu.BPL_UIDebugMenu_C.AddDebugMenu_UIDebug
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_UIDebugMenu_C::AddDebugMenu_UIDebug(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_UIDebugMenu_C", "AddDebugMenu_UIDebug");

	Params::BPL_UIDebugMenu_C_AddDebugMenu_UIDebug Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

