#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugKeyboard

#include "Basic.hpp"

#include "BPL_DebugKeyboard_classes.hpp"
#include "BPL_DebugKeyboard_parameters.hpp"


namespace SDK
{

// Function BPL_DebugKeyboard.BPL_DebugKeyboard_C.AddDebugMenuKeyboardDebug
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_DebugKeyboard_C::AddDebugMenuKeyboardDebug(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_DebugKeyboard_C", "AddDebugMenuKeyboardDebug");

	Params::BPL_DebugKeyboard_C_AddDebugMenuKeyboardDebug Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

