#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FootStamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FootStamp.BP_FootStamp_C
// 0x0030 (0x0250 - 0x0220)
class ABP_FootStamp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     DecalMaterial;                                     // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bLeftFoot;                                         // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_24A2[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Lifetime;                                          // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         FadeTime;                                          // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FootStamp(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FootStamp_C">();
	}
	static class ABP_FootStamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FootStamp_C>();
	}
};
static_assert(alignof(ABP_FootStamp_C) == 0x000008, "Wrong alignment on ABP_FootStamp_C");
static_assert(sizeof(ABP_FootStamp_C) == 0x000250, "Wrong size on ABP_FootStamp_C");
static_assert(offsetof(ABP_FootStamp_C, UberGraphFrame) == 0x000220, "Member 'ABP_FootStamp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, Decal) == 0x000228, "Member 'ABP_FootStamp_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, Root) == 0x000230, "Member 'ABP_FootStamp_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, DecalMaterial) == 0x000238, "Member 'ABP_FootStamp_C::DecalMaterial' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, bLeftFoot) == 0x000240, "Member 'ABP_FootStamp_C::bLeftFoot' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, Lifetime) == 0x000244, "Member 'ABP_FootStamp_C::Lifetime' has a wrong offset!");
static_assert(offsetof(ABP_FootStamp_C, FadeTime) == 0x000248, "Member 'ABP_FootStamp_C::FadeTime' has a wrong offset!");

}

