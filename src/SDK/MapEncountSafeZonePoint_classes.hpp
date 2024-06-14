#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapEncountSafeZonePoint

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MapEncountSafeZonePoint.MapEncountSafeZonePoint_C
// 0x0030 (0x0250 - 0x0220)
class AMapEncountSafeZonePoint_C final : public AActor
{
public:
	class UArrowComponent*                        Arrow2;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PlayerPoint;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         SafeZoneID;                                        // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BattleFIeldID;                                     // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetBattleFieldInfo(struct FTransform* Transform, int32* Param_BattleFIeldID);
	void BPI_GetSafeZoneID(int32* Param_SafeZoneID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEncountSafeZonePoint_C">();
	}
	static class AMapEncountSafeZonePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMapEncountSafeZonePoint_C>();
	}
};
static_assert(alignof(AMapEncountSafeZonePoint_C) == 0x000008, "Wrong alignment on AMapEncountSafeZonePoint_C");
static_assert(sizeof(AMapEncountSafeZonePoint_C) == 0x000250, "Wrong size on AMapEncountSafeZonePoint_C");
static_assert(offsetof(AMapEncountSafeZonePoint_C, Arrow2) == 0x000220, "Member 'AMapEncountSafeZonePoint_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, Arrow1) == 0x000228, "Member 'AMapEncountSafeZonePoint_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, Arrow) == 0x000230, "Member 'AMapEncountSafeZonePoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, PlayerPoint) == 0x000238, "Member 'AMapEncountSafeZonePoint_C::PlayerPoint' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, DefaultSceneRoot) == 0x000240, "Member 'AMapEncountSafeZonePoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, SafeZoneID) == 0x000248, "Member 'AMapEncountSafeZonePoint_C::SafeZoneID' has a wrong offset!");
static_assert(offsetof(AMapEncountSafeZonePoint_C, BattleFIeldID) == 0x00024C, "Member 'AMapEncountSafeZonePoint_C::BattleFIeldID' has a wrong offset!");

}

