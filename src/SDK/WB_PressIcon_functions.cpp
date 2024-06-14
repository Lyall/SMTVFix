#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PressIcon

#include "Basic.hpp"

#include "WB_PressIcon_classes.hpp"
#include "WB_PressIcon_parameters.hpp"


namespace SDK
{

// Function WB_PressIcon.WB_PressIcon_C.ExecuteUbergraph_WB_PressIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::ExecuteUbergraph_WB_PressIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "ExecuteUbergraph_WB_PressIcon");

	Params::WB_PressIcon_C_ExecuteUbergraph_WB_PressIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.EndOfSlideIn
// (BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::EndOfSlideIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "EndOfSlideIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.StartHalfIcon
// (BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::StartHalfIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "StartHalfIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.BndEvt__SsPlayer_IconNumState_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::BndEvt__SsPlayer_IconNumState_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BndEvt__SsPlayer_IconNumState_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_PressIcon_C_BndEvt__SsPlayer_IconNumState_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.BndEvt__SsPlayer_PressIconPlate_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             AnimPackName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AnimationName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimPackIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimationIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::BndEvt__SsPlayer_PressIconPlate_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BndEvt__SsPlayer_PressIconPlate_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");

	Params::WB_PressIcon_C_BndEvt__SsPlayer_PressIconPlate_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature Parms{};

	Parms.AnimPackName = AnimPackName;
	Parms.AnimationName = AnimationName;
	Parms.AnimPackIndex = AnimPackIndex;
	Parms.AnimationIndex = AnimationIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.BP_SlideOutStart
// (Event, Public, BlueprintEvent)

void UWB_PressIcon_C::BP_SlideOutStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BP_SlideOutStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.BP_SlideInStart
// (Event, Public, BlueprintEvent)

void UWB_PressIcon_C::BP_SlideInStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BP_SlideInStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PressIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.BP_AddDrawPressIcon
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPressIcon                       Add_press_icon                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// E_BTL_PRESS_TYPE                        PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::BP_AddDrawPressIcon(const struct FPressIcon& Add_press_icon, E_BTL_PRESS_TYPE PressType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BP_AddDrawPressIcon");

	Params::WB_PressIcon_C_BP_AddDrawPressIcon Parms{};

	Parms.Add_press_icon = std::move(Add_press_icon);
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.BP_OutStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsIconBreak                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::BP_OutStart(bool Param_IsIconBreak)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BP_OutStart");

	Params::WB_PressIcon_C_BP_OutStart Parms{};

	Parms.Param_IsIconBreak = Param_IsIconBreak;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.BP_InStart
// (Event, Public, BlueprintEvent)

void UWB_PressIcon_C::BP_InStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "BP_InStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Tick");

	Params::WB_PressIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PressIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "PreConstruct");

	Params::WB_PressIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.InitWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::InitWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "InitWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.Play IconNumber Anim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AnimIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::Play_IconNumber_Anim(int32 AnimIndex, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Play IconNumber Anim");

	Params::WB_PressIcon_C_Play_IconNumber_Anim Parms{};

	Parms.AnimIndex = AnimIndex;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.Play IconPlate Anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AnimIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::Play_IconPlate_Anim(int32 AnimIndex, bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Play IconPlate Anim");

	Params::WB_PressIcon_C_Play_IconPlate_Anim Parms{};

	Parms.AnimIndex = AnimIndex;
	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.GetSide
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_BTL_SIDE                              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

E_BTL_SIDE UWB_PressIcon_C::GetSide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "GetSide");

	Params::WB_PressIcon_C_GetSide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PressIcon.WB_PressIcon_C.GetHalfIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIBtlPressIconPartsBase*         PressIconParts                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::GetHalfIconWidget(class UUIBtlPressIconPartsBase** PressIconParts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "GetHalfIconWidget");

	Params::WB_PressIcon_C_GetHalfIconWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PressIconParts != nullptr)
		*PressIconParts = Parms.PressIconParts;
}


// Function WB_PressIcon.WB_PressIcon_C.ReserveHalfIconStart
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIBtlPressIconPartsBase*         Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::ReserveHalfIconStart(class UUIBtlPressIconPartsBase* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "ReserveHalfIconStart");

	Params::WB_PressIcon_C_ReserveHalfIconStart Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.ReserveEndOfSlideIn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIBtlPressIconPartsBase*         Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PressIcon_C::ReserveEndOfSlideIn(class UUIBtlPressIconPartsBase* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "ReserveEndOfSlideIn");

	Params::WB_PressIcon_C_ReserveEndOfSlideIn Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PressIcon.WB_PressIcon_C.CallStartHalfIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::CallStartHalfIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "CallStartHalfIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.ClearEventBinding
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::ClearEventBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "ClearEventBinding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.IsHalfIconAddEffectPerforming
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsPerforming                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::IsHalfIconAddEffectPerforming(bool* IsPerforming)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "IsHalfIconAddEffectPerforming");

	Params::WB_PressIcon_C_IsHalfIconAddEffectPerforming Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsPerforming != nullptr)
		*IsPerforming = Parms.IsPerforming;
}


// Function WB_PressIcon.WB_PressIcon_C.IsWorking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsWorking                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::IsWorking(bool* Param_IsWorking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "IsWorking");

	Params::WB_PressIcon_C_IsWorking Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsWorking != nullptr)
		*Param_IsWorking = Parms.Param_IsWorking;
}


// Function WB_PressIcon.WB_PressIcon_C.IsDisappeared
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsDisappeared                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::IsDisappeared(bool* Param_IsDisappeared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "IsDisappeared");

	Params::WB_PressIcon_C_IsDisappeared Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsDisappeared != nullptr)
		*Param_IsDisappeared = Parms.Param_IsDisappeared;
}


// Function WB_PressIcon.WB_PressIcon_C.Update Icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::Update_Icons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "Update Icons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.AreIconsPlaying
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Playing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::AreIconsPlaying(bool* Playing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "AreIconsPlaying");

	Params::WB_PressIcon_C_AreIconsPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Playing != nullptr)
		*Playing = Parms.Playing;
}


// Function WB_PressIcon.WB_PressIcon_C.ClearPressArray
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_PressIcon_C::ClearPressArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "ClearPressArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PressIcon.WB_PressIcon_C.isIconBreak
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPressIcon                       PressIcon                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// E_BTL_PRESS_TYPE                        PressType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Break                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::IsIconBreak(const struct FPressIcon& PressIcon, E_BTL_PRESS_TYPE PressType, bool* Break)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "isIconBreak");

	Params::WB_PressIcon_C_IsIconBreak Parms{};

	Parms.PressIcon = std::move(PressIcon);
	Parms.PressType = PressType;

	UObject::ProcessEvent(Func, &Parms);

	if (Break != nullptr)
		*Break = Parms.Break;
}


// Function WB_PressIcon.WB_PressIcon_C.AreAllIconsShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Shown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::AreAllIconsShown(bool* Shown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "AreAllIconsShown");

	Params::WB_PressIcon_C_AreAllIconsShown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Shown != nullptr)
		*Shown = Parms.Shown;
}


// Function WB_PressIcon.WB_PressIcon_C.AreAllIconsHide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Hide                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PressIcon_C::AreAllIconsHide(bool* Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PressIcon_C", "AreAllIconsHide");

	Params::WB_PressIcon_C_AreAllIconsHide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hide != nullptr)
		*Hide = Parms.Hide;
}

}

