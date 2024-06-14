#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_Select

#include "Basic.hpp"

#include "WB_Message_Select_classes.hpp"
#include "WB_Message_Select_parameters.hpp"


namespace SDK
{

// Function WB_Message_Select.WB_Message_Select_C.ExecuteUbergraph_WB_Message_Select
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::ExecuteUbergraph_WB_Message_Select(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ExecuteUbergraph_WB_Message_Select");

	Params::WB_Message_Select_C_ExecuteUbergraph_WB_Message_Select Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Message_Select_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Select.WB_Message_Select_C.StartMessage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           InMessageIdArray                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Message_Select_C::StartMessage(class UScriptMessageAsset* InScriptMessage, TArray<int32>& InMessageIdArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "StartMessage");

	Params::WB_Message_Select_C_StartMessage Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.InMessageIdArray = std::move(InMessageIdArray);

	UObject::ProcessEvent(Func, &Parms);

	InMessageIdArray = std::move(Parms.InMessageIdArray);
}


// Function WB_Message_Select.WB_Message_Select_C.AddMessagePage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              ScriptMessAsset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           MassageIdArray                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_PageId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::AddMessagePage(class UScriptMessageAsset* ScriptMessAsset, TArray<int32>& MassageIdArray, int32* Param_PageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "AddMessagePage");

	Params::WB_Message_Select_C_AddMessagePage Parms{};

	Parms.ScriptMessAsset = ScriptMessAsset;
	Parms.MassageIdArray = std::move(MassageIdArray);

	UObject::ProcessEvent(Func, &Parms);

	MassageIdArray = std::move(Parms.MassageIdArray);

	if (Param_PageId != nullptr)
		*Param_PageId = Parms.Param_PageId;
}


// Function WB_Message_Select.WB_Message_Select_C.AddMessagePage_Label
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              ScriptMessageAsset                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     MessageLabelArray                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_PageId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::AddMessagePage_Label(class UScriptMessageAsset* ScriptMessageAsset, TArray<class FName>& MessageLabelArray, int32* Param_PageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "AddMessagePage_Label");

	Params::WB_Message_Select_C_AddMessagePage_Label Parms{};

	Parms.ScriptMessageAsset = ScriptMessageAsset;
	Parms.MessageLabelArray = std::move(MessageLabelArray);

	UObject::ProcessEvent(Func, &Parms);

	MessageLabelArray = std::move(Parms.MessageLabelArray);

	if (Param_PageId != nullptr)
		*Param_PageId = Parms.Param_PageId;
}


// Function WB_Message_Select.WB_Message_Select_C.ChangePage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PageId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::ChangePage(int32 Param_PageId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ChangePage");

	Params::WB_Message_Select_C_ChangePage Parms{};

	Parms.Param_PageId = Param_PageId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.ClearAllData
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Select_C::ClearAllData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ClearAllData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Select.WB_Message_Select_C.EndMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Select_C::EndMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "EndMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Select.WB_Message_Select_C.ClearNowWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Select_C::ClearNowWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ClearNowWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Select.WB_Message_Select_C.AddWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMessageData                     MessData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Message_Select_C::AddWidget(class UScriptMessageAsset* InScriptMessage, const struct FMessageData& MessData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "AddWidget");

	Params::WB_Message_Select_C_AddWidget Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.MessData = std::move(MessData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.SetView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsView                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Select_C::SetView(bool IsView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "SetView");

	Params::WB_Message_Select_C_SetView Parms{};

	Parms.IsView = IsView;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.SetBgSize
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_Message_Select_C::SetBgSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "SetBgSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Select.WB_Message_Select_C.MoveCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Add                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLimitStop                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMove                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Select_C::MoveCursor(int32 Add, bool IsLimitStop, bool* IsMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "MoveCursor");

	Params::WB_Message_Select_C_MoveCursor Parms{};

	Parms.Add = Add;
	Parms.IsLimitStop = IsLimitStop;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMove != nullptr)
		*IsMove = Parms.IsMove;
}


// Function WB_Message_Select.WB_Message_Select_C.ChangeCursor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BackCursor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewCursor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::ChangeCursor(int32 BackCursor, int32 NewCursor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ChangeCursor");

	Params::WB_Message_Select_C_ChangeCursor Parms{};

	Parms.BackCursor = BackCursor;
	Parms.NewCursor = NewCursor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.GetSelData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CursorIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MessageID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MessageLabel                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Select_C::GetSelData(int32* CursorIndex, int32* MessageID, class FName* MessageLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "GetSelData");

	Params::WB_Message_Select_C_GetSelData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CursorIndex != nullptr)
		*CursorIndex = Parms.CursorIndex;

	if (MessageID != nullptr)
		*MessageID = Parms.MessageID;

	if (MessageLabel != nullptr)
		*MessageLabel = Parms.MessageLabel;
}


// Function WB_Message_Select.WB_Message_Select_C.StartMessage_Label
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              ScriptMessageAsset                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     MessageLabelArray                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_Message_Select_C::StartMessage_Label(class UScriptMessageAsset* ScriptMessageAsset, TArray<class FName>& MessageLabelArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "StartMessage_Label");

	Params::WB_Message_Select_C_StartMessage_Label Parms{};

	Parms.ScriptMessageAsset = ScriptMessageAsset;
	Parms.MessageLabelArray = std::move(MessageLabelArray);

	UObject::ProcessEvent(Func, &Parms);

	MessageLabelArray = std::move(Parms.MessageLabelArray);
}


// Function WB_Message_Select.WB_Message_Select_C.ToNextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Select_C::ToNextPage(bool IsBack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "ToNextPage");

	Params::WB_Message_Select_C_ToNextPage Parms{};

	Parms.IsBack = IsBack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Select.WB_Message_Select_C.SettingCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMove                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Select_C::SettingCursor(int32 Param_Index, bool* IsMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Select_C", "SettingCursor");

	Params::WB_Message_Select_C_SettingCursor Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMove != nullptr)
		*IsMove = Parms.IsMove;
}

}
