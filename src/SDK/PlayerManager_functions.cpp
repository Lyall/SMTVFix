#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerManager

#include "Basic.hpp"

#include "PlayerManager_classes.hpp"
#include "PlayerManager_parameters.hpp"


namespace SDK
{

// Function PlayerManager.PlayerManager_C.EndLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::EndLoad__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "EndLoad__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.ExecuteUbergraph_PlayerManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerManager_C::ExecuteUbergraph_PlayerManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "ExecuteUbergraph_PlayerManager");

	Params::PlayerManager_C_ExecuteUbergraph_PlayerManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.BPI_SetContlrolActivePawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerBase_C*                    Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_PLAYER_MANAGER_TYPE                   Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerManager_C::BPI_SetContlrolActivePawn(class APlayerBase_C* Pawn, E_PLAYER_MANAGER_TYPE Param_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_SetContlrolActivePawn");

	Params::PlayerManager_C_BPI_SetContlrolActivePawn Parms{};

	Parms.Pawn = Pawn;
	Parms.Param_Type = Param_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.BPI_SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerManager_C::BPI_SetActive(E_PLAYER_MANAGER_TYPE PlayerType, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_SetActive");

	Params::PlayerManager_C_BPI_SetActive Parms{};

	Parms.PlayerType = PlayerType;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.BPI_SetDeactiveLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void UPlayerManager_C::BPI_SetDeactiveLocation(E_PLAYER_MANAGER_TYPE PlayerType, const struct FTransform& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_SetDeactiveLocation");

	Params::PlayerManager_C_BPI_SetDeactiveLocation Parms{};

	Parms.PlayerType = PlayerType;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.PlayerLoad
// (BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::PlayerLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "PlayerLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.SetStartPlayer
// (BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::SetStartPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "SetStartPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.BPI_SetGamePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>                    In                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerManager_C::BPI_SetGamePlayer(const TArray<class APawn*>& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_SetGamePlayer");

	Params::PlayerManager_C_BPI_SetGamePlayer Parms{};

	Parms.In = std::move(In);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.OnLoaded_9AF28B724761893B6EF39088F6052842
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UPlayerManager_C::OnLoaded_9AF28B724761893B6EF39088F6052842(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "OnLoaded_9AF28B724761893B6EF39088F6052842");

	Params::PlayerManager_C_OnLoaded_9AF28B724761893B6EF39088F6052842 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.OnLoaded_515012724D9C9D98C992B0BB51D7CB4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UPlayerManager_C::OnLoaded_515012724D9C9D98C992B0BB51D7CB4F(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "OnLoaded_515012724D9C9D98C992B0BB51D7CB4F");

	Params::PlayerManager_C_OnLoaded_515012724D9C9D98C992B0BB51D7CB4F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.DetachEventTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::DetachEventTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "DetachEventTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.AttachEventTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::AttachEventTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "AttachEventTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.MoveEventTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                                    Sweep                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerManager_C::MoveEventTrigger(const struct FTransform& Transform, bool Sweep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "MoveEventTrigger");

	Params::PlayerManager_C_MoveEventTrigger Parms{};

	Parms.Transform = std::move(Transform);
	Parms.Sweep = Sweep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerManager.PlayerManager_C.GetEventTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerPawnEventTrigger_C*     EventTrigger                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerManager_C::GetEventTrigger(class ABP_PlayerPawnEventTrigger_C** EventTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "GetEventTrigger");

	Params::PlayerManager_C_GetEventTrigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EventTrigger != nullptr)
		*EventTrigger = Parms.EventTrigger;
}


// Function PlayerManager.PlayerManager_C.IsEventTriggerAttached
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsAttached                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerManager_C::IsEventTriggerAttached(bool* IsAttached)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "IsEventTriggerAttached");

	Params::PlayerManager_C_IsEventTriggerAttached Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsAttached != nullptr)
		*IsAttached = Parms.IsAttached;
}


// Function PlayerManager.PlayerManager_C.DetachLookTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::DetachLookTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "DetachLookTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.AttachLookTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::AttachLookTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "AttachLookTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.DisableEventTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::DisableEventTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "DisableEventTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.EnableEventTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerManager_C::EnableEventTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "EnableEventTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerManager.PlayerManager_C.GetEventTriggerSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HalfHeight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerManager_C::GetEventTriggerSize(float* Radius, float* HalfHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "GetEventTriggerSize");

	Params::PlayerManager_C_GetEventTriggerSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (HalfHeight != nullptr)
		*HalfHeight = Parms.HalfHeight;
}


// Function PlayerManager.PlayerManager_C.BPI_GetDeactiveLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Location                                               (Parm, OutParm, IsPlainOldData, NoDestructor)

void UPlayerManager_C::BPI_GetDeactiveLocation(E_PLAYER_MANAGER_TYPE PlayerType, struct FTransform* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_GetDeactiveLocation");

	Params::PlayerManager_C_BPI_GetDeactiveLocation Parms{};

	Parms.PlayerType = PlayerType;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function PlayerManager.PlayerManager_C.BPI_GetGamePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APawn*>                    Param_List                                             (Parm, OutParm)

void UPlayerManager_C::BPI_GetGamePlayer(TArray<class APawn*>* Param_List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_GetGamePlayer");

	Params::PlayerManager_C_BPI_GetGamePlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_List != nullptr)
		*Param_List = std::move(Parms.Param_List);
}


// Function PlayerManager.PlayerManager_C.BPI_GetActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsActive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerManager_C::BPI_GetActive(E_PLAYER_MANAGER_TYPE PlayerType, bool* Param_IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_GetActive");

	Params::PlayerManager_C_BPI_GetActive Parms{};

	Parms.PlayerType = PlayerType;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsActive != nullptr)
		*Param_IsActive = Parms.Param_IsActive;
}


// Function PlayerManager.PlayerManager_C.BPI_GetContlrolActivePawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerBase_C*                    Pawn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_PLAYER_MANAGER_TYPE                   Param_Type                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerManager_C::BPI_GetContlrolActivePawn(class APlayerBase_C** Pawn, E_PLAYER_MANAGER_TYPE* Param_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerManager_C", "BPI_GetContlrolActivePawn");

	Params::PlayerManager_C_BPI_GetContlrolActivePawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pawn != nullptr)
		*Pawn = Parms.Pawn;

	if (Param_Type != nullptr)
		*Param_Type = Parms.Param_Type;
}

}
