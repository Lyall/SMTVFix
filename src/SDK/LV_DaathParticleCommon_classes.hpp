#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_DaathParticleCommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_PLAYER_MANAGER_TYPE_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LV_DaathParticleCommon.LV_DaathParticleCommon_C
// 0x0048 (0x0270 - 0x0228)
class ALV_DaathParticleCommon_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Size_Near;                                         // 0x0230(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Size_Far;                                          // 0x0240(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Far_Front_Num;                                     // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Far_SideA_Num;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MapOut;                                            // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MapIn;                                             // 0x0255(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55F0[0x2];                                     // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ADAF_CommonSandDust_C*                  Dust;                                              // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Rand;                                              // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LV_DaathParticleCommon(int32 EntryPoint);
	void MapStartBefore______0();
	void ReceiveBeginPlay();
	void VisibleContRole(bool Visible);
	void Dest(class AActor* DestroyedActor);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LV_DaathParticleCommon_C">();
	}
	static class ALV_DaathParticleCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALV_DaathParticleCommon_C>();
	}
};
static_assert(alignof(ALV_DaathParticleCommon_C) == 0x000008, "Wrong alignment on ALV_DaathParticleCommon_C");
static_assert(sizeof(ALV_DaathParticleCommon_C) == 0x000270, "Wrong size on ALV_DaathParticleCommon_C");
static_assert(offsetof(ALV_DaathParticleCommon_C, UberGraphFrame) == 0x000228, "Member 'ALV_DaathParticleCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Size_Near) == 0x000230, "Member 'ALV_DaathParticleCommon_C::Size_Near' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Num) == 0x00023C, "Member 'ALV_DaathParticleCommon_C::Num' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Size_Far) == 0x000240, "Member 'ALV_DaathParticleCommon_C::Size_Far' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Far_Front_Num) == 0x00024C, "Member 'ALV_DaathParticleCommon_C::Far_Front_Num' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Far_SideA_Num) == 0x000250, "Member 'ALV_DaathParticleCommon_C::Far_SideA_Num' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, MapOut) == 0x000254, "Member 'ALV_DaathParticleCommon_C::MapOut' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, MapIn) == 0x000255, "Member 'ALV_DaathParticleCommon_C::MapIn' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Dust) == 0x000258, "Member 'ALV_DaathParticleCommon_C::Dust' has a wrong offset!");
static_assert(offsetof(ALV_DaathParticleCommon_C, Rand) == 0x000260, "Member 'ALV_DaathParticleCommon_C::Rand' has a wrong offset!");

}

