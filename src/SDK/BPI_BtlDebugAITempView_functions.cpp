#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BtlDebugAITempView

#include "Basic.hpp"

#include "BPI_BtlDebugAITempView_classes.hpp"
#include "BPI_BtlDebugAITempView_parameters.hpp"


namespace SDK
{

// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_ChangeViewUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_ChangeViewUI(bool IsOn, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_ChangeViewUI");

	Params::BPI_BtlDebugAITempView_C_BPI_ChangeViewUI Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_RegisterDebugFlagData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Comment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_RegisterDebugFlagData(int32 Param_Index, const class FString& DispName, const class FString& Comment, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_RegisterDebugFlagData");

	Params::BPI_BtlDebugAITempView_C_BPI_RegisterDebugFlagData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.DispName = std::move(DispName);
	Parms.Comment = std::move(Comment);

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_RegisterDebugValueData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Comment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_RegisterDebugValueData(int32 Param_Index, const class FString& DispName, const class FString& Comment, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_RegisterDebugValueData");

	Params::BPI_BtlDebugAITempView_C_BPI_RegisterDebugValueData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.DispName = std::move(DispName);
	Parms.Comment = std::move(Comment);

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_ChangeCommentView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_ChangeCommentView(bool IsOn, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_ChangeCommentView");

	Params::BPI_BtlDebugAITempView_C_BPI_ChangeCommentView Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_ChangeViewType_RegisterOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_ChangeViewType_RegisterOnly(bool IsOn, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_ChangeViewType_RegisterOnly");

	Params::BPI_BtlDebugAITempView_C_BPI_ChangeViewType_RegisterOnly Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BPI_BtlDebugAITempView.BPI_BtlDebugAITempView_C.BPI_SetUIPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PosX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PosY                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtlDebugAITempView_C::BPI_SetUIPosition(int32 PosX, int32 PosY, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtlDebugAITempView_C", "BPI_SetUIPosition");

	Params::BPI_BtlDebugAITempView_C_BPI_SetUIPosition Parms{};

	Parms.PosX = PosX;
	Parms.PosY = PosY;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}

}

