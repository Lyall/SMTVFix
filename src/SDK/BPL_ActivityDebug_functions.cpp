#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_ActivityDebug

#include "Basic.hpp"

#include "BPL_ActivityDebug_classes.hpp"
#include "BPL_ActivityDebug_parameters.hpp"


namespace SDK
{

// Function BPL_ActivityDebug.BPL_ActivityDebug_C.AddDebugMenuActivityDebug
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_ActivityDebug_C::AddDebugMenuActivityDebug(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ActivityDebug_C", "AddDebugMenuActivityDebug");

	Params::BPL_ActivityDebug_C_AddDebugMenuActivityDebug Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
