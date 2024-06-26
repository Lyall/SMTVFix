#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PopUpSs

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_PopUpSs.WB_PopUpSs_C.ExecuteUbergraph_WB_PopUpSs
// 0x0048 (0x0048 - 0x0000)
struct WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimPackName;           // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_AnimationName;          // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimPackIndex;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_AnimationIndex;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Play_ReturnValue_1;                       // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635B[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UPopUpIconManager*                      CallFunc_GetPopUpIconManager_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UnregisterByIndex_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635C[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetAnimPackName_OutName;                  // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue_2;                       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_POP_UP_ICON_TYPE                            K2Node_CustomEvent_IconType;                       // 0x0035(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635D[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ListIndex;                      // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetAnimPackName_OutName_1;                // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue_3;                       // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs) == 0x000008, "Wrong alignment on WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs");
static_assert(sizeof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs) == 0x000048, "Wrong size on WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, EntryPoint) == 0x000000, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_ComponentBoundEvent_AnimPackName) == 0x000004, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_ComponentBoundEvent_AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_ComponentBoundEvent_AnimationName) == 0x00000C, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_ComponentBoundEvent_AnimationName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_ComponentBoundEvent_AnimPackIndex) == 0x000014, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_ComponentBoundEvent_AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_ComponentBoundEvent_AnimationIndex) == 0x000018, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_ComponentBoundEvent_AnimationIndex' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_SwitchName_CmpSuccess) == 0x00001C, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_Play_ReturnValue) == 0x00001D, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_Play_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_Play_ReturnValue_1) == 0x00001E, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_Play_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_GetPopUpIconManager_ReturnValue) == 0x000020, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_GetPopUpIconManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_UnregisterByIndex_ReturnValue) == 0x000028, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_UnregisterByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_Event_IsDesignTime) == 0x000029, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_GetAnimPackName_OutName) == 0x00002C, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_GetAnimPackName_OutName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_Play_ReturnValue_2) == 0x000034, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_Play_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_CustomEvent_IconType) == 0x000035, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_CustomEvent_IconType' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, K2Node_CustomEvent_ListIndex) == 0x000038, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::K2Node_CustomEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_GetAnimPackName_OutName_1) == 0x00003C, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_GetAnimPackName_OutName_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs, CallFunc_Play_ReturnValue_3) == 0x000044, "Member 'WB_PopUpSs_C_ExecuteUbergraph_WB_PopUpSs::CallFunc_Play_ReturnValue_3' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature final
{
public:
	class FName                                   AnimPackName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AnimationName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimPackIndex;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationIndex;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000004, "Wrong alignment on WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(sizeof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature) == 0x000018, "Wrong size on WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature");
static_assert(offsetof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackName) == 0x000000, "Member 'WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationName) == 0x000008, "Member 'WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimPackIndex) == 0x000010, "Member 'WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimPackIndex' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature, AnimationIndex) == 0x000014, "Member 'WB_PopUpSs_C_BndEvt__SsPlayerWidget_PopUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature::AnimationIndex' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.Start
// 0x0008 (0x0008 - 0x0000)
struct WB_PopUpSs_C_Start final
{
public:
	E_POP_UP_ICON_TYPE                            Param_IconType;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ListIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpSs_C_Start) == 0x000004, "Wrong alignment on WB_PopUpSs_C_Start");
static_assert(sizeof(WB_PopUpSs_C_Start) == 0x000008, "Wrong size on WB_PopUpSs_C_Start");
static_assert(offsetof(WB_PopUpSs_C_Start, Param_IconType) == 0x000000, "Member 'WB_PopUpSs_C_Start::Param_IconType' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_Start, Param_ListIndex) == 0x000004, "Member 'WB_PopUpSs_C_Start::Param_ListIndex' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_PopUpSs_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_PopUpSs_C_PreConstruct) == 0x000001, "Wrong alignment on WB_PopUpSs_C_PreConstruct");
static_assert(sizeof(WB_PopUpSs_C_PreConstruct) == 0x000001, "Wrong size on WB_PopUpSs_C_PreConstruct");
static_assert(offsetof(WB_PopUpSs_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_PopUpSs_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.SetRenderSize
// 0x0030 (0x0030 - 0x0000)
struct WB_PopUpSs_C_SetRenderSize final
{
public:
	float                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeY;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6360[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpSs_C_SetRenderSize) == 0x000008, "Wrong alignment on WB_PopUpSs_C_SetRenderSize");
static_assert(sizeof(WB_PopUpSs_C_SetRenderSize) == 0x000030, "Wrong size on WB_PopUpSs_C_SetRenderSize");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, SizeX) == 0x000000, "Member 'WB_PopUpSs_C_SetRenderSize::SizeX' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, SizeY) == 0x000004, "Member 'WB_PopUpSs_C_SetRenderSize::SizeY' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'WB_PopUpSs_C_SetRenderSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'WB_PopUpSs_C_SetRenderSize::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000018, "Member 'WB_PopUpSs_C_SetRenderSize::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_PopUpSs_C_SetRenderSize::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000024, "Member 'WB_PopUpSs_C_SetRenderSize::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_SetRenderSize, CallFunc_MakeVector2D_ReturnValue_1) == 0x000028, "Member 'WB_PopUpSs_C_SetRenderSize::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.SetMaterialReplacement
// 0x0001 (0x0001 - 0x0000)
struct WB_PopUpSs_C_SetMaterialReplacement final
{
public:
	E_MINIMAP_MODE                                MinimapMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpSs_C_SetMaterialReplacement) == 0x000001, "Wrong alignment on WB_PopUpSs_C_SetMaterialReplacement");
static_assert(sizeof(WB_PopUpSs_C_SetMaterialReplacement) == 0x000001, "Wrong size on WB_PopUpSs_C_SetMaterialReplacement");
static_assert(offsetof(WB_PopUpSs_C_SetMaterialReplacement, MinimapMode) == 0x000000, "Member 'WB_PopUpSs_C_SetMaterialReplacement::MinimapMode' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.SetEntry
// 0x0030 (0x0030 - 0x0000)
struct WB_PopUpSs_C_SetEntry final
{
public:
	struct FPopUpIconEntry                        Entry;                                             // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WB_PopUpSs_C_SetEntry) == 0x000004, "Wrong alignment on WB_PopUpSs_C_SetEntry");
static_assert(sizeof(WB_PopUpSs_C_SetEntry) == 0x000030, "Wrong size on WB_PopUpSs_C_SetEntry");
static_assert(offsetof(WB_PopUpSs_C_SetEntry, Entry) == 0x000000, "Member 'WB_PopUpSs_C_SetEntry::Entry' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.GetAnimPackName
// 0x0038 (0x0038 - 0x0000)
struct WB_PopUpSs_C_GetAnimPackName final
{
public:
	E_POP_UP_ICON_TYPE                            Param_IconType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6361[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OutName;                                           // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_POP_UP_ICON_TYPE                            Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6362[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpSs_C_GetAnimPackName) == 0x000004, "Wrong alignment on WB_PopUpSs_C_GetAnimPackName");
static_assert(sizeof(WB_PopUpSs_C_GetAnimPackName) == 0x000038, "Wrong size on WB_PopUpSs_C_GetAnimPackName");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Param_IconType) == 0x000000, "Member 'WB_PopUpSs_C_GetAnimPackName::Param_IconType' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, OutName) == 0x000004, "Member 'WB_PopUpSs_C_GetAnimPackName::OutName' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Temp_byte_Variable) == 0x00000C, "Member 'WB_PopUpSs_C_GetAnimPackName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Temp_name_Variable) == 0x000010, "Member 'WB_PopUpSs_C_GetAnimPackName::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Temp_name_Variable_1) == 0x000018, "Member 'WB_PopUpSs_C_GetAnimPackName::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Temp_name_Variable_2) == 0x000020, "Member 'WB_PopUpSs_C_GetAnimPackName::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, Temp_name_Variable_3) == 0x000028, "Member 'WB_PopUpSs_C_GetAnimPackName::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_PopUpSs_C_GetAnimPackName, K2Node_Select_Default) == 0x000030, "Member 'WB_PopUpSs_C_GetAnimPackName::K2Node_Select_Default' has a wrong offset!");

// Function WB_PopUpSs.WB_PopUpSs_C.CheckIsStarted
// 0x0001 (0x0001 - 0x0000)
struct WB_PopUpSs_C_CheckIsStarted final
{
public:
	bool                                          Param_IsStarted;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_PopUpSs_C_CheckIsStarted) == 0x000001, "Wrong alignment on WB_PopUpSs_C_CheckIsStarted");
static_assert(sizeof(WB_PopUpSs_C_CheckIsStarted) == 0x000001, "Wrong size on WB_PopUpSs_C_CheckIsStarted");
static_assert(offsetof(WB_PopUpSs_C_CheckIsStarted, Param_IsStarted) == 0x000000, "Member 'WB_PopUpSs_C_CheckIsStarted::Param_IsStarted' has a wrong offset!");

}

