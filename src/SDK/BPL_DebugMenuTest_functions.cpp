#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DebugMenuTest

#include "Basic.hpp"

#include "BPL_DebugMenuTest_classes.hpp"
#include "BPL_DebugMenuTest_parameters.hpp"


namespace SDK
{

// Function BPL_DebugMenuTest.BPL_DebugMenuTest_C.AddDebugMenuTest
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_DebugMenuTest_C::AddDebugMenuTest(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_DebugMenuTest_C", "AddDebugMenuTest");

	Params::BPL_DebugMenuTest_C_AddDebugMenuTest Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_DebugMenuTest.BPL_DebugMenuTest_C.AddDebugMenuTestSP
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_DebugMenuTest_C::AddDebugMenuTestSP(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_DebugMenuTest_C", "AddDebugMenuTestSP");

	Params::BPL_DebugMenuTest_C_AddDebugMenuTestSP Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_DebugMenuTest.BPL_DebugMenuTest_C.AddDebugMenuScreenShot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_DebugMenuTest_C::AddDebugMenuScreenShot(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_DebugMenuTest_C", "AddDebugMenuScreenShot");

	Params::BPL_DebugMenuTest_C_AddDebugMenuScreenShot Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

