#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DialogSelect

#include "Basic.hpp"

#include "WB_DialogSelect_classes.hpp"
#include "WB_DialogSelect_parameters.hpp"


namespace SDK
{

// Function WB_DialogSelect.WB_DialogSelect_C.OnMouseClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::OnMouseClicked__DelegateSignature(int32 Param_ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "OnMouseClicked__DelegateSignature");

	Params::WB_DialogSelect_C_OnMouseClicked__DelegateSignature Parms{};

	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.OnMouseSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::OnMouseSelected__DelegateSignature(int32 Param_ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "OnMouseSelected__DelegateSignature");

	Params::WB_DialogSelect_C_OnMouseSelected__DelegateSignature Parms{};

	Parms.Param_ItemIndex = Param_ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.ExecuteUbergraph_WB_DialogSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::ExecuteUbergraph_WB_DialogSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "ExecuteUbergraph_WB_DialogSelect");

	Params::WB_DialogSelect_C_ExecuteUbergraph_WB_DialogSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_3_ButtonSimpleEventS5__DelegateSignature
// (BlueprintEvent)

void UWB_DialogSelect_C::BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_3_ButtonSimpleEventS5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_3_ButtonSimpleEventS5__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        UV                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature");

	Params::WB_DialogSelect_C_BndEvt__WB_DialogSelect_ButtonS5_MouseCheck_K2Node_ComponentBoundEvent_2_ButtonClickEventS5__DelegateSignature Parms{};

	Parms.Pos = std::move(Pos);
	Parms.UV = std::move(UV);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_DialogSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_DialogSelect_C_BndEvt__selectcursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SetSelectItemName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::SetSelectItemName(class UScriptMessageAsset* InScriptMessageAsset, class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SetSelectItemName");

	Params::WB_DialogSelect_C_SetSelectItemName Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectOut
// (BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectIn
// (BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_DialogSelect_C_BndEvt__selectitem_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SetSelectItemNameByIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessageAsset                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_DialogSelect_C::SetSelectItemNameByIndex(class UScriptMessageAsset* InScriptMessageAsset, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SetSelectItemNameByIndex");

	Params::WB_DialogSelect_C_SetSelectItemNameByIndex Parms{};

	Parms.InScriptMessageAsset = InScriptMessageAsset;
	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SetTextByIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SetTextByIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SetTextByIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.GetRichTextParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageRichTextWidget*           OutMessageRichText                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              OutScriptMessageAsset                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OutLabel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutUseIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_DialogSelect_C::GetRichTextParam(class UMessageRichTextWidget** OutMessageRichText, class UScriptMessageAsset** OutScriptMessageAsset, class FName* OutLabel, int32* OutIndex, bool* OutUseIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "GetRichTextParam");

	Params::WB_DialogSelect_C_GetRichTextParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMessageRichText != nullptr)
		*OutMessageRichText = Parms.OutMessageRichText;

	if (OutScriptMessageAsset != nullptr)
		*OutScriptMessageAsset = Parms.OutScriptMessageAsset;

	if (OutLabel != nullptr)
		*OutLabel = Parms.OutLabel;

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	if (OutUseIndex != nullptr)
		*OutUseIndex = Parms.OutUseIndex;
}


// Function WB_DialogSelect.WB_DialogSelect_C.sSetRichTextParam
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SSetRichTextParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "sSetRichTextParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectCursorOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectCursorOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectCursorOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectCursorOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectCursorIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectCursorIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectCursorOut
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectCursorOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectCursorOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.SelectItemOff
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_DialogSelect_C::SelectItemOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "SelectItemOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_DialogSelect.WB_DialogSelect_C.IsClosedSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_DialogSelect_C::IsClosedSelect(bool* OutParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_DialogSelect_C", "IsClosedSelect");

	Params::WB_DialogSelect_C_IsClosedSelect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutParam != nullptr)
		*OutParam = Parms.OutParam;
}

}

