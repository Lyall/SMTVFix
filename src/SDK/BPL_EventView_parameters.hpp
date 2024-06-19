#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_EventView

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPL_EventView.BPL_EventView_C.CheckEventView_ContinueEventFirst
// 0x0178 (0x0178 - 0x0000)
struct BPL_EventView_C_CheckEventView_ContinueEventFirst final
{
public:
	int32                                         MapEventID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B40[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B41[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Lo_Num;                                            // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_Id;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B42[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    Lo_EventViewName;                                  // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B43[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapEventData                          CallFunc_GetMapEventData_ReturnValue;              // 0x0030(0x0098)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B44[0x2];                                     // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B45[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapEventData                          CallFunc_GetMapEventDataFromMapEventId_ReturnValue; // 0x00D8(0x0098)(ConstParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B46[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_EventView_C_CheckEventView_ContinueEventFirst) == 0x000008, "Wrong alignment on BPL_EventView_C_CheckEventView_ContinueEventFirst");
static_assert(sizeof(BPL_EventView_C_CheckEventView_ContinueEventFirst) == 0x000178, "Wrong size on BPL_EventView_C_CheckEventView_ContinueEventFirst");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, MapEventID) == 0x000000, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::MapEventID' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, __WorldContext) == 0x000008, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, Ret) == 0x000010, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::Ret' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, Lo_Num) == 0x000014, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::Lo_Num' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, Lo_Id) == 0x000018, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::Lo_Id' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, Lo_EventViewName) == 0x000020, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::Lo_EventViewName' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, Temp_int_Variable) == 0x000028, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_GetMapEventData_ReturnValue) == 0x000030, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_GetMapEventData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000CD, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D0, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D4, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_GetMapEventDataFromMapEventId_ReturnValue) == 0x0000D8, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_GetMapEventDataFromMapEventId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000170, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_CheckEventView_ContinueEventFirst, CallFunc_Array_Length_ReturnValue) == 0x000174, "Member 'BPL_EventView_C_CheckEventView_ContinueEventFirst::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BPL_EventView.BPL_EventView_C.GetEventViewStartTransform
// 0x0180 (0x0180 - 0x0000)
struct BPL_EventView_C_GetEventViewStartTransform final
{
public:
	int32                                         MapEventID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B47[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Ret;                                               // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B48[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0020(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AMEH_NextEventStart_Walk_C*>     CallFunc_GetAllActorsOfClass_OutActors;            // 0x0060(0x0010)(ReferenceParm)
	int32                                         CallFunc_SearchContinueEventStartId_EventId;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B49[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AMEH_NextEventStart_Walk_C*             CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0110(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4B[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_EventView_C_GetEventViewStartTransform) == 0x000010, "Wrong alignment on BPL_EventView_C_GetEventViewStartTransform");
static_assert(sizeof(BPL_EventView_C_GetEventViewStartTransform) == 0x000180, "Wrong size on BPL_EventView_C_GetEventViewStartTransform");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, MapEventID) == 0x000000, "Member 'BPL_EventView_C_GetEventViewStartTransform::MapEventID' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, __WorldContext) == 0x000008, "Member 'BPL_EventView_C_GetEventViewStartTransform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, Ret) == 0x000010, "Member 'BPL_EventView_C_GetEventViewStartTransform::Ret' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, Transform) == 0x000020, "Member 'BPL_EventView_C_GetEventViewStartTransform::Transform' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_GetAllActorsOfClass_OutActors) == 0x000060, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_SearchContinueEventStartId_EventId) == 0x000070, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_SearchContinueEventStartId_EventId' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Conv_IntToString_ReturnValue) == 0x000078, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000088, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000098, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'BPL_EventView_C_GetEventViewStartTransform::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B0, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C8, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000D8, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000F0, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000100, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_GetTransform_ReturnValue) == 0x000110, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_MakeTransform_ReturnValue) == 0x000140, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, Temp_int_Loop_Counter_Variable) == 0x000170, "Member 'BPL_EventView_C_GetEventViewStartTransform::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Less_IntInt_ReturnValue) == 0x000174, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_GetEventViewStartTransform, CallFunc_Add_IntInt_ReturnValue) == 0x000178, "Member 'BPL_EventView_C_GetEventViewStartTransform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BPL_EventView.BPL_EventView_C.SearchContinueEventStartId
// 0x0188 (0x0188 - 0x0000)
struct BPL_EventView_C_SearchContinueEventStartId final
{
public:
	int32                                         MapEventID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B4C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EventId;                                           // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_CheckEventId;                                   // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 Lo_HitEvent;                                       // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Lo_ListNum;                                        // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B4D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptMessageAsset*                    Lo_EventViewName;                                  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lo_StartEventId;                                   // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4E[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMapEventData                          CallFunc_GetMapEventData_ReturnValue;              // 0x0040(0x0098)(ConstParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4F[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapEventData                          CallFunc_GetMapEventData_ReturnValue_1;            // 0x00E8(0x0098)(ConstParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B50[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_EventView_C_SearchContinueEventStartId) == 0x000008, "Wrong alignment on BPL_EventView_C_SearchContinueEventStartId");
static_assert(sizeof(BPL_EventView_C_SearchContinueEventStartId) == 0x000188, "Wrong size on BPL_EventView_C_SearchContinueEventStartId");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, MapEventID) == 0x000000, "Member 'BPL_EventView_C_SearchContinueEventStartId::MapEventID' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, __WorldContext) == 0x000008, "Member 'BPL_EventView_C_SearchContinueEventStartId::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, EventId) == 0x000010, "Member 'BPL_EventView_C_SearchContinueEventStartId::EventId' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Lo_CheckEventId) == 0x000014, "Member 'BPL_EventView_C_SearchContinueEventStartId::Lo_CheckEventId' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Lo_HitEvent) == 0x000018, "Member 'BPL_EventView_C_SearchContinueEventStartId::Lo_HitEvent' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Lo_ListNum) == 0x000028, "Member 'BPL_EventView_C_SearchContinueEventStartId::Lo_ListNum' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Lo_EventViewName) == 0x000030, "Member 'BPL_EventView_C_SearchContinueEventStartId::Lo_EventViewName' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Lo_StartEventId) == 0x000038, "Member 'BPL_EventView_C_SearchContinueEventStartId::Lo_StartEventId' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_GetMapEventData_ReturnValue) == 0x000040, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_GetMapEventData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, Temp_int_Variable) == 0x0000E0, "Member 'BPL_EventView_C_SearchContinueEventStartId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_Array_Add_ReturnValue) == 0x0000E4, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_GetMapEventData_ReturnValue_1) == 0x0000E8, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_GetMapEventData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000180, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000181, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000182, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_EventView_C_SearchContinueEventStartId, CallFunc_Add_IntInt_ReturnValue) == 0x000184, "Member 'BPL_EventView_C_SearchContinueEventStartId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

