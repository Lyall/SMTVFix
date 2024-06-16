#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MM_M061_EM0021

#include "Basic.hpp"

#include "MM_M061_EM0021_classes.hpp"
#include "MM_M061_EM0021_parameters.hpp"


namespace SDK
{

// Function MM_M061_EM0021.MM_M061_EM0021_C.ExecuteUbergraph_MM_M061_EM0021
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::ExecuteUbergraph_MM_M061_EM0021(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "ExecuteUbergraph_MM_M061_EM0021");

	Params::MM_M061_EM0021_C_ExecuteUbergraph_MM_M061_EM0021 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.Evt_FinishComplete
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::Evt_FinishComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "Evt_FinishComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.EvtDis_Finish
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::EvtDis_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "EvtDis_Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "ReceiveEndPlay");

	Params::MM_M061_EM0021_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnDestroyed_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnDestroyed______0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnDestroyed_����_0");

	Params::MM_M061_EM0021_C_OnDestroyed______0 Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.EndBattle_����_0
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::EndBattle______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "EndBattle_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.End Mission
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::End_Mission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "End Mission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.E2031_Event
// (BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::E2031_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "E2031_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_CA4C919B47E016D1B6B5949F41C2CEDC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_CA4C919B47E016D1B6B5949F41C2CEDC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_CA4C919B47E016D1B6B5949F41C2CEDC");

	Params::MM_M061_EM0021_C_OnLoaded_CA4C919B47E016D1B6B5949F41C2CEDC Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_AE9BCA454CFB26C87E76EF9336E7CBCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_AE9BCA454CFB26C87E76EF9336E7CBCA(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_AE9BCA454CFB26C87E76EF9336E7CBCA");

	Params::MM_M061_EM0021_C_OnLoaded_AE9BCA454CFB26C87E76EF9336E7CBCA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_90074E7243988BDD3CDA518EB330A476
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_90074E7243988BDD3CDA518EB330A476(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_90074E7243988BDD3CDA518EB330A476");

	Params::MM_M061_EM0021_C_OnLoaded_90074E7243988BDD3CDA518EB330A476 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_EE43887842518B64131F4B8E6EF07590
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_EE43887842518B64131F4B8E6EF07590(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_EE43887842518B64131F4B8E6EF07590");

	Params::MM_M061_EM0021_C_OnLoaded_EE43887842518B64131F4B8E6EF07590 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_A86BAF4E443D1EED516DC581533DF7F4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_A86BAF4E443D1EED516DC581533DF7F4(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_A86BAF4E443D1EED516DC581533DF7F4");

	Params::MM_M061_EM0021_C_OnLoaded_A86BAF4E443D1EED516DC581533DF7F4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_8E97D96943BBD029D262ADA94FB80DE8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_8E97D96943BBD029D262ADA94FB80DE8(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_8E97D96943BBD029D262ADA94FB80DE8");

	Params::MM_M061_EM0021_C_OnLoaded_8E97D96943BBD029D262ADA94FB80DE8 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_CA4C919B47E016D1B6B5949F6B900AFA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_CA4C919B47E016D1B6B5949F6B900AFA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_CA4C919B47E016D1B6B5949F6B900AFA");

	Params::MM_M061_EM0021_C_OnLoaded_CA4C919B47E016D1B6B5949F6B900AFA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_CA4C919B47E016D1B6B5949FCFE740CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_CA4C919B47E016D1B6B5949FCFE740CF(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_CA4C919B47E016D1B6B5949FCFE740CF");

	Params::MM_M061_EM0021_C_OnLoaded_CA4C919B47E016D1B6B5949FCFE740CF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDCB9A382C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDCB9A382C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDCB9A382C");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDCB9A382C Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDDAFB955F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDDAFB955F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDDAFB955F");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDDAFB955F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_8C5F64BC4F1BBF199F45C4BCF4724E22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_8C5F64BC4F1BBF199F45C4BCF4724E22(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_8C5F64BC4F1BBF199F45C4BCF4724E22");

	Params::MM_M061_EM0021_C_OnLoaded_8C5F64BC4F1BBF199F45C4BCF4724E22 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDD0A41EC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDD0A41EC6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDD0A41EC6");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDD0A41EC6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDAE57E37B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDAE57E37B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDAE57E37B");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDAE57E37B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDF5DFB7D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDF5DFB7D5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDF5DFB7D5");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDF5DFB7D5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD062E3195
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD062E3195(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD062E3195");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD062E3195 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDA2629F35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDA2629F35(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDA2629F35");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDA2629F35 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_CA4C919B47E016D1B6B5949F841FA3E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_CA4C919B47E016D1B6B5949F841FA3E6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_CA4C919B47E016D1B6B5949F841FA3E6");

	Params::MM_M061_EM0021_C_OnLoaded_CA4C919B47E016D1B6B5949F841FA3E6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_8C5F64BC4F1BBF199F45C4BCC9565CDD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_8C5F64BC4F1BBF199F45C4BCC9565CDD(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_8C5F64BC4F1BBF199F45C4BCC9565CDD");

	Params::MM_M061_EM0021_C_OnLoaded_8C5F64BC4F1BBF199F45C4BCC9565CDD Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_8C5F64BC4F1BBF199F45C4BCA9B2D9AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_8C5F64BC4F1BBF199F45C4BCA9B2D9AF(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_8C5F64BC4F1BBF199F45C4BCA9B2D9AF");

	Params::MM_M061_EM0021_C_OnLoaded_8C5F64BC4F1BBF199F45C4BCA9B2D9AF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBDEE695C52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBDEE695C52(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBDEE695C52");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBDEE695C52 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD0ED55A6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD0ED55A6E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD0ED55A6E");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD0ED55A6E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD229F928C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD229F928C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD229F928C");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD229F928C Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD0422FEC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD0422FEC5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD0422FEC5");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD0422FEC5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.OnLoaded_0E38A2EA4724D2AEB4E20FBD74335A86
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMM_M061_EM0021_C::OnLoaded_0E38A2EA4724D2AEB4E20FBD74335A86(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "OnLoaded_0E38A2EA4724D2AEB4E20FBD74335A86");

	Params::MM_M061_EM0021_C_OnLoaded_0E38A2EA4724D2AEB4E20FBD74335A86 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.�����_0__UpdateFunc
// (BlueprintEvent)

void AMM_M061_EM0021_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "�����_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.�����_0__FinishedFunc
// (BlueprintEvent)

void AMM_M061_EM0021_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "�����_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.CallDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::CallDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "CallDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMM_M061_EM0021_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.QuestFunctionHit
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::QuestFunctionHit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "QuestFunctionHit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MM_M061_EM0021.MM_M061_EM0021_C.CheckActive
// (Public, BlueprintCallable, BlueprintEvent)

void AMM_M061_EM0021_C::CheckActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MM_M061_EM0021_C", "CheckActive");

	UObject::ProcessEvent(Func, nullptr);
}

}
