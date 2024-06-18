#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ScreenTransitionCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_ScreenTransitionFadeType_structs.hpp"


namespace SDK::Params
{

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.ExecuteUbergraph_BP_ScreenTransitionCtrl
// 0x0028 (0x0028 - 0x0000)
struct BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScreenTransitionFadeType                    K2Node_Event_Type_1;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DAB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Event_inTexture;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScreenTransitionFadeType                    K2Node_Event_InType;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DAC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ScreenTransition_C*                 CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ScreenTransitionFadeType                    K2Node_Event_Type;                                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToWidgetPrio_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl) == 0x000008, "Wrong alignment on BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl) == 0x000028, "Wrong size on BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, EntryPoint) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, K2Node_Event_Type_1) == 0x000004, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::K2Node_Event_Type_1' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, K2Node_Event_inTexture) == 0x000008, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::K2Node_Event_inTexture' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, K2Node_Event_InType) == 0x000010, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::K2Node_Event_InType' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, K2Node_Event_Type) == 0x000020, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::K2Node_Event_Type' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl, CallFunc_AddToWidgetPrio_ReturnValue) == 0x000021, "Member 'BP_ScreenTransitionCtrl_C_ExecuteUbergraph_BP_ScreenTransitionCtrl::CallFunc_AddToWidgetPrio_ReturnValue' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.FadeIn
// 0x0001 (0x0001 - 0x0000)
struct BP_ScreenTransitionCtrl_C_FadeIn final
{
public:
	E_ScreenTransitionFadeType                    Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_FadeIn) == 0x000001, "Wrong alignment on BP_ScreenTransitionCtrl_C_FadeIn");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_FadeIn) == 0x000001, "Wrong size on BP_ScreenTransitionCtrl_C_FadeIn");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_FadeIn, Type) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_FadeIn::Type' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.screenCover
// 0x0001 (0x0001 - 0x0000)
struct BP_ScreenTransitionCtrl_C_ScreenCover final
{
public:
	E_ScreenTransitionFadeType                    InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_ScreenCover) == 0x000001, "Wrong alignment on BP_ScreenTransitionCtrl_C_ScreenCover");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_ScreenCover) == 0x000001, "Wrong size on BP_ScreenTransitionCtrl_C_ScreenCover");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_ScreenCover, InType) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_ScreenCover::InType' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.setCaptureTexture
// 0x0008 (0x0008 - 0x0000)
struct BP_ScreenTransitionCtrl_C_SetCaptureTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_SetCaptureTexture) == 0x000008, "Wrong alignment on BP_ScreenTransitionCtrl_C_SetCaptureTexture");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_SetCaptureTexture) == 0x000008, "Wrong size on BP_ScreenTransitionCtrl_C_SetCaptureTexture");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_SetCaptureTexture, InTexture) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_SetCaptureTexture::InTexture' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.FadeOut
// 0x0001 (0x0001 - 0x0000)
struct BP_ScreenTransitionCtrl_C_FadeOut final
{
public:
	E_ScreenTransitionFadeType                    Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_FadeOut) == 0x000001, "Wrong alignment on BP_ScreenTransitionCtrl_C_FadeOut");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_FadeOut) == 0x000001, "Wrong size on BP_ScreenTransitionCtrl_C_FadeOut");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_FadeOut, Type) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_FadeOut::Type' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.isFadeFinish
// 0x0002 (0x0002 - 0x0000)
struct BP_ScreenTransitionCtrl_C_IsFadeFinish final
{
public:
	bool                                          OutValue;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEndAnim_IsEnd;                          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_IsFadeFinish) == 0x000001, "Wrong alignment on BP_ScreenTransitionCtrl_C_IsFadeFinish");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_IsFadeFinish) == 0x000002, "Wrong size on BP_ScreenTransitionCtrl_C_IsFadeFinish");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_IsFadeFinish, OutValue) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_IsFadeFinish::OutValue' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_IsFadeFinish, CallFunc_IsEndAnim_IsEnd) == 0x000001, "Member 'BP_ScreenTransitionCtrl_C_IsFadeFinish::CallFunc_IsEndAnim_IsEnd' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.getFinishByFrame
// 0x0008 (0x0008 - 0x0000)
struct BP_ScreenTransitionCtrl_C_GetFinishByFrame final
{
public:
	float                                         OutValue;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFinishByFrame_OutFrame;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_GetFinishByFrame) == 0x000004, "Wrong alignment on BP_ScreenTransitionCtrl_C_GetFinishByFrame");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_GetFinishByFrame) == 0x000008, "Wrong size on BP_ScreenTransitionCtrl_C_GetFinishByFrame");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_GetFinishByFrame, OutValue) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_GetFinishByFrame::OutValue' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_GetFinishByFrame, CallFunc_GetFinishByFrame_OutFrame) == 0x000004, "Member 'BP_ScreenTransitionCtrl_C_GetFinishByFrame::CallFunc_GetFinishByFrame_OutFrame' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.getCaptureTexture
// 0x0008 (0x0008 - 0x0000)
struct BP_ScreenTransitionCtrl_C_GetCaptureTexture final
{
public:
	class UTexture2D*                             OutTexture;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_GetCaptureTexture) == 0x000008, "Wrong alignment on BP_ScreenTransitionCtrl_C_GetCaptureTexture");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_GetCaptureTexture) == 0x000008, "Wrong size on BP_ScreenTransitionCtrl_C_GetCaptureTexture");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_GetCaptureTexture, OutTexture) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_GetCaptureTexture::OutTexture' has a wrong offset!");

// Function BP_ScreenTransitionCtrl.BP_ScreenTransitionCtrl_C.GetFadeState
// 0x0002 (0x0002 - 0x0000)
struct BP_ScreenTransitionCtrl_C_GetFadeState final
{
public:
	E_UI_FADE_STATE                               OutType;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UI_FADE_STATE                               CallFunc_GetFadeState_FadeState;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScreenTransitionCtrl_C_GetFadeState) == 0x000001, "Wrong alignment on BP_ScreenTransitionCtrl_C_GetFadeState");
static_assert(sizeof(BP_ScreenTransitionCtrl_C_GetFadeState) == 0x000002, "Wrong size on BP_ScreenTransitionCtrl_C_GetFadeState");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_GetFadeState, OutType) == 0x000000, "Member 'BP_ScreenTransitionCtrl_C_GetFadeState::OutType' has a wrong offset!");
static_assert(offsetof(BP_ScreenTransitionCtrl_C_GetFadeState, CallFunc_GetFadeState_FadeState) == 0x000001, "Member 'BP_ScreenTransitionCtrl_C_GetFadeState::CallFunc_GetFadeState_FadeState' has a wrong offset!");

}

