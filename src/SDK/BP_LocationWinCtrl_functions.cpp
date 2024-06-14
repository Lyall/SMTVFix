#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocationWinCtrl

#include "Basic.hpp"

#include "BP_LocationWinCtrl_classes.hpp"
#include "BP_LocationWinCtrl_parameters.hpp"


namespace SDK
{

// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.ExecuteUbergraph_BP_LocationWinCtrl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LocationWinCtrl_C::ExecuteUbergraph_BP_LocationWinCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "ExecuteUbergraph_BP_LocationWinCtrl");

	Params::BP_LocationWinCtrl_C_ExecuteUbergraph_BP_LocationWinCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.AddToScreenWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocationWinCtrl_C::AddToScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "AddToScreenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setAutomapName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LocationWinCtrl_C::BPI_setAutomapName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setAutomapName");

	Params::BP_LocationWinCtrl_C_BPI_setAutomapName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setMapName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LocationWinCtrl_C::BPI_setMapName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setMapName");

	Params::BP_LocationWinCtrl_C_BPI_setMapName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setNormalColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocationWinCtrl_C::BPI_setNormalColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setNormalColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setOtherColor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocationWinCtrl_C::BPI_setOtherColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setOtherColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setTokyoLargeMapPlaceName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LocationWinCtrl_C::BPI_setTokyoLargeMapPlaceName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setTokyoLargeMapPlaceName");

	Params::BP_LocationWinCtrl_C_BPI_setTokyoLargeMapPlaceName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_setFacilityName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_LocationWinCtrl_C::BPI_setFacilityName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_setFacilityName");

	Params::BP_LocationWinCtrl_C_BPI_setFacilityName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LocationWinCtrl_C::Close(bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "Close");

	Params::BP_LocationWinCtrl_C_Close Parms{};

	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_LOCATION_WINDOW_TYPE                  InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LocationWinCtrl_C::Open(E_LOCATION_WINDOW_TYPE InType, bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "Open");

	Params::BP_LocationWinCtrl_C_Open Parms{};

	Parms.InType = InType;
	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LocationWinCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_getCurrentName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)

void ABP_LocationWinCtrl_C::BPI_getCurrentName(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_getCurrentName");

	Params::BP_LocationWinCtrl_C_BPI_getCurrentName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.BPI_getState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_LOCATION_WINDOW_STATE                 State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LocationWinCtrl_C::BPI_getState(E_LOCATION_WINDOW_STATE* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "BPI_getState");

	Params::BP_LocationWinCtrl_C_BPI_getState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BP_LocationWinCtrl.BP_LocationWinCtrl_C.GetCurrentName
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABP_LocationWinCtrl_C::GetCurrentName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocationWinCtrl_C", "GetCurrentName");

	Params::BP_LocationWinCtrl_C_GetCurrentName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

