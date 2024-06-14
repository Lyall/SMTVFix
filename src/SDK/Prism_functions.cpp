#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prism

#include "Basic.hpp"

#include "Prism_classes.hpp"
#include "Prism_parameters.hpp"


namespace SDK
{

// Function Prism.PrismFunctionLibrary.AddMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrismFunctionLibrary::AddMessage(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrismFunctionLibrary", "AddMessage");

	Params::PrismFunctionLibrary_AddMessage Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Prism.PrismFunctionLibrary.PushMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           EventId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           EventName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrismFunctionLibrary::PushMessage(const class FString& EventId, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrismFunctionLibrary", "PushMessage");

	Params::PrismFunctionLibrary_PushMessage Parms{};

	Parms.EventId = std::move(EventId);
	Parms.EventName = std::move(EventName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Prism.PrismFunctionLibrary.SetActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrismFunctionLibrary::SetActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrismFunctionLibrary", "SetActive");

	Params::PrismFunctionLibrary_SetActive Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Prism.PrismFunctionLibrary.SetInFocus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    bInFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrismFunctionLibrary::SetInFocus(bool bInFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrismFunctionLibrary", "SetInFocus");

	Params::PrismFunctionLibrary_SetInFocus Parms{};

	Parms.bInFocus = bInFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
