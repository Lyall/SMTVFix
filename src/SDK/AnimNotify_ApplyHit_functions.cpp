#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_ApplyHit

#include "Basic.hpp"

#include "AnimNotify_ApplyHit_classes.hpp"
#include "AnimNotify_ApplyHit_parameters.hpp"


namespace SDK
{

// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.IsBattleExcuting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_ApplyHit_C::IsBattleExcuting(bool* bSuccess) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ApplyHit_C", "IsBattleExcuting");

	Params::AnimNotify_ApplyHit_C_IsBattleExcuting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.Notice
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           Str                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAnimNotify_ApplyHit_C::Notice(const class FString& Str) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ApplyHit_C", "Notice");

	Params::AnimNotify_ApplyHit_C_Notice Parms{};

	Parms.Str = std::move(Str);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimNotify_ApplyHit.AnimNotify_ApplyHit_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_ApplyHit_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_ApplyHit_C", "Received_Notify");

	Params::AnimNotify_ApplyHit_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
