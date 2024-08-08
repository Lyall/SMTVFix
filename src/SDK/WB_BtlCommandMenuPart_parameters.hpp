#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlCommandMenuPart

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnHovered__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature final
{
public:
	E_BTL_UI_COMMAND                              Command;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature");
static_assert(sizeof(WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature) == 0x000001, "Wrong size on WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature");
static_assert(offsetof(WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature, Command) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_Evt_OnHovered__DelegateSignature::Command' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Evt_OnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature final
{
public:
	E_BTL_UI_COMMAND                              Command;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature");
static_assert(sizeof(WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature) == 0x000001, "Wrong size on WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature");
static_assert(offsetof(WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature, Command) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_Evt_OnClicked__DelegateSignature::Command' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.ExecuteUbergraph_WB_BtlCommandMenuPart
// 0x0048 (0x0048 - 0x0000)
struct WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_DelayRemainTick;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Immediately;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName;           // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName;          // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayByIndex_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_ComponentBoundEvent_Pos;                    // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_ComponentBoundEvent_UV;                     // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart) == 0x000004, "Wrong alignment on WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart");
static_assert(sizeof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart) == 0x000048, "Wrong size on WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, EntryPoint) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, Temp_int_Variable) == 0x000004, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, CallFunc_BooleanOR_ReturnValue) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000011, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_Event_IsDesignTime) == 0x000012, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_CustomEvent_DelayRemainTick) == 0x000014, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_CustomEvent_DelayRemainTick' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_CustomEvent_Immediately) == 0x000018, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_CustomEvent_Immediately' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_AnimPackName) == 0x00001C, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_AnimationName) == 0x000024, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_AnimationName' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_AnimPackIndex) == 0x00002C, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_AnimationIndex) == 0x000030, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_AnimationIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_SwitchInteger_CmpSuccess) == 0x000034, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, CallFunc_PlayByIndex_ReturnValue) == 0x000035, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::CallFunc_PlayByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_Pos) == 0x000038, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_Pos' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart, K2Node_ComponentBoundEvent_UV) == 0x000040, "Member 'WB_BtlCommandMenuPart_C_ExecuteUbergraph_WB_BtlCommandMenuPart::K2Node_ComponentBoundEvent_UV' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature final
{
public:
	struct FVector2D                              Pos;                                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UV;                                                // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature) == 0x000004, "Wrong alignment on WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature");
static_assert(sizeof(WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature) == 0x000010, "Wrong size on WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature, Pos) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature::Pos' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature, UV) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_BndEvt__WB_BtlCommandMenuPart_ButtonS5_Command_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature::UV' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_BtlCommandMenuPart_C_BndEvt__SsPlayer_MenuPart_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.Slide In
// 0x0008 (0x0008 - 0x0000)
struct WB_BtlCommandMenuPart_C_Slide_In final
{
public:
	int32                                         DelayRemainTick;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Immediately;                                       // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_Slide_In) == 0x000004, "Wrong alignment on WB_BtlCommandMenuPart_C_Slide_In");
static_assert(sizeof(WB_BtlCommandMenuPart_C_Slide_In) == 0x000008, "Wrong size on WB_BtlCommandMenuPart_C_Slide_In");
static_assert(offsetof(WB_BtlCommandMenuPart_C_Slide_In, DelayRemainTick) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_Slide_In::DelayRemainTick' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_Slide_In, Immediately) == 0x000004, "Member 'WB_BtlCommandMenuPart_C_Slide_In::Immediately' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlCommandMenuPart_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_PreConstruct) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_PreConstruct");
static_assert(sizeof(WB_BtlCommandMenuPart_C_PreConstruct) == 0x000001, "Wrong size on WB_BtlCommandMenuPart_C_PreConstruct");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.SetSelected
// 0x0002 (0x0002 - 0x0000)
struct WB_BtlCommandMenuPart_C_SetSelected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_SetSelected) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_SetSelected");
static_assert(sizeof(WB_BtlCommandMenuPart_C_SetSelected) == 0x000002, "Wrong size on WB_BtlCommandMenuPart_C_SetSelected");
static_assert(offsetof(WB_BtlCommandMenuPart_C_SetSelected, Selected) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_SetSelected::Selected' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_SetSelected, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'WB_BtlCommandMenuPart_C_SetSelected::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.GetAnimPack
// 0x0014 (0x0014 - 0x0000)
struct WB_BtlCommandMenuPart_C_GetAnimPack final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_GetAnimPack) == 0x000004, "Wrong alignment on WB_BtlCommandMenuPart_C_GetAnimPack");
static_assert(sizeof(WB_BtlCommandMenuPart_C_GetAnimPack) == 0x000014, "Wrong size on WB_BtlCommandMenuPart_C_GetAnimPack");
static_assert(offsetof(WB_BtlCommandMenuPart_C_GetAnimPack, ReturnValue) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_GetAnimPack::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_GetAnimPack, Temp_bool_Variable) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_GetAnimPack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_GetAnimPack, K2Node_Select_Default) == 0x00000C, "Member 'WB_BtlCommandMenuPart_C_GetAnimPack::K2Node_Select_Default' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.CalcMaterial
// 0x0038 (0x0038 - 0x0000)
struct WB_BtlCommandMenuPart_C_CalcMaterial final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_CalcMaterial) == 0x000008, "Wrong alignment on WB_BtlCommandMenuPart_C_CalcMaterial");
static_assert(sizeof(WB_BtlCommandMenuPart_C_CalcMaterial) == 0x000038, "Wrong size on WB_BtlCommandMenuPart_C_CalcMaterial");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, Temp_bool_Variable) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, Temp_object_Variable) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, Temp_object_Variable_1) == 0x000010, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, Temp_bool_Variable_1) == 0x000018, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, Temp_object_Variable_2) == 0x000020, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, K2Node_Select_Default) == 0x000028, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_CalcMaterial, K2Node_Select_Default_1) == 0x000030, "Member 'WB_BtlCommandMenuPart_C_CalcMaterial::K2Node_Select_Default_1' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.SetSelectable
// 0x0002 (0x0002 - 0x0000)
struct WB_BtlCommandMenuPart_C_SetSelectable final
{
public:
	bool                                          Selectable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_SetSelectable) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_SetSelectable");
static_assert(sizeof(WB_BtlCommandMenuPart_C_SetSelectable) == 0x000002, "Wrong size on WB_BtlCommandMenuPart_C_SetSelectable");
static_assert(offsetof(WB_BtlCommandMenuPart_C_SetSelectable, Selectable) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_SetSelectable::Selectable' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_SetSelectable, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'WB_BtlCommandMenuPart_C_SetSelectable::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.GetResult
// 0x0002 (0x0002 - 0x0000)
struct WB_BtlCommandMenuPart_C_GetResult final
{
public:
	E_BTL_UI_COMMAND                              Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selectable;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_GetResult) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_GetResult");
static_assert(sizeof(WB_BtlCommandMenuPart_C_GetResult) == 0x000002, "Wrong size on WB_BtlCommandMenuPart_C_GetResult");
static_assert(offsetof(WB_BtlCommandMenuPart_C_GetResult, Result) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_GetResult::Result' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_GetResult, Selectable) == 0x000001, "Member 'WB_BtlCommandMenuPart_C_GetResult::Selectable' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.PlayMenuAnim
// 0x00C0 (0x00C0 - 0x0000)
struct WB_BtlCommandMenuPart_C_PlayMenuAnim final
{
public:
	int32                                         AnimIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoop;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class FName>                      AnimNames;                                         // 0x0008(0x0050)(Edit, BlueprintVisible)
	TMap<int32, class FName>                      K2Node_MakeVariable_MakeVariableOutput;            // 0x0058(0x0050)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetAnimPack_ReturnValue;                  // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Map_Find_Value;                           // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_PlayMenuAnim) == 0x000008, "Wrong alignment on WB_BtlCommandMenuPart_C_PlayMenuAnim");
static_assert(sizeof(WB_BtlCommandMenuPart_C_PlayMenuAnim) == 0x0000C0, "Wrong size on WB_BtlCommandMenuPart_C_PlayMenuAnim");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, AnimIndex) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::AnimIndex' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, IsLoop) == 0x000004, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::IsLoop' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, AnimNames) == 0x000008, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::AnimNames' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, K2Node_MakeVariable_MakeVariableOutput) == 0x000058, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, CallFunc_SelectInt_ReturnValue) == 0x0000A8, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, CallFunc_GetAnimPack_ReturnValue) == 0x0000AC, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::CallFunc_GetAnimPack_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, CallFunc_Map_Find_Value) == 0x0000B4, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, CallFunc_Map_Find_ReturnValue) == 0x0000BC, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtlCommandMenuPart_C_PlayMenuAnim, CallFunc_Play_ReturnValue) == 0x0000BD, "Member 'WB_BtlCommandMenuPart_C_PlayMenuAnim::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.IsFinishSlideIn
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlCommandMenuPart_C_IsFinishSlideIn final
{
public:
	bool                                          IsFinished;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_IsFinishSlideIn) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_IsFinishSlideIn");
static_assert(sizeof(WB_BtlCommandMenuPart_C_IsFinishSlideIn) == 0x000001, "Wrong size on WB_BtlCommandMenuPart_C_IsFinishSlideIn");
static_assert(offsetof(WB_BtlCommandMenuPart_C_IsFinishSlideIn, IsFinished) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_IsFinishSlideIn::IsFinished' has a wrong offset!");

// Function WB_BtlCommandMenuPart.WB_BtlCommandMenuPart_C.IsDisappeared
// 0x0001 (0x0001 - 0x0000)
struct WB_BtlCommandMenuPart_C_IsDisappeared final
{
public:
	bool                                          Param_IsDisappeared;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtlCommandMenuPart_C_IsDisappeared) == 0x000001, "Wrong alignment on WB_BtlCommandMenuPart_C_IsDisappeared");
static_assert(sizeof(WB_BtlCommandMenuPart_C_IsDisappeared) == 0x000001, "Wrong size on WB_BtlCommandMenuPart_C_IsDisappeared");
static_assert(offsetof(WB_BtlCommandMenuPart_C_IsDisappeared, Param_IsDisappeared) == 0x000000, "Member 'WB_BtlCommandMenuPart_C_IsDisappeared::Param_IsDisappeared' has a wrong offset!");

}

