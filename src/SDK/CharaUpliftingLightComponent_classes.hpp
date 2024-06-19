#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaUpliftingLightComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaUpliftingLightComponent.CharaUpliftingLightComponent_C
// 0x0020 (0x0380 - 0x0360)
class UCharaUpliftingLightComponent_C final : public UPointLightComponent
{
public:
	uint8                                         Pad_277C[0x8];                                     // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         LivingSec;                                         // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestroyRemainSec;                                  // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReserveDestroy;                                  // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_277D[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DestroyRemainSec_const;                            // 0x0374(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AppearRemainSec_const;                             // 0x0378(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CharaUpliftingLightComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void CalcLightColor(float Position, class UCurveLinearColor* ColorCurve);
	void CalcLightRadius(float Rate);
	void ReserveDestroy();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaUpliftingLightComponent_C">();
	}
	static class UCharaUpliftingLightComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaUpliftingLightComponent_C>();
	}
};
static_assert(alignof(UCharaUpliftingLightComponent_C) == 0x000010, "Wrong alignment on UCharaUpliftingLightComponent_C");
static_assert(sizeof(UCharaUpliftingLightComponent_C) == 0x000380, "Wrong size on UCharaUpliftingLightComponent_C");
static_assert(offsetof(UCharaUpliftingLightComponent_C, UberGraphFrame) == 0x000360, "Member 'UCharaUpliftingLightComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaUpliftingLightComponent_C, LivingSec) == 0x000368, "Member 'UCharaUpliftingLightComponent_C::LivingSec' has a wrong offset!");
static_assert(offsetof(UCharaUpliftingLightComponent_C, DestroyRemainSec) == 0x00036C, "Member 'UCharaUpliftingLightComponent_C::DestroyRemainSec' has a wrong offset!");
static_assert(offsetof(UCharaUpliftingLightComponent_C, IsReserveDestroy) == 0x000370, "Member 'UCharaUpliftingLightComponent_C::IsReserveDestroy' has a wrong offset!");
static_assert(offsetof(UCharaUpliftingLightComponent_C, DestroyRemainSec_const) == 0x000374, "Member 'UCharaUpliftingLightComponent_C::DestroyRemainSec_const' has a wrong offset!");
static_assert(offsetof(UCharaUpliftingLightComponent_C, AppearRemainSec_const) == 0x000378, "Member 'UCharaUpliftingLightComponent_C::AppearRemainSec_const' has a wrong offset!");

}

