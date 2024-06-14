#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Message_Base

#include "Basic.hpp"

#include "WB_Message_Base_classes.hpp"
#include "WB_Message_Base_parameters.hpp"


namespace SDK
{

// Function WB_Message_Base.WB_Message_Base_C.Evd_EndNormalMess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::Evd_EndNormalMess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "Evd_EndNormalMess__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.ExecuteUbergraph_WB_Message_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::ExecuteUbergraph_WB_Message_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "ExecuteUbergraph_WB_Message_Base");

	Params::WB_Message_Base_C_ExecuteUbergraph_WB_Message_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "Tick");

	Params::WB_Message_Base_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.LoadVoice
// (BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::LoadVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "LoadVoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.OnLoaded_89E1F62C404C8EB45F348296954C33C2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::OnLoaded_89E1F62C404C8EB45F348296954C33C2(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "OnLoaded_89E1F62C404C8EB45F348296954C33C2");

	Params::WB_Message_Base_C_OnLoaded_89E1F62C404C8EB45F348296954C33C2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.OnLoaded_7CB15FEB41AFDD98894A479C0666E2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::OnLoaded_7CB15FEB41AFDD98894A479C0666E2A3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "OnLoaded_7CB15FEB41AFDD98894A479C0666E2A3");

	Params::WB_Message_Base_C_OnLoaded_7CB15FEB41AFDD98894A479C0666E2A3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.StartMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMessageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsReval                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      FontColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_NoVoice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::StartMessage(class UScriptMessageAsset* InScriptMessage, int32 InMessageId, bool Param_IsReval, const struct FSlateColor& FontColor, bool Param_NoVoice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "StartMessage");

	Params::WB_Message_Base_C_StartMessage Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.InMessageId = InMessageId;
	Parms.Param_IsReval = Param_IsReval;
	Parms.FontColor = std::move(FontColor);
	Parms.Param_NoVoice = Param_NoVoice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.SetRevealPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVoiceEnd                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::SetRevealPage(bool IsVoiceEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetRevealPage");

	Params::WB_Message_Base_C_SetRevealPage Parms{};

	Parms.IsVoiceEnd = IsVoiceEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.IsPageComplet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsCheckVoice                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsComplet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::IsPageComplet(bool IsCheckVoice, bool* IsComplet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "IsPageComplet");

	Params::WB_Message_Base_C_IsPageComplet Parms{};

	Parms.IsCheckVoice = IsCheckVoice;

	UObject::ProcessEvent(Func, &Parms);

	if (IsComplet != nullptr)
		*IsComplet = Parms.IsComplet;
}


// Function WB_Message_Base.WB_Message_Base_C.IsMessageCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsComplet                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::IsMessageCompleted(bool* IsComplet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "IsMessageCompleted");

	Params::WB_Message_Base_C_IsMessageCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsComplet != nullptr)
		*IsComplet = Parms.IsComplet;
}


// Function WB_Message_Base.WB_Message_Base_C.GetVoiceName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           VoiceName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Message_Base_C::GetVoiceName(class FString* VoiceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "GetVoiceName");

	Params::WB_Message_Base_C_GetVoiceName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VoiceName != nullptr)
		*VoiceName = std::move(Parms.VoiceName);
}


// Function WB_Message_Base.WB_Message_Base_C.GetSpeakerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SpeakerName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWB_Message_Base_C::GetSpeakerName(class FString* SpeakerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "GetSpeakerName");

	Params::WB_Message_Base_C_GetSpeakerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpeakerName != nullptr)
		*SpeakerName = std::move(Parms.SpeakerName);
}


// Function WB_Message_Base.WB_Message_Base_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETextJustify                            InJustification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::SetJustification(ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetJustification");

	Params::WB_Message_Base_C_SetJustification Parms{};

	Parms.InJustification = InJustification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.ToNextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsReveal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::ToNextPage(bool IsReveal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "ToNextPage");

	Params::WB_Message_Base_C_ToNextPage Parms{};

	Parms.IsReveal = IsReveal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnchors                         InAnchors                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InAlignment                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::SetPosition(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetPosition");

	Params::WB_Message_Base_C_SetPosition Parms{};

	Parms.InAnchors = std::move(InAnchors);
	Parms.InPosition = std::move(InPosition);
	Parms.InAlignment = std::move(InAlignment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::ClearMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "ClearMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.StartMessage_Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScriptMessageAsset*              InScriptMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InMessageLabel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsReval                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      FontColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Message_Base_C::StartMessage_Label(class UScriptMessageAsset* InScriptMessage, class FName InMessageLabel, bool Param_IsReval, const struct FSlateColor& FontColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "StartMessage_Label");

	Params::WB_Message_Base_C_StartMessage_Label Parms{};

	Parms.InScriptMessage = InScriptMessage;
	Parms.InMessageLabel = InMessageLabel;
	Parms.Param_IsReval = Param_IsReval;
	Parms.FontColor = std::move(FontColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.IsNextPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Message_Base_C::IsNextPage(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "IsNextPage");

	Params::WB_Message_Base_C_IsNextPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function WB_Message_Base.WB_Message_Base_C.SetFontColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Message_Base_C::SetFontColor(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetFontColor");

	Params::WB_Message_Base_C_SetFontColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Message_Base.WB_Message_Base_C.SetVoiceAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::SetVoiceAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetVoiceAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.PlayMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::PlayMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "PlayMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.GetVoiceAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USoundAtomCue*                    Array_Element                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::GetVoiceAsset(const class FString& Param_Name, class USoundAtomCue** Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "GetVoiceAsset");

	Params::WB_Message_Base_C_GetVoiceAsset Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;
}


// Function WB_Message_Base.WB_Message_Base_C.DeleteMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Message_Base_C::DeleteMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "DeleteMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Message_Base.WB_Message_Base_C.GetLipSyncAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCharaLipSync*                    Array_Element                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::GetLipSyncAsset(const class FString& Param_Name, class UCharaLipSync** Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "GetLipSyncAsset");

	Params::WB_Message_Base_C_GetLipSyncAsset Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;
}


// Function WB_Message_Base.WB_Message_Base_C.SetSearchPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             VoicePath                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             LipSyncPath                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Message_Base_C::SetSearchPath(bool IsUse, class FName VoicePath, class FName LipSyncPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Message_Base_C", "SetSearchPath");

	Params::WB_Message_Base_C_SetSearchPath Parms{};

	Parms.IsUse = IsUse;
	Parms.VoicePath = VoicePath;
	Parms.LipSyncPath = LipSyncPath;

	UObject::ProcessEvent(Func, &Parms);
}

}

