#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MiitsuWindowCtrl

#include "Basic.hpp"

#include "BP_MiitsuWindowCtrl_classes.hpp"
#include "BP_MiitsuWindowCtrl_parameters.hpp"


namespace SDK
{

// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.ExecuteUbergraph_BP_MiitsuWindowCtrl
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MiitsuWindowCtrl_C::ExecuteUbergraph_BP_MiitsuWindowCtrl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "ExecuteUbergraph_BP_MiitsuWindowCtrl");

	Params::BP_MiitsuWindowCtrl_C_ExecuteUbergraph_BP_MiitsuWindowCtrl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.AddToScreenWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MiitsuWindowCtrl_C::AddToScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "AddToScreenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MiitsuWindowCtrl_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "ReceiveEndPlay");

	Params::BP_MiitsuWindowCtrl_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MiitsuWindowCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "ReceiveTick");

	Params::BP_MiitsuWindowCtrl_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MiitsuWindowCtrl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.IsShowMiitsuWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::IsShowMiitsuWindow(bool* IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "IsShowMiitsuWindow");

	Params::BP_MiitsuWindowCtrl_C_IsShowMiitsuWindow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.IsPlayingMiisuPointAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::IsPlayingMiisuPointAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "IsPlayingMiisuPointAnim");

	Params::BP_MiitsuWindowCtrl_C_IsPlayingMiisuPointAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.SkipMiitsuPointAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::SkipMiitsuPointAnim(bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "SkipMiitsuPointAnim");

	Params::BP_MiitsuWindowCtrl_C_SkipMiitsuPointAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.AddMIitsuTotal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::AddMIitsuTotal(int32 AddNum, bool PlayAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "AddMIitsuTotal");

	Params::BP_MiitsuWindowCtrl_C_AddMIitsuTotal Parms{};

	Parms.AddNum = AddNum;
	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.AddMiitsuPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PlaySE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::AddMiitsuPoint(int32 AddNum, bool PlayAnim, bool PlaySE, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "AddMiitsuPoint");

	Params::BP_MiitsuWindowCtrl_C_AddMiitsuPoint Parms{};

	Parms.AddNum = AddNum;
	Parms.PlayAnim = PlayAnim;
	Parms.PlaySE = PlaySE;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.SetMiitsuTotal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::SetMiitsuTotal(int32 NewNum, bool PlayAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "SetMiitsuTotal");

	Params::BP_MiitsuWindowCtrl_C_SetMiitsuTotal Parms{};

	Parms.NewNum = NewNum;
	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.SetMiitsuPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PlaySE                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::SetMiitsuPoint(int32 NewNum, bool PlayAnim, bool PlaySE, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "SetMiitsuPoint");

	Params::BP_MiitsuWindowCtrl_C_SetMiitsuPoint Parms{};

	Parms.NewNum = NewNum;
	Parms.PlayAnim = PlayAnim;
	Parms.PlaySE = PlaySE;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.CloseMiitsuTotalWinidow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NotPlayAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::CloseMiitsuTotalWinidow(bool NotPlayAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "CloseMiitsuTotalWinidow");

	Params::BP_MiitsuWindowCtrl_C_CloseMiitsuTotalWinidow Parms{};

	Parms.NotPlayAnim = NotPlayAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.CloseMiitsuPointWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NotPlayAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::CloseMiitsuPointWindow(bool NotPlayAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "CloseMiitsuPointWindow");

	Params::BP_MiitsuWindowCtrl_C_CloseMiitsuPointWindow Parms{};

	Parms.NotPlayAnim = NotPlayAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.OpenMiitsuTotalWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NotPlayAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUnderMakkaWin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::OpenMiitsuTotalWindow(bool NotPlayAnim, bool IsUnderMakkaWin, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "OpenMiitsuTotalWindow");

	Params::BP_MiitsuWindowCtrl_C_OpenMiitsuTotalWindow Parms{};

	Parms.NotPlayAnim = NotPlayAnim;
	Parms.IsUnderMakkaWin = IsUnderMakkaWin;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.OpenMiitsuPointWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NotPlayAnim                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUnderMakkaWin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WithOpenTotalWindow                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::OpenMiitsuPointWindow(bool NotPlayAnim, bool IsUnderMakkaWin, bool WithOpenTotalWindow, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "OpenMiitsuPointWindow");

	Params::BP_MiitsuWindowCtrl_C_OpenMiitsuPointWindow Parms{};

	Parms.NotPlayAnim = NotPlayAnim;
	Parms.IsUnderMakkaWin = IsUnderMakkaWin;
	Parms.WithOpenTotalWindow = WithOpenTotalWindow;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.IsPlayingMiitsuTotalAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::IsPlayingMiitsuTotalAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "IsPlayingMiitsuTotalAnim");

	Params::BP_MiitsuWindowCtrl_C_IsPlayingMiitsuTotalAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.IsPlayingFrameIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::IsPlayingFrameIn(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "IsPlayingFrameIn");

	Params::BP_MiitsuWindowCtrl_C_IsPlayingFrameIn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}


// Function BP_MiitsuWindowCtrl.BP_MiitsuWindowCtrl_C.IsPlayingFrameOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MiitsuWindowCtrl_C::IsPlayingFrameOut(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiitsuWindowCtrl_C", "IsPlayingFrameOut");

	Params::BP_MiitsuWindowCtrl_C_IsPlayingFrameOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;
}

}

