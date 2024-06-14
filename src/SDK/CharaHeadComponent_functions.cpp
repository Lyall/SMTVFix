#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaHeadComponent

#include "Basic.hpp"

#include "CharaHeadComponent_classes.hpp"
#include "CharaHeadComponent_parameters.hpp"


namespace SDK
{

// Function CharaHeadComponent.CharaHeadComponent_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IKEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          GazePoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GazePointEnable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaHeadComponent_C::Update(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaHeadComponent_C", "Update");

	Params::CharaHeadComponent_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.IKEnable = IKEnable;
	Parms.GazePoint = std::move(GazePoint);
	Parms.GazePointEnable = GazePointEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function CharaHeadComponent.CharaHeadComponent_C.UpdateHeadRotation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IKEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          GazePoint                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GazePointEnable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaHeadComponent_C::UpdateHeadRotation(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, const struct FVector& GazePoint, bool GazePointEnable, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaHeadComponent_C", "UpdateHeadRotation");

	Params::CharaHeadComponent_C_UpdateHeadRotation Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.IKEnable = IKEnable;
	Parms.GazePoint = std::move(GazePoint);
	Parms.GazePointEnable = GazePointEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}

}
