#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HealRecoveryAll

#include "Basic.hpp"

#include "WB_HealRecoveryAll_classes.hpp"
#include "WB_HealRecoveryAll_parameters.hpp"


namespace SDK
{

// Function WB_HealRecoveryAll.WB_HealRecoveryAll_C.SetRecoveryAllAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_HealRecoveryAll_C::SetRecoveryAllAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HealRecoveryAll_C", "SetRecoveryAllAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HealRecoveryAll.WB_HealRecoveryAll_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_HealRecoveryAll_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HealRecoveryAll_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_HealRecoveryAll.WB_HealRecoveryAll_C.BndEvt__SsPlayerRecoveryAll_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HealRecoveryAll_C::BndEvt__SsPlayerRecoveryAll_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HealRecoveryAll_C", "BndEvt__SsPlayerRecoveryAll_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_HealRecoveryAll_C_BndEvt__SsPlayerRecoveryAll_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_HealRecoveryAll.WB_HealRecoveryAll_C.ExecuteUbergraph_WB_HealRecoveryAll
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_HealRecoveryAll_C::ExecuteUbergraph_WB_HealRecoveryAll(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_HealRecoveryAll_C", "ExecuteUbergraph_WB_HealRecoveryAll");

	Params::WB_HealRecoveryAll_C_ExecuteUbergraph_WB_HealRecoveryAll Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

