#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaUpliftingLightComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.ExecuteUbergraph_CharaUpliftingLightComponent
// 0x0020 (0x0020 - 0x0000)
struct CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent) == 0x000004, "Wrong alignment on CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent");
static_assert(sizeof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent) == 0x000020, "Wrong size on CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, EntryPoint) == 0x000000, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000018, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent, CallFunc_FMin_ReturnValue) == 0x00001C, "Member 'CharaUpliftingLightComponent_C_ExecuteUbergraph_CharaUpliftingLightComponent::CallFunc_FMin_ReturnValue' has a wrong offset!");

// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct CharaUpliftingLightComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaUpliftingLightComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on CharaUpliftingLightComponent_C_ReceiveTick");
static_assert(sizeof(CharaUpliftingLightComponent_C_ReceiveTick) == 0x000004, "Wrong size on CharaUpliftingLightComponent_C_ReceiveTick");
static_assert(offsetof(CharaUpliftingLightComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'CharaUpliftingLightComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.CalcLightColor
// 0x0040 (0x0040 - 0x0000)
struct CharaUpliftingLightComponent_C_CalcLightColor final
{
public:
	float                                         Position;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      ColorCurve;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_Time;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaUpliftingLightComponent_C_CalcLightColor) == 0x000008, "Wrong alignment on CharaUpliftingLightComponent_C_CalcLightColor");
static_assert(sizeof(CharaUpliftingLightComponent_C_CalcLightColor) == 0x000040, "Wrong size on CharaUpliftingLightComponent_C_CalcLightColor");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, Position) == 0x000000, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::Position' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, ColorCurve) == 0x000008, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::ColorCurve' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, Lo_Time) == 0x000010, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::Lo_Time' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_GetTimeRange_MinTime) == 0x000014, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_GetTimeRange_MaxTime) == 0x000018, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_FTrunc_ReturnValue) == 0x000024, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000028, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00002C, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightColor, CallFunc_GetLinearColorValue_ReturnValue) == 0x000030, "Member 'CharaUpliftingLightComponent_C_CalcLightColor::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");

// Function CharaUpliftingLightComponent.CharaUpliftingLightComponent_C.CalcLightRadius
// 0x0008 (0x0008 - 0x0000)
struct CharaUpliftingLightComponent_C_CalcLightRadius final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaUpliftingLightComponent_C_CalcLightRadius) == 0x000004, "Wrong alignment on CharaUpliftingLightComponent_C_CalcLightRadius");
static_assert(sizeof(CharaUpliftingLightComponent_C_CalcLightRadius) == 0x000008, "Wrong size on CharaUpliftingLightComponent_C_CalcLightRadius");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightRadius, Rate) == 0x000000, "Member 'CharaUpliftingLightComponent_C_CalcLightRadius::Rate' has a wrong offset!");
static_assert(offsetof(CharaUpliftingLightComponent_C_CalcLightRadius, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'CharaUpliftingLightComponent_C_CalcLightRadius::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

}

