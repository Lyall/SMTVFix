#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BtnHelpCtrl2

#include "Basic.hpp"

#include "BPI_BtnHelpCtrl2_classes.hpp"
#include "BPI_BtnHelpCtrl2_parameters.hpp"


namespace SDK
{

// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.FrameIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_POS_TYPE                     InPositionType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::FrameIn(const E_BTN_HELP_DIR InDirectionType, const E_BTN_HELP_POS_TYPE InPositionType, const bool SkipAnimation, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "FrameIn");

	Params::BPI_BtnHelpCtrl2_C_FrameIn Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InPositionType = InPositionType;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.FrameIn_AsChildOfCanvas
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_POS_TYPE                     InPositionType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanel*                     InCanvasPanel                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::FrameIn_AsChildOfCanvas(E_BTN_HELP_DIR InDirectionType, E_BTN_HELP_POS_TYPE InPositionType, bool SkipAnimation, class UCanvasPanel*& InCanvasPanel, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "FrameIn_AsChildOfCanvas");

	Params::BPI_BtnHelpCtrl2_C_FrameIn_AsChildOfCanvas Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InPositionType = InPositionType;
	Parms.SkipAnimation = SkipAnimation;
	Parms.InCanvasPanel = InCanvasPanel;

	UObject::ProcessEvent(Func, &Parms);

	InCanvasPanel = Parms.InCanvasPanel;

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.FrameOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipAnimation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::FrameOut(const E_BTN_HELP_DIR InDirectionType, const bool SkipAnimation, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "FrameOut");

	Params::BPI_BtnHelpCtrl2_C_FrameOut Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.FrameOut_All
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SkipAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::FrameOut_All(bool SkipAnimation, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "FrameOut_All");

	Params::BPI_BtnHelpCtrl2_C_FrameOut_All Parms{};

	Parms.SkipAnimation = SkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SkipAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SkipAnim(const E_BTN_HELP_DIR InDirectionType, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SkipAnim");

	Params::BPI_BtnHelpCtrl2_C_SkipAnim Parms{};

	Parms.InDirectionType = InDirectionType;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetPositionType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_POS_TYPE                     InPositionType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetPositionType(E_BTN_HELP_DIR InDirectionType, const E_BTN_HELP_POS_TYPE InPositionType, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetPositionType");

	Params::BPI_BtnHelpCtrl2_C_SetPositionType Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InPositionType = InPositionType;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetInfo_PresetPattern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_SET                          InHelpPattern                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetInfo_PresetPattern(const E_BTN_HELP_DIR InDirectionType, E_BTN_HELP_SET InHelpPattern, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetInfo_PresetPattern");

	Params::BPI_BtnHelpCtrl2_C_SetInfo_PresetPattern Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InHelpPattern = InHelpPattern;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetInfo_ManualPattern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBtnHelpInfo>             InHelpPattern                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetInfo_ManualPattern(E_BTN_HELP_DIR InDirectionType, const TArray<struct FBtnHelpInfo>& InHelpPattern, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetInfo_ManualPattern");

	Params::BPI_BtnHelpCtrl2_C_SetInfo_ManualPattern Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InHelpPattern = std::move(InHelpPattern);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.GetBtnHelpAnimState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_UI_STATE                     State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BtnHelpCtrl2_C::GetBtnHelpAnimState(E_BTN_HELP_DIR InDirectionType, E_BTN_HELP_UI_STATE* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "GetBtnHelpAnimState");

	Params::BPI_BtnHelpCtrl2_C_GetBtnHelpAnimState Parms{};

	Parms.InDirectionType = InDirectionType;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetVisibility(E_BTN_HELP_DIR InDirectionType, bool IsVisible, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetVisibility");

	Params::BPI_BtnHelpCtrl2_C_SetVisibility Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::GetVisibility(E_BTN_HELP_DIR InDirectionType, bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "GetVisibility");

	Params::BPI_BtnHelpCtrl2_C_GetVisibility Parms{};

	Parms.InDirectionType = InDirectionType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.ChangeBtnHelp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BtnHelp_ChangeInfo2          ChangeInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::ChangeBtnHelp(E_BTN_HELP_DIR InDirectionType, const struct FST_BtnHelp_ChangeInfo2& ChangeInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "ChangeBtnHelp");

	Params::BPI_BtnHelpCtrl2_C_ChangeBtnHelp Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.ChangeInfo = std::move(ChangeInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetHoldEffect_byMapping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             TargetMapping                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetHoldEffect_byMapping(E_BTN_HELP_DIR InDirectionType, E_BTN_HELP_MAPPING_KEY_TYPE TargetMapping, bool IsHold, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetHoldEffect_byMapping");

	Params::BPI_BtnHelpCtrl2_C_SetHoldEffect_byMapping Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.TargetMapping = TargetMapping;
	Parms.IsHold = IsHold;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetHoldEffect_byIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetHoldEffect_byIdx(E_BTN_HELP_DIR InDirectionType, int32 Param_Index, bool IsHold, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetHoldEffect_byIdx");

	Params::BPI_BtnHelpCtrl2_C_SetHoldEffect_byIdx Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.Param_Index = Param_Index;
	Parms.IsHold = IsHold;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColor_byMapping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BtnHelp_ColorInfo_byEnum     InActiveColorInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColor_byMapping(E_BTN_HELP_DIR InDirectionType, const struct FST_BtnHelp_ColorInfo_byEnum& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColor_byMapping");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColor_byMapping Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColor_byIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BtnHelp_ColorInfo_byIdx      InActiveColorInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColor_byIdx(E_BTN_HELP_DIR InDirectionType, const struct FST_BtnHelp_ColorInfo_byIdx& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColor_byIdx");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColor_byIdx Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColors_byIdx
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_BtnHelp_ColorInfo_byIdx>InActiveColorInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColors_byIdx(E_BTN_HELP_DIR InDirectionType, TArray<struct FST_BtnHelp_ColorInfo_byIdx>& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColors_byIdx");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColors_byIdx Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	InActiveColorInfo = std::move(Parms.InActiveColorInfo);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.GetActiveColor_ByMapping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_BTN_HELP_MAPPING_KEY_TYPE             InTargetMapping                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::GetActiveColor_ByMapping(E_BTN_HELP_DIR InDirectionType, E_BTN_HELP_MAPPING_KEY_TYPE InTargetMapping, bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "GetActiveColor_ByMapping");

	Params::BPI_BtnHelpCtrl2_C_GetActiveColor_ByMapping Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InTargetMapping = InTargetMapping;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColors_byMapping
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_BtnHelp_ColorInfo_byEnum>InActiveColorInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColors_byMapping(E_BTN_HELP_DIR InDirectionType, const TArray<struct FST_BtnHelp_ColorInfo_byEnum>& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColors_byMapping");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColors_byMapping Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColors_All
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColors_All(E_BTN_HELP_DIR InDirectionType, bool IsActive, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColors_All");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColors_All Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColor_Reserve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BtnHelp_ColorInfo_byIdx      InActiveColorInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColor_Reserve(E_BTN_HELP_DIR InDirectionType, const struct FST_BtnHelp_ColorInfo_byIdx& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColor_Reserve");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColor_Reserve Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetActiveColors_Reserve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_BtnHelp_ColorInfo_byIdx>InActiveColorInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetActiveColors_Reserve(E_BTN_HELP_DIR InDirectionType, TArray<struct FST_BtnHelp_ColorInfo_byIdx>& InActiveColorInfo, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetActiveColors_Reserve");

	Params::BPI_BtnHelpCtrl2_C_SetActiveColors_Reserve Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.InActiveColorInfo = std::move(InActiveColorInfo);

	UObject::ProcessEvent(Func, &Parms);

	InActiveColorInfo = std::move(Parms.InActiveColorInfo);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.CancelReserveColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::CancelReserveColors(E_BTN_HELP_DIR InDirectionType, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "CancelReserveColors");

	Params::BPI_BtnHelpCtrl2_C_CancelReserveColors Parms{};

	Parms.InDirectionType = InDirectionType;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetHoldEffect_All2
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHold                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetHoldEffect_All2(E_BTN_HELP_DIR InDirectionType, bool IsHold, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetHoldEffect_All2");

	Params::BPI_BtnHelpCtrl2_C_SetHoldEffect_All2 Parms{};

	Parms.InDirectionType = InDirectionType;
	Parms.IsHold = IsHold;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.SetIconMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::SetIconMode(bool IsGamePad, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "SetIconMode");

	Params::BPI_BtnHelpCtrl2_C_SetIconMode Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}


// Function BPI_BtnHelpCtrl2.BPI_BtnHelpCtrl2_C.AddWidgetToNormalViewport
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BTN_HELP_DIR                          InDirectionType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotUse                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_BtnHelpCtrl2_C::AddWidgetToNormalViewport(E_BTN_HELP_DIR InDirectionType, bool* NotUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BtnHelpCtrl2_C", "AddWidgetToNormalViewport");

	Params::BPI_BtnHelpCtrl2_C_AddWidgetToNormalViewport Parms{};

	Parms.InDirectionType = InDirectionType;

	UObject::ProcessEvent(Func, &Parms);

	if (NotUse != nullptr)
		*NotUse = Parms.NotUse;
}

}

