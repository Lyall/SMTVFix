#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_QuestSlotList2

#include "Basic.hpp"

#include "WB_QuestSlotList2_classes.hpp"
#include "WB_QuestSlotList2_parameters.hpp"


namespace SDK
{

// Function WB_QuestSlotList2.WB_QuestSlotList2_C.OnHoveredMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OnHoveredSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::OnHoveredMouse(int32 OnHoveredSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "OnHoveredMouse");

	Params::WB_QuestSlotList2_C_OnHoveredMouse Parms{};

	Parms.OnHoveredSlot = OnHoveredSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.UnbindMouseInputEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::UnbindMouseInputEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "UnbindMouseInputEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.BindMouseInputEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::BindMouseInputEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "BindMouseInputEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SkipAnim_IfCursorOnNotListInSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::SkipAnim_IfCursorOnNotListInSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SkipAnim_IfCursorOnNotListInSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.GetSlotListAnimState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CampQuest_SsAnimState                 AnimState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::GetSlotListAnimState(E_CampQuest_SsAnimState* AnimState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "GetSlotListAnimState");

	Params::WB_QuestSlotList2_C_GetSlotListAnimState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimState != nullptr)
		*AnimState = Parms.AnimState;
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.GetSlotDrawMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxDrawNum                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::GetSlotDrawMax(int32* MaxDrawNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "GetSlotDrawMax");

	Params::WB_QuestSlotList2_C_GetSlotDrawMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxDrawNum != nullptr)
		*MaxDrawNum = Parms.MaxDrawNum;
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SetUpdateIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisibleIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_QuestSlotList2_C::SetUpdateIconState(int32 InSlotIdx, bool IsVisibleIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SetUpdateIconState");

	Params::WB_QuestSlotList2_C_SetUpdateIconState Parms{};

	Parms.InSlotIdx = InSlotIdx;
	Parms.IsVisibleIcon = IsVisibleIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SetNewIconState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisibleIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_QuestSlotList2_C::SetNewIconState(int32 InSlotIdx, bool IsVisibleIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SetNewIconState");

	Params::WB_QuestSlotList2_C_SetNewIconState Parms{};

	Parms.InSlotIdx = InSlotIdx;
	Parms.IsVisibleIcon = IsVisibleIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Tick_FrameOut
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::Tick_FrameOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Tick_FrameOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.AlignIconAnimFrame
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::AlignIconAnimFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "AlignIconAnimFrame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Tick_FrameIn
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::Tick_FrameIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Tick_FrameIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Tick_Base
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::Tick_Base()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Tick_Base");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SetAnimState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CampQuest_SsAnimState                 InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUpdateAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_QuestSlotList2_C::SetAnimState(E_CampQuest_SsAnimState InState, bool NotUpdateAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SetAnimState");

	Params::WB_QuestSlotList2_C_SetAnimState Parms{};

	Parms.InState = InState;
	Parms.NotUpdateAnim = NotUpdateAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.CursorMove_Bottom
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::CursorMove_Bottom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "CursorMove_Bottom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.CursorMove_Top
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::CursorMove_Top()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "CursorMove_Top");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.CursorMove_Down
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::CursorMove_Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "CursorMove_Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.CursorMove_Up
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::CursorMove_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "CursorMove_Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SetCursorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::SetCursorIndex(int32 InSlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SetCursorIndex");

	Params::WB_QuestSlotList2_C_SetCursorIndex Parms{};

	Parms.InSlotIdx = InSlotIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.GetCursorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SlotIdx                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::GetCursorIndex(int32* SlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "GetCursorIndex");

	Params::WB_QuestSlotList2_C_GetCursorIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotIdx != nullptr)
		*SlotIdx = Parms.SlotIdx;
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.SetSlotListInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCampQuestListData>       InListInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_QuestSlotList2_C::SetSlotListInfo(TArray<struct FCampQuestListData>& InListInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "SetSlotListInfo");

	Params::WB_QuestSlotList2_C_SetSlotListInfo Parms{};

	Parms.InListInfo = std::move(InListInfo);

	UObject::ProcessEvent(Func, &Parms);

	InListInfo = std::move(Parms.InListInfo);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Init
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_QuestSlotList2_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_QuestSlotList2_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "PreConstruct");

	Params::WB_QuestSlotList2_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Tick");

	Params::WB_QuestSlotList2_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_QuestSlotList2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.ExecuteUbergraph_WB_QuestSlotList2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::ExecuteUbergraph_WB_QuestSlotList2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "ExecuteUbergraph_WB_QuestSlotList2");

	Params::WB_QuestSlotList2_C_ExecuteUbergraph_WB_QuestSlotList2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestSlotList2.WB_QuestSlotList2_C.OnHoveredMouseToSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OnHoveredSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestSlotList2_C::OnHoveredMouseToSlot__DelegateSignature(int32 OnHoveredSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestSlotList2_C", "OnHoveredMouseToSlot__DelegateSignature");

	Params::WB_QuestSlotList2_C_OnHoveredMouseToSlot__DelegateSignature Parms{};

	Parms.OnHoveredSlot = OnHoveredSlot;

	UObject::ProcessEvent(Func, &Parms);
}

}

