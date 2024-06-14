#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaLegComponent

#include "Basic.hpp"

#include "CharaLegComponent_classes.hpp"
#include "CharaLegComponent_parameters.hpp"


namespace SDK
{

// Function CharaLegComponent.CharaLegComponent_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Sink                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IKEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaLegComponent_C::Update(float DeltaTime, class USkinnedMeshComponent* Mesh, float Sink, bool IKEnable, struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "Update");

	Params::CharaLegComponent_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.Sink = Sink;
	Parms.IKEnable = IKEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function CharaLegComponent.CharaLegComponent_C.UpdateGroundContact
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Sink                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaLegComponent_C::UpdateGroundContact(class USkinnedMeshComponent* Mesh, float Sink)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "UpdateGroundContact");

	Params::CharaLegComponent_C_UpdateGroundContact Parms{};

	Parms.Mesh = Mesh;
	Parms.Sink = Sink;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaLegComponent.CharaLegComponent_C.UpdateLegEffector
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IKEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaLegComponent_C::UpdateLegEffector(float DeltaTime, class USkinnedMeshComponent* Mesh, bool IKEnable, struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "UpdateLegEffector");

	Params::CharaLegComponent_C_UpdateLegEffector Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Mesh = Mesh;
	Parms.IKEnable = IKEnable;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function CharaLegComponent.CharaLegComponent_C.MakeFootDeltaRotation
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Debug                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator UCharaLegComponent_C::MakeFootDeltaRotation(class USkinnedMeshComponent* Mesh, const struct FVector& Normal, bool Param_Debug) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "MakeFootDeltaRotation");

	Params::CharaLegComponent_C_MakeFootDeltaRotation Parms{};

	Parms.Mesh = Mesh;
	Parms.Normal = std::move(Normal);
	Parms.Param_Debug = Param_Debug;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharaLegComponent.CharaLegComponent_C.GetLegIKTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UCharaLegComponent_C::GetLegIKTarget(class USkinnedMeshComponent* Mesh) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "GetLegIKTarget");

	Params::CharaLegComponent_C_GetLegIKTarget Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharaLegComponent.CharaLegComponent_C.TestSink
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SinkLimit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Debug                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   SinkMin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SinkMax                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaLegComponent_C::TestSink(class USkinnedMeshComponent* Mesh, float SinkLimit, bool Param_Debug, float* SinkMin, float* SinkMax) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "TestSink");

	Params::CharaLegComponent_C_TestSink Parms{};

	Parms.Mesh = Mesh;
	Parms.SinkLimit = SinkLimit;
	Parms.Param_Debug = Param_Debug;

	UObject::ProcessEvent(Func, &Parms);

	if (SinkMin != nullptr)
		*SinkMin = Parms.SinkMin;

	if (SinkMax != nullptr)
		*SinkMax = Parms.SinkMax;
}


// Function CharaLegComponent.CharaLegComponent_C.GetEffectorOffsetLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UCharaLegComponent_C::GetEffectorOffsetLimit() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "GetEffectorOffsetLimit");

	Params::CharaLegComponent_C_GetEffectorOffsetLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharaLegComponent.CharaLegComponent_C.GetAdjustedTransform
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UCharaLegComponent_C::GetAdjustedTransform(class USkinnedMeshComponent* Mesh, class FName Socket) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "GetAdjustedTransform");

	Params::CharaLegComponent_C_GetAdjustedTransform Parms{};

	Parms.Mesh = Mesh;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharaLegComponent.CharaLegComponent_C.ProjectGroundLocation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UCharaLegComponent_C::ProjectGroundLocation(const struct FVector& Location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "ProjectGroundLocation");

	Params::CharaLegComponent_C_ProjectGroundLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharaLegComponent.CharaLegComponent_C.GetFootingPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkinnedMeshComponent*            Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Threshold                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Keep                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Point                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaLegComponent_C::GetFootingPoint(class USkinnedMeshComponent* Mesh, float Threshold, bool* Keep, struct FVector* Point) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaLegComponent_C", "GetFootingPoint");

	Params::CharaLegComponent_C_GetFootingPoint Parms{};

	Parms.Mesh = Mesh;
	Parms.Threshold = Threshold;

	UObject::ProcessEvent(Func, &Parms);

	if (Keep != nullptr)
		*Keep = Parms.Keep;

	if (Point != nullptr)
		*Point = std::move(Parms.Point);
}

}

