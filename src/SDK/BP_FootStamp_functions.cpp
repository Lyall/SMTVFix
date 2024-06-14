#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootStamp

#include "Basic.hpp"

#include "BP_FootStamp_classes.hpp"
#include "BP_FootStamp_parameters.hpp"


namespace SDK
{

// Function BP_FootStamp.BP_FootStamp_C.ExecuteUbergraph_BP_FootStamp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FootStamp_C::ExecuteUbergraph_BP_FootStamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FootStamp_C", "ExecuteUbergraph_BP_FootStamp");

	Params::BP_FootStamp_C_ExecuteUbergraph_BP_FootStamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FootStamp.BP_FootStamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FootStamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FootStamp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

