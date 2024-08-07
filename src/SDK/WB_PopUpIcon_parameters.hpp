#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PopUpIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Project_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_PopUpIcon.WB_PopUpIcon_C.ExecuteUbergraph_WB_PopUpIcon
// 0x0040 (0x0040 - 0x0000)
struct WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon) == 0x000004, "Wrong alignment on WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon");
static_assert(sizeof(WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon) == 0x000040, "Wrong size on WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon");
static_assert(offsetof(WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon, EntryPoint) == 0x000000, "Member 'WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon, K2Node_Event_MyGeometry) == 0x000004, "Member 'WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'WB_PopUpIcon_C_ExecuteUbergraph_WB_PopUpIcon::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function WB_PopUpIcon.WB_PopUpIcon_C.Tick
// 0x003C (0x003C - 0x0000)
struct WB_PopUpIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpIcon_C_Tick) == 0x000004, "Wrong alignment on WB_PopUpIcon_C_Tick");
static_assert(sizeof(WB_PopUpIcon_C_Tick) == 0x00003C, "Wrong size on WB_PopUpIcon_C_Tick");
static_assert(offsetof(WB_PopUpIcon_C_Tick, MyGeometry) == 0x000000, "Member 'WB_PopUpIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_Tick, InDeltaTime) == 0x000038, "Member 'WB_PopUpIcon_C_Tick::InDeltaTime' has a wrong offset!");

// Function WB_PopUpIcon.WB_PopUpIcon_C.CreateData
// 0x0060 (0x0060 - 0x0000)
struct WB_PopUpIcon_C_CreateData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPopUpIconManager*                      CallFunc_GetPopUpIconManager_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPopUpIconEntry>                CallFunc_GetRenderEntries_ReturnValue;             // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_PopUpSs_C*                          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChild_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PopUpSs_C*                          CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpIcon_C_CreateData) == 0x000008, "Wrong alignment on WB_PopUpIcon_C_CreateData");
static_assert(sizeof(WB_PopUpIcon_C_CreateData) == 0x000060, "Wrong size on WB_PopUpIcon_C_CreateData");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_PopUpIcon_C_CreateData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, Temp_int_Variable) == 0x000004, "Member 'WB_PopUpIcon_C_CreateData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_GetPopUpIconManager_ReturnValue) == 0x000010, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_GetPopUpIconManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_GetRenderEntries_ReturnValue) == 0x000018, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_GetRenderEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WB_PopUpIcon_C_CreateData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Array_LastIndex_ReturnValue) == 0x000030, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Array_Get_Item) == 0x000038, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_RemoveChild_ReturnValue) == 0x000040, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_RemoveChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_CreateData, CallFunc_AddChildToOverlay_ReturnValue) == 0x000058, "Member 'WB_PopUpIcon_C_CreateData::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

// Function WB_PopUpIcon.WB_PopUpIcon_C.UpdateImage
// 0x0080 (0x0080 - 0x0000)
struct WB_PopUpIcon_C_UpdateImage final
{
public:
	class UPopUpIconManager*                      CallFunc_GetPopUpIconManager_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPopUpIconEntry>                CallFunc_GetRenderEntries_ReturnValue;             // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_PopUpSs_C*                          CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckIsStarted_IsStarted;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPopUpIconEntry                        CallFunc_Array_Get_Item_1;                         // 0x0034(0x0030)(NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpIcon_C_UpdateImage) == 0x000008, "Wrong alignment on WB_PopUpIcon_C_UpdateImage");
static_assert(sizeof(WB_PopUpIcon_C_UpdateImage) == 0x000080, "Wrong size on WB_PopUpIcon_C_UpdateImage");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_GetPopUpIconManager_ReturnValue) == 0x000000, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_GetPopUpIconManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_GetRenderEntries_ReturnValue) == 0x000008, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_GetRenderEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WB_PopUpIcon_C_UpdateImage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WB_PopUpIcon_C_UpdateImage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_Array_Get_Item) == 0x000028, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_CheckIsStarted_IsStarted) == 0x000030, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_CheckIsStarted_IsStarted' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_Array_Get_Item_1) == 0x000034, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, K2Node_SwitchEnum_CmpSuccess) == 0x000064, "Member 'WB_PopUpIcon_C_UpdateImage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_BreakVector_X) == 0x000068, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_BreakVector_Y) == 0x00006C, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_BreakVector_Z) == 0x000070, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_MakeVector2D_ReturnValue) == 0x000074, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateImage, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'WB_PopUpIcon_C_UpdateImage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WB_PopUpIcon.WB_PopUpIcon_C.UpdateBuffer
// 0x0020 (0x0020 - 0x0000)
struct WB_PopUpIcon_C_UpdateBuffer final
{
public:
	class UPopUpIconManager*                      CallFunc_GetPopUpIconManager_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_PopUpIcon_C_UpdateBuffer) == 0x000008, "Wrong alignment on WB_PopUpIcon_C_UpdateBuffer");
static_assert(sizeof(WB_PopUpIcon_C_UpdateBuffer) == 0x000020, "Wrong size on WB_PopUpIcon_C_UpdateBuffer");
static_assert(offsetof(WB_PopUpIcon_C_UpdateBuffer, CallFunc_GetPopUpIconManager_ReturnValue) == 0x000000, "Member 'WB_PopUpIcon_C_UpdateBuffer::CallFunc_GetPopUpIconManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateBuffer, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'WB_PopUpIcon_C_UpdateBuffer::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_PopUpIcon_C_UpdateBuffer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'WB_PopUpIcon_C_UpdateBuffer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

}

