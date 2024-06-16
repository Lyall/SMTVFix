#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_m061_WarpPoint

#include "Basic.hpp"

#include "LV_m061_WarpPoint_classes.hpp"
#include "LV_m061_WarpPoint_parameters.hpp"


namespace SDK
{

// Function LV_m061_WarpPoint.LV_m061_WarpPoint_C.ExecuteUbergraph_LV_m061_WarpPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_m061_WarpPoint_C::ExecuteUbergraph_LV_m061_WarpPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_WarpPoint_C", "ExecuteUbergraph_LV_m061_WarpPoint");

	Params::LV_m061_WarpPoint_C_ExecuteUbergraph_LV_m061_WarpPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_m061_WarpPoint.LV_m061_WarpPoint_C.Gate Open Check
// (BlueprintCallable, BlueprintEvent)

void ALV_m061_WarpPoint_C::Gate_Open_Check()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_WarpPoint_C", "Gate Open Check");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LV_m061_WarpPoint.LV_m061_WarpPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_m061_WarpPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_m061_WarpPoint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
