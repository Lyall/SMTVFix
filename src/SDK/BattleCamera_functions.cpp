#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCamera

#include "Basic.hpp"

#include "BattleCamera_classes.hpp"
#include "BattleCamera_parameters.hpp"


namespace SDK
{

// Function BattleCamera.BattleCamera_C.ExecuteUbergraph_BattleCamera
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::ExecuteUbergraph_BattleCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ExecuteUbergraph_BattleCamera");

	Params::BattleCamera_C_ExecuteUbergraph_BattleCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ReceiveTick");

	Params::BattleCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ReceiveEndPlay");

	Params::BattleCamera_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.RemovePP_BattleMapDark
// (BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::RemovePP_BattleMapDark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "RemovePP_BattleMapDark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.DeactivatePP_BattleMapDark
// (BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::DeactivatePP_BattleMapDark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "DeactivatePP_BattleMapDark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.ActivatePP_BattleMapDark
// (BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::ActivatePP_BattleMapDark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ActivatePP_BattleMapDark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.LoadPP_BattleMapDark
// (BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::LoadPP_BattleMapDark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "LoadPP_BattleMapDark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattleCamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.OnLoaded_F037AA5742592184378AD09B6B17F15B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::OnLoaded_F037AA5742592184378AD09B6B17F15B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "OnLoaded_F037AA5742592184378AD09B6B17F15B");

	Params::BattleCamera_C_OnLoaded_F037AA5742592184378AD09B6B17F15B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.OnLoaded_944C3FC641F62CE9C4DDFFBE1BD13F20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::OnLoaded_944C3FC641F62CE9C4DDFFBE1BD13F20(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "OnLoaded_944C3FC641F62CE9C4DDFFBE1BD13F20");

	Params::BattleCamera_C_OnLoaded_944C3FC641F62CE9C4DDFFBE1BD13F20 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.BattleMapDark_On__UpdateFunc
// (BlueprintEvent)

void ABattleCamera_C::BattleMapDark_On__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "BattleMapDark_On__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.BattleMapDark_On__FinishedFunc
// (BlueprintEvent)

void ABattleCamera_C::BattleMapDark_On__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "BattleMapDark_On__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.SetHome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetHome(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetHome");

	Params::BattleCamera_C_SetHome Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetPartyFront
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_CharaBaseAccessor_C>InUnit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetPartyFront(TScriptInterface<class IBPI_CharaBaseAccessor_C> InUnit, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetPartyFront");

	Params::BattleCamera_C_SetPartyFront Parms{};

	Parms.InUnit = InUnit;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetSkillCam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_CharaBaseAccessor_C>PartyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetSkillCam(TScriptInterface<class IBPI_CharaBaseAccessor_C> PartyIndex, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetSkillCam");

	Params::BattleCamera_C_SetSkillCam Parms{};

	Parms.PartyIndex = PartyIndex;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetSplineCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          SplineActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EyeTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetSplineCam(class UObject* SplineActor, const struct FVector& EyeTarget, float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetSplineCam");

	Params::BattleCamera_C_SetSplineCam Parms{};

	Parms.SplineActor = SplineActor;
	Parms.EyeTarget = std::move(EyeTarget);
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.UpdateInterp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Tick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::UpdateInterp(float Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "UpdateInterp");

	Params::BattleCamera_C_UpdateInterp Parms{};

	Parms.Tick = Tick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetRailCam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RailActor_C*                  SplineActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          EyeTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsReturn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsLockTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ChangeSpeedPoint                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FirstSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SecondSpeed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   brendSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPanCamera                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Fovy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetRailCam(class ABP_RailActor_C* SplineActor, const struct FVector& EyeTarget, bool IsLoop, bool IsReturn, bool IsLockTarget, float ChangeSpeedPoint, float FirstSpeed, float SecondSpeed, float brendSpeed, bool IsPanCamera, float Fovy, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetRailCam");

	Params::BattleCamera_C_SetRailCam Parms{};

	Parms.SplineActor = SplineActor;
	Parms.EyeTarget = std::move(EyeTarget);
	Parms.IsLoop = IsLoop;
	Parms.IsReturn = IsReturn;
	Parms.IsLockTarget = IsLockTarget;
	Parms.ChangeSpeedPoint = ChangeSpeedPoint;
	Parms.FirstSpeed = FirstSpeed;
	Parms.SecondSpeed = SecondSpeed;
	Parms.brendSpeed = brendSpeed;
	Parms.IsPanCamera = IsPanCamera;
	Parms.Fovy = Fovy;
	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetCamShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InShakeClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetCamShake(class UClass* InShakeClass, bool Sw, float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetCamShake");

	Params::BattleCamera_C_SetCamShake Parms{};

	Parms.InShakeClass = InShakeClass;
	Parms.Sw = Sw;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.IsInterp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::IsInterp(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "IsInterp");

	Params::BattleCamera_C_IsInterp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleCamera.BattleCamera_C.SetTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   blendSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetTarget(const struct FVector& Target, float blendSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetTarget");

	Params::BattleCamera_C_SetTarget Parms{};

	Parms.Target = std::move(Target);
	Parms.blendSpeed = blendSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetFovy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fovy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Blend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetFovy(float Fovy, float Blend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetFovy");

	Params::BattleCamera_C_SetFovy Parms{};

	Parms.Fovy = Fovy;
	Parms.Blend = Blend;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.UpdateFovyInterp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::UpdateFovyInterp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "UpdateFovyInterp");

	Params::BattleCamera_C_UpdateFovyInterp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.RailIsArrived
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::RailIsArrived(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "RailIsArrived");

	Params::BattleCamera_C_RailIsArrived Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleCamera.BattleCamera_C.SetMainCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetMainCamera(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetMainCamera");

	Params::BattleCamera_C_SetMainCamera Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.GetTempoBlendValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::GetTempoBlendValue(float* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "GetTempoBlendValue");

	Params::BattleCamera_C_GetTempoBlendValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleCamera.BattleCamera_C.IsNoMove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::IsNoMove(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "IsNoMove");

	Params::BattleCamera_C_IsNoMove Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function BattleCamera.BattleCamera_C.CurrentForce
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::CurrentForce(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "CurrentForce");

	Params::BattleCamera_C_CurrentForce Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.StartBlendOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::StartBlendOverride(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "StartBlendOverride");

	Params::BattleCamera_C_StartBlendOverride Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.EndBlendOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::EndBlendOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "EndBlendOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.StartFovyOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fovy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::StartFovyOverride(float Fovy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "StartFovyOverride");

	Params::BattleCamera_C_StartFovyOverride Parms{};

	Parms.Fovy = Fovy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.EndFovyOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::EndFovyOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "EndFovyOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.GetMID_BattleMapDark
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*         Mid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::GetMID_BattleMapDark(class UMaterialInstanceDynamic** Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "GetMID_BattleMapDark");

	Params::BattleCamera_C_GetMID_BattleMapDark Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Mid != nullptr)
		*Mid = Parms.Mid;
}


// Function BattleCamera.BattleCamera_C.OnInterpFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentBlendSpeed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::OnInterpFinished(float CurrentBlendSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "OnInterpFinished");

	Params::BattleCamera_C_OnInterpFinished Parms{};

	Parms.CurrentBlendSpeed = CurrentBlendSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.SetOverrideTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::SetOverrideTarget(class FName SocketName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetOverrideTarget");

	Params::BattleCamera_C_SetOverrideTarget Parms{};

	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.Set_MPA_BattleMapDark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialParameterApplier>MPA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABattleCamera_C::Set_MPA_BattleMapDark(TSoftObjectPtr<class UMaterialParameterApplier> MPA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "Set_MPA_BattleMapDark");

	Params::BattleCamera_C_Set_MPA_BattleMapDark Parms{};

	Parms.MPA = MPA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.ApplyBlendAndFovyOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::ApplyBlendAndFovyOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ApplyBlendAndFovyOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.StopCamShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Immediately                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::StopCamShake(bool Immediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "StopCamShake");

	Params::BattleCamera_C_StopCamShake Parms{};

	Parms.Immediately = Immediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.UpdateCharaDither
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCamera_C::UpdateCharaDither(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "UpdateCharaDither");

	Params::BattleCamera_C_UpdateCharaDither Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.EnableCharaDither
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   IgnoreActors                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattleCamera_C::EnableCharaDither(TArray<class AActor*>& IgnoreActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "EnableCharaDither");

	Params::BattleCamera_C_EnableCharaDither Parms{};

	Parms.IgnoreActors = std::move(IgnoreActors);

	UObject::ProcessEvent(Func, &Parms);

	IgnoreActors = std::move(Parms.IgnoreActors);
}


// Function BattleCamera.BattleCamera_C.DisableCharaDither
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::DisableCharaDither()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "DisableCharaDither");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.ResetCharaDIther
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::ResetCharaDIther()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ResetCharaDIther");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.ResetInterp
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCamera_C::ResetInterp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "ResetInterp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCamera.BattleCamera_C.SetEnableBattleTickMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::SetEnableBattleTickMode(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "SetEnableBattleTickMode");

	Params::BattleCamera_C_SetEnableBattleTickMode Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCamera.BattleCamera_C.UpdateComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ContinueUpdate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCamera_C::UpdateComponent(float Delta, bool* ContinueUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCamera_C", "UpdateComponent");

	Params::BattleCamera_C_UpdateComponent Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinueUpdate != nullptr)
		*ContinueUpdate = Parms.ContinueUpdate;
}

}

