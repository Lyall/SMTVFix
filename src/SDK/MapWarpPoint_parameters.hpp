#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapWarpPoint

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWarpPoint.MapWarpPoint_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct MapWarpPoint_C_UserConstructionScript final
{
public:
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWarpPoint_C_UserConstructionScript) == 0x000008, "Wrong alignment on MapWarpPoint_C_UserConstructionScript");
static_assert(sizeof(MapWarpPoint_C_UserConstructionScript) == 0x000038, "Wrong size on MapWarpPoint_C_UserConstructionScript");
static_assert(offsetof(MapWarpPoint_C_UserConstructionScript, CallFunc_Concat_StrStr_ReturnValue) == 0x000000, "Member 'MapWarpPoint_C_UserConstructionScript::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWarpPoint_C_UserConstructionScript, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'MapWarpPoint_C_UserConstructionScript::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWarpPoint_C_UserConstructionScript, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'MapWarpPoint_C_UserConstructionScript::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function MapWarpPoint.MapWarpPoint_C.GetWarpPointIndex
// 0x0004 (0x0004 - 0x0000)
struct MapWarpPoint_C_GetWarpPointIndex final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWarpPoint_C_GetWarpPointIndex) == 0x000004, "Wrong alignment on MapWarpPoint_C_GetWarpPointIndex");
static_assert(sizeof(MapWarpPoint_C_GetWarpPointIndex) == 0x000004, "Wrong size on MapWarpPoint_C_GetWarpPointIndex");
static_assert(offsetof(MapWarpPoint_C_GetWarpPointIndex, ReturnValue) == 0x000000, "Member 'MapWarpPoint_C_GetWarpPointIndex::ReturnValue' has a wrong offset!");

// Function MapWarpPoint.MapWarpPoint_C.GetWarpPointName
// 0x0020 (0x0020 - 0x0000)
struct MapWarpPoint_C_GetWarpPointName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWarpPoint_C_GetWarpPointName) == 0x000008, "Wrong alignment on MapWarpPoint_C_GetWarpPointName");
static_assert(sizeof(MapWarpPoint_C_GetWarpPointName) == 0x000020, "Wrong size on MapWarpPoint_C_GetWarpPointName");
static_assert(offsetof(MapWarpPoint_C_GetWarpPointName, ReturnValue) == 0x000000, "Member 'MapWarpPoint_C_GetWarpPointName::ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWarpPoint_C_GetWarpPointName, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'MapWarpPoint_C_GetWarpPointName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

