#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaUpliftingLightComponent

#include "Basic.hpp"

#include "CharaUpliftingLightComponent_classes.hpp"
#include "CharaUpliftingLightComponent_parameters.hpp"


namespace SDK
{

// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.ExecuteUbergraph_CharaUpliftingLightComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaUpliftingLightComponent_C::ExecuteUbergraph_CharaUpliftingLightComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaUpliftingLightComponent_C", "ExecuteUbergraph_CharaUpliftingLightComponent");

	Params::CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaUpliftingLightComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaUpliftingLightComponent_C", "ReceiveTick");

	Params::CharaUpliftingLightComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.CalcLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*                ColorCurve                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaUpliftingLightComponent_C::CalcLightColor(float Position, class UCurveLinearColor* ColorCurve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaUpliftingLightComponent_C", "CalcLightColor");

	Params::CharaUpliftingLightComponent_C_CalcLightColor Parms{};

	Parms.Position = Position;
	Parms.ColorCurve = ColorCurve;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.CalcLightRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaUpliftingLightComponent_C::CalcLightRadius(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaUpliftingLightComponent_C", "CalcLightRadius");

	Params::CharaUpliftingLightComponent_C_CalcLightRadius Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.ReserveDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void UCharaUpliftingLightComponent_C::ReserveDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaUpliftingLightComponent_C", "ReserveDestroy");

	UObject::ProcessEvent(Func, nullptr);
}

}

