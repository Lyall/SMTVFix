#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Message

#include "Basic.hpp"

#include "BPL_Message_classes.hpp"
#include "BPL_Message_parameters.hpp"


namespace SDK
{

// Function BPL_Message.BPL_Message_C.CreateMessageWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Message_C*                    MessWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Message_C::CreateMessageWidget(class UObject* __WorldContext, class UWB_Message_C** MessWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Message_C", "CreateMessageWidget");

	Params::BPL_Message_C_CreateMessageWidget Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MessWidget != nullptr)
		*MessWidget = Parms.MessWidget;
}


// Function BPL_Message.BPL_Message_C.DeleteMessageWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_Message_C*                    MessageWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAllDelete                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Message_C::DeleteMessageWidget(class UWB_Message_C* MessageWidget, bool IsAllDelete, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Message_C", "DeleteMessageWidget");

	Params::BPL_Message_C_DeleteMessageWidget Parms{};

	Parms.MessageWidget = MessageWidget;
	Parms.IsAllDelete = IsAllDelete;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Message.BPL_Message_C.GetMessageWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Message_C*                    Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_Message_C::GetMessageWidget(class UObject* __WorldContext, class UWB_Message_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Message_C", "GetMessageWidget");

	Params::BPL_Message_C_GetMessageWidget Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

