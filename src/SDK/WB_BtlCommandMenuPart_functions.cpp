#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlCommandMenuPart

#include "Basic.hpp"

#include "WB_BtlCommandMenuPart_classes.hpp"
#include "WB_BtlCommandMenuPart_parameters.hpp"


namespace SDK
{

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnSlideIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_BtlCommandMenuPart_C::Evt_OnSlideIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Evt_OnSlideIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_UI_COMMAND                        Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlCommandMenuPart_C::Evt_OnHovered__DelegateSignature(E_BTL_UI_COMMAND Command)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Evt_OnHovered__DelegateSignature");

	Params::WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_UI_COMMAND                        Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlCommandMenuPart_C::Evt_OnClicked__DelegateSignature(E_BTL_UI_COMMAND Command)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Evt_OnClicked__DelegateSignature");

	Params::WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_BtlCommandMenuPart_C::Evt_OnUnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Evt_OnUnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.ExecuteUbergraph_WB_BtlCommandMenuPart
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlCommandMenuPart_C::ExecuteUbergraph_WB_BtlCommandMenuPart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "ExecuteUbergraph_WB_BtlCommandMenuPart");

	Params::WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_5_ButtonSimpleEventS5__DelegateSignature
// (BlueprintEvent)

void UWB_BtlCommandMenuPart_C::BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_5_ButtonSimpleEventS5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_5_ButtonSimpleEventS5__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        UV                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlCommandMenuPart_C::BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature");

	Params::WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature Parms{};

	Parms.Pos = std::move(Pos);
	Parms.UV = std::move(UV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWB_BtlCommandMenuPart_C::BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_BtlCommandMenuPart_C::BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Slide Out
// (BlueprintCallable, BlueprintEvent)

void UWB_BtlCommandMenuPart_C::Slide_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Slide Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Slide In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DelayRemainTick                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::Slide_In(int32 DelayRemainTick, bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Slide In");

	Params::WB_BtlCommandMenuPart_C_Slide_In Parms{};

	Parms.DelayRemainTick = DelayRemainTick;
	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_BtlCommandMenuPart_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "PreConstruct");

	Params::WB_BtlCommandMenuPart_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::SetSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "SetSelected");

	Params::WB_BtlCommandMenuPart_C_SetSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.GetAnimPack
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UWB_BtlCommandMenuPart_C::GetAnimPack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "GetAnimPack");

	Params::WB_BtlCommandMenuPart_C_GetAnimPack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.CalcMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_BtlCommandMenuPart_C::CalcMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "CalcMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.SetSelectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selectable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::SetSelectable(bool Selectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "SetSelectable");

	Params::WB_BtlCommandMenuPart_C_SetSelectable Parms{};

	Parms.Selectable = Selectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.GetResult
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_UI_COMMAND                        Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selectable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::GetResult(E_BTL_UI_COMMAND* Result, bool* Selectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "GetResult");

	Params::WB_BtlCommandMenuPart_C_GetResult Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (Selectable != nullptr)
		*Selectable = Parms.Selectable;
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.PlayMenuAnim
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AnimIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::PlayMenuAnim(int32 AnimIndex, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "PlayMenuAnim");

	Params::WB_BtlCommandMenuPart_C_PlayMenuAnim Parms{};

	Parms.AnimIndex = AnimIndex;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.IsFinishSlideIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFinished                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::IsFinishSlideIn(bool* IsFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "IsFinishSlideIn");

	Params::WB_BtlCommandMenuPart_C_IsFinishSlideIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinished != nullptr)
		*IsFinished = Parms.IsFinished;
}


// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.IsDisappeared
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsDisappeared                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_BtlCommandMenuPart_C::IsDisappeared(bool* Param_IsDisappeared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_BtlCommandMenuPart_C", "IsDisappeared");

	Params::WB_BtlCommandMenuPart_C_IsDisappeared Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsDisappeared != nullptr)
		*Param_IsDisappeared = Parms.Param_IsDisappeared;
}

}

