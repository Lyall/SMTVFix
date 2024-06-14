#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_BtlDebugAITempView

#include "Basic.hpp"

#include "BPL_BtlDebugAITempView_classes.hpp"
#include "BPL_BtlDebugAITempView_parameters.hpp"


namespace SDK
{

// Function BPL_BtlDebugAITempView.BPL_BtlDebugAITempView_C.AddDebugMenu_BtlAITempView
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_BtlDebugAITempView_C::AddDebugMenu_BtlAITempView(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BtlDebugAITempView_C", "AddDebugMenu_BtlAITempView");

	Params::BPL_BtlDebugAITempView_C_AddDebugMenu_BtlAITempView Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_BtlDebugAITempView.BPL_BtlDebugAITempView_C.BtlAIDebug_RegisterDebugFlag
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Comment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_BtlDebugAITempView_C::BtlAIDebug_RegisterDebugFlag(uint8 Value, const class FString& DispName, const class FString& Comment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BtlDebugAITempView_C", "BtlAIDebug_RegisterDebugFlag");

	Params::BPL_BtlDebugAITempView_C_BtlAIDebug_RegisterDebugFlag Parms{};

	Parms.Value = Value;
	Parms.DispName = std::move(DispName);
	Parms.Comment = std::move(Comment);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_BtlDebugAITempView.BPL_BtlDebugAITempView_C.BtlAIDebug_RegisterDebugValue
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           DispName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Comment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_BtlDebugAITempView_C::BtlAIDebug_RegisterDebugValue(int32 Param_Index, const class FString& DispName, const class FString& Comment, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BtlDebugAITempView_C", "BtlAIDebug_RegisterDebugValue");

	Params::BPL_BtlDebugAITempView_C_BtlAIDebug_RegisterDebugValue Parms{};

	Parms.Param_Index = Param_Index;
	Parms.DispName = std::move(DispName);
	Parms.Comment = std::move(Comment);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_BtlDebugAITempView.BPL_BtlDebugAITempView_C.GetBPIBtlDebugAITempView
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BtlDebugAITempView_C>RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_BtlDebugAITempView_C::GetBPIBtlDebugAITempView(class UObject* __WorldContext, TScriptInterface<class IBPI_BtlDebugAITempView_C>* RetValue, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_BtlDebugAITempView_C", "GetBPIBtlDebugAITempView");

	Params::BPL_BtlDebugAITempView_C_GetBPIBtlDebugAITempView Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}

}

