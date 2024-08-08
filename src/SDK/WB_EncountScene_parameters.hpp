#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_EncountScene

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_EncountScene.WB_EncountScene_C.ExecuteUbergraph_WB_EncountScene
// 0x00D0 (0x00D0 - 0x0000)
struct WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Stride;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Amount;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_CenterX;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_CenterY;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Alpha;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0048(0x0088)()
};
static_assert(alignof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene) == 0x000008, "Wrong alignment on WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene");
static_assert(sizeof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene) == 0x0000D0, "Wrong size on WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, EntryPoint) == 0x000000, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, Temp_bool_Variable) == 0x000004, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, Temp_object_Variable) == 0x000008, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, Temp_object_Variable_1) == 0x000010, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_CustomEvent_Stride) == 0x000020, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_CustomEvent_Stride' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_CustomEvent_Amount) == 0x000024, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_CustomEvent_CenterX) == 0x000028, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_CustomEvent_CenterX' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_CustomEvent_CenterY) == 0x00002C, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_CustomEvent_CenterY' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_CustomEvent_Alpha) == 0x000030, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_CustomEvent_Alpha' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_Select_Default) == 0x000040, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene, K2Node_MakeStruct_SlateBrush) == 0x000048, "Member 'WB_EncountScene_C_ExecuteUbergraph_WB_EncountScene::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WB_EncountScene.WB_EncountScene_C.SetAlpha
// 0x0004 (0x0004 - 0x0000)
struct WB_EncountScene_C_SetAlpha final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_EncountScene_C_SetAlpha) == 0x000004, "Wrong alignment on WB_EncountScene_C_SetAlpha");
static_assert(sizeof(WB_EncountScene_C_SetAlpha) == 0x000004, "Wrong size on WB_EncountScene_C_SetAlpha");
static_assert(offsetof(WB_EncountScene_C_SetAlpha, Alpha) == 0x000000, "Member 'WB_EncountScene_C_SetAlpha::Alpha' has a wrong offset!");

// Function WB_EncountScene.WB_EncountScene_C.UpdateBlur
// 0x0010 (0x0010 - 0x0000)
struct WB_EncountScene_C_UpdateBlur final
{
public:
	float                                         Stride;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Amount;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CenterX;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CenterY;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_EncountScene_C_UpdateBlur) == 0x000004, "Wrong alignment on WB_EncountScene_C_UpdateBlur");
static_assert(sizeof(WB_EncountScene_C_UpdateBlur) == 0x000010, "Wrong size on WB_EncountScene_C_UpdateBlur");
static_assert(offsetof(WB_EncountScene_C_UpdateBlur, Stride) == 0x000000, "Member 'WB_EncountScene_C_UpdateBlur::Stride' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_UpdateBlur, Amount) == 0x000004, "Member 'WB_EncountScene_C_UpdateBlur::Amount' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_UpdateBlur, CenterX) == 0x000008, "Member 'WB_EncountScene_C_UpdateBlur::CenterX' has a wrong offset!");
static_assert(offsetof(WB_EncountScene_C_UpdateBlur, CenterY) == 0x00000C, "Member 'WB_EncountScene_C_UpdateBlur::CenterY' has a wrong offset!");

}

