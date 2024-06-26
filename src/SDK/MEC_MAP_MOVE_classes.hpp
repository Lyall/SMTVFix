#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_MAP_MOVE

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MEC_BaseTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MEC_MAP_MOVE.MEC_MAP_MOVE_C
// 0x0010 (0x0230 - 0x0220)
class UMEC_MAP_MOVE_C final : public UMEC_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MEC_MAP_MOVE_C;                     // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         MapId;                                             // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaId;                                            // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WarpPoint;                                         // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MEC_MAP_MOVE(int32 EntryPoint);
	void CallTask();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MEC_MAP_MOVE_C">();
	}
	static class UMEC_MAP_MOVE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMEC_MAP_MOVE_C>();
	}
};
static_assert(alignof(UMEC_MAP_MOVE_C) == 0x000010, "Wrong alignment on UMEC_MAP_MOVE_C");
static_assert(sizeof(UMEC_MAP_MOVE_C) == 0x000230, "Wrong size on UMEC_MAP_MOVE_C");
static_assert(offsetof(UMEC_MAP_MOVE_C, UberGraphFrame_MEC_MAP_MOVE_C) == 0x000218, "Member 'UMEC_MAP_MOVE_C::UberGraphFrame_MEC_MAP_MOVE_C' has a wrong offset!");
static_assert(offsetof(UMEC_MAP_MOVE_C, MapId) == 0x000220, "Member 'UMEC_MAP_MOVE_C::MapId' has a wrong offset!");
static_assert(offsetof(UMEC_MAP_MOVE_C, AreaId) == 0x000224, "Member 'UMEC_MAP_MOVE_C::AreaId' has a wrong offset!");
static_assert(offsetof(UMEC_MAP_MOVE_C, WarpPoint) == 0x000228, "Member 'UMEC_MAP_MOVE_C::WarpPoint' has a wrong offset!");

}

