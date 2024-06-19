#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventHitFacility

#include "Basic.hpp"

#include "BPI_EventHitFacility_classes.hpp"
#include "BPI_EventHitFacility_parameters.hpp"


namespace SDK
{

// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetFacilityId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FacitlityId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EventHitFacility_C::BPI_GetFacilityId(int32* FacitlityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EventHitFacility_C", "BPI_GetFacilityId");

	Params::BPI_EventHitFacility_C_BPI_GetFacilityId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FacitlityId != nullptr)
		*FacitlityId = Parms.FacitlityId;
}


// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetFacilityType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_FACILITY_TYPE                         Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_EventHitFacility_C::BPI_GetFacilityType(E_FACILITY_TYPE* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EventHitFacility_C", "BPI_GetFacilityType");

	Params::BPI_EventHitFacility_C_BPI_GetFacilityType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function BPI_EventHitFacility.BPI_EventHitFacility_C.BPI_GetDebugMemo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Memo                                                   (Parm, OutParm)

void IBPI_EventHitFacility_C::BPI_GetDebugMemo(class FText* Memo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_EventHitFacility_C", "BPI_GetDebugMemo");

	Params::BPI_EventHitFacility_C_BPI_GetDebugMemo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Memo != nullptr)
		*Memo = std::move(Parms.Memo);
}

}

