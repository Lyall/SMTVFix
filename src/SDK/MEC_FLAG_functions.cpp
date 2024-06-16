#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_FLAG

#include "Basic.hpp"

#include "MEC_FLAG_classes.hpp"
#include "MEC_FLAG_parameters.hpp"


namespace SDK
{

// Function MEC_FLAG.MEC_FLAG_C.ExecuteUbergraph_MEC_FLAG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMEC_FLAG_C::ExecuteUbergraph_MEC_FLAG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MEC_FLAG_C", "ExecuteUbergraph_MEC_FLAG");

	Params::MEC_FLAG_C_ExecuteUbergraph_MEC_FLAG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MEC_FLAG.MEC_FLAG_C.CallTask
// (BlueprintCallable, BlueprintEvent)

void UMEC_FLAG_C::CallTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MEC_FLAG_C", "CallTask");

	UObject::ProcessEvent(Func, nullptr);
}

}
