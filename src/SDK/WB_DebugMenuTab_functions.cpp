#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DebugMenuTab

#include "Basic.hpp"

#include "WB_DebugMenuTab_classes.hpp"
#include "WB_DebugMenuTab_parameters.hpp"


namespace SDK
{

// Function WB_DebugMenuTab.WB_DebugMenuTab_C.ExecuteUbergraph_WB_DebugMenuTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DebugMenuTab_C::ExecuteUbergraph_WB_DebugMenuTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DebugMenuTab_C", "ExecuteUbergraph_WB_DebugMenuTab");

	Params::WB_DebugMenuTab_C_ExecuteUbergraph_WB_DebugMenuTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DebugMenuTab.WB_DebugMenuTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_DebugMenuTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DebugMenuTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DebugMenuTab.WB_DebugMenuTab_C.ReSizeBG
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DebugMenuTab_C::ReSizeBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DebugMenuTab_C", "ReSizeBG");

	UObject::ProcessEvent(Func, nullptr);
}

}

