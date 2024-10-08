#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_m061_Facility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LV_m061_Facility.LV_m061_Facility_C
// 0x0010 (0x0238 - 0x0228)
class ALV_m061_Facility_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         AnyMimam;                                          // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMiman;                                          // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LV_m061_Facility(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LV_m061_Facility_C">();
	}
	static class ALV_m061_Facility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALV_m061_Facility_C>();
	}
};
static_assert(alignof(ALV_m061_Facility_C) == 0x000008, "Wrong alignment on ALV_m061_Facility_C");
static_assert(sizeof(ALV_m061_Facility_C) == 0x000238, "Wrong size on ALV_m061_Facility_C");
static_assert(offsetof(ALV_m061_Facility_C, UberGraphFrame) == 0x000228, "Member 'ALV_m061_Facility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALV_m061_Facility_C, AnyMimam) == 0x000230, "Member 'ALV_m061_Facility_C::AnyMimam' has a wrong offset!");
static_assert(offsetof(ALV_m061_Facility_C, MaxMiman) == 0x000234, "Member 'ALV_m061_Facility_C::MaxMiman' has a wrong offset!");

}

