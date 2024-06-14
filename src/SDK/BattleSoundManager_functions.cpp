#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleSoundManager

#include "Basic.hpp"

#include "BattleSoundManager_classes.hpp"
#include "BattleSoundManager_parameters.hpp"


namespace SDK
{

// Function BattleSoundManager.BattleSoundManager_C.ExecuteUbergraph_BattleSoundManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::ExecuteUbergraph_BattleSoundManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "ExecuteUbergraph_BattleSoundManager");

	Params::BattleSoundManager_C_ExecuteUbergraph_BattleSoundManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.BI_AddAtomComp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAtomComponent*                   AtomComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SyncPlaybackSpeed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_AddAtomComp(class UAtomComponent* AtomComp, bool SyncPlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_AddAtomComp");

	Params::BattleSoundManager_C_BI_AddAtomComp Parms{};

	Parms.AtomComp = AtomComp;
	Parms.SyncPlaybackSpeed = SyncPlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.BI_EndShowStat
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::BI_EndShowStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_EndShowStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.BI_BeginShowStat
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::BI_BeginShowStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_BeginShowStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBattleSoundManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "ReceiveTick");

	Params::BattleSoundManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.GetResidentAssetByName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundAtomCue*                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::GetResidentAssetByName(class FName Param_Name, class USoundAtomCue** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "GetResidentAssetByName");

	Params::BattleSoundManager_C_GetResidentAssetByName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleSoundManager.BattleSoundManager_C.PlayResidentSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::PlayResidentSE(class FName Param_Name, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "PlayResidentSE");

	Params::BattleSoundManager_C_PlayResidentSE Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.PlayAssetSE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnorePlayRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::PlayAssetSE(class USoundAtomCue* Sound, const struct FVector& Location, bool IgnorePlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "PlayAssetSE");

	Params::BattleSoundManager_C_PlayAssetSE Parms{};

	Parms.Sound = Sound;
	Parms.Location = std::move(Location);
	Parms.IgnorePlayRate = IgnorePlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.Change BGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBattleBGMType                          BGM_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFadeType                               FadeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsContinuousBGMBattle                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::Change_BGM(int32 Param_Index, EBattleBGMType BGM_Type, EFadeType FadeType, bool IsContinuousBGMBattle, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "Change BGM");

	Params::BattleSoundManager_C_Change_BGM Parms{};

	Parms.Param_Index = Param_Index;
	Parms.BGM_Type = BGM_Type;
	Parms.FadeType = FadeType;
	Parms.IsContinuousBGMBattle = IsContinuousBGMBattle;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BattleSoundManager.BattleSoundManager_C.StopAllSE
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::StopAllSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "StopAllSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.PlayAssetSE_2D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnorePlayRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::PlayAssetSE_2D(class USoundAtomCue* Sound, bool IgnorePlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "PlayAssetSE_2D");

	Params::BattleSoundManager_C_PlayAssetSE_2D Parms{};

	Parms.Sound = Sound;
	Parms.IgnorePlayRate = IgnorePlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.GetMainWork
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleMain_C>BattleMain                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::GetMainWork(TScriptInterface<class IBPI_BattleMain_C>* BattleMain, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "GetMainWork");

	Params::BattleSoundManager_C_GetMainWork Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BattleMain != nullptr)
		*BattleMain = Parms.BattleMain;

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BattleSoundManager.BattleSoundManager_C.GetPlayRate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   PlayRate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::GetPlayRate(float* PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "GetPlayRate");

	Params::BattleSoundManager_C_GetPlayRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;
}


// Function BattleSoundManager.BattleSoundManager_C.SetPlayRate
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::SetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "SetPlayRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.Refresh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.RememberCurrentBGM
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    PrevBattleBGM                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::RememberCurrentBGM(class USoundAtomCue* PrevBattleBGM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "RememberCurrentBGM");

	Params::BattleSoundManager_C_RememberCurrentBGM Parms{};

	Parms.PrevBattleBGM = PrevBattleBGM;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSoundManager.BattleSoundManager_C.ShowBattleStat
// (Private, BlueprintCallable, BlueprintEvent)

void UBattleSoundManager_C::ShowBattleStat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "ShowBattleStat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSoundManager.BattleSoundManager_C.GetCurrentBGMType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EBattleBGMType                          Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::GetCurrentBGMType(EBattleBGMType* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "GetCurrentBGMType");

	Params::BattleSoundManager_C_GetCurrentBGMType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_PlayResidentSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SEName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_PlayResidentSE(class FName SEName, const struct FVector& Location, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_PlayResidentSE");

	Params::BattleSoundManager_C_BI_PlayResidentSE Parms{};

	Parms.SEName = SEName;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_PlayAssetSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnorePlayRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_PlayAssetSE(class USoundAtomCue* Data, const struct FVector& Location, bool IgnorePlayRate, bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_PlayAssetSE");

	Params::BattleSoundManager_C_BI_PlayAssetSE Parms{};

	Parms.Data = Data;
	Parms.Location = std::move(Location);
	Parms.IgnorePlayRate = IgnorePlayRate;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_GetResidentSEByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USoundAtomCue*                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleSoundManager_C::BI_GetResidentSEByName(const class FString& Param_Name, class USoundAtomCue** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_GetResidentSEByName");

	Params::BattleSoundManager_C_BI_GetResidentSEByName Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_ChangeBGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBattleBGMType                          BGM_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFadeType                               FadeType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsContinuousBGMBattle                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_ChangeBGM(int32 ID, EBattleBGMType BGM_Type, EFadeType FadeType, bool IsContinuousBGMBattle, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_ChangeBGM");

	Params::BattleSoundManager_C_BI_ChangeBGM Parms{};

	Parms.ID = ID;
	Parms.BGM_Type = BGM_Type;
	Parms.FadeType = FadeType;
	Parms.IsContinuousBGMBattle = IsContinuousBGMBattle;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_StopAllSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_StopAllSE(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_StopAllSE");

	Params::BattleSoundManager_C_BI_StopAllSE Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_PlayAssetSE_2D
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnorePlayRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_PlayAssetSE_2D(class USoundAtomCue* Data, bool IgnorePlayRate, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_PlayAssetSE_2D");

	Params::BattleSoundManager_C_BI_PlayAssetSE_2D Parms{};

	Parms.Data = Data;
	Parms.IgnorePlayRate = IgnorePlayRate;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleSoundManager.BattleSoundManager_C.BI_RememberCurrentBGM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*                    PrevBattleBGM                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleSoundManager_C::BI_RememberCurrentBGM(class USoundAtomCue* PrevBattleBGM, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSoundManager_C", "BI_RememberCurrentBGM");

	Params::BattleSoundManager_C_BI_RememberCurrentBGM Parms{};

	Parms.PrevBattleBGM = PrevBattleBGM;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}

}
