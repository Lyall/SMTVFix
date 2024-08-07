#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM2020

#include "Basic.hpp"

#include "MM_M061_EM2020_classes.hpp"
#include "MM_M061_EM2020_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM2020.MM_M061_EM2020_C.ExecuteUbergraph_MM_M061_EM2020
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::ExecuteUbergraph_MM_M061_EM2020(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "ExecuteUbergraph_MM_M061_EM2020");

	Params::MM_M061_EM2020_C_ExecuteUbergraph_MM_M061_EM2020 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.Evt_FinishComplete
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::Evt_FinishComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "Evt_FinishComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.Evt_Finish
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::Evt_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "Evt_Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.ResultFadeFunc
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::ResultFadeFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "ResultFadeFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.StartCameraFocus
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::StartCameraFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "StartCameraFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.EndBattle_Event
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::EndBattle_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "EndBattle_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnDestroyed_EncountEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnDestroyed_EncountEvent(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnDestroyed_EncountEvent");

	Params::MM_M061_EM2020_C_OnDestroyed_EncountEvent Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.StartEventBattle
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::StartEventBattle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "StartEventBattle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.StartQuizTalk
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::StartQuizTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "StartQuizTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.EndTalk
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::EndTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "EndTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.StartTalk
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::StartTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "StartTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.BPI_ReceiveMapAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapAttackDamageData             MapAttackData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void AMM_M061_EM2020_C::BPI_ReceiveMapAttack(const struct FMapAttackDamageData& MapAttackData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "BPI_ReceiveMapAttack");

	Params::MM_M061_EM2020_C_BPI_ReceiveMapAttack Parms{};

	Parms.MapAttackData = std::move(MapAttackData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.QuestExecute
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::QuestExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "QuestExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM2020_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_D672ED5E4813AA3DEE9D519569C5A8B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_D672ED5E4813AA3DEE9D519569C5A8B2(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_D672ED5E4813AA3DEE9D519569C5A8B2");

	Params::MM_M061_EM2020_C_OnLoaded_D672ED5E4813AA3DEE9D519569C5A8B2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_5F6F452A41C2F65F90D5FEA6FF8FD250
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_5F6F452A41C2F65F90D5FEA6FF8FD250(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_5F6F452A41C2F65F90D5FEA6FF8FD250");

	Params::MM_M061_EM2020_C_OnLoaded_5F6F452A41C2F65F90D5FEA6FF8FD250 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_26A770014DF8C82D143604953E6B65CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_26A770014DF8C82D143604953E6B65CE(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_26A770014DF8C82D143604953E6B65CE");

	Params::MM_M061_EM2020_C_OnLoaded_26A770014DF8C82D143604953E6B65CE Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_8C5F64BC4F1BBF199F45C4BC8715BE85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_8C5F64BC4F1BBF199F45C4BC8715BE85(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_8C5F64BC4F1BBF199F45C4BC8715BE85");

	Params::MM_M061_EM2020_C_OnLoaded_8C5F64BC4F1BBF199F45C4BC8715BE85 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDDB83A706
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDDB83A706(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDDB83A706");

	Params::MM_M061_EM2020_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDDB83A706 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD46437294
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD46437294(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD46437294");

	Params::MM_M061_EM2020_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD46437294 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD130E4683
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM2020_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD130E4683(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD130E4683");

	Params::MM_M061_EM2020_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD130E4683 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM2020.MM_M061_EM2020_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM2020_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM2020_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

