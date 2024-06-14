#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Map3DICon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_Map3DICon.WB_Map3DICon_C.ExecuteUbergraph_WB_Map3DICon
// 0x0040 (0x0040 - 0x0000)
struct WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon) == 0x000004, "Wrong alignment on WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon");
static_assert(sizeof(WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon) == 0x000040, "Wrong size on WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon");
static_assert(offsetof(WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon, EntryPoint) == 0x000000, "Member 'WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_Map3DICon_C_ExecuteUbergraph_WB_Map3DICon::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WB_Map3DICon.WB_Map3DICon_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_Map3DICon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Map3DICon_C_Tick) == 0x000004, "Wrong alignment on WB_Map3DICon_C_Tick");
static_assert(sizeof(WB_Map3DICon_C_Tick) == 0x00003C, "Wrong size on WB_Map3DICon_C_Tick");
static_assert(offsetof(WB_Map3DICon_C_Tick, MyGeometry) == 0x000000, "Member 'WB_Map3DICon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_Map3DICon_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_Map3DICon.WB_Map3DICon_C.CreateData
// 0x0038 (0x0038 - 0x0000)
struct WB_Map3DICon_C_CreateData final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_SpawnObject_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Map3DICon_C_CreateData) == 0x000008, "Wrong alignment on WB_Map3DICon_C_CreateData");
static_assert(sizeof(WB_Map3DICon_C_CreateData) == 0x000038, "Wrong size on WB_Map3DICon_C_CreateData");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'WB_Map3DICon_C_CreateData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, Temp_int_Variable) == 0x000004, "Member 'WB_Map3DICon_C_CreateData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_SpawnObject_ReturnValue) == 0x000008, "Member 'WB_Map3DICon_C_CreateData::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_Array_Get_Item) == 0x000010, "Member 'WB_Map3DICon_C_CreateData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_AddChildToOverlay_ReturnValue) == 0x000018, "Member 'WB_Map3DICon_C_CreateData::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'WB_Map3DICon_C_CreateData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'WB_Map3DICon_C_CreateData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WB_Map3DICon_C_CreateData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_CreateData, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'WB_Map3DICon_C_CreateData::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_Map3DICon.WB_Map3DICon_C.UpdateImage
// 0x0128 (0x0128 - 0x0000)
struct WB_Map3DICon_C_UpdateImage final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D5[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62D7[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D8[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue_1;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMap3DIconEntry>                CallFunc_GetMap3DIconEntries_ReturnValue;          // 0x0058(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMap3DIconEntry                        CallFunc_Array_Get_Item_2;                         // 0x006C(0x0070)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetIconMaterial3D_OutU;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetIconMaterial3D_OutV;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetIconMaterial3D_OutColor;               // 0x00E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D9[0x2];                                     // 0x00FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x00FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x010C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Map3DICon_C_UpdateImage) == 0x000008, "Wrong alignment on WB_Map3DICon_C_UpdateImage");
static_assert(sizeof(WB_Map3DICon_C_UpdateImage) == 0x000128, "Wrong size on WB_Map3DICon_C_UpdateImage");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WB_Map3DICon_C_UpdateImage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'WB_Map3DICon_C_UpdateImage::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WB_Map3DICon_C_UpdateImage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetMinimapManager_ReturnValue) == 0x000018, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, Temp_int_Variable) == 0x000020, "Member 'WB_Map3DICon_C_UpdateImage::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Array_Get_Item) == 0x000028, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000048, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000049, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetMinimapManager_ReturnValue_1) == 0x000050, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetMinimapManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetMap3DIconEntries_ReturnValue) == 0x000058, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetMap3DIconEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Array_Get_Item_2) == 0x00006C, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetIconMaterial3D_OutU) == 0x0000E0, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetIconMaterial3D_OutU' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetIconMaterial3D_OutV) == 0x0000E4, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetIconMaterial3D_OutV' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_GetIconMaterial3D_OutColor) == 0x0000E8, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_GetIconMaterial3D_OutColor' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_BooleanAND_ReturnValue) == 0x0000F9, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, K2Node_MakeStruct_LinearColor) == 0x0000FC, "Member 'WB_Map3DICon_C_UpdateImage::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_MakeVector2D_ReturnValue) == 0x00010C, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_BreakVector_X) == 0x000114, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_BreakVector_Y) == 0x000118, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_BreakVector_Z) == 0x00011C, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateImage, CallFunc_MakeVector2D_ReturnValue_1) == 0x000120, "Member 'WB_Map3DICon_C_UpdateImage::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function WB_Map3DICon.WB_Map3DICon_C.UpdateBuffer
// 0x0020 (0x0020 - 0x0000)
struct WB_Map3DICon_C_UpdateBuffer final
{
public:
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_Map3DICon_C_UpdateBuffer) == 0x000008, "Wrong alignment on WB_Map3DICon_C_UpdateBuffer");
static_assert(sizeof(WB_Map3DICon_C_UpdateBuffer) == 0x000020, "Wrong size on WB_Map3DICon_C_UpdateBuffer");
static_assert(offsetof(WB_Map3DICon_C_UpdateBuffer, CallFunc_GetPlayerPawn_ReturnValue) == 0x000000, "Member 'WB_Map3DICon_C_UpdateBuffer::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateBuffer, CallFunc_GetMinimapManager_ReturnValue) == 0x000008, "Member 'WB_Map3DICon_C_UpdateBuffer::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_Map3DICon_C_UpdateBuffer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WB_Map3DICon_C_UpdateBuffer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}

