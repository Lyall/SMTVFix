#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaSinkHelperComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CharaSinkHelperComponent.CharaSinkHelperComponent_C.Update
// 0x01A0 (0x01A0 - 0x0000)
struct CharaSinkHelperComponent_C_Update final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27DF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCharaSinkTesterInterface_C*>    Array;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class USkinnedMeshComponent*                  Mesh;                                              // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gravity;                                           // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SinkTarget;                                        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SinkMax;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SinkMin;                                           // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTimeCache;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27E0[0xC];                                     // 0x0034(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27E1[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaSinkTesterInterface_C*            CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27E2[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_TestSink_SinkMin;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_TestSink_SinkMax;                         // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27E3[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27E4[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27E5[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27E6[0x2];                                     // 0x017A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27E7[0x2];                                     // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_1;                       // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue_1;                       // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaSinkHelperComponent_C_Update) == 0x000010, "Wrong alignment on CharaSinkHelperComponent_C_Update");
static_assert(sizeof(CharaSinkHelperComponent_C_Update) == 0x0001A0, "Wrong size on CharaSinkHelperComponent_C_Update");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, DeltaTime) == 0x000000, "Member 'CharaSinkHelperComponent_C_Update::DeltaTime' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, Array) == 0x000008, "Member 'CharaSinkHelperComponent_C_Update::Array' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, Mesh) == 0x000018, "Member 'CharaSinkHelperComponent_C_Update::Mesh' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, Gravity) == 0x000020, "Member 'CharaSinkHelperComponent_C_Update::Gravity' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, SinkTarget) == 0x000024, "Member 'CharaSinkHelperComponent_C_Update::SinkTarget' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, SinkMax) == 0x000028, "Member 'CharaSinkHelperComponent_C_Update::SinkMax' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, SinkMin) == 0x00002C, "Member 'CharaSinkHelperComponent_C_Update::SinkMin' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, DeltaTimeCache) == 0x000030, "Member 'CharaSinkHelperComponent_C_Update::DeltaTimeCache' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000040, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_BreakTransform_Location) == 0x000074, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_BreakTransform_Rotation) == 0x000080, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_BreakTransform_Scale) == 0x00008C, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, Temp_int_Array_Index_Variable) == 0x000098, "Member 'CharaSinkHelperComponent_C_Update::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000A8, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Conv_FloatToString_ReturnValue) == 0x0000B0, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x0000C0, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Conv_FloatToString_ReturnValue_2) == 0x0000D0, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Conv_FloatToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_TestSink_SinkMin) == 0x0000E0, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_TestSink_SinkMin' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_TestSink_SinkMax) == 0x0000E4, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_TestSink_SinkMax' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F8, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000108, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_MakeVector_ReturnValue) == 0x000118, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000128, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_TransformLocation_ReturnValue) == 0x000138, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000148, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Less_FloatFloat_ReturnValue) == 0x000158, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00015C, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000160, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Add_FloatFloat_ReturnValue) == 0x000164, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000168, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_FMin_ReturnValue) == 0x00016C, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_SelectFloat_ReturnValue) == 0x000170, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_FInterpTo_ReturnValue) == 0x000174, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000178, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_BooleanOR_ReturnValue) == 0x000179, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, Temp_int_Loop_Counter_Variable) == 0x00017C, "Member 'CharaSinkHelperComponent_C_Update::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_BooleanOR_ReturnValue_1) == 0x000180, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Less_IntInt_ReturnValue) == 0x000181, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_Add_IntInt_ReturnValue) == 0x000184, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_FMax_ReturnValue) == 0x000188, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_FMax_ReturnValue_1) == 0x00018C, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_Update, CallFunc_FMin_ReturnValue_1) == 0x000190, "Member 'CharaSinkHelperComponent_C_Update::CallFunc_FMin_ReturnValue_1' has a wrong offset!");

// Function CharaSinkHelperComponent.CharaSinkHelperComponent_C.SetValue
// 0x000C (0x000C - 0x0000)
struct CharaSinkHelperComponent_C_SetValue final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaSinkHelperComponent_C_SetValue) == 0x000004, "Wrong alignment on CharaSinkHelperComponent_C_SetValue");
static_assert(sizeof(CharaSinkHelperComponent_C_SetValue) == 0x00000C, "Wrong size on CharaSinkHelperComponent_C_SetValue");
static_assert(offsetof(CharaSinkHelperComponent_C_SetValue, Offset) == 0x000000, "Member 'CharaSinkHelperComponent_C_SetValue::Offset' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_SetValue, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'CharaSinkHelperComponent_C_SetValue::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_SetValue, CallFunc_FClamp_ReturnValue) == 0x000008, "Member 'CharaSinkHelperComponent_C_SetValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function CharaSinkHelperComponent.CharaSinkHelperComponent_C.GetValue
// 0x000C (0x000C - 0x0000)
struct CharaSinkHelperComponent_C_GetValue final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaSinkHelperComponent_C_GetValue) == 0x000004, "Wrong alignment on CharaSinkHelperComponent_C_GetValue");
static_assert(sizeof(CharaSinkHelperComponent_C_GetValue) == 0x00000C, "Wrong size on CharaSinkHelperComponent_C_GetValue");
static_assert(offsetof(CharaSinkHelperComponent_C_GetValue, Offset) == 0x000000, "Member 'CharaSinkHelperComponent_C_GetValue::Offset' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_GetValue, ReturnValue) == 0x000004, "Member 'CharaSinkHelperComponent_C_GetValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaSinkHelperComponent_C_GetValue, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'CharaSinkHelperComponent_C_GetValue::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

