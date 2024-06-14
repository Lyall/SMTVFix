#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ExternalFontIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function WB_ExternalFontIcon.WB_ExternalFontIcon_C.ExecuteUbergraph_WB_ExternalFontIcon
// 0x0008 (0x0008 - 0x0000)
struct WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon) == 0x000004, "Wrong alignment on WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon");
static_assert(sizeof(WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon) == 0x000008, "Wrong size on WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon");
static_assert(offsetof(WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon, EntryPoint) == 0x000000, "Member 'WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_ExternalFontIcon_C_ExecuteUbergraph_WB_ExternalFontIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WB_ExternalFontIcon.WB_ExternalFontIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_ExternalFontIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_ExternalFontIcon_C_PreConstruct) == 0x000001, "Wrong alignment on WB_ExternalFontIcon_C_PreConstruct");
static_assert(sizeof(WB_ExternalFontIcon_C_PreConstruct) == 0x000001, "Wrong size on WB_ExternalFontIcon_C_PreConstruct");
static_assert(offsetof(WB_ExternalFontIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_ExternalFontIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_ExternalFontIcon.WB_ExternalFontIcon_C.SetIconSize
// 0x0060 (0x0060 - 0x0000)
struct WB_ExternalFontIcon_C_SetIconSize final
{
public:
	E_BTN_ICON_SIZE                               InSIze2;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6338[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_ICON_SIZE                               Temp_byte_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6339[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default_1;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ExternalFontIcon_C_SetIconSize) == 0x000008, "Wrong alignment on WB_ExternalFontIcon_C_SetIconSize");
static_assert(sizeof(WB_ExternalFontIcon_C_SetIconSize) == 0x000060, "Wrong size on WB_ExternalFontIcon_C_SetIconSize");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, InSIze2) == 0x000000, "Member 'WB_ExternalFontIcon_C_SetIconSize::InSIze2' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_byte_Variable) == 0x000001, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_struct_Variable) == 0x000004, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_struct_Variable_1) == 0x00000C, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_struct_Variable_2) == 0x000014, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_struct_Variable_3) == 0x00001C, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_byte_Variable_1) == 0x000024, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_object_Variable) == 0x000028, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_object_Variable_1) == 0x000030, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_object_Variable_2) == 0x000038, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, Temp_object_Variable_3) == 0x000040, "Member 'WB_ExternalFontIcon_C_SetIconSize::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, K2Node_Select_Default) == 0x000048, "Member 'WB_ExternalFontIcon_C_SetIconSize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, K2Node_Select_Default_1) == 0x000050, "Member 'WB_ExternalFontIcon_C_SetIconSize::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconSize, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000058, "Member 'WB_ExternalFontIcon_C_SetIconSize::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WB_ExternalFontIcon.WB_ExternalFontIcon_C.SetIcon
// 0x0040 (0x0040 - 0x0000)
struct WB_ExternalFontIcon_C_SetIcon final
{
public:
	struct FKey                                   InKeyInfo;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetExternalFontTexUV_ByMappingEnum_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ExternalFontIcon_C_SetIcon) == 0x000008, "Wrong alignment on WB_ExternalFontIcon_C_SetIcon");
static_assert(sizeof(WB_ExternalFontIcon_C_SetIcon) == 0x000040, "Wrong size on WB_ExternalFontIcon_C_SetIcon");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIcon, InKeyInfo) == 0x000000, "Member 'WB_ExternalFontIcon_C_SetIcon::InKeyInfo' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIcon, CallFunc_GetExternalFontTexUV_ByMappingEnum_ReturnValue) == 0x000018, "Member 'WB_ExternalFontIcon_C_SetIcon::CallFunc_GetExternalFontTexUV_ByMappingEnum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIcon, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'WB_ExternalFontIcon_C_SetIcon::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIcon, K2Node_MakeStruct_LinearColor) == 0x000030, "Member 'WB_ExternalFontIcon_C_SetIcon::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function WB_ExternalFontIcon.WB_ExternalFontIcon_C.SetIconColor
// 0x0010 (0x0010 - 0x0000)
struct WB_ExternalFontIcon_C_SetIconColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ExternalFontIcon_C_SetIconColor) == 0x000004, "Wrong alignment on WB_ExternalFontIcon_C_SetIconColor");
static_assert(sizeof(WB_ExternalFontIcon_C_SetIconColor) == 0x000010, "Wrong size on WB_ExternalFontIcon_C_SetIconColor");
static_assert(offsetof(WB_ExternalFontIcon_C_SetIconColor, InColor) == 0x000000, "Member 'WB_ExternalFontIcon_C_SetIconColor::InColor' has a wrong offset!");

}

