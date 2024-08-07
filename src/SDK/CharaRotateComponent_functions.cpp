#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaRotateComponent

#include "Basic.hpp"

#include "CharaRotateComponent_classes.hpp"
#include "CharaRotateComponent_parameters.hpp"


namespace SDK
{

// Function CharaRotateComponent.CharaRotateComponent_C.GetTalkMotion
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAnimSequenceBase> Ret                                                    (Parm, OutParm, HasGetValueTypeHash)

void UCharaRotateComponent_C::GetTalkMotion(TSoftObjectPtr<class UAnimSequenceBase>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "GetTalkMotion");

	Params::CharaRotateComponent_C_GetTalkMotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaRotateComponent.CharaRotateComponent_C.GetRightRotate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAnimSequenceBase> Ret                                                    (Parm, OutParm, HasGetValueTypeHash)

void UCharaRotateComponent_C::GetRightRotate(TSoftObjectPtr<class UAnimSequenceBase>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "GetRightRotate");

	Params::CharaRotateComponent_C_GetRightRotate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaRotateComponent.CharaRotateComponent_C.GetLeftRotate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAnimSequenceBase> Ret                                                    (Parm, OutParm, HasGetValueTypeHash)

void UCharaRotateComponent_C::GetLeftRotate(TSoftObjectPtr<class UAnimSequenceBase>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "GetLeftRotate");

	Params::CharaRotateComponent_C_GetLeftRotate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaRotateComponent.CharaRotateComponent_C.GetIdleMotion
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UAnimSequenceBase> Ret                                                    (Parm, OutParm, HasGetValueTypeHash)

void UCharaRotateComponent_C::GetIdleMotion(TSoftObjectPtr<class UAnimSequenceBase>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "GetIdleMotion");

	Params::CharaRotateComponent_C_GetIdleMotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaRotateComponent.CharaRotateComponent_C.GetRotateBlend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UBlendSpace1D>     Ret                                                    (Parm, OutParm, HasGetValueTypeHash)

void UCharaRotateComponent_C::GetRotateBlend(TSoftObjectPtr<class UBlendSpace1D>* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "GetRotateBlend");

	Params::CharaRotateComponent_C_GetRotateBlend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function CharaRotateComponent.CharaRotateComponent_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaRotateComponent_C::SetIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaRotateComponent_C", "SetIndex");

	Params::CharaRotateComponent_C_SetIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

