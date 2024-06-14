#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventScriptStruct

#include "Basic.hpp"

#include "E_EVENT_SCRIPT_TYPE_structs.hpp"


namespace SDK
{

// UserDefinedStruct EventScriptStruct.EventScriptStruct
// 0x0070 (0x0070 - 0x0000)
struct FEventScriptStruct final
{
public:
	E_EVENT_SCRIPT_TYPE                           Type_2_76DC6FFD4B73A1CD4B5C9395701D6AB9;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E44[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value_1_5_0BC3D8C4409921DC0D9A7B95626BA423;        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value_2_8_435944694C4D9FAE820B86AB40F4D9CF;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value_3_9_714CE87847C9B13801C687B65D5DD7C2;        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Text_1_12_4A013D9D4136B339E89753B77DE1A7D1;        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Text_2_16_9AD416F3473E2753205FFF9B6C4BFC7C;        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequenceBase>       Motion_21_FC5F453547F1B32DA4255DA1856C075D;        // 0x0020(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundAtomCue>           Sound_22_DAA69C0E49E817CF8AFC208B71946BCB;         // 0x0048(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FEventScriptStruct) == 0x000008, "Wrong alignment on FEventScriptStruct");
static_assert(sizeof(FEventScriptStruct) == 0x000070, "Wrong size on FEventScriptStruct");
static_assert(offsetof(FEventScriptStruct, Type_2_76DC6FFD4B73A1CD4B5C9395701D6AB9) == 0x000000, "Member 'FEventScriptStruct::Type_2_76DC6FFD4B73A1CD4B5C9395701D6AB9' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Value_1_5_0BC3D8C4409921DC0D9A7B95626BA423) == 0x000004, "Member 'FEventScriptStruct::Value_1_5_0BC3D8C4409921DC0D9A7B95626BA423' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Value_2_8_435944694C4D9FAE820B86AB40F4D9CF) == 0x000008, "Member 'FEventScriptStruct::Value_2_8_435944694C4D9FAE820B86AB40F4D9CF' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Value_3_9_714CE87847C9B13801C687B65D5DD7C2) == 0x00000C, "Member 'FEventScriptStruct::Value_3_9_714CE87847C9B13801C687B65D5DD7C2' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Text_1_12_4A013D9D4136B339E89753B77DE1A7D1) == 0x000010, "Member 'FEventScriptStruct::Text_1_12_4A013D9D4136B339E89753B77DE1A7D1' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Text_2_16_9AD416F3473E2753205FFF9B6C4BFC7C) == 0x000018, "Member 'FEventScriptStruct::Text_2_16_9AD416F3473E2753205FFF9B6C4BFC7C' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Motion_21_FC5F453547F1B32DA4255DA1856C075D) == 0x000020, "Member 'FEventScriptStruct::Motion_21_FC5F453547F1B32DA4255DA1856C075D' has a wrong offset!");
static_assert(offsetof(FEventScriptStruct, Sound_22_DAA69C0E49E817CF8AFC208B71946BCB) == 0x000048, "Member 'FEventScriptStruct::Sound_22_DAA69C0E49E817CF8AFC208B71946BCB' has a wrong offset!");

}
