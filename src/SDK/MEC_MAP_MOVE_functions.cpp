#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_MAP_MOVE

#include "Basic.hpp"

#include "MEC_MAP_MOVE_classes.hpp"
#include "MEC_MAP_MOVE_parameters.hpp"


namespace SDK
{

// Function MEC_MAP_MOVE.MEC_MAP_MOVE_C.ExecuteUbergraph_MEC_MAP_MOVE
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMEC_MAP_MOVE_C::ExecuteUbergraph_MEC_MAP_MOVE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MEC_MAP_MOVE_C", "ExecuteUbergraph_MEC_MAP_MOVE");

	Params::MEC_MAP_MOVE_C_ExecuteUbergraph_MEC_MAP_MOVE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MEC_MAP_MOVE.MEC_MAP_MOVE_C.CallTask
// (BlueprintCallable, BlueprintEvent)

void UMEC_MAP_MOVE_C::CallTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MEC_MAP_MOVE_C", "CallTask");

	UObject::ProcessEvent(Func, nullptr);
}

}
