#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_ConsoleCommand

#include "Basic.hpp"

#include "BPL_ConsoleCommand_classes.hpp"
#include "BPL_ConsoleCommand_parameters.hpp"


namespace SDK
{

// Function BPL_ConsoleCommand.BPL_ConsoleCommand_C.AddDebugMenuConsoleCommand
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_ConsoleCommand_C::AddDebugMenuConsoleCommand(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ConsoleCommand_C", "AddDebugMenuConsoleCommand");

	Params::BPL_ConsoleCommand_C_AddDebugMenuConsoleCommand Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_ConsoleCommand.BPL_ConsoleCommand_C.AddDebugMenuConsoleCommand_FPS
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_ConsoleCommand_C::AddDebugMenuConsoleCommand_FPS(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ConsoleCommand_C", "AddDebugMenuConsoleCommand_FPS");

	Params::BPL_ConsoleCommand_C_AddDebugMenuConsoleCommand_FPS Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_ConsoleCommand.BPL_ConsoleCommand_C.AddDebugMenuConsoleCommand_DebugFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_ConsoleCommand_C::AddDebugMenuConsoleCommand_DebugFlag(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ConsoleCommand_C", "AddDebugMenuConsoleCommand_DebugFlag");

	Params::BPL_ConsoleCommand_C_AddDebugMenuConsoleCommand_DebugFlag Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_ConsoleCommand.BPL_ConsoleCommand_C.IsDisableDebugMenu
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Disable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_ConsoleCommand_C::IsDisableDebugMenu(class UObject* __WorldContext, bool* Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ConsoleCommand_C", "IsDisableDebugMenu");

	Params::BPL_ConsoleCommand_C_IsDisableDebugMenu Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Disable != nullptr)
		*Disable = Parms.Disable;
}


// Function BPL_ConsoleCommand.BPL_ConsoleCommand_C.AddDebugMenuConsoleCommand_DistanceScales
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_ConsoleCommand_C::AddDebugMenuConsoleCommand_DistanceScales(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_ConsoleCommand_C", "AddDebugMenuConsoleCommand_DistanceScales");

	Params::BPL_ConsoleCommand_C_AddDebugMenuConsoleCommand_DistanceScales Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
