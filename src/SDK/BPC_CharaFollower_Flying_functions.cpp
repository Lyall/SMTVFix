#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPC_CharaFollower_Flying

#include "Basic.hpp"

#include "BPC_CharaFollower_Flying_classes.hpp"
#include "BPC_CharaFollower_Flying_parameters.hpp"


namespace SDK
{

// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.ExecuteUbergraph_BPC_CharaFollower_Flying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::ExecuteUbergraph_BPC_CharaFollower_Flying(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "ExecuteUbergraph_BPC_CharaFollower_Flying");

	Params::BPC_CharaFollower_Flying_C_ExecuteUbergraph_BPC_CharaFollower_Flying Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_CalcWarp
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_CalcWarp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_CalcWarp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "ReceiveTick");

	Params::BPC_CharaFollower_Flying_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.BPI_TeleportNaviLocationAndRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_StopUntilPlayerMove                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::BPI_TeleportNaviLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation, bool Param_StopUntilPlayerMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "BPI_TeleportNaviLocationAndRotation");

	Params::BPC_CharaFollower_Flying_C_BPI_TeleportNaviLocationAndRotation Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.Param_StopUntilPlayerMove = Param_StopUntilPlayerMove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideVelocity
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideVelocity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideState
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideTargetPos
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideTargetPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideTargetPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideTargetRotate
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideTargetRotate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideTargetRotate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideNextPos
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideNextPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideNextPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.PlayIdleMotion
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::PlayIdleMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "PlayIdleMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.Tick_DecideMotion
// (BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::Tick_DecideMotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "Tick_DecideMotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.OnLoaded_6E8E0874402C10BA5673C0B97FB96BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::OnLoaded_6E8E0874402C10BA5673C0B97FB96BD6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "OnLoaded_6E8E0874402C10BA5673C0B97FB96BD6");

	Params::BPC_CharaFollower_Flying_C_OnLoaded_6E8E0874402C10BA5673C0B97FB96BD6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.ResetMoveParam
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::ResetMoveParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "ResetMoveParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.CheckGroundType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    GroundType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::CheckGroundType(bool* GroundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "CheckGroundType");

	Params::BPC_CharaFollower_Flying_C_CheckGroundType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GroundType != nullptr)
		*GroundType = Parms.GroundType;
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.CalcOnGround
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::CalcOnGround(const struct FVector& InLocation, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "CalcOnGround");

	Params::BPC_CharaFollower_Flying_C_CalcOnGround Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.CalcFall_ForGroundType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::CalcFall_ForGroundType(const struct FVector& InLocation, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "CalcFall_ForGroundType");

	Params::BPC_CharaFollower_Flying_C_CalcFall_ForGroundType Parms{};

	Parms.InLocation = std::move(InLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.CheckLoopMotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Loop                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::CheckLoopMotion(bool* Loop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "CheckLoopMotion");

	Params::BPC_CharaFollower_Flying_C_CheckLoopMotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Loop != nullptr)
		*Loop = Parms.Loop;
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.UpdateDashEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::UpdateDashEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "UpdateDashEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.BPI_WarpNaviDevilBasePos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CalcOnGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::BPI_WarpNaviDevilBasePos(bool CalcOnGround, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "BPI_WarpNaviDevilBasePos");

	Params::BPC_CharaFollower_Flying_C_BPI_WarpNaviDevilBasePos Parms{};

	Parms.CalcOnGround = CalcOnGround;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.IsCheckObstacle_WhenGotoGimmick
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CheckObstacle_WhenGotoGimmick                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::IsCheckObstacle_WhenGotoGimmick(bool* CheckObstacle_WhenGotoGimmick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "IsCheckObstacle_WhenGotoGimmick");

	Params::BPC_CharaFollower_Flying_C_IsCheckObstacle_WhenGotoGimmick Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CheckObstacle_WhenGotoGimmick != nullptr)
		*CheckObstacle_WhenGotoGimmick = Parms.CheckObstacle_WhenGotoGimmick;
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.CalcGiveupFollowing_ForGroundType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Giveup                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPC_CharaFollower_Flying_C::CalcGiveupFollowing_ForGroundType(bool* Giveup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "CalcGiveupFollowing_ForGroundType");

	Params::BPC_CharaFollower_Flying_C_CalcGiveupFollowing_ForGroundType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Giveup != nullptr)
		*Giveup = Parms.Giveup;
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.ChangeFollowerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharaFollowerState                    State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_TargetActor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_CharaFollower_Flying_C::ChangeFollowerState(E_CharaFollowerState State, class AActor* Param_TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "ChangeFollowerState");

	Params::BPC_CharaFollower_Flying_C_ChangeFollowerState Parms{};

	Parms.State = State;
	Parms.Param_TargetActor = Param_TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPC_CharaFollower_Flying.BPC_CharaFollower_Flying_C.AfterWarp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_CharaFollower_Flying_C::AfterWarp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPC_CharaFollower_Flying_C", "AfterWarp");

	UObject::ProcessEvent(Func, nullptr);
}

}

