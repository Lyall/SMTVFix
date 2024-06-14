#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_PlayerManager

#include "Basic.hpp"

#include "BPL_PlayerManager_classes.hpp"
#include "BPL_PlayerManager_parameters.hpp"


namespace SDK
{

// Function BPL_PlayerManager.BPL_PlayerManager_C.GetPlayer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerBase_C*                    AsPlayer_Base                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::GetPlayer(E_PLAYER_MANAGER_TYPE Selection, class UObject* __WorldContext, class APlayerBase_C** AsPlayer_Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "GetPlayer");

	Params::BPL_PlayerManager_C_GetPlayer Parms{};

	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AsPlayer_Base != nullptr)
		*AsPlayer_Base = Parms.AsPlayer_Base;
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.PlayerCharaActive
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       NewTransform                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::PlayerCharaActive(E_PLAYER_MANAGER_TYPE Selection, const struct FTransform& NewTransform, class UObject* __WorldContext, class APawn** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "PlayerCharaActive");

	Params::BPL_PlayerManager_C_PlayerCharaActive Parms{};

	Parms.Selection = Selection;
	Parms.NewTransform = std::move(NewTransform);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.PlayerCharaDeactive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::PlayerCharaDeactive(E_PLAYER_MANAGER_TYPE Selection, class UObject* __WorldContext, class APawn** Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "PlayerCharaDeactive");

	Params::BPL_PlayerManager_C_PlayerCharaDeactive Parms{};

	Parms.Selection = Selection;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.PlayerChange
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBattle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::PlayerChange(E_PLAYER_MANAGER_TYPE Select, bool IsBattle, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "PlayerChange");

	Params::BPL_PlayerManager_C_PlayerChange Parms{};

	Parms.Select = Select;
	Parms.IsBattle = IsBattle;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.SetController
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::SetController(E_PLAYER_MANAGER_TYPE Type, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "SetController");

	Params::BPL_PlayerManager_C_SetController Parms{};

	Parms.Type = Type;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.PlayerCharaReActive
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::PlayerCharaReActive(E_PLAYER_MANAGER_TYPE PlayerType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "PlayerCharaReActive");

	Params::BPL_PlayerManager_C_PlayerCharaReActive Parms{};

	Parms.PlayerType = PlayerType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.IsActive
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   PlayerType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsActive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_PlayerManager_C::IsActive(E_PLAYER_MANAGER_TYPE PlayerType, class UObject* __WorldContext, bool* Param_IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "IsActive");

	Params::BPL_PlayerManager_C_IsActive Parms{};

	Parms.PlayerType = PlayerType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_IsActive != nullptr)
		*Param_IsActive = Parms.Param_IsActive;
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.GetActivePlayer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerBase_C*                    Player                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_PLAYER_MANAGER_TYPE                   E_Type                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::GetActivePlayer(class UObject* __WorldContext, class APlayerBase_C** Player, E_PLAYER_MANAGER_TYPE* E_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "GetActivePlayer");

	Params::BPL_PlayerManager_C_GetActivePlayer Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Player != nullptr)
		*Player = Parms.Player;

	if (E_Type != nullptr)
		*E_Type = Parms.E_Type;
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.TokyoPlayerCh
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PLAYER_MANAGER_TYPE                   Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TokyoReturn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBtl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::TokyoPlayerCh(E_PLAYER_MANAGER_TYPE Select, bool TokyoReturn, bool IsBtl, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "TokyoPlayerCh");

	Params::BPL_PlayerManager_C_TokyoPlayerCh Parms{};

	Parms.Select = Select;
	Parms.TokyoReturn = TokyoReturn;
	Parms.IsBtl = IsBtl;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_PlayerManager.BPL_PlayerManager_C.SaveTokyoPlayer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_PlayerManager_C::SaveTokyoPlayer(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_PlayerManager_C", "SaveTokyoPlayer");

	Params::BPL_PlayerManager_C_SaveTokyoPlayer Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}
