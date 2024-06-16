#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NaviDevilCollision

#include "Basic.hpp"

#include "BP_NaviDevilCollision_classes.hpp"
#include "BP_NaviDevilCollision_parameters.hpp"


namespace SDK
{

// Function BP_NaviDevilCollision.BP_NaviDevilCollision_C.ExecuteUbergraph_BP_NaviDevilCollision
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NaviDevilCollision_C::ExecuteUbergraph_BP_NaviDevilCollision(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NaviDevilCollision_C", "ExecuteUbergraph_BP_NaviDevilCollision");

	Params::BP_NaviDevilCollision_C_ExecuteUbergraph_BP_NaviDevilCollision Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NaviDevilCollision.BP_NaviDevilCollision_C.OnEndPlay_
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NaviDevilCollision_C::OnEndPlay_(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NaviDevilCollision_C", "OnEndPlay_");

	Params::BP_NaviDevilCollision_C_OnEndPlay_ Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NaviDevilCollision.BP_NaviDevilCollision_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NaviDevilCollision_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NaviDevilCollision_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
