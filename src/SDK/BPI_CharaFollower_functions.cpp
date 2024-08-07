#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaFollower

#include "Basic.hpp"

#include "BPI_CharaFollower_classes.hpp"
#include "BPI_CharaFollower_parameters.hpp"


namespace SDK
{

// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_WarpNaviDevilBasePos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CalcOnGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_WarpNaviDevilBasePos(bool CalcOnGround, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_WarpNaviDevilBasePos");

	Params::BPI_CharaFollower_C_BPI_WarpNaviDevilBasePos Parms{};

	Parms.CalcOnGround = CalcOnGround;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_SetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_SetVisibility");

	Params::BPI_CharaFollower_C_BPI_SetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_TeleportNaviLocationAndRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    StopUntilPlayerMove                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_TeleportNaviLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation, bool StopUntilPlayerMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_TeleportNaviLocationAndRotation");

	Params::BPI_CharaFollower_C_BPI_TeleportNaviLocationAndRotation Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.StopUntilPlayerMove = StopUntilPlayerMove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_ChangeDecalAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*                  Decal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_ChangeDecalAnimNotify(class UDecalComponent* Decal, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_ChangeDecalAnimNotify");

	Params::BPI_CharaFollower_C_BPI_ChangeDecalAnimNotify Parms{};

	Parms.Decal = Decal;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_RideCoaster_ForNaviDevil
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaFollower_C::BPI_RideCoaster_ForNaviDevil()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_RideCoaster_ForNaviDevil");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_GetOffCoaster_ForNaviDevl
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaFollower_C::BPI_GetOffCoaster_ForNaviDevl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_GetOffCoaster_ForNaviDevl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_ProcMermaid_WhenFoundCoaster
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaFollower_C::BPI_ProcMermaid_WhenFoundCoaster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_ProcMermaid_WhenFoundCoaster");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_SetVisible_NaviGimmickEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_SetVisible_NaviGimmickEffect(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_SetVisible_NaviGimmickEffect");

	Params::BPI_CharaFollower_C_BPI_SetVisible_NaviGimmickEffect Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_DiveMermaid
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_CharaFollower_C::BPI_DiveMermaid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_DiveMermaid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_CharaFollower.BPI_CharaFollower_C.BPI_SetVisible_NaviMoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CharaFollower_C::BPI_SetVisible_NaviMoveEffect(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CharaFollower_C", "BPI_SetVisible_NaviMoveEffect");

	Params::BPI_CharaFollower_C_BPI_SetVisible_NaviMoveEffect Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

