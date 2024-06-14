#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCameraSeamless

#include "Basic.hpp"

#include "BattleCameraSeamless_classes.hpp"
#include "BattleCameraSeamless_parameters.hpp"


namespace SDK
{

// Function BattleCameraSeamless.BattleCameraSeamless_C.ExecuteUbergraph_BattleCameraSeamless
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::ExecuteUbergraph_BattleCameraSeamless(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ExecuteUbergraph_BattleCameraSeamless");

	Params::BattleCameraSeamless_C_ExecuteUbergraph_BattleCameraSeamless Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ReceiveTick");

	Params::BattleCameraSeamless_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.SetMainCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::SetMainCamera(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "SetMainCamera");

	Params::BattleCameraSeamless_C_SetMainCamera Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.OnInterpFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurrentBlendSpeed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::OnInterpFinished(float CurrentBlendSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "OnInterpFinished");

	Params::BattleCameraSeamless_C_OnInterpFinished Parms{};

	Parms.CurrentBlendSpeed = CurrentBlendSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.CurrentForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::CurrentForce(float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "CurrentForce");

	Params::BattleCameraSeamless_C_CurrentForce Parms{};

	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattleCameraSeamless_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.UpDateShakeOffset
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::UpDateShakeOffset(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "UpDateShakeOffset");

	Params::BattleCameraSeamless_C_UpDateShakeOffset Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.CheckDegreeOvered
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Degree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::CheckDegreeOvered(struct FVector& Degree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "CheckDegreeOvered");

	Params::BattleCameraSeamless_C_CheckDegreeOvered Parms{};

	Parms.Degree = std::move(Degree);

	UObject::ProcessEvent(Func, &Parms);

	Degree = std::move(Parms.Degree);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.InitDiff
// (Private, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::InitDiff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "InitDiff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.CalcCapriciousness
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::CalcCapriciousness(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "CalcCapriciousness");

	Params::BattleCameraSeamless_C_CalcCapriciousness Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.DebugPrint
// (Private, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::DebugPrint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "DebugPrint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.CalcInatia
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::CalcInatia(float Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "CalcInatia");

	Params::BattleCameraSeamless_C_CalcInatia Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.SubRotator
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                         Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraSeamless_C::SubRotator(const struct FRotator& A, const struct FRotator& B, struct FRotator* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "SubRotator");

	Params::BattleCameraSeamless_C_SubRotator Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = std::move(Parms.Ret);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ResetOverrunDistanceRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ResetOverrunDistanceRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ResetOverrunDistanceRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ResetOverrunDegreeRate
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ResetOverrunDegreeRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ResetOverrunDegreeRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.UpdateMoveShakeAmplifier
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::UpdateMoveShakeAmplifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "UpdateMoveShakeAmplifier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.CheckDegreeOvered_Float
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Degree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::CheckDegreeOvered_Float(float& Degree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "CheckDegreeOvered_Float");

	Params::BattleCameraSeamless_C_CheckDegreeOvered_Float Parms{};

	Parms.Degree = Degree;

	UObject::ProcessEvent(Func, &Parms);

	Degree = Parms.Degree;
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.VecCosDeg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CosDeg                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::VecCosDeg(struct FVector& Vec, struct FVector* CosDeg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "VecCosDeg");

	Params::BattleCameraSeamless_C_VecCosDeg Parms{};

	Parms.Vec = std::move(Vec);

	UObject::ProcessEvent(Func, &Parms);

	Vec = std::move(Parms.Vec);

	if (CosDeg != nullptr)
		*CosDeg = std::move(Parms.CosDeg);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.VecSinDeg
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CosDeg                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::VecSinDeg(struct FVector& Vec, struct FVector* CosDeg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "VecSinDeg");

	Params::BattleCameraSeamless_C_VecSinDeg Parms{};

	Parms.Vec = std::move(Vec);

	UObject::ProcessEvent(Func, &Parms);

	Vec = std::move(Parms.Vec);

	if (CosDeg != nullptr)
		*CosDeg = std::move(Parms.CosDeg);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.InatiaCancel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::InatiaCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "InatiaCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.InitShakeDegree
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::InitShakeDegree()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "InitShakeDegree");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ShakePause
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ShakePause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ShakePause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ShakeResume
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ShakeResume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ShakeResume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ShakeStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ShakeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ShakeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.ShakeStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABattleCameraSeamless_C::ShakeStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "ShakeStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.IsShaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Shaking                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraSeamless_C::IsShaking(bool* Shaking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "IsShaking");

	Params::BattleCameraSeamless_C_IsShaking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shaking != nullptr)
		*Shaking = Parms.Shaking;
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.MasterVolumeUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattleCameraSeamless_C::MasterVolumeUp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "MasterVolumeUp");

	Params::BattleCameraSeamless_C_MasterVolumeUp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCameraSeamless.BattleCameraSeamless_C.UpdateComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ContinueUpdate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABattleCameraSeamless_C::UpdateComponent(float Delta, bool* ContinueUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCameraSeamless_C", "UpdateComponent");

	Params::BattleCameraSeamless_C_UpdateComponent Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

	if (ContinueUpdate != nullptr)
		*ContinueUpdate = Parms.ContinueUpdate;
}

}

