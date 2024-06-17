#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SampleSaveList

#include "Basic.hpp"

#include "WB_SampleSaveList_classes.hpp"
#include "WB_SampleSaveList_parameters.hpp"


namespace SDK
{

// Function WB_SampleSaveList.WB_SampleSaveList_C.ExecuteUbergraph_WB_SampleSaveList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SampleSaveList_C::ExecuteUbergraph_WB_SampleSaveList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "ExecuteUbergraph_WB_SampleSaveList");

	Params::WB_SampleSaveList_C_ExecuteUbergraph_WB_SampleSaveList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SampleSaveList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "Tick");

	Params::WB_SampleSaveList_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SampleSaveList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.InitUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::InitUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "InitUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.InitCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::InitCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "InitCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.InitArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::InitArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "InitArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.MoveCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Up                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Down                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SampleSaveList_C::MoveCursor(bool Up, bool Down)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "MoveCursor");

	Params::WB_SampleSaveList_C_MoveCursor Parms{};

	Parms.Up = Up;
	Parms.Down = Down;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.UpdateCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::UpdateCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "UpdateCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.UpCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::UpCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "UpCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.DownCursor
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::DownCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "DownCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SampleSaveList.WB_SampleSaveList_C.UpdateScrollBox
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SampleSaveList_C::UpdateScrollBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SampleSaveList_C", "UpdateScrollBox");

	UObject::ProcessEvent(Func, nullptr);
}

}
