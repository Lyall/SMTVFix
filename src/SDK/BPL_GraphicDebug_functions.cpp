#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_GraphicDebug

#include "Basic.hpp"

#include "BPL_GraphicDebug_classes.hpp"
#include "BPL_GraphicDebug_parameters.hpp"


namespace SDK
{

// Function BPL_GraphicDebug.BPL_GraphicDebug_C.AddDebugMenu_Graphic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_GraphicDebug_C::AddDebugMenu_Graphic(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_GraphicDebug_C", "AddDebugMenu_Graphic");

	Params::BPL_GraphicDebug_C_AddDebugMenu_Graphic Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_GraphicDebug.BPL_GraphicDebug_C.SpwanDebugMenu_Graphic
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_GraphicDebug_C::SpwanDebugMenu_Graphic(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_GraphicDebug_C", "SpwanDebugMenu_Graphic");

	Params::BPL_GraphicDebug_C_SpwanDebugMenu_Graphic Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
