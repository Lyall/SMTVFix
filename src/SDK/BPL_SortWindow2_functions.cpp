#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_SortWindow2

#include "Basic.hpp"

#include "BPL_SortWindow2_classes.hpp"
#include "BPL_SortWindow2_parameters.hpp"


namespace SDK
{

// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_Open
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SORT_WINDOW_SORT_TYPE                 InSortScene                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SORTWINDOW_POS_TYPE                   InPosType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSkipAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAutoSetupCursor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAutoSetupDecideSlot                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_Open(E_SORT_WINDOW_SORT_TYPE InSortScene, E_SORTWINDOW_POS_TYPE InPosType, bool IsSkipAnimation, bool IsAutoSetupCursor, bool IsAutoSetupDecideSlot, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_Open");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_Open Parms{};

	Parms.InSortScene = InSortScene;
	Parms.InPosType = InPosType;
	Parms.IsSkipAnimation = IsSkipAnimation;
	Parms.IsAutoSetupCursor = IsAutoSetupCursor;
	Parms.IsAutoSetupDecideSlot = IsAutoSetupDecideSlot;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_Close
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_Close(bool IsSkipAnimation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_Close");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_Close Parms{};

	Parms.IsSkipAnimation = IsSkipAnimation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetListNum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ListNum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetListNum(class UObject* __WorldContext, int32* ListNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetListNum");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetListNum Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ListNum != nullptr)
		*ListNum = Parms.ListNum;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetAnimState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SORTWINDOW_ANIM_STATE                 AnimState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetAnimState(class UObject* __WorldContext, E_SORTWINDOW_ANIM_STATE* AnimState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetAnimState");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetAnimState Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AnimState != nullptr)
		*AnimState = Parms.AnimState;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_CheckInputCursor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_CheckInputCursor(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_CheckInputCursor");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_CheckInputCursor Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetCursorIdx
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ListIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetCursorIdx(class UObject* __WorldContext, int32* ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetCursorIdx");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetCursorIdx Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ListIndex != nullptr)
		*ListIndex = Parms.ListIndex;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_SetCursorAndOffsetIdx
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InScrollOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_SetCursorAndOffsetIdx(int32 InListIndex, int32 InScrollOffset, bool IsInitSetting, bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_SetCursorAndOffsetIdx");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_SetCursorAndOffsetIdx Parms{};

	Parms.InListIndex = InListIndex;
	Parms.InScrollOffset = InScrollOffset;
	Parms.IsInitSetting = IsInitSetting;
	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_SetCursorAndOffsetPattern
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SORTWINDOW_SCROLL_OFFSET_PATTERN      InScrollOffsetPattern                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_SetCursorAndOffsetPattern(int32 InListIndex, E_SORTWINDOW_SCROLL_OFFSET_PATTERN InScrollOffsetPattern, bool IsInitSetting, bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_SetCursorAndOffsetPattern");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_SetCursorAndOffsetPattern Parms{};

	Parms.InListIndex = InListIndex;
	Parms.InScrollOffsetPattern = InScrollOffsetPattern;
	Parms.IsInitSetting = IsInitSetting;
	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MoveCursor_Up
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MoveCursor_Up(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MoveCursor_Up");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MoveCursor_Up Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MoveCursor_Down
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MoveCursor_Down(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MoveCursor_Down");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MoveCursor_Down Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MovePage_Up
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MovePage_Up(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MovePage_Up");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MovePage_Up Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MovePage_Down
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MovePage_Down(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MovePage_Down");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MovePage_Down Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MoveTop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MoveTop(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MoveTop");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MoveTop Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_MoveBottom
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_MoveBottom(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_MoveBottom");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_MoveBottom Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetAppliedSetting
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_SORT_WINDOW_SORT_TYPE                 InSortScene                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AppliedSetting                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SORT_WINDOW_SORT_ORDER                AppliedOrder                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetAppliedSetting(E_SORT_WINDOW_SORT_TYPE InSortScene, class UObject* __WorldContext, int32* AppliedSetting, E_SORT_WINDOW_SORT_ORDER* AppliedOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetAppliedSetting");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetAppliedSetting Parms{};

	Parms.InSortScene = InSortScene;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AppliedSetting != nullptr)
		*AppliedSetting = Parms.AppliedSetting;

	if (AppliedOrder != nullptr)
		*AppliedOrder = Parms.AppliedOrder;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_SetDecideSlot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InListIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSave_SortSetting                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsSave_SortOrder                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_SetDecideSlot(int32 InListIndex, const bool IsSave_SortSetting, const bool IsSave_SortOrder, bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_SetDecideSlot");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_SetDecideSlot Parms{};

	Parms.InListIndex = InListIndex;
	Parms.IsSave_SortSetting = IsSave_SortSetting;
	Parms.IsSave_SortOrder = IsSave_SortOrder;
	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetDecideSlot
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ListIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetDecideSlot(class UObject* __WorldContext, int32* ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetDecideSlot");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetDecideSlot Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ListIndex != nullptr)
		*ListIndex = Parms.ListIndex;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_HideDecideSlot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_HideDecideSlot(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_HideDecideSlot");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_HideDecideSlot Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetScrollOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ScrollOffset                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetScrollOffset(class UObject* __WorldContext, int32* ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetScrollOffset");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetScrollOffset Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ScrollOffset != nullptr)
		*ScrollOffset = Parms.ScrollOffset;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_SetScrollOffsetPattern
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SORTWINDOW_SCROLL_OFFSET_PATTERN      InOffssetPattern                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_SetScrollOffsetPattern(E_SORTWINDOW_SCROLL_OFFSET_PATTERN InOffssetPattern, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_SetScrollOffsetPattern");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_SetScrollOffsetPattern Parms{};

	Parms.InOffssetPattern = InOffssetPattern;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_CheckMouseWheel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_CheckMouseWheel(bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_CheckMouseWheel");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_CheckMouseWheel Parms{};

	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_IsEnableMouseWheel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPL_SortWindow2_C::BPL_SortWindow2_IsEnableMouseWheel(class UObject* __WorldContext, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_IsEnableMouseWheel");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_IsEnableMouseWheel Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_GetCtrlActor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SortWindowCtrl2_C*            SortWindowCtrl                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_GetCtrlActor(class UObject* __WorldContext, class ABP_SortWindowCtrl2_C** SortWindowCtrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_GetCtrlActor");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_GetCtrlActor Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortWindowCtrl != nullptr)
		*SortWindowCtrl = Parms.SortWindowCtrl;
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_ScrollList
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InScrollNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_ScrollList(int32 InScrollNum, bool IsPlaySE, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_ScrollList");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_ScrollList Parms{};

	Parms.InScrollNum = InScrollNum;
	Parms.IsPlaySE = IsPlaySE;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_SortWindow2.BPL_SortWindow2_C.BPL_SortWindow2_SetMouseHitVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnableMouseHit                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPL_SortWindow2_C::BPL_SortWindow2_SetMouseHitVisibility(bool EnableMouseHit, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_SortWindow2_C", "BPL_SortWindow2_SetMouseHitVisibility");

	Params::BPL_SortWindow2_C_BPL_SortWindow2_SetMouseHitVisibility Parms{};

	Parms.EnableMouseHit = EnableMouseHit;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

