#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampResult

#include "Basic.hpp"

#include "BPI_CampResult_classes.hpp"
#include "BPI_CampResult_parameters.hpp"


namespace SDK
{

// Function BPI_CampResult.BPI_CampResult_C.StartHeroParamReassignment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampResult_C::StartHeroParamReassignment(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampResult_C", "StartHeroParamReassignment");

	Params::BPI_CampResult_C_StartHeroParamReassignment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BPI_CampResult.BPI_CampResult_C.StartCampResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NkmIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UpLv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampResult_C::StartCampResult(int32 NkmIndex, int32 UpLv, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampResult_C", "StartCampResult");

	Params::BPI_CampResult_C_StartCampResult Parms{};

	Parms.NkmIndex = NkmIndex;
	Parms.UpLv = UpLv;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BPI_CampResult.BPI_CampResult_C.IsEndCampResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampResult_C::IsEndCampResult(bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampResult_C", "IsEndCampResult");

	Params::BPI_CampResult_C_IsEndCampResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}

}
