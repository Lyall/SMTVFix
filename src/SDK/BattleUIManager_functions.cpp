#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleUIManager

#include "Basic.hpp"

#include "BattleUIManager_classes.hpp"
#include "BattleUIManager_parameters.hpp"


namespace SDK
{

// Function BattleUIManager.BattleUIManager_C.ExecuteUbergraph_BattleUIManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::ExecuteUbergraph_BattleUIManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ExecuteUbergraph_BattleUIManager");

	Params::BattleUIManager_C_ExecuteUbergraph_BattleUIManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ReceiveTick");

	Params::BattleUIManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ReceiveEndPlay");

	Params::BattleUIManager_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBattleUIManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleUIManager.BattleUIManager_C.OnLoaded_480EF4F74D1735F8C80EB88B12F10B00
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBattleUIManager_C::OnLoaded_480EF4F74D1735F8C80EB88B12F10B00(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "OnLoaded_480EF4F74D1735F8C80EB88B12F10B00");

	Params::BattleUIManager_C_OnLoaded_480EF4F74D1735F8C80EB88B12F10B00 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.OnLoaded_2D1128B94EA6152C05F061AD7E8976BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBattleUIManager_C::OnLoaded_2D1128B94EA6152C05F061AD7E8976BF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "OnLoaded_2D1128B94EA6152C05F061AD7E8976BF");

	Params::BattleUIManager_C_OnLoaded_2D1128B94EA6152C05F061AD7E8976BF Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.GetMainWork
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleMain_C*                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::GetMainWork(class ABattleMain_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "GetMainWork");

	Params::BattleUIManager_C_GetMainWork Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleUIManager_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleUIManager.BattleUIManager_C.GetBlankNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleNumberActor_C*             RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::GetBlankNumber(class ABattleNumberActor_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "GetBlankNumber");

	Params::BattleUIManager_C_GetBlankNumber Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.ShowBlankNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HP_Value                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MP_Value                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTL_UTIL_ICON_TYPE                    HitType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTL_NUMEFF                            NumEffectType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SocketLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        PosOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ratio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SizeRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleNumberActor_C*             RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::ShowBlankNumber(int32 HP_Value, int32 MP_Value, E_BTL_UTIL_ICON_TYPE HitType, int32 Level, E_BTL_NUMEFF NumEffectType, const struct FVector& SocketLocation, const struct FVector2D& PosOffset, int32 Ratio, float PlayRate, float SizeRatio, int32 PartyIndex, class ABattleNumberActor_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ShowBlankNumber");

	Params::BattleUIManager_C_ShowBlankNumber Parms{};

	Parms.HP_Value = HP_Value;
	Parms.MP_Value = MP_Value;
	Parms.HitType = HitType;
	Parms.Level = Level;
	Parms.NumEffectType = NumEffectType;
	Parms.SocketLocation = std::move(SocketLocation);
	Parms.PosOffset = std::move(PosOffset);
	Parms.Ratio = Ratio;
	Parms.PlayRate = PlayRate;
	Parms.SizeRatio = SizeRatio;
	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.HideNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleNumberActor_C*             NumberActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::HideNumber(class ABattleNumberActor_C* NumberActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "HideNumber");

	Params::BattleUIManager_C_HideNumber Parms{};

	Parms.NumberActor = NumberActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.IsInitialized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::IsInitialized(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "IsInitialized");

	Params::BattleUIManager_C_IsInitialized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.GetBlankIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleUtilIconActor_C*           RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::GetBlankIcon(class ABattleUtilIconActor_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "GetBlankIcon");

	Params::BattleUIManager_C_GetBlankIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.HideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleUtilIconActor_C*           IconActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::HideIcon(class ABattleUtilIconActor_C* IconActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "HideIcon");

	Params::BattleUIManager_C_HideIcon Parms{};

	Parms.IconActor = IconActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.ShowBlankIconByPartyIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_UTIL_ICON_TYPE                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABattleUtilIconActor_C*           RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleUIManager_C::ShowBlankIconByPartyIndex(E_BTL_UTIL_ICON_TYPE Type, float PlayRate, int32 PartyIndex, class FName SocketName, class ABattleUtilIconActor_C** RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "ShowBlankIconByPartyIndex");

	Params::BattleUIManager_C_ShowBlankIconByPartyIndex Parms{};

	Parms.Type = Type;
	Parms.PlayRate = PlayRate;
	Parms.PartyIndex = PartyIndex;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleUIManager.BattleUIManager_C.SetPressIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::SetPressIconVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "SetPressIconVisibility");

	Params::BattleUIManager_C_SetPressIconVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.SetUpliftingGaugeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::SetUpliftingGaugeVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "SetUpliftingGaugeVisibility");

	Params::BattleUIManager_C_SetUpliftingGaugeVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.SetDamageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::SetDamageVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "SetDamageVisibility");

	Params::BattleUIManager_C_SetDamageVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleUIManager.BattleUIManager_C.IsDisappearedMainUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDisappeared                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::IsDisappearedMainUI(bool* IsDisappeared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "IsDisappearedMainUI");

	Params::BattleUIManager_C_IsDisappearedMainUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisappeared != nullptr)
		*IsDisappeared = Parms.IsDisappeared;
}


// Function BattleUIManager.BattleUIManager_C.GetMainUIDisappear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PressIcon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Uplifting                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::GetMainUIDisappear(bool* PressIcon, bool* Uplifting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "GetMainUIDisappear");

	Params::BattleUIManager_C_GetMainUIDisappear Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PressIcon != nullptr)
		*PressIcon = Parms.PressIcon;

	if (Uplifting != nullptr)
		*Uplifting = Parms.Uplifting;
}


// Function BattleUIManager.BattleUIManager_C.BI_PressIconSlideOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_PressIconSlideOut(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_PressIconSlideOut");

	Params::BattleUIManager_C_BI_PressIconSlideOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BattleUIManager.BattleUIManager_C.BI_PressIconSlideIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_PressIconSlideIn(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_PressIconSlideIn");

	Params::BattleUIManager_C_BI_PressIconSlideIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BattleUIManager.BattleUIManager_C.BI_UpliftingGaugeSlideOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_UpliftingGaugeSlideOut(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_UpliftingGaugeSlideOut");

	Params::BattleUIManager_C_BI_UpliftingGaugeSlideOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BattleUIManager.BattleUIManager_C.BI_UpliftingGaugeSlideIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_UpliftingGaugeSlideIn(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_UpliftingGaugeSlideIn");

	Params::BattleUIManager_C_BI_UpliftingGaugeSlideIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BattleUIManager.BattleUIManager_C.BI_ShowBlankNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HP_Value                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MP_Value                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTL_UTIL_ICON_TYPE                    HitType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTL_NUMEFF                            NumEffectType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SocketLocation                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        PosOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Ratio_                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SizeRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BattleNumberActor_C>Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_ShowBlankNumber(int32 HP_Value, int32 MP_Value, E_BTL_UTIL_ICON_TYPE HitType, int32 Level, E_BTL_NUMEFF NumEffectType, const struct FVector& SocketLocation, struct FVector2D& PosOffset, const int32& Ratio_, float PlayRate, float SizeRate, int32 PartyIndex, TScriptInterface<class IBPI_BattleNumberActor_C>* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_ShowBlankNumber");

	Params::BattleUIManager_C_BI_ShowBlankNumber Parms{};

	Parms.HP_Value = HP_Value;
	Parms.MP_Value = MP_Value;
	Parms.HitType = HitType;
	Parms.Level = Level;
	Parms.NumEffectType = NumEffectType;
	Parms.SocketLocation = std::move(SocketLocation);
	Parms.PosOffset = std::move(PosOffset);
	Parms.Ratio_ = Ratio_;
	Parms.PlayRate = PlayRate;
	Parms.SizeRate = SizeRate;
	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);

	PosOffset = std::move(Parms.PosOffset);

	if (Number != nullptr)
		*Number = Parms.Number;
}


// Function BattleUIManager.BattleUIManager_C.BI_HideNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleNumberActor_C>Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_HideNumber(TScriptInterface<class IBPI_BattleNumberActor_C> Number, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_HideNumber");

	Params::BattleUIManager_C_BI_HideNumber Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleUIManager.BattleUIManager_C.BI_UtilIconShowByPartyIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTL_UTIL_ICON_TYPE                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_BattleUtilIconActor_C>Icon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_UtilIconShowByPartyIndex(E_BTL_UTIL_ICON_TYPE Type, float PlayRate, int32 PartyIndex, class FName SocketName, TScriptInterface<class IBPI_BattleUtilIconActor_C>* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_UtilIconShowByPartyIndex");

	Params::BattleUIManager_C_BI_UtilIconShowByPartyIndex Parms{};

	Parms.Type = Type;
	Parms.PlayRate = PlayRate;
	Parms.PartyIndex = PartyIndex;
	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;
}


// Function BattleUIManager.BattleUIManager_C.BI_UtilIconHide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleUtilIconActor_C>Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_UtilIconHide(TScriptInterface<class IBPI_BattleUtilIconActor_C> Icon, bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_UtilIconHide");

	Params::BattleUIManager_C_BI_UtilIconHide Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleUIManager.BattleUIManager_C.BI_PressIconIsWorking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsWorking                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_PressIconIsWorking(bool* IsWorking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_PressIconIsWorking");

	Params::BattleUIManager_C_BI_PressIconIsWorking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsWorking != nullptr)
		*IsWorking = Parms.IsWorking;
}


// Function BattleUIManager.BattleUIManager_C.BI_IsDisappearedMainUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisappeared                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_IsDisappearedMainUI(bool* IsDisappeared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_IsDisappearedMainUI");

	Params::BattleUIManager_C_BI_IsDisappearedMainUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDisappeared != nullptr)
		*IsDisappeared = Parms.IsDisappeared;
}


// Function BattleUIManager.BattleUIManager_C.BI_GetMainUIDisappeared
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PressIcon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Uplifting                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_GetMainUIDisappeared(bool* PressIcon, bool* Uplifting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_GetMainUIDisappeared");

	Params::BattleUIManager_C_BI_GetMainUIDisappeared Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PressIcon != nullptr)
		*PressIcon = Parms.PressIcon;

	if (Uplifting != nullptr)
		*Uplifting = Parms.Uplifting;
}


// Function BattleUIManager.BattleUIManager_C.BI_PressIconAreAllShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Shown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleUIManager_C::BI_PressIconAreAllShown(bool* Shown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleUIManager_C", "BI_PressIconAreAllShown");

	Params::BattleUIManager_C_BI_PressIconAreAllShown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shown != nullptr)
		*Shown = Parms.Shown;
}

}

