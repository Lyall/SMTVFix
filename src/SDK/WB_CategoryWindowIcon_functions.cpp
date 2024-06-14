#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CategoryWindowIcon

#include "Basic.hpp"

#include "WB_CategoryWindowIcon_classes.hpp"
#include "WB_CategoryWindowIcon_parameters.hpp"


namespace SDK
{

// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.MouseEvent_OnClickedIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CategoryIdx                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CategoryWindowIcon_C::MouseEvent_OnClickedIcon__DelegateSignature(int32 Param_CategoryIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "MouseEvent_OnClickedIcon__DelegateSignature");

	Params::WB_CategoryWindowIcon_C_MouseEvent_OnClickedIcon__DelegateSignature Parms{};

	Parms.Param_CategoryIdx = Param_CategoryIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.ExecuteUbergraph_WB_CategoryWindowIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CategoryWindowIcon_C::ExecuteUbergraph_WB_CategoryWindowIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "ExecuteUbergraph_WB_CategoryWindowIcon");

	Params::WB_CategoryWindowIcon_C_ExecuteUbergraph_WB_CategoryWindowIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.BndEvt__WB_CategoryWindowIcon_Button_S5_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        UV                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CategoryWindowIcon_C::BndEvt__WB_CategoryWindowIcon_Button_S5_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "BndEvt__WB_CategoryWindowIcon_Button_S5_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature");

	Params::WB_CategoryWindowIcon_C_BndEvt__WB_CategoryWindowIcon_Button_S5_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature Parms{};

	Parms.Pos = std::move(Pos);
	Parms.UV = std::move(UV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CategoryWindowIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "PreConstruct");

	Params::WB_CategoryWindowIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.SetCategoryIconAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSelectAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CategoryWindowIcon_C::SetCategoryIconAnim(class FName AnimPackName, bool IsSelectAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "SetCategoryIconAnim");

	Params::WB_CategoryWindowIcon_C_SetCategoryIconAnim Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.IsSelectAnim = IsSelectAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.SetNewIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_CategoryWindowIcon_C::SetNewIconVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "SetNewIconVisibility");

	Params::WB_CategoryWindowIcon_C_SetNewIconVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.AlignNewIconAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Frame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CategoryWindowIcon_C::AlignNewIconAnim(float Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "AlignNewIconAnim");

	Params::WB_CategoryWindowIcon_C_AlignNewIconAnim Parms{};

	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CategoryWindowIcon.WB_CategoryWindowIcon_C.GetNewIconAnimFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Frame                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CategoryWindowIcon_C::GetNewIconAnimFrame(float* Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CategoryWindowIcon_C", "GetNewIconAnimFrame");

	Params::WB_CategoryWindowIcon_C_GetNewIconAnimFrame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Frame != nullptr)
		*Frame = Parms.Frame;
}

}

