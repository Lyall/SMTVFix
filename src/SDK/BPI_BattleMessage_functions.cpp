#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleMessage

#include "Basic.hpp"

#include "BPI_BattleMessage_classes.hpp"
#include "BPI_BattleMessage_parameters.hpp"


namespace SDK
{

// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMessageId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ShowPos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSkillOrItemName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillAptitude                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleMessage_C::IBattleMessageShow(int32 InMessageId, int32 ShowPos, bool IsSkillOrItemName, int32 SkillId, int32 SkillAptitude, int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageShow");

	Params::BPI_BattleMessage_C_IBattleMessageShow Parms{};

	Parms.InMessageId = InMessageId;
	Parms.ShowPos = ShowPos;
	Parms.IsSkillOrItemName = IsSkillOrItemName;
	Parms.SkillId = SkillId;
	Parms.SkillAptitude = SkillAptitude;
	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageHide
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleMessage_C::IBattleMessageHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageSetProgramString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_BattleMessage_C::IBattleMessageSetProgramString(int32 InIndex, const class FString& InStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageSetProgramString");

	Params::BPI_BattleMessage_C_IBattleMessageSetProgramString Parms{};

	Parms.InIndex = InIndex;
	Parms.InStr = std::move(InStr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageRemove
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_BattleMessage_C::IBattleMessageRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleMessage_C::IBattleMessageVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageVisibility");

	Params::BPI_BattleMessage_C_IBattleMessageVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BattleMessage.BPI_BattleMessage_C.IBattleMessageSetIconElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Elementnumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BattleMessage_C::IBattleMessageSetIconElement(int32 Elementnumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BattleMessage_C", "IBattleMessageSetIconElement");

	Params::BPI_BattleMessage_C_IBattleMessageSetIconElement Parms{};

	Parms.Elementnumber = Elementnumber;

	UObject::ProcessEvent(Func, &Parms);
}

}

