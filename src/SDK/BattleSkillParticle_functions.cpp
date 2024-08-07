#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleSkillParticle

#include "Basic.hpp"

#include "BattleSkillParticle_classes.hpp"
#include "BattleSkillParticle_parameters.hpp"


namespace SDK
{

// Function BattleSkillParticle.BattleSkillParticle_C.ExecuteUbergraph_BattleSkillParticle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ExecuteUbergraph_BattleSkillParticle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ExecuteUbergraph_BattleSkillParticle");

	Params::BattleSkillParticle_C_ExecuteUbergraph_BattleSkillParticle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ReceiveEndPlay");

	Params::BattleSkillParticle_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattleSkillParticle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.IsEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsEnd                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::IsEnd(bool* Param_IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "IsEnd");

	Params::BattleSkillParticle_C_IsEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsEnd != nullptr)
		*Param_IsEnd = Parms.Param_IsEnd;
}


// Function BattleSkillParticle.BattleSkillParticle_C.Update
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFinished                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::Update(float Delta, bool* IsFinished)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "Update");

	Params::BattleSkillParticle_C_Update Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFinished != nullptr)
		*IsFinished = Parms.IsFinished;
}


// Function BattleSkillParticle.BattleSkillParticle_C.Get BIMainWork
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleMain_C>NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::Get_BIMainWork(TScriptInterface<class IBPI_BattleMain_C>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "Get BIMainWork");

	Params::BattleSkillParticle_C_Get_BIMainWork Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BattleSkillParticle.BattleSkillParticle_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.SetTargetLocation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::SetTargetLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "SetTargetLocation");

	Params::BattleSkillParticle_C_SetTargetLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.SetSourceLocation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::SetSourceLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "SetSourceLocation");

	Params::BattleSkillParticle_C_SetSourceLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyBeamParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExtensionDist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ApplyBeamParameter(const struct FVector& Target, const struct FVector& Source, float ExtensionDist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyBeamParameter");

	Params::BattleSkillParticle_C_ApplyBeamParameter Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);
	Parms.ExtensionDist = ExtensionDist;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyProjectileParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Tangent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          UpVec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Gravity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExtensionDist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    KeepEffect                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::ApplyProjectileParameter(const struct FVector& Target, const struct FVector& Source, float Speed, float Tangent, const struct FVector& UpVec, float Gravity, float ExtensionDist, bool KeepEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyProjectileParameter");

	Params::BattleSkillParticle_C_ApplyProjectileParameter Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);
	Parms.Speed = Speed;
	Parms.Tangent = Tangent;
	Parms.UpVec = std::move(UpVec);
	Parms.Gravity = Gravity;
	Parms.ExtensionDist = ExtensionDist;
	Parms.KeepEffect = KeepEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UpdateProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.SetPlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "SetPlayRate");

	Params::BattleSkillParticle_C_SetPlayRate Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyAbsorbParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          UpVec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExtensionDist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AttractStrength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ApplyAbsorbParameter(const struct FVector& Target, const struct FVector& Source, const struct FVector& UpVec, float ExtensionDist, float AttractStrength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyAbsorbParameter");

	Params::BattleSkillParticle_C_ApplyAbsorbParameter Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);
	Parms.UpVec = std::move(UpVec);
	Parms.ExtensionDist = ExtensionDist;
	Parms.AttractStrength = AttractStrength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyZigzagParamater
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          UpVec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExtensionDist                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ApplyZigzagParamater(const struct FVector& Target, const struct FVector& Source, float Speed, const struct FVector& UpVec, float ExtensionDist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyZigzagParamater");

	Params::BattleSkillParticle_C_ApplyZigzagParamater Parms{};

	Parms.Target = std::move(Target);
	Parms.Source = std::move(Source);
	Parms.Speed = Speed;
	Parms.UpVec = std::move(UpVec);
	Parms.ExtensionDist = ExtensionDist;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateZigzag
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UpdateZigzag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateZigzag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.CalcZigzagLocation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Locatioin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Dir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::CalcZigzagLocation(float Distance, struct FVector* Locatioin, struct FVector* Dir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "CalcZigzagLocation");

	Params::BattleSkillParticle_C_CalcZigzagLocation Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Locatioin != nullptr)
		*Locatioin = std::move(Parms.Locatioin);

	if (Dir != nullptr)
		*Dir = std::move(Parms.Dir);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateDecal
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::UpdateDecal(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateDecal");

	Params::BattleSkillParticle_C_UpdateDecal Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyDecalParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*                Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMaterialAnimSetting_T>   AnimSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LoopTimes                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CycleSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   RotationRandMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotationRandMax                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AbsolutelyNoRotation                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCastOnlyStaticMesh                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::ApplyDecalParameter(class UMaterialInstance* Material, TArray<struct FMaterialAnimSetting_T>& AnimSetting, int32 LoopTimes, float CycleSec, const struct FRotator& Rotation, float RotationRandMin, float RotationRandMax, const struct FVector& Size, bool AbsolutelyNoRotation, bool IsCastOnlyStaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyDecalParameter");

	Params::BattleSkillParticle_C_ApplyDecalParameter Parms{};

	Parms.Material = Material;
	Parms.AnimSetting = std::move(AnimSetting);
	Parms.LoopTimes = LoopTimes;
	Parms.CycleSec = CycleSec;
	Parms.Rotation = std::move(Rotation);
	Parms.RotationRandMin = RotationRandMin;
	Parms.RotationRandMax = RotationRandMax;
	Parms.Size = std::move(Size);
	Parms.AbsolutelyNoRotation = AbsolutelyNoRotation;
	Parms.IsCastOnlyStaticMesh = IsCastOnlyStaticMesh;

	UObject::ProcessEvent(Func, &Parms);

	AnimSetting = std::move(Parms.AnimSetting);
}


// Function BattleSkillParticle.BattleSkillParticle_C.ApplyDirectionalParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ActorLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          UpVec                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::ApplyDirectionalParameter(const struct FVector& TargetLocation, const struct FVector& ActorLocation, const struct FVector& UpVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "ApplyDirectionalParameter");

	Params::BattleSkillParticle_C_ApplyDirectionalParameter Parms{};

	Parms.TargetLocation = std::move(TargetLocation);
	Parms.ActorLocation = std::move(ActorLocation);
	Parms.UpVec = std::move(UpVec);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.IsPerformEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsPerformEnd                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleSkillParticle_C::IsPerformEnd(bool* Param_IsPerformEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "IsPerformEnd");

	Params::BattleSkillParticle_C_IsPerformEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsPerformEnd != nullptr)
		*Param_IsPerformEnd = Parms.Param_IsPerformEnd;
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateEffectLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UpdateEffectLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateEffectLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.CheckPositionUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::CheckPositionUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "CheckPositionUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.SetModAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*                    Param_SkeletalMesh                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                AnimSequence                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ModAttachSocketName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleSkillParticle_C::SetModAnim(class USkeletalMesh* Param_SkeletalMesh, class UAnimSequenceBase* AnimSequence, class FName ModAttachSocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "SetModAnim");

	Params::BattleSkillParticle_C_SetModAnim Parms{};

	Parms.Param_SkeletalMesh = Param_SkeletalMesh;
	Parms.AnimSequence = AnimSequence;
	Parms.ModAttachSocketName = ModAttachSocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateEffectLocationImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UpdateEffectLocationImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateEffectLocationImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleSkillParticle.BattleSkillParticle_C.UpdateModAnimEffectLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleSkillParticle_C::UpdateModAnimEffectLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleSkillParticle_C", "UpdateModAnimEffectLocation");

	UObject::ProcessEvent(Func, nullptr);
}

}

