#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_StatusCharaChanger

#include "Basic.hpp"

#include "BPI_StatusCharaChanger_classes.hpp"
#include "BPI_StatusCharaChanger_parameters.hpp"


namespace SDK
{

// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.ViewStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_StatusCharaChanger_C::ViewStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "ViewStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.ViewEnd
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_StatusCharaChanger_C::ViewEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "ViewEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// E_UI_STATUS_CTRL_TYPE                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StatusCharaChanger_C::Init(const struct FTransform& SpawnPos, E_UI_STATUS_CTRL_TYPE Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "Init");

	Params::BPI_StatusCharaChanger_C_Init Parms{};

	Parms.SpawnPos = std::move(SpawnPos);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.ChangeChara
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DevilID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUnknown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::ChangeChara(int32 DevilID, bool IsUnknown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "ChangeChara");

	Params::BPI_StatusCharaChanger_C_ChangeChara Parms{};

	Parms.DevilID = DevilID;
	Parms.IsUnknown = IsUnknown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.Init_Battle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       SpawnPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// E_UI_STATUS_CTRL_TYPE                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          StatusCtrlDataBtl                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseAnalyzeItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::Init_Battle(const struct FTransform& SpawnPos, E_UI_STATUS_CTRL_TYPE Type, class UObject* StatusCtrlDataBtl, bool UseAnalyzeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "Init_Battle");

	Params::BPI_StatusCharaChanger_C_Init_Battle Parms{};

	Parms.SpawnPos = std::move(SpawnPos);
	Parms.Type = Type;
	Parms.StatusCtrlDataBtl = StatusCtrlDataBtl;
	Parms.UseAnalyzeItem = UseAnalyzeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.PreRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DevilID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StatusCharaChanger_C::PreRequest(int32 DevilID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "PreRequest");

	Params::BPI_StatusCharaChanger_C_PreRequest Parms{};

	Parms.DevilID = DevilID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.IsEndPreparation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DevilID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::IsEndPreparation(int32 DevilID, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "IsEndPreparation");

	Params::BPI_StatusCharaChanger_C_IsEndPreparation Parms{};

	Parms.DevilID = DevilID;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.NewInit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          DataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                                    WithModelLoad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WithModelSpawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::NewInit(class UObject* DataObject, const struct FTransform& SpawnTransform, bool WithModelLoad, bool WithModelSpawn, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "NewInit");

	Params::BPI_StatusCharaChanger_C_NewInit Parms{};

	Parms.DataObject = DataObject;
	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.WithModelLoad = WithModelLoad;
	Parms.WithModelSpawn = WithModelSpawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.CallVoice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDevilVoiceType                         VoiceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::CallVoice(EDevilVoiceType VoiceType, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "CallVoice");

	Params::BPI_StatusCharaChanger_C_CallVoice Parms{};

	Parms.VoiceType = VoiceType;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.NewInit_Battle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          StatusCtrlDataBtl                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          BattleParty                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_UI_STATUS_CTRL_TYPE                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseAnalyzeItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::NewInit_Battle(class UObject* StatusCtrlDataBtl, class UObject* BattleParty, E_UI_STATUS_CTRL_TYPE Type, bool UseAnalyzeItem, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "NewInit_Battle");

	Params::BPI_StatusCharaChanger_C_NewInit_Battle Parms{};

	Parms.StatusCtrlDataBtl = StatusCtrlDataBtl;
	Parms.BattleParty = BattleParty;
	Parms.Type = Type;
	Parms.UseAnalyzeItem = UseAnalyzeItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.DisableRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::DisableRotation(bool IsDisable, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "DisableRotation");

	Params::BPI_StatusCharaChanger_C_DisableRotation Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BPI_StatusCharaChanger.BPI_StatusCharaChanger_C.SetDelayInInit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Dummy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StatusCharaChanger_C::SetDelayInInit(int32 Num, bool* Dummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_StatusCharaChanger_C", "SetDelayInInit");

	Params::BPI_StatusCharaChanger_C_SetDelayInInit Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

	if (Dummy != nullptr)
		*Dummy = Parms.Dummy;
}

}

