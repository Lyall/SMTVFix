#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_ActivityDebug

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_ActivityDebug.BPL_ActivityDebug_C.AddDebugMenuActivityDebug
// 0x0080 (0x0080 - 0x0000)
struct BPL_ActivityDebug_C_AddDebugMenuActivityDebug final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LoadTest;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue; // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_2;           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_DebugMenu_DispName_L10N_Text_3;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1; // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_2; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2; // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_4; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_5; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue;    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1;  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug) == 0x000008, "Wrong alignment on BPL_ActivityDebug_C_AddDebugMenuActivityDebug");
static_assert(sizeof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug) == 0x000080, "Wrong size on BPL_ActivityDebug_C_AddDebugMenuActivityDebug");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, __WorldContext) == 0x000000, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, LoadTest) == 0x000008, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::LoadTest' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue) == 0x000010, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_DebugMenu_DispName_L10N_Text) == 0x000018, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_DebugMenu_DispName_L10N_Text' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_DebugMenu_DispName_L10N_Text_1) == 0x000028, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_DebugMenu_DispName_L10N_Text_1' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue) == 0x000038, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1) == 0x00003C, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_DebugMenu_DispName_L10N_Text_2) == 0x000040, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_DebugMenu_DispName_L10N_Text_2' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_DebugMenu_DispName_L10N_Text_3) == 0x000050, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_DebugMenu_DispName_L10N_Text_3' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1) == 0x000060, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_2) == 0x000064, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeJumpPage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2) == 0x000068, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3) == 0x00006C, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_4) == 0x000070, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_5) == 0x000074, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeFuncObj_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeParam_ReturnValue) == 0x000078, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPL_ActivityDebug_C_AddDebugMenuActivityDebug, CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1) == 0x00007C, "Member 'BPL_ActivityDebug_C_AddDebugMenuActivityDebug::CallFunc_AddDebugMenuItemTypeParam_ReturnValue_1' has a wrong offset!");

}

