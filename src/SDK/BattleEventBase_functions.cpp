#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleEventBase

#include "Basic.hpp"

#include "BattleEventBase_classes.hpp"
#include "BattleEventBase_parameters.hpp"


namespace SDK
{

// Function BattleEventBase.BattleEventBase_C.ExecuteUbergraph_BattleEventBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::ExecuteUbergraph_BattleEventBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ExecuteUbergraph_BattleEventBase");

	Params::BattleEventBase_C_ExecuteUbergraph_BattleEventBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.Evt_BattleUIOut
// (BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::Evt_BattleUIOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "Evt_BattleUIOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.ChangeMapDark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapDarkID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::ChangeMapDark(int32 MapDarkID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ChangeMapDark");

	Params::BattleEventBase_C_ChangeMapDark Parms{};

	Parms.MapDarkID = MapDarkID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.BattleEventEnd
// (BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::BattleEventEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "BattleEventEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.SkillPerformance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Step                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::SkillPerformance(int32 Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "SkillPerformance");

	Params::BattleEventBase_C_SkillPerformance Parms{};

	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.OnLoaded_95DAFE7A4A94AE576557D68F5830014E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::OnLoaded_95DAFE7A4A94AE576557D68F5830014E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "OnLoaded_95DAFE7A4A94AE576557D68F5830014E");

	Params::BattleEventBase_C_OnLoaded_95DAFE7A4A94AE576557D68F5830014E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.OnLoaded_72AB40BC4E27ED6497B1CE842D1E4D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::OnLoaded_72AB40BC4E27ED6497B1CE842D1E4D51(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "OnLoaded_72AB40BC4E27ED6497B1CE842D1E4D51");

	Params::BattleEventBase_C_OnLoaded_72AB40BC4E27ED6497B1CE842D1E4D51 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.BattleEventFunc
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::BattleEventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "BattleEventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.StartEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       ScriptDataTable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptMessageAsset*              MessageAsset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::StartEvent(class UDataTable* ScriptDataTable, class UScriptMessageAsset* MessageAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "StartEvent");

	Params::BattleEventBase_C_StartEvent Parms{};

	Parms.ScriptDataTable = ScriptDataTable;
	Parms.MessageAsset = MessageAsset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.AddCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       WorldTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::AddCamera(const struct FTransform& WorldTransform, class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "AddCamera");

	Params::BattleEventBase_C_AddCamera Parms{};

	Parms.WorldTransform = std::move(WorldTransform);
	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.CalcEnemyWorldTrans
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             LookAtSocket                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OffsetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Trans                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::CalcEnemyWorldTrans(class FName LookAtSocket, const struct FVector& OffsetLocation, struct FTransform* Trans)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "CalcEnemyWorldTrans");

	Params::BattleEventBase_C_CalcEnemyWorldTrans Parms{};

	Parms.LookAtSocket = LookAtSocket;
	Parms.OffsetLocation = std::move(OffsetLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Trans != nullptr)
		*Trans = std::move(Parms.Trans);
}


// Function BattleEventBase.BattleEventBase_C.AddBlankTask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::AddBlankTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "AddBlankTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.CalcHeroBustShotTrans
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       BustShot                                               (Parm, OutParm, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::CalcHeroBustShotTrans(struct FTransform* BustShot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "CalcHeroBustShotTrans");

	Params::BattleEventBase_C_CalcHeroBustShotTrans Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BustShot != nullptr)
		*BustShot = std::move(Parms.BustShot);
}


// Function BattleEventBase.BattleEventBase_C.CheckBattleEventEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::CheckBattleEventEnd(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "CheckBattleEventEnd");

	Params::BattleEventBase_C_CheckBattleEventEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function BattleEventBase.BattleEventBase_C.GetBrankTaskID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::GetBrankTaskID(int32* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "GetBrankTaskID");

	Params::BattleEventBase_C_GetBrankTaskID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;
}


// Function BattleEventBase.BattleEventBase_C.GetUniqueName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABattleEventBase_C::GetUniqueName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "GetUniqueName");

	Params::BattleEventBase_C_GetUniqueName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleEventBase.BattleEventBase_C.ApplyAnimCamera
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraAnimationAsset*            CameraAsset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IdentifyScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::ApplyAnimCamera(int32 PartyIndex, class UCameraAnimationAsset* CameraAsset, bool IdentifyScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ApplyAnimCamera");

	Params::BattleEventBase_C_ApplyAnimCamera Parms{};

	Parms.PartyIndex = PartyIndex;
	Parms.CameraAsset = CameraAsset;
	Parms.IdentifyScale = IdentifyScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.CleanUpAnimCamera
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::CleanUpAnimCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "CleanUpAnimCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.IsFinishedAnimCamera
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsFinished                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::IsFinishedAnimCamera(bool* Param_IsFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "IsFinishedAnimCamera");

	Params::BattleEventBase_C_IsFinishedAnimCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsFinished != nullptr)
		*Param_IsFinished = Parms.Param_IsFinished;
}


// Function BattleEventBase.BattleEventBase_C.GetAnimCamera
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleAnimationCamera_C*         Camera                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::GetAnimCamera(class ABattleAnimationCamera_C** Camera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "GetAnimCamera");

	Params::BattleEventBase_C_GetAnimCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;
}


// Function BattleEventBase.BattleEventBase_C.UpdateDummyCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::UpdateDummyCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "UpdateDummyCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.IsEnemyLeaderDying
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Dying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::IsEnemyLeaderDying(bool* Dying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "IsEnemyLeaderDying");

	Params::BattleEventBase_C_IsEnemyLeaderDying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dying != nullptr)
		*Dying = Parms.Dying;
}


// Function BattleEventBase.BattleEventBase_C.GetMapDark
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MapDarkID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBattleMapDark_T                 MapDark                                                (Parm, OutParm, HasGetValueTypeHash)

void ABattleEventBase_C::GetMapDark(int32 MapDarkID, struct FBattleMapDark_T* MapDark)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "GetMapDark");

	Params::BattleEventBase_C_GetMapDark Parms{};

	Parms.MapDarkID = MapDarkID;

	UObject::ProcessEvent(Func, &Parms);

	if (MapDark != nullptr)
		*MapDark = std::move(Parms.MapDark);
}


// Function BattleEventBase.BattleEventBase_C.ApplyCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CamTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::ApplyCamera(class FName CamTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ApplyCamera");

	Params::BattleEventBase_C_ApplyCamera Parms{};

	Parms.CamTag = CamTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.IsBossRush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    BossRush                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::IsBossRush(bool* BossRush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "IsBossRush");

	Params::BattleEventBase_C_IsBossRush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BossRush != nullptr)
		*BossRush = Parms.BossRush;
}


// Function BattleEventBase.BattleEventBase_C.AddDestroyPool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   Actors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleEventBase_C::AddDestroyPool(TArray<class AActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "AddDestroyPool");

	Params::BattleEventBase_C_AddDestroyPool Parms{};

	Parms.Actors = std::move(Actors);

	UObject::ProcessEvent(Func, &Parms);

	Actors = std::move(Parms.Actors);
}


// Function BattleEventBase.BattleEventBase_C.SetEnemyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::SetEnemyVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "SetEnemyVisibility");

	Params::BattleEventBase_C_SetEnemyVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.SetAllyVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::SetAllyVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "SetAllyVisibility");

	Params::BattleEventBase_C_SetAllyVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.AddEventActorList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::AddEventActorList(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "AddEventActorList");

	Params::BattleEventBase_C_AddEventActorList Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.RecoverFading
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::RecoverFading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "RecoverFading");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.OnWindowActivationChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleEventBase_C::OnWindowActivationChanged(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "OnWindowActivationChanged");

	Params::BattleEventBase_C_OnWindowActivationChanged Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ReceiveEndPlay");

	Params::BattleEventBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleEventBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ReceiveTick");

	Params::BattleEventBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleEventBase.BattleEventBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattleEventBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.IntroductionFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::IntroductionFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "IntroductionFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.HitFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::HitFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "HitFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.CounterFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::CounterFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "CounterFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.DeadFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::DeadFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "DeadFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.FinishFunc
// (Protected, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::FinishFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "FinishFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleEventBase.BattleEventBase_C.PrepareReflexCam
// (Private, BlueprintCallable, BlueprintEvent)

void ABattleEventBase_C::PrepareReflexCam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleEventBase_C", "PrepareReflexCam");

	UObject::ProcessEvent(Func, nullptr);
}

}
