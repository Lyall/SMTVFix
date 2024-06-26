#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CoasterRelayPoint

#include "Basic.hpp"

#include "BP_CoasterRelayPoint_classes.hpp"
#include "BP_CoasterRelayPoint_parameters.hpp"


namespace SDK
{

// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.EvtDis_CallVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoasterRelayPoint_C::EvtDis_CallVisible__DelegateSignature(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "EvtDis_CallVisible__DelegateSignature");

	Params::BP_CoasterRelayPoint_C_EvtDis_CallVisible__DelegateSignature Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.ExecuteUbergraph_BP_CoasterRelayPoint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoasterRelayPoint_C::ExecuteUbergraph_BP_CoasterRelayPoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "ExecuteUbergraph_BP_CoasterRelayPoint");

	Params::BP_CoasterRelayPoint_C_ExecuteUbergraph_BP_CoasterRelayPoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CoasterRelayPoint_C::BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_CoasterRelayPoint_C_BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CoasterRelayPoint_C::BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_CoasterRelayPoint_C_BndEvt__BP_CoasterRelayPoint_VisibleBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CoasterRelayPoint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CoasterRelayPoint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoasterRelayPoint_C::SetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "SetVisible");

	Params::BP_CoasterRelayPoint_C_SetVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.SetAroundCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoasterRelayPoint_C::SetAroundCollision(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "SetAroundCollision");

	Params::BP_CoasterRelayPoint_C_SetAroundCollision Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.MakeDMI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CoasterRelayPoint_C::MakeDMI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "MakeDMI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CoasterRelayPoint.BP_CoasterRelayPoint_C.SetVisible_FromRiding
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutVisible                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CoasterRelayPoint_C::SetVisible_FromRiding(bool Visible, bool* OutVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CoasterRelayPoint_C", "SetVisible_FromRiding");

	Params::BP_CoasterRelayPoint_C_SetVisible_FromRiding Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVisible != nullptr)
		*OutVisible = Parms.OutVisible;
}

}

