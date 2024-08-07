#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaStepSmootherComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CharaStepSmootherComponent.CharaStepSmootherComponent_C.Update
// 0x0320 (0x0320 - 0x0000)
struct CharaStepSmootherComponent_C_Update final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkinnedMeshComponent*                  Mesh;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IKEnable;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x0014(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               RotationTarget;                                    // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                NormalAfter;                                       // 0x002C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalBefore;                                      // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterScale;                                    // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTimeCache;                                    // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDrawDebugTrace                               Temp_byte_Variable_1;                              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMinElement_ReturnValue;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotation_ReturnValue;                 // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDrawDebugTrace                               K2Node_Select_Default;                             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0xC];                                      // 0x0194(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;         // 0x01A0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceGround_Hit;                          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x3];                                      // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TraceGround_Location;                     // 0x021C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceGround_Normal;                       // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_TraceGround_Surface;                      // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TransformLocation_ReturnValue_1;          // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceGround_Hit_1;                        // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_245[0x3];                                      // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TraceGround_Location_1;                   // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceGround_Normal_1;                     // 0x0254(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_TraceGround_Surface_1;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0xF];                                      // 0x0261(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_2;         // 0x0270(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_3;                // 0x02A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_3;                // 0x02AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_3;                   // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x02C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue_2;          // 0x02D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeNormalFromTrianglePoints_ReturnValue; // 0x02DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TraceGround_Hit_2;                        // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_TraceGround_Location_2;                   // 0x02EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TraceGround_Normal_2;                     // 0x02F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_TraceGround_Surface_2;                    // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeNormalFromTrianglePoints_ReturnValue_1; // 0x0308(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharaStepSmootherComponent_C_Update) == 0x000010, "Wrong alignment on CharaStepSmootherComponent_C_Update");
static_assert(sizeof(CharaStepSmootherComponent_C_Update) == 0x000320, "Wrong size on CharaStepSmootherComponent_C_Update");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, DeltaTime) == 0x000000, "Member 'CharaStepSmootherComponent_C_Update::DeltaTime' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, Mesh) == 0x000008, "Member 'CharaStepSmootherComponent_C_Update::Mesh' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, IKEnable) == 0x000010, "Member 'CharaStepSmootherComponent_C_Update::IKEnable' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, Rotation) == 0x000014, "Member 'CharaStepSmootherComponent_C_Update::Rotation' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, RotationTarget) == 0x000020, "Member 'CharaStepSmootherComponent_C_Update::RotationTarget' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, NormalAfter) == 0x00002C, "Member 'CharaStepSmootherComponent_C_Update::NormalAfter' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, NormalBefore) == 0x000038, "Member 'CharaStepSmootherComponent_C_Update::NormalBefore' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CharacterScale) == 0x000044, "Member 'CharaStepSmootherComponent_C_Update::CharacterScale' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, DeltaTimeCache) == 0x000048, "Member 'CharaStepSmootherComponent_C_Update::DeltaTimeCache' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, Temp_byte_Variable) == 0x00004C, "Member 'CharaStepSmootherComponent_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000050, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Location) == 0x000080, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Rotation) == 0x00008C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, Temp_byte_Variable_1) == 0x0000A4, "Member 'CharaStepSmootherComponent_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_GetMinElement_ReturnValue) == 0x0000A8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_GetMinElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x0000AC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000C4, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000DC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, Temp_bool_Variable) == 0x0000E8, "Member 'CharaStepSmootherComponent_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeRotation_ReturnValue) == 0x0000EC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, K2Node_Select_Default) == 0x0000F8, "Member 'CharaStepSmootherComponent_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_SelectFloat_ReturnValue) == 0x0000FC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_RInterpTo_ReturnValue) == 0x000100, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00010C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeVector_ReturnValue) == 0x000110, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeVector_ReturnValue_1) == 0x00011C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeVector_ReturnValue_2) == 0x000128, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000134, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000138, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_GetSocketTransform_ReturnValue) == 0x000140, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Location_1) == 0x000170, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Rotation_1) == 0x00017C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Scale_1) == 0x000188, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_GetSocketTransform_ReturnValue_1) == 0x0001A0, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0001D0, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Location_2) == 0x0001DC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Rotation_2) == 0x0001E8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Scale_2) == 0x0001F4, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TransformLocation_ReturnValue) == 0x000200, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue_3) == 0x00020C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Hit) == 0x000218, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Hit' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Location) == 0x00021C, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Location' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Normal) == 0x000228, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Normal' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Surface) == 0x000234, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Surface' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TransformLocation_ReturnValue_1) == 0x000238, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TransformLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Hit_1) == 0x000244, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Hit_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Location_1) == 0x000248, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Location_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Normal_1) == 0x000254, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Normal_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Surface_1) == 0x000260, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Surface_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_GetSocketTransform_ReturnValue_2) == 0x000270, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_GetSocketTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Location_3) == 0x0002A0, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Location_3' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Rotation_3) == 0x0002AC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Rotation_3' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_BreakTransform_Scale_3) == 0x0002B8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_BreakTransform_Scale_3' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_Add_VectorVector_ReturnValue_4) == 0x0002C4, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TransformLocation_ReturnValue_2) == 0x0002D0, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TransformLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeNormalFromTrianglePoints_ReturnValue) == 0x0002DC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeNormalFromTrianglePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Hit_2) == 0x0002E8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Hit_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Location_2) == 0x0002EC, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Location_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Normal_2) == 0x0002F8, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Normal_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_TraceGround_Surface_2) == 0x000304, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_TraceGround_Surface_2' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_Update, CallFunc_MakeNormalFromTrianglePoints_ReturnValue_1) == 0x000308, "Member 'CharaStepSmootherComponent_C_Update::CallFunc_MakeNormalFromTrianglePoints_ReturnValue_1' has a wrong offset!");

// Function CharaStepSmootherComponent.CharaStepSmootherComponent_C.MakeRotation
// 0x00E0 (0x00E0 - 0x0000)
struct CharaStepSmootherComponent_C_MakeRotation final
{
public:
	class USkinnedMeshComponent*                  Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalBefore;                                      // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalAfter;                                       // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ReturnValue;                                       // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_InverseTransformDirection_ReturnValue;    // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformDirection_ReturnValue_1;  // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromAtoB_ReturnValue;              // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAtan2_ReturnValue;                     // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DegAtan2_ReturnValue_1;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue;      // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;    // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharaStepSmootherComponent_C_MakeRotation) == 0x000010, "Wrong alignment on CharaStepSmootherComponent_C_MakeRotation");
static_assert(sizeof(CharaStepSmootherComponent_C_MakeRotation) == 0x0000E0, "Wrong size on CharaStepSmootherComponent_C_MakeRotation");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, Mesh) == 0x000000, "Member 'CharaStepSmootherComponent_C_MakeRotation::Mesh' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, NormalBefore) == 0x000008, "Member 'CharaStepSmootherComponent_C_MakeRotation::NormalBefore' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, NormalAfter) == 0x000014, "Member 'CharaStepSmootherComponent_C_MakeRotation::NormalAfter' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, ReturnValue) == 0x000020, "Member 'CharaStepSmootherComponent_C_MakeRotation::ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_InverseTransformDirection_ReturnValue) == 0x000060, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_InverseTransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_InverseTransformDirection_ReturnValue_1) == 0x00006C, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_InverseTransformDirection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_MakeRotFromAtoB_ReturnValue) == 0x000078, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_MakeRotFromAtoB_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000084, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_BreakVector_X) == 0x000090, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_BreakVector_Y) == 0x000094, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_BreakVector_Z) == 0x000098, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_MakeVector2D_ReturnValue) == 0x00009C, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_DegAtan2_ReturnValue) == 0x0000A4, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_DegAtan2_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_VSize2D_ReturnValue) == 0x0000A8, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_FClamp_ReturnValue) == 0x0000AC, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_DegAtan2_ReturnValue_1) == 0x0000B0, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_DegAtan2_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_RotatorFromAxisAndAngle_ReturnValue) == 0x0000B4, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_RotatorFromAxisAndAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_FClamp_ReturnValue_1) == 0x0000C0, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_RotatorFromAxisAndAngle_ReturnValue_1) == 0x0000C4, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_RotatorFromAxisAndAngle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharaStepSmootherComponent_C_MakeRotation, CallFunc_ComposeRotators_ReturnValue) == 0x0000D0, "Member 'CharaStepSmootherComponent_C_MakeRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");

}

