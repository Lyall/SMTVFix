#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillSearchSort

#include "Basic.hpp"

#include "WB_SkillSearchSort_classes.hpp"
#include "WB_SkillSearchSort_parameters.hpp"


namespace SDK
{

// Function WB_SkillSearchSort.WB_SkillSearchSort_C.ExecuteUbergraph_WB_SkillSearchSort
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillSearchSort_C::ExecuteUbergraph_WB_SkillSearchSort(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillSearchSort_C", "ExecuteUbergraph_WB_SkillSearchSort");

	Params::WB_SkillSearchSort_C_ExecuteUbergraph_WB_SkillSearchSort Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillSearchSort.WB_SkillSearchSort_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SkillSearchSort_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillSearchSort_C", "PreConstruct");

	Params::WB_SkillSearchSort_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkillSearchSort.WB_SkillSearchSort_C.Init
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_SkillSearchSort_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillSearchSort_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkillSearchSort.WB_SkillSearchSort_C.GetCategoryWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_ElementCategory_C*            CategoryWidget                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillSearchSort_C::GetCategoryWidget(class UWB_ElementCategory_C** CategoryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillSearchSort_C", "GetCategoryWidget");

	Params::WB_SkillSearchSort_C_GetCategoryWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryWidget != nullptr)
		*CategoryWidget = Parms.CategoryWidget;
}


// Function WB_SkillSearchSort.WB_SkillSearchSort_C.GetSortWindowWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_SortWindow2_C*                SortWindowWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkillSearchSort_C::GetSortWindowWidget(class UWB_SortWindow2_C** SortWindowWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkillSearchSort_C", "GetSortWindowWidget");

	Params::WB_SkillSearchSort_C_GetSortWindowWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SortWindowWidget != nullptr)
		*SortWindowWidget = Parms.SortWindowWidget;
}

}
