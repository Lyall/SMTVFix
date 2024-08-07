#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventMobBase

#include "Basic.hpp"

#include "EventMobBase_classes.hpp"
#include "EventMobBase_parameters.hpp"


namespace SDK
{

// Function EventMobBase.EventMobBase_C.ExecuteUbergraph_EventMobBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventMobBase_C::ExecuteUbergraph_EventMobBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "ExecuteUbergraph_EventMobBase");

	Params::EventMobBase_C_ExecuteUbergraph_EventMobBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventMobBase.EventMobBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEventMobBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventMobBase.EventMobBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEventMobBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventMobBase.EventMobBase_C.RandomChoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   OutID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventMobBase_C::RandomChoice(TArray<int32>& InList, int32* OutID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "RandomChoice");

	Params::EventMobBase_C_RandomChoice Parms{};

	Parms.InList = std::move(InList);

	UObject::ProcessEvent(Func, &Parms);

	InList = std::move(Parms.InList);

	if (OutID != nullptr)
		*OutID = Parms.OutID;
}


// Function EventMobBase.EventMobBase_C.RandomColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>             InList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                     NowColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventMobBase_C::RandomColor(TArray<struct FLinearColor>& InList, const struct FLinearColor& NowColor, struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "RandomColor");

	Params::EventMobBase_C_RandomColor Parms{};

	Parms.InList = std::move(InList);
	Parms.NowColor = std::move(NowColor);

	UObject::ProcessEvent(Func, &Parms);

	InList = std::move(Parms.InList);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function EventMobBase.EventMobBase_C.DMIRandomColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Param_Mesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>             ColorList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    RandomColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     FixColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         OutDMI                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventMobBase_C::DMIRandomColor(class USkeletalMeshComponent* Param_Mesh, TArray<struct FLinearColor>& ColorList, bool RandomColor, const struct FLinearColor& FixColor, class UMaterialInstanceDynamic** OutDMI, struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "DMIRandomColor");

	Params::EventMobBase_C_DMIRandomColor Parms{};

	Parms.Param_Mesh = Param_Mesh;
	Parms.ColorList = std::move(ColorList);
	Parms.RandomColor = RandomColor;
	Parms.FixColor = std::move(FixColor);

	UObject::ProcessEvent(Func, &Parms);

	ColorList = std::move(Parms.ColorList);

	if (OutDMI != nullptr)
		*OutDMI = Parms.OutDMI;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function EventMobBase.EventMobBase_C.ApplyLightingChannel
// (Public, BlueprintCallable, BlueprintEvent)

void AEventMobBase_C::ApplyLightingChannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventMobBase_C", "ApplyLightingChannel");

	UObject::ProcessEvent(Func, nullptr);
}

}

