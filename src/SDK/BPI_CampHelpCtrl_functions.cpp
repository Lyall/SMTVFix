#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampHelpCtrl

#include "Basic.hpp"

#include "BPI_CampHelpCtrl_classes.hpp"
#include "BPI_CampHelpCtrl_parameters.hpp"


namespace SDK
{

// Function BPI_CampHelpCtrl.BPI_CampHelpCtrl_C.ICampHelpRemove
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CampHelpCtrl_C::ICampHelpRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampHelpCtrl_C", "ICampHelpRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CampHelpCtrl.BPI_CampHelpCtrl_C.ICampHelpGetListFadeOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFlag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampHelpCtrl_C::ICampHelpGetListFadeOut(bool* OutFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampHelpCtrl_C", "ICampHelpGetListFadeOut");

	Params::BPI_CampHelpCtrl_C_ICampHelpGetListFadeOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFlag != nullptr)
		*OutFlag = Parms.OutFlag;
}


// Function BPI_CampHelpCtrl.BPI_CampHelpCtrl_C.ICampHelpProc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutFinished                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CampHelpCtrl_C::ICampHelpProc(bool* OutFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampHelpCtrl_C", "ICampHelpProc");

	Params::BPI_CampHelpCtrl_C_ICampHelpProc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutFinished != nullptr)
		*OutFinished = Parms.OutFinished;
}


// Function BPI_CampHelpCtrl.BPI_CampHelpCtrl_C.ICampHelpCreate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           InPrio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CampHelpCtrl_C::ICampHelpCreate(E_WIDGET_PRIO InPrio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CampHelpCtrl_C", "ICampHelpCreate");

	Params::BPI_CampHelpCtrl_C_ICampHelpCreate Parms{};

	Parms.InPrio = InPrio;

	UObject::ProcessEvent(Func, &Parms);
}

}
