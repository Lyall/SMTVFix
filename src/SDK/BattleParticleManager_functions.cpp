#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleParticleManager

#include "Basic.hpp"

#include "BattleParticleManager_classes.hpp"
#include "BattleParticleManager_parameters.hpp"


namespace SDK
{

// Function BattleParticleManager.BattleParticleManager_C.ExecuteUbergraph_BattleParticleManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::ExecuteUbergraph_BattleParticleManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "ExecuteUbergraph_BattleParticleManager");

	Params::BattleParticleManager_C_ExecuteUbergraph_BattleParticleManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleParticleManager.BattleParticleManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "ReceiveTick");

	Params::BattleParticleManager_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleParticleManager.BattleParticleManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBattleParticleManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleParticleManager.BattleParticleManager_C.AddParticle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ParticleObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform                       RelativeTransform                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int32                                   TranslucencyPriority                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectPairSetting          PairSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AttackSocketName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    AllowPositionUpdate                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*                    ModSkeltal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                ModAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ModSocketName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           HashID                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::AddParticle(class UObject* ParticleObject, const struct FTransform& SpawnTransform, const struct FTransform& RelativeTransform, int32 TranslucencyPriority, const struct FSkillEffectPairSetting& PairSetting, class AActor* TargetActor, const class FString& AttackSocketName, bool AllowPositionUpdate, class USkeletalMesh* ModSkeltal, class UAnimSequenceBase* ModAnim, class FName ModSocketName, class FString* HashID, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "AddParticle");

	Params::BattleParticleManager_C_AddParticle Parms{};

	Parms.ParticleObject = ParticleObject;
	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.RelativeTransform = std::move(RelativeTransform);
	Parms.TranslucencyPriority = TranslucencyPriority;
	Parms.PairSetting = std::move(PairSetting);
	Parms.TargetActor = TargetActor;
	Parms.AttackSocketName = std::move(AttackSocketName);
	Parms.AllowPositionUpdate = AllowPositionUpdate;
	Parms.ModSkeltal = ModSkeltal;
	Parms.ModAnim = ModAnim;
	Parms.ModSocketName = ModSocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (HashID != nullptr)
		*HashID = std::move(Parms.HashID);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.IsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_IsAlive                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::IsAlive(const class FString& HashID, bool* Param_IsAlive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "IsAlive");

	Params::BattleParticleManager_C_IsAlive Parms{};

	Parms.HashID = std::move(HashID);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsAlive != nullptr)
		*Param_IsAlive = Parms.Param_IsAlive;
}


// Function BattleParticleManager.BattleParticleManager_C.GetMainWork
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABattleMain_C*                    BattleMain                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::GetMainWork(class ABattleMain_C** BattleMain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "GetMainWork");

	Params::BattleParticleManager_C_GetMainWork Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BattleMain != nullptr)
		*BattleMain = Parms.BattleMain;
}


// Function BattleParticleManager.BattleParticleManager_C.SetBeamParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::SetBeamParameter(const class FString& HashID, int32 Target, int32 Source, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "SetBeamParameter");

	Params::BattleParticleManager_C_SetBeamParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Target = Target;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.SetProjectileParameter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Tangent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::SetProjectileParameter(const class FString& HashID, int32 Target, int32 Source, float Speed, float Tangent, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "SetProjectileParameter");

	Params::BattleParticleManager_C_SetProjectileParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.Speed = Speed;
	Parms.Tangent = Tangent;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.DestroyAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleParticleManager_C::DestroyAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "DestroyAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleParticleManager.BattleParticleManager_C.SetPlayRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "SetPlayRate");

	Params::BattleParticleManager_C_SetPlayRate Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleParticleManager.BattleParticleManager_C.RetrieveCharaTrans
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleParty_C>IPartySystem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                       RelativeTrans                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                                    IsRegister                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsWorldRelative                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       Trans                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
// class ACharaBase_C*                     Unit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::RetrieveCharaTrans(TScriptInterface<class IBPI_BattleParty_C> IPartySystem, int32 PartyIndex, const class FString& SocketName, const struct FTransform& RelativeTrans, bool IsRegister, bool IsWorldRelative, struct FTransform* Trans, class ACharaBase_C** Unit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "RetrieveCharaTrans");

	Params::BattleParticleManager_C_RetrieveCharaTrans Parms{};

	Parms.IPartySystem = IPartySystem;
	Parms.PartyIndex = PartyIndex;
	Parms.SocketName = std::move(SocketName);
	Parms.RelativeTrans = std::move(RelativeTrans);
	Parms.IsRegister = IsRegister;
	Parms.IsWorldRelative = IsWorldRelative;

	UObject::ProcessEvent(Func, &Parms);

	if (Trans != nullptr)
		*Trans = std::move(Parms.Trans);

	if (Unit != nullptr)
		*Unit = Parms.Unit;
}


// Function BattleParticleManager.BattleParticleManager_C.ApplyMeshRotate
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       InTrans                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class ACharaBase_C*                     Unit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Trans                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::ApplyMeshRotate(const struct FTransform& InTrans, class ACharaBase_C* Unit, struct FTransform* Trans)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "ApplyMeshRotate");

	Params::BattleParticleManager_C_ApplyMeshRotate Parms{};

	Parms.InTrans = std::move(InTrans);
	Parms.Unit = Unit;

	UObject::ProcessEvent(Func, &Parms);

	if (Trans != nullptr)
		*Trans = std::move(Parms.Trans);
}


// Function BattleParticleManager.BattleParticleManager_C.SetDecalParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMaterialAnimSetting_T>   AnimSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LoopTimes                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CycleSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   RotRandMin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotRandMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AbsolutelyNoRotation                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCastOnlyStaticMesh                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::SetDecalParameter(const class FString& HashID, class UMaterialInstance* Material, TArray<struct FMaterialAnimSetting_T>& AnimSetting, int32 LoopTimes, float CycleSec, const struct FRotator& Rotation, float RotRandMin, float RotRandMax, const struct FVector& Size, bool AbsolutelyNoRotation, bool IsCastOnlyStaticMesh, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "SetDecalParameter");

	Params::BattleParticleManager_C_SetDecalParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Material = Material;
	Parms.AnimSetting = std::move(AnimSetting);
	Parms.LoopTimes = LoopTimes;
	Parms.CycleSec = CycleSec;
	Parms.Rotation = std::move(Rotation);
	Parms.RotRandMin = RotRandMin;
	Parms.RotRandMax = RotRandMax;
	Parms.Size = std::move(Size);
	Parms.AbsolutelyNoRotation = AbsolutelyNoRotation;
	Parms.IsCastOnlyStaticMesh = IsCastOnlyStaticMesh;

	UObject::ProcessEvent(Func, &Parms);

	AnimSetting = std::move(Parms.AnimSetting);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.IdentifyTransform
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UBattleParticleManager_C::IdentifyTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "IdentifyTransform");

	Params::BattleParticleManager_C_IdentifyTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleParticleManager.BattleParticleManager_C.FindUnit
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleParty_C>BPI_BattleParty                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharaBase_C*                     Unit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleParticleManager_C::FindUnit(TScriptInterface<class IBPI_BattleParty_C> BPI_BattleParty, int32 PartyIndex, class ACharaBase_C** Unit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "FindUnit");

	Params::BattleParticleManager_C_FindUnit Parms{};

	Parms.BPI_BattleParty = BPI_BattleParty;
	Parms.PartyIndex = PartyIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Unit != nullptr)
		*Unit = Parms.Unit;
}


// Function BattleParticleManager.BattleParticleManager_C.BIIsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsAlive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BIIsAlive(const class FString& HashID, bool* IsAlive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BIIsAlive");

	Params::BattleParticleManager_C_BIIsAlive Parms{};

	Parms.HashID = std::move(HashID);

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlive != nullptr)
		*IsAlive = Parms.IsAlive;
}


// Function BattleParticleManager.BattleParticleManager_C.BIAddParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ParticleObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       SpawnTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FTransform                       RelativeTransform                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// int32                                   TranslucencyPriority                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillEffectPairSetting          PairSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AttachSocketName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    AllowPositionUpdate                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*                    ModSkeltal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                ModAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ModSocketName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           HashID                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BIAddParticle(class UObject* ParticleObject, const struct FTransform& SpawnTransform, const struct FTransform& RelativeTransform, int32 TranslucencyPriority, const struct FSkillEffectPairSetting& PairSetting, class AActor* TargetActor, const class FString& AttachSocketName, bool AllowPositionUpdate, class USkeletalMesh* ModSkeltal, class UAnimSequenceBase* ModAnim, class FName ModSocketName, class FString* HashID, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BIAddParticle");

	Params::BattleParticleManager_C_BIAddParticle Parms{};

	Parms.ParticleObject = ParticleObject;
	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.RelativeTransform = std::move(RelativeTransform);
	Parms.TranslucencyPriority = TranslucencyPriority;
	Parms.PairSetting = std::move(PairSetting);
	Parms.TargetActor = TargetActor;
	Parms.AttachSocketName = std::move(AttachSocketName);
	Parms.AllowPositionUpdate = AllowPositionUpdate;
	Parms.ModSkeltal = ModSkeltal;
	Parms.ModAnim = ModAnim;
	Parms.ModSocketName = ModSocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (HashID != nullptr)
		*HashID = std::move(Parms.HashID);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.BISetBeamParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BISetBeamParameter(const class FString& HashID, int32 Target, int32 Source, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BISetBeamParameter");

	Params::BattleParticleManager_C_BISetBeamParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Target = Target;
	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.BISetProjectileParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Tangent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BISetProjectileParameter(const class FString& HashID, int32 Target, int32 Source, float Speed, float Tangent, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BISetProjectileParameter");

	Params::BattleParticleManager_C_BISetProjectileParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.Speed = Speed;
	Parms.Tangent = Tangent;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.BIAddParticle2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_BattleParty_C>IPartySystem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          ParticleObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBtlTaskDesc                     Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           HashID                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BIAddParticle2(TScriptInterface<class IBPI_BattleParty_C> IPartySystem, class UObject* ParticleObject, const struct FBtlTaskDesc& Desc, class FString* HashID, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BIAddParticle2");

	Params::BattleParticleManager_C_BIAddParticle2 Parms{};

	Parms.IPartySystem = IPartySystem;
	Parms.ParticleObject = ParticleObject;
	Parms.Desc = std::move(Desc);

	UObject::ProcessEvent(Func, &Parms);

	if (HashID != nullptr)
		*HashID = std::move(Parms.HashID);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.BIResetTransrateCache
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BIResetTransrateCache(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BIResetTransrateCache");

	Params::BattleParticleManager_C_BIResetTransrateCache Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleParticleManager.BattleParticleManager_C.BISetDecalParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           HashID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMaterialInstance*                Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMaterialAnimSetting_T>   AnimSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   LoopTimes                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CycleSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   RotRandMin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RotRandMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AbsolutelyNoRotation                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCastOnlyStaticMesh                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BISetDecalParameter(const class FString& HashID, class UMaterialInstance* Material, TArray<struct FMaterialAnimSetting_T>& AnimSetting, int32 LoopTimes, float CycleSec, const struct FRotator& Rotation, float RotRandMin, float RotRandMax, const struct FVector& Size, bool AbsolutelyNoRotation, bool IsCastOnlyStaticMesh, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BISetDecalParameter");

	Params::BattleParticleManager_C_BISetDecalParameter Parms{};

	Parms.HashID = std::move(HashID);
	Parms.Material = Material;
	Parms.AnimSetting = std::move(AnimSetting);
	Parms.LoopTimes = LoopTimes;
	Parms.CycleSec = CycleSec;
	Parms.Rotation = std::move(Rotation);
	Parms.RotRandMin = RotRandMin;
	Parms.RotRandMax = RotRandMax;
	Parms.Size = std::move(Size);
	Parms.AbsolutelyNoRotation = AbsolutelyNoRotation;
	Parms.IsCastOnlyStaticMesh = IsCastOnlyStaticMesh;

	UObject::ProcessEvent(Func, &Parms);

	AnimSetting = std::move(Parms.AnimSetting);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BattleParticleManager.BattleParticleManager_C.BI_DestroyAll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NoUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::BI_DestroyAll(bool* NoUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "BI_DestroyAll");

	Params::BattleParticleManager_C_BI_DestroyAll Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NoUse != nullptr)
		*NoUse = Parms.NoUse;
}


// Function BattleParticleManager.BattleParticleManager_C.UpdateComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ContinueUpdate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleParticleManager_C::UpdateComponent(float Delta, bool* ContinueUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleParticleManager_C", "UpdateComponent");

	Params::BattleParticleManager_C_UpdateComponent Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinueUpdate != nullptr)
		*ContinueUpdate = Parms.ContinueUpdate;
}

}

