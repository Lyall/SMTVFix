#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MinimapOnOffList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"


namespace SDK::Params
{

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.ExecuteUbergraph_WB_MinimapOnOffList
// 0x0004 (0x0004 - 0x0000)
struct WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList) == 0x000004, "Wrong alignment on WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList");
static_assert(sizeof(WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList) == 0x000004, "Wrong size on WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList");
static_assert(offsetof(WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList, EntryPoint) == 0x000000, "Member 'WB_MinimapOnOffList_C_ExecuteUbergraph_WB_MinimapOnOffList::EntryPoint' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.CreateData
// 0x0048 (0x0048 - 0x0000)
struct WB_MinimapOnOffList_C_CreateData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E59[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MinimapOnOffEffect_C*               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5A[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5B[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MinimapOnOffEffect_C*               CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_CreateData) == 0x000008, "Wrong alignment on WB_MinimapOnOffList_C_CreateData");
static_assert(sizeof(WB_MinimapOnOffList_C_CreateData) == 0x000048, "Wrong size on WB_MinimapOnOffList_C_CreateData");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_MinimapOnOffList_C_CreateData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, Temp_int_Variable) == 0x000004, "Member 'WB_MinimapOnOffList_C_CreateData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WB_MinimapOnOffList_C_CreateData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_RemoveChild_ReturnValue) == 0x000029, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Create_ReturnValue) == 0x000030, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_AddChildToOverlay_ReturnValue) == 0x000038, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateData, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'WB_MinimapOnOffList_C_CreateData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.Hide
// 0x0020 (0x0020 - 0x0000)
struct WB_MinimapOnOffList_C_Hide final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_MinimapOnOffEffect_C*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WB_MinimapOnOffList_C_Hide) == 0x000008, "Wrong alignment on WB_MinimapOnOffList_C_Hide");
static_assert(sizeof(WB_MinimapOnOffList_C_Hide) == 0x000020, "Wrong size on WB_MinimapOnOffList_C_Hide");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_MinimapOnOffList_C_Hide::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WB_MinimapOnOffList_C_Hide::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapOnOffList_C_Hide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WB_MinimapOnOffList_C_Hide::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, CallFunc_Array_Get_Item) == 0x000010, "Member 'WB_MinimapOnOffList_C_Hide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_Hide, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WB_MinimapOnOffList_C_Hide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.CreateOnOffEffectIcon
// 0x0058 (0x0058 - 0x0000)
struct WB_MinimapOnOffList_C_CreateOnOffEffectIcon final
{
public:
	E_MINIMAP_POI_ICON                            Icon;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RingBufferRequest_Index;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_MinimapOnOffEffect_C*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5D[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOnOffEffectArray_OutNum;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetOnOffEffectArray_ReturnValue;          // 0x0030(0x0010)(ReferenceParm)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon) == 0x000008, "Wrong alignment on WB_MinimapOnOffList_C_CreateOnOffEffectIcon");
static_assert(sizeof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon) == 0x000058, "Wrong size on WB_MinimapOnOffList_C_CreateOnOffEffectIcon");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, Icon) == 0x000000, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::Icon' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, Temp_int_Variable) == 0x000004, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_RingBufferRequest_Index) == 0x00000C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_RingBufferRequest_Index' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_Array_Get_Item) == 0x000010, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_GetMinimapManager_ReturnValue) == 0x000020, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_GetOnOffEffectArray_OutNum) == 0x000028, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_GetOnOffEffectArray_OutNum' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_GetOnOffEffectArray_ReturnValue) == 0x000030, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_GetOnOffEffectArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_BreakVector_X) == 0x000040, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_BreakVector_Y) == 0x000044, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_BreakVector_Z) == 0x000048, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectIcon, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectIcon::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.RingBufferRequest
// 0x0010 (0x0010 - 0x0000)
struct WB_MinimapOnOffList_C_RingBufferRequest final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E5F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_RingBufferRequest) == 0x000004, "Wrong alignment on WB_MinimapOnOffList_C_RingBufferRequest");
static_assert(sizeof(WB_MinimapOnOffList_C_RingBufferRequest) == 0x000010, "Wrong size on WB_MinimapOnOffList_C_RingBufferRequest");
static_assert(offsetof(WB_MinimapOnOffList_C_RingBufferRequest, Param_Index) == 0x000000, "Member 'WB_MinimapOnOffList_C_RingBufferRequest::Param_Index' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_RingBufferRequest, Temp_int_Variable) == 0x000004, "Member 'WB_MinimapOnOffList_C_RingBufferRequest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_RingBufferRequest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'WB_MinimapOnOffList_C_RingBufferRequest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_RingBufferRequest, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WB_MinimapOnOffList_C_RingBufferRequest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.CreateOnOffEffectAll
// 0x0058 (0x0058 - 0x0000)
struct WB_MinimapOnOffList_C_CreateOnOffEffectAll final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RingBufferRequest_Index;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E60[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MinimapOnOffEffect_C*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E61[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOnOffEffectArrayAll_OutNum;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E62[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetOnOffEffectArrayAll_ReturnValue;       // 0x0030(0x0010)(ReferenceParm)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_CreateOnOffEffectAll) == 0x000008, "Wrong alignment on WB_MinimapOnOffList_C_CreateOnOffEffectAll");
static_assert(sizeof(WB_MinimapOnOffList_C_CreateOnOffEffectAll) == 0x000058, "Wrong size on WB_MinimapOnOffList_C_CreateOnOffEffectAll");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, Temp_int_Variable) == 0x000000, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_RingBufferRequest_Index) == 0x000008, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_RingBufferRequest_Index' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_Array_Get_Item) == 0x000010, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_GetMinimapManager_ReturnValue) == 0x000020, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_GetOnOffEffectArrayAll_OutNum) == 0x000028, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_GetOnOffEffectArrayAll_OutNum' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_GetOnOffEffectArrayAll_ReturnValue) == 0x000030, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_GetOnOffEffectArrayAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_BreakVector_X) == 0x000040, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_BreakVector_Y) == 0x000044, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_BreakVector_Z) == 0x000048, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectAll, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectAll::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function WB_MinimapOnOffList.WB_MinimapOnOffList_C.CreateOnOffEffectRyuketsu
// 0x0058 (0x0058 - 0x0000)
struct WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RingBufferRequest_Index;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E63[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_MinimapOnOffEffect_C*               CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E64[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMinimapManager*                        CallFunc_GetMinimapManager_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetOnOffEffectArrayRyuketsu_OutNum;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E65[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        CallFunc_GetOnOffEffectArrayRyuketsu_ReturnValue;  // 0x0030(0x0010)(ReferenceParm)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu) == 0x000008, "Wrong alignment on WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu");
static_assert(sizeof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu) == 0x000058, "Wrong size on WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, Temp_int_Variable) == 0x000000, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_RingBufferRequest_Index) == 0x000008, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_RingBufferRequest_Index' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_Array_Get_Item) == 0x000010, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_GetMinimapManager_ReturnValue) == 0x000020, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_GetMinimapManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_GetOnOffEffectArrayRyuketsu_OutNum) == 0x000028, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_GetOnOffEffectArrayRyuketsu_OutNum' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_GetOnOffEffectArrayRyuketsu_ReturnValue) == 0x000030, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_GetOnOffEffectArrayRyuketsu_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_BreakVector_X) == 0x000040, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_BreakVector_Y) == 0x000044, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_BreakVector_Z) == 0x000048, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu, CallFunc_MakeVector2D_ReturnValue) == 0x00004C, "Member 'WB_MinimapOnOffList_C_CreateOnOffEffectRyuketsu::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

