#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CategoryWindowCtrl

#include "Basic.hpp"

#include "BPI_CategoryWindowCtrl_classes.hpp"
#include "BPI_CategoryWindowCtrl_parameters.hpp"


namespace SDK
{

// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.OpenCategoryWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_WIDGET_PRIO                           WidgetPrio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_CATEGORY_PATTERN                      CategoryPattern                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_CATEGORY_FRAMEIN_TYPE                 FrameInPattern                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DefaultCursorIdx                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSkipAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::OpenCategoryWindow(E_WIDGET_PRIO WidgetPrio, E_CATEGORY_PATTERN CategoryPattern, E_CATEGORY_FRAMEIN_TYPE FrameInPattern, int32 DefaultCursorIdx, bool IsSkipAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "OpenCategoryWindow");

	Params::BPI_CategoryWindowCtrl_C_OpenCategoryWindow Parms{};

	Parms.WidgetPrio = WidgetPrio;
	Parms.CategoryPattern = CategoryPattern;
	Parms.FrameInPattern = FrameInPattern;
	Parms.DefaultCursorIdx = DefaultCursorIdx;
	Parms.IsSkipAnim = IsSkipAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.CloseCategoryWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkipAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::CloseCategoryWindow(bool IsSkipAnim, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "CloseCategoryWindow");

	Params::BPI_CategoryWindowCtrl_C_CloseCategoryWindow Parms{};

	Parms.IsSkipAnim = IsSkipAnim;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetCategoryWindowState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CATEGORY_UI_STATE                     State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CategoryWindowCtrl_C::GetCategoryWindowState(E_CATEGORY_UI_STATE* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "GetCategoryWindowState");

	Params::BPI_CategoryWindowCtrl_C_GetCategoryWindowState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.MoveCategoryCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CATEGORY_CURSOR_MOVE_DIRECTION        MoveDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::MoveCategoryCursor(E_CATEGORY_CURSOR_MOVE_DIRECTION MoveDirection, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "MoveCategoryCursor");

	Params::BPI_CategoryWindowCtrl_C_MoveCategoryCursor Parms{};

	Parms.MoveDirection = MoveDirection;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::SetPosition(const struct FVector2D& Position, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "SetPosition");

	Params::BPI_CategoryWindowCtrl_C_SetPosition Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetCursorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CursorIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::SetCursorIndex(int32 CursorIndex, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "SetCursorIndex");

	Params::BPI_CategoryWindowCtrl_C_SetCursorIndex Parms{};

	Parms.CursorIndex = CursorIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetCursorIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CursorIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CategoryWindowCtrl_C::GetCursorIndex(int32* CursorIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "GetCursorIndex");

	Params::BPI_CategoryWindowCtrl_C_GetCursorIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CursorIndex != nullptr)
		*CursorIndex = Parms.CursorIndex;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.SetNewIconVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CursorIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::SetNewIconVisibility(int32 CursorIdx, bool IsVisible, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "SetNewIconVisibility");

	Params::BPI_CategoryWindowCtrl_C_SetNewIconVisibility Parms{};

	Parms.CursorIdx = CursorIdx;
	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.AlignNewIconAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Frame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnVal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_CategoryWindowCtrl_C::AlignNewIconAnim(float Frame, bool* ReturnVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "AlignNewIconAnim");

	Params::BPI_CategoryWindowCtrl_C_AlignNewIconAnim Parms{};

	Parms.Frame = Frame;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnVal != nullptr)
		*ReturnVal = Parms.ReturnVal;
}


// Function BPI_CategoryWindowCtrl.BPI_CategoryWindowCtrl_C.GetNewIconAnimFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Frame                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CategoryWindowCtrl_C::GetNewIconAnimFrame(float* Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_CategoryWindowCtrl_C", "GetNewIconAnimFrame");

	Params::BPI_CategoryWindowCtrl_C_GetNewIconAnimFrame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Frame != nullptr)
		*Frame = Parms.Frame;
}

}

