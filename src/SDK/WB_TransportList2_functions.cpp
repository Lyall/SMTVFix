#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TransportList2

#include "Basic.hpp"

#include "WB_TransportList2_classes.hpp"
#include "WB_TransportList2_parameters.hpp"


namespace SDK
{

// Function WB_TransportList2.WB_TransportList2_C.MouseEvent_OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::MouseEvent_OnHovered__DelegateSignature(int32 SlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "MouseEvent_OnHovered__DelegateSignature");

	Params::WB_TransportList2_C_MouseEvent_OnHovered__DelegateSignature Parms{};

	Parms.SlotIdx = SlotIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.MouseEvent_OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::MouseEvent_OnClicked__DelegateSignature(int32 SlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "MouseEvent_OnClicked__DelegateSignature");

	Params::WB_TransportList2_C_MouseEvent_OnClicked__DelegateSignature Parms{};

	Parms.SlotIdx = SlotIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.MouseEvent_DraggedScrollBar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ScrollRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::MouseEvent_DraggedScrollBar__DelegateSignature(float ScrollRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "MouseEvent_DraggedScrollBar__DelegateSignature");

	Params::WB_TransportList2_C_MouseEvent_DraggedScrollBar__DelegateSignature Parms{};

	Parms.ScrollRate = ScrollRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.ExecuteUbergraph_WB_TransportList2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::ExecuteUbergraph_WB_TransportList2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "ExecuteUbergraph_WB_TransportList2");

	Params::WB_TransportList2_C_ExecuteUbergraph_WB_TransportList2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_TransportList2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "PreConstruct");

	Params::WB_TransportList2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Tick");

	Params::WB_TransportList2_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.Init
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.GetSlotMaxNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SlotMaxNum                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::GetSlotMaxNum(int32* SlotMaxNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "GetSlotMaxNum");

	Params::WB_TransportList2_C_GetSlotMaxNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotMaxNum != nullptr)
		*SlotMaxNum = Parms.SlotMaxNum;
}


// Function WB_TransportList2.WB_TransportList2_C.GetAnimState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_SORTWINDOW_ANIM_STATE                 AinmState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::GetAnimState(E_SORTWINDOW_ANIM_STATE* AinmState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "GetAnimState");

	Params::WB_TransportList2_C_GetAnimState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AinmState != nullptr)
		*AinmState = Parms.AinmState;
}


// Function WB_TransportList2.WB_TransportList2_C.SetAnimState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SORTWINDOW_ANIM_STATE                 InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::SetAnimState(E_SORTWINDOW_ANIM_STATE InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetAnimState");

	Params::WB_TransportList2_C_SetAnimState Parms{};

	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.Tick_Base
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::Tick_Base()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Tick_Base");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.Tick_In
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::Tick_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Tick_In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.Tick_Out
// (Private, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::Tick_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "Tick_Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.SetSlotListInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTransportLocationSlotInfo>InListInfo2                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsUpdateAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::SetSlotListInfo(TArray<struct FTransportLocationSlotInfo>& InListInfo2, bool IsUpdateAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetSlotListInfo");

	Params::WB_TransportList2_C_SetSlotListInfo Parms{};

	Parms.InListInfo2 = std::move(InListInfo2);
	Parms.IsUpdateAnim = IsUpdateAnim;

	UObject::ProcessEvent(Func, &Parms);

	InListInfo2 = std::move(Parms.InListInfo2);
}


// Function WB_TransportList2.WB_TransportList2_C.SetHeaderType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TRANSPORT_LIST_HEADER_TYPE            InHeaderType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::SetHeaderType(E_TRANSPORT_LIST_HEADER_TYPE InHeaderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetHeaderType");

	Params::WB_TransportList2_C_SetHeaderType Parms{};

	Parms.InHeaderType = InHeaderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.GetCursorIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CursorIdx                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::GetCursorIdx(int32* CursorIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "GetCursorIdx");

	Params::WB_TransportList2_C_GetCursorIdx Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CursorIdx != nullptr)
		*CursorIdx = Parms.CursorIdx;
}


// Function WB_TransportList2.WB_TransportList2_C.SetCursorIdx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUpdateAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::SetCursorIdx(int32 InSlotIdx, bool IsUpdateAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetCursorIdx");

	Params::WB_TransportList2_C_SetCursorIdx Parms{};

	Parms.InSlotIdx = InSlotIdx;
	Parms.IsUpdateAnim = IsUpdateAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.CursorMove_Up
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::CursorMove_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "CursorMove_Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.CursorMove_Down
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::CursorMove_Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "CursorMove_Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.CursorMove_Top
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::CursorMove_Top()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "CursorMove_Top");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.CursorMove_Bottom
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::CursorMove_Bottom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "CursorMove_Bottom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.CheckCursorPosAndSkipListIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::CheckCursorPosAndSkipListIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "CheckCursorPosAndSkipListIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.SetScrollBarRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScrollRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::SetScrollBarRate(float InScrollRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetScrollBarRate");

	Params::WB_TransportList2_C_SetScrollBarRate Parms{};

	Parms.InScrollRate = InScrollRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.SetScrollbarVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisibleScrollBar                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::SetScrollbarVisibility(bool IsVisibleScrollBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetScrollbarVisibility");

	Params::WB_TransportList2_C_SetScrollbarVisibility Parms{};

	Parms.IsVisibleScrollBar = IsVisibleScrollBar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.SetAppliedSlotIdx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUpdateAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::SetAppliedSlotIdx(int32 InSlotIdx, bool IsUpdateAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "SetAppliedSlotIdx");

	Params::WB_TransportList2_C_SetAppliedSlotIdx Parms{};

	Parms.InSlotIdx = InSlotIdx;
	Parms.IsUpdateAnim = IsUpdateAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.BindMouseInputEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::BindMouseInputEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "BindMouseInputEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.GetAppliedSlotIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CursorIdx                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::GetAppliedSlotIdx(int32* CursorIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "GetAppliedSlotIdx");

	Params::WB_TransportList2_C_GetAppliedSlotIdx Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CursorIdx != nullptr)
		*CursorIdx = Parms.CursorIdx;
}


// Function WB_TransportList2.WB_TransportList2_C.UnbindMouseInputEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TransportList2_C::UnbindMouseInputEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "UnbindMouseInputEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TransportList2.WB_TransportList2_C.OnHoveredSlot_ByMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::OnHoveredSlot_ByMouse(int32 InSlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "OnHoveredSlot_ByMouse");

	Params::WB_TransportList2_C_OnHoveredSlot_ByMouse Parms{};

	Parms.InSlotIdx = InSlotIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.OnClickedSlot_ByMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::OnClickedSlot_ByMouse(int32 InSlotIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "OnClickedSlot_ByMouse");

	Params::WB_TransportList2_C_OnClickedSlot_ByMouse Parms{};

	Parms.InSlotIdx = InSlotIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.OnDraggedScrollBar_ByMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InScrollRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TransportList2_C::OnDraggedScrollBar_ByMouse(float InScrollRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "OnDraggedScrollBar_ByMouse");

	Params::WB_TransportList2_C_OnDraggedScrollBar_ByMouse Parms{};

	Parms.InScrollRate = InScrollRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TransportList2.WB_TransportList2_C.IsEnableMouseWheel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsEnableScroll                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_TransportList2_C::IsEnableMouseWheel(bool* IsEnableScroll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TransportList2_C", "IsEnableMouseWheel");

	Params::WB_TransportList2_C_IsEnableMouseWheel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnableScroll != nullptr)
		*IsEnableScroll = Parms.IsEnableScroll;
}

}
