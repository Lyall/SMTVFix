#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventInstance

#include "Basic.hpp"

#include "BPI_EventInstance_classes.hpp"
#include "BPI_EventInstance_parameters.hpp"


namespace SDK
{

// Function BPI_EventInstance.BPI_EventInstance_C.BPI_GetEventBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventBase*                       Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EventInstance_C::BPI_GetEventBase(class AEventBase** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EventInstance_C", "BPI_GetEventBase");

	Params::BPI_EventInstance_C_BPI_GetEventBase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BPI_EventInstance.BPI_EventInstance_C.BPI_SetEventBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEventBase*                       Base                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EventInstance_C::BPI_SetEventBase(class AEventBase* Base, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EventInstance_C", "BPI_SetEventBase");

	Params::BPI_EventInstance_C_BPI_SetEventBase Parms{};

	Parms.Base = Base;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}

