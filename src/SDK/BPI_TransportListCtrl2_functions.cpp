#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_TransportListCtrl2

#include "Basic.hpp"

#include "BPI_TransportListCtrl2_classes.hpp"
#include "BPI_TransportListCtrl2_parameters.hpp"


namespace SDK
{

// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_OpenWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRyuketsuFTList_st>       InSlotInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_TRANSPORT_LIST_HEADER_TYPE            InHeaderType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSkipAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_OpenWindow(const TArray<struct FRyuketsuFTList_st>& InSlotInfo, const E_TRANSPORT_LIST_HEADER_TYPE InHeaderType, bool InSkipAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_OpenWindow");

	Params::BPI_TransportListCtrl2_C_BPI_OpenWindow Parms{};

	Parms.InSlotInfo = std::move(InSlotInfo);
	Parms.InHeaderType = InHeaderType;
	Parms.InSkipAnim = InSkipAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_CloseWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_CloseWindow(bool IsSkipAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_CloseWindow");

	Params::BPI_TransportListCtrl2_C_BPI_CloseWindow Parms{};

	Parms.IsSkipAnim = IsSkipAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ScrollOffset                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_GetScrollOffset(int32* ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_GetScrollOffset");

	Params::BPI_TransportListCtrl2_C_BPI_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollOffset != nullptr)
		*ScrollOffset = Parms.ScrollOffset;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_GetAnimState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SORTWINDOW_ANIM_STATE                 AnimState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_GetAnimState(E_SORTWINDOW_ANIM_STATE* AnimState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_GetAnimState");

	Params::BPI_TransportListCtrl2_C_BPI_GetAnimState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimState != nullptr)
		*AnimState = Parms.AnimState;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_SetDecideSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_SetDecideSlot(int32 InListIndex, bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_SetDecideSlot");

	Params::BPI_TransportListCtrl2_C_BPI_SetDecideSlot Parms{};

	Parms.InListIndex = InListIndex;
	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_GetDecideSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_GetDecideSlot(int32* ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_GetDecideSlot");

	Params::BPI_TransportListCtrl2_C_BPI_GetDecideSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ListIndex != nullptr)
		*ListIndex = Parms.ListIndex;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_HideDecideSlot
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_TransportListCtrl2_C::BPI_HideDecideSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_HideDecideSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_GetCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_GetCursor(int32* ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_GetCursor");

	Params::BPI_TransportListCtrl2_C_BPI_GetCursor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ListIndex != nullptr)
		*ListIndex = Parms.ListIndex;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_SetCursorAndOffsetIdx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScrollOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_SetCursorAndOffsetIdx(int32 InListIndex, int32 InScrollOffset, bool IsInitSetting, bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_SetCursorAndOffsetIdx");

	Params::BPI_TransportListCtrl2_C_BPI_SetCursorAndOffsetIdx Parms{};

	Parms.InListIndex = InListIndex;
	Parms.InScrollOffset = InScrollOffset;
	Parms.IsInitSetting = IsInitSetting;
	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_SetCursorAndOffsetPattern
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SORTWINDOW_SCROLL_OFFSET_PATTERN      InScrollOffsetPattern                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_SetCursorAndOffsetPattern(int32 InListIndex, E_SORTWINDOW_SCROLL_OFFSET_PATTERN InScrollOffsetPattern, bool IsInitSetting, bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_SetCursorAndOffsetPattern");

	Params::BPI_TransportListCtrl2_C_BPI_SetCursorAndOffsetPattern Parms{};

	Parms.InListIndex = InListIndex;
	Parms.InScrollOffsetPattern = InScrollOffsetPattern;
	Parms.IsInitSetting = IsInitSetting;
	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_MoveCursor_Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_MoveCursor_Up(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_MoveCursor_Up");

	Params::BPI_TransportListCtrl2_C_BPI_MoveCursor_Up Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_MoveCursor_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_MoveCursor_Down(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_MoveCursor_Down");

	Params::BPI_TransportListCtrl2_C_BPI_MoveCursor_Down Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_Page_UP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_Page_UP(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_Page_UP");

	Params::BPI_TransportListCtrl2_C_BPI_Page_UP Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_Page_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_Page_Down(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_Page_Down");

	Params::BPI_TransportListCtrl2_C_BPI_Page_Down Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_MoveCursor_Top
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_MoveCursor_Top(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_MoveCursor_Top");

	Params::BPI_TransportListCtrl2_C_BPI_MoveCursor_Top Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_MoveCursor_Bottom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_MoveCursor_Bottom(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_MoveCursor_Bottom");

	Params::BPI_TransportListCtrl2_C_BPI_MoveCursor_Bottom Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_SetScrollOffsetPattern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SORTWINDOW_SCROLL_OFFSET_PATTERN      InOffssetPattern                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ScrollOffset                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_SetScrollOffsetPattern(E_SORTWINDOW_SCROLL_OFFSET_PATTERN InOffssetPattern, int32* ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_SetScrollOffsetPattern");

	Params::BPI_TransportListCtrl2_C_BPI_SetScrollOffsetPattern Parms{};

	Parms.InOffssetPattern = InOffssetPattern;

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollOffset != nullptr)
		*ScrollOffset = Parms.ScrollOffset;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_CheckMouseWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_CheckMouseWheel(bool IsPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_CheckMouseWheel");

	Params::BPI_TransportListCtrl2_C_BPI_CheckMouseWheel Parms{};

	Parms.IsPlaySE = IsPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_IsEnableMouseWheel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_TransportListCtrl2_C::BPI_IsEnableMouseWheel(bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_IsEnableMouseWheel");

	Params::BPI_TransportListCtrl2_C_BPI_IsEnableMouseWheel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BPI_TransportListCtrl2.BPI_TransportListCtrl2_C.BPI_GetMouseEventActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TransportListMouseEvent_C*    OutActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_TransportListCtrl2_C::BPI_GetMouseEventActor(class ABP_TransportListMouseEvent_C** OutActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_TransportListCtrl2_C", "BPI_GetMouseEventActor");

	Params::BPI_TransportListCtrl2_C_BPI_GetMouseEventActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;
}

}
