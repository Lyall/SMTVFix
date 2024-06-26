#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MEC_AreaNameIn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MEC_BaseTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MEC_AreaNameIn.MEC_AreaNameIn_C
// 0x0010 (0x0230 - 0x0220)
class UMEC_AreaNameIn_C final : public UMEC_BaseTask_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MEC_AreaNameIn_C;                   // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   AreaNameLabel;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MEC_AreaNameIn(int32 EntryPoint);
	void CallTask();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MEC_AreaNameIn_C">();
	}
	static class UMEC_AreaNameIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMEC_AreaNameIn_C>();
	}
};
static_assert(alignof(UMEC_AreaNameIn_C) == 0x000010, "Wrong alignment on UMEC_AreaNameIn_C");
static_assert(sizeof(UMEC_AreaNameIn_C) == 0x000230, "Wrong size on UMEC_AreaNameIn_C");
static_assert(offsetof(UMEC_AreaNameIn_C, UberGraphFrame_MEC_AreaNameIn_C) == 0x000218, "Member 'UMEC_AreaNameIn_C::UberGraphFrame_MEC_AreaNameIn_C' has a wrong offset!");
static_assert(offsetof(UMEC_AreaNameIn_C, AreaNameLabel) == 0x000220, "Member 'UMEC_AreaNameIn_C::AreaNameLabel' has a wrong offset!");
static_assert(offsetof(UMEC_AreaNameIn_C, Priority) == 0x000228, "Member 'UMEC_AreaNameIn_C::Priority' has a wrong offset!");

}

