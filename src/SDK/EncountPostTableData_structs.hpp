#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EncountPostTableData

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct EncountPostTableData.EncountPostTableData
// 0x0028 (0x0028 - 0x0000)
struct FEncountPostTableData final
{
public:
	E_BTL_ENEMY_FIELD                             Field_3_3D6D0FAD430A74577D1B62998336A435;          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDefault_6_7F20ED6B457A3ADB889490BF7E69A9EF;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA3[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        PostArray_12_8DC948FF4F7784271893519CC26A6240;     // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        AddPostArray_13_555A3EFA4158A44B47B54B86E135FBE8;  // 0x0018(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FEncountPostTableData) == 0x000008, "Wrong alignment on FEncountPostTableData");
static_assert(sizeof(FEncountPostTableData) == 0x000028, "Wrong size on FEncountPostTableData");
static_assert(offsetof(FEncountPostTableData, Field_3_3D6D0FAD430A74577D1B62998336A435) == 0x000000, "Member 'FEncountPostTableData::Field_3_3D6D0FAD430A74577D1B62998336A435' has a wrong offset!");
static_assert(offsetof(FEncountPostTableData, UseDefault_6_7F20ED6B457A3ADB889490BF7E69A9EF) == 0x000001, "Member 'FEncountPostTableData::UseDefault_6_7F20ED6B457A3ADB889490BF7E69A9EF' has a wrong offset!");
static_assert(offsetof(FEncountPostTableData, PostArray_12_8DC948FF4F7784271893519CC26A6240) == 0x000008, "Member 'FEncountPostTableData::PostArray_12_8DC948FF4F7784271893519CC26A6240' has a wrong offset!");
static_assert(offsetof(FEncountPostTableData, AddPostArray_13_555A3EFA4158A44B47B54B86E135FBE8) == 0x000018, "Member 'FEncountPostTableData::AddPostArray_13_555A3EFA4158A44B47B54B86E135FBE8' has a wrong offset!");

}

