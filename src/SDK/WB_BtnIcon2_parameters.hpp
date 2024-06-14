#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnIcon2

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_BtnIcon2.WB_BtnIcon2_C.ExecuteUbergraph_WB_BtnIcon2
// 0x00B8 (0x00B8 - 0x0000)
struct WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6352[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6353[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6354[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstanceBase*               K2Node_DynamicCast_AsProject_Game_Instance_Base;   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6355[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6356[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProjectGameInstanceBase*               K2Node_DynamicCast_AsProject_Game_Instance_Base_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6357[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2) == 0x000008, "Wrong alignment on WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2");
static_assert(sizeof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2) == 0x0000B8, "Wrong size on WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, EntryPoint) == 0x000000, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_Event_IsDesignTime) == 0x000010, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_Event_MyGeometry) == 0x000014, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue) == 0x000050, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_AsTexture) == 0x000058, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, CallFunc_GetGameInstance_ReturnValue) == 0x000068, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_AsProject_Game_Instance_Base) == 0x000070, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_AsProject_Game_Instance_Base' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_CreateDelegate_OutputDelegate) == 0x00007C, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, CallFunc_GetGameInstance_ReturnValue_1) == 0x000090, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_AsProject_Game_Instance_Base_1) == 0x000098, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_AsProject_Game_Instance_Base_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A4, "Member 'WB_BtnIcon2_C_ExecuteUbergraph_WB_BtnIcon2::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_BtnIcon2_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_Tick) == 0x000004, "Wrong alignment on WB_BtnIcon2_C_Tick");
static_assert(sizeof(WB_BtnIcon2_C_Tick) == 0x00003C, "Wrong size on WB_BtnIcon2_C_Tick");
static_assert(offsetof(WB_BtnIcon2_C_Tick, MyGeometry) == 0x000000, "Member 'WB_BtnIcon2_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_BtnIcon2_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_BtnIcon2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtnIcon2_C_PreConstruct) == 0x000001, "Wrong alignment on WB_BtnIcon2_C_PreConstruct");
static_assert(sizeof(WB_BtnIcon2_C_PreConstruct) == 0x000001, "Wrong size on WB_BtnIcon2_C_PreConstruct");
static_assert(offsetof(WB_BtnIcon2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_BtnIcon2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.SetButtonSize
// 0x0058 (0x0058 - 0x0000)
struct WB_BtnIcon2_C_SetButtonSize final
{
public:
	E_BTN_ICON_SIZE                               InSIze2;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6358[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6359[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_SetButtonSize) == 0x000008, "Wrong alignment on WB_BtnIcon2_C_SetButtonSize");
static_assert(sizeof(WB_BtnIcon2_C_SetButtonSize) == 0x000058, "Wrong size on WB_BtnIcon2_C_SetButtonSize");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, InSIze2) == 0x000000, "Member 'WB_BtnIcon2_C_SetButtonSize::InSIze2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_byte_Variable) == 0x000001, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_struct_Variable) == 0x000004, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_struct_Variable_1) == 0x00000C, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_struct_Variable_2) == 0x000014, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_struct_Variable_3) == 0x00001C, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_byte_Variable_1) == 0x000024, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_object_Variable) == 0x000028, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_object_Variable_1) == 0x000030, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_object_Variable_2) == 0x000038, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, Temp_object_Variable_3) == 0x000040, "Member 'WB_BtnIcon2_C_SetButtonSize::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, K2Node_Select_Default) == 0x000048, "Member 'WB_BtnIcon2_C_SetButtonSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonSize, K2Node_Select_Default_1) == 0x000050, "Member 'WB_BtnIcon2_C_SetButtonSize::K2Node_Select_Default_1' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.SetButtonIcon
// 0x0030 (0x0030 - 0x0000)
struct WB_BtnIcon2_C_SetButtonIcon final
{
public:
	E_BTN_HELP_MAPPING_KEY_TYPE                   InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetBtnHelpTexUV_ByMappingEnum_ReturnValue; // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_SetButtonIcon) == 0x000008, "Wrong alignment on WB_BtnIcon2_C_SetButtonIcon");
static_assert(sizeof(WB_BtnIcon2_C_SetButtonIcon) == 0x000030, "Wrong size on WB_BtnIcon2_C_SetButtonIcon");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, InType) == 0x000000, "Member 'WB_BtnIcon2_C_SetButtonIcon::InType' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, CallFunc_GetBtnHelpTexUV_ByMappingEnum_ReturnValue) == 0x000004, "Member 'WB_BtnIcon2_C_SetButtonIcon::CallFunc_GetBtnHelpTexUV_ByMappingEnum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, CallFunc_BreakVector2D_X) == 0x00000C, "Member 'WB_BtnIcon2_C_SetButtonIcon::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'WB_BtnIcon2_C_SetButtonIcon::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WB_BtnIcon2_C_SetButtonIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonIcon, K2Node_MakeStruct_LinearColor) == 0x000020, "Member 'WB_BtnIcon2_C_SetButtonIcon::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.SetButtonColor
// 0x0010 (0x0010 - 0x0000)
struct WB_BtnIcon2_C_SetButtonColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_SetButtonColor) == 0x000004, "Wrong alignment on WB_BtnIcon2_C_SetButtonColor");
static_assert(sizeof(WB_BtnIcon2_C_SetButtonColor) == 0x000010, "Wrong size on WB_BtnIcon2_C_SetButtonColor");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor, InColor) == 0x000000, "Member 'WB_BtnIcon2_C_SetButtonColor::InColor' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.SetButtonColor_ByActiveState
// 0x0034 (0x0034 - 0x0000)
struct WB_BtnIcon2_C_SetButtonColor_ByActiveState final
{
public:
	bool                                          IsActiveColor;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_SetButtonColor_ByActiveState) == 0x000004, "Wrong alignment on WB_BtnIcon2_C_SetButtonColor_ByActiveState");
static_assert(sizeof(WB_BtnIcon2_C_SetButtonColor_ByActiveState) == 0x000034, "Wrong size on WB_BtnIcon2_C_SetButtonColor_ByActiveState");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor_ByActiveState, IsActiveColor) == 0x000000, "Member 'WB_BtnIcon2_C_SetButtonColor_ByActiveState::IsActiveColor' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor_ByActiveState, Temp_bool_Variable) == 0x000001, "Member 'WB_BtnIcon2_C_SetButtonColor_ByActiveState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor_ByActiveState, Temp_struct_Variable) == 0x000004, "Member 'WB_BtnIcon2_C_SetButtonColor_ByActiveState::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor_ByActiveState, Temp_struct_Variable_1) == 0x000014, "Member 'WB_BtnIcon2_C_SetButtonColor_ByActiveState::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_SetButtonColor_ByActiveState, K2Node_Select_Default) == 0x000024, "Member 'WB_BtnIcon2_C_SetButtonColor_ByActiveState::K2Node_Select_Default' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.UpdatePlatfrormTexture
// 0x0028 (0x0028 - 0x0000)
struct WB_BtnIcon2_C_UpdatePlatfrormTexture final
{
public:
	E_GAMEPAD_TYPE                                CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_OPTION_CONTENT_BUTTON_ICON_TYPE             CallFunc_GetButtonIconType_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               K2Node_DynamicCast_AsTexture;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_635E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_BtnIcon2_C_UpdatePlatfrormTexture) == 0x000008, "Wrong alignment on WB_BtnIcon2_C_UpdatePlatfrormTexture");
static_assert(sizeof(WB_BtnIcon2_C_UpdatePlatfrormTexture) == 0x000028, "Wrong size on WB_BtnIcon2_C_UpdatePlatfrormTexture");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue) == 0x000000, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, CallFunc_GetButtonIconType_ReturnValue) == 0x000001, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::CallFunc_GetButtonIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue) == 0x000008, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::CallFunc_GetPadBtnTexture_ByOptionSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, K2Node_DynamicCast_AsTexture) == 0x000010, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_UpdatePlatfrormTexture, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000020, "Member 'WB_BtnIcon2_C_UpdatePlatfrormTexture::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WB_BtnIcon2.WB_BtnIcon2_C.Tick_UpdateIcon
// 0x000E (0x000E - 0x0000)
struct WB_BtnIcon2_C_Tick_UpdateIcon final
{
public:
	E_GAMEPAD_TYPE                                CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_GAMEPAD_TYPE                                CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_1; // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_GAMEPAD_TYPE                                CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_2; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_OPTION_CONTENT_BUTTON_ICON_TYPE             CallFunc_GetButtonIconType_ReturnValue;            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_BtnIcon2_C_Tick_UpdateIcon) == 0x000001, "Wrong alignment on WB_BtnIcon2_C_Tick_UpdateIcon");
static_assert(sizeof(WB_BtnIcon2_C_Tick_UpdateIcon) == 0x00000E, "Wrong size on WB_BtnIcon2_C_Tick_UpdateIcon");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue) == 0x000000, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000002, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_1) == 0x000003, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000006, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x000007, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000008, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_2) == 0x000009, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_GetConnectedGamepadType_ForSteam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00000A, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_GetButtonIconType_ReturnValue) == 0x00000B, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_GetButtonIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_BooleanAND_ReturnValue_2) == 0x00000C, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_BtnIcon2_C_Tick_UpdateIcon, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00000D, "Member 'WB_BtnIcon2_C_Tick_UpdateIcon::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");

}
