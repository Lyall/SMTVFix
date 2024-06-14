#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharaRotateComponent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharaRotateComponent.CharaRotateComponent_C
// 0x0060 (0x0110 - 0x00B0)
class UCharaRotateComponent_C final : public UActorComponent
{
public:
	TArray<TSoftObjectPtr<class UAnimSequenceBase>> TalkMotion;                                        // 0x00B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UAnimSequenceBase>> RightRotate;                                       // 0x00C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UAnimSequenceBase>> LeftRotate;                                        // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UAnimSequenceBase>> IdleMotion;                                        // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UBlendSpace1D>>   RotateBlend;                                       // 0x00F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Index_CharaRotateComponent_C;                      // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Length;                                            // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InvalidAngle;                                      // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTalkMotion(TSoftObjectPtr<class UAnimSequenceBase>* Ret);
	void GetRightRotate(TSoftObjectPtr<class UAnimSequenceBase>* Ret);
	void GetLeftRotate(TSoftObjectPtr<class UAnimSequenceBase>* Ret);
	void GetIdleMotion(TSoftObjectPtr<class UAnimSequenceBase>* Ret);
	void GetRotateBlend(TSoftObjectPtr<class UBlendSpace1D>* Ret);
	void SetIndex(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaRotateComponent_C">();
	}
	static class UCharaRotateComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaRotateComponent_C>();
	}
};
static_assert(alignof(UCharaRotateComponent_C) == 0x000008, "Wrong alignment on UCharaRotateComponent_C");
static_assert(sizeof(UCharaRotateComponent_C) == 0x000110, "Wrong size on UCharaRotateComponent_C");
static_assert(offsetof(UCharaRotateComponent_C, TalkMotion) == 0x0000B0, "Member 'UCharaRotateComponent_C::TalkMotion' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, RightRotate) == 0x0000C0, "Member 'UCharaRotateComponent_C::RightRotate' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, LeftRotate) == 0x0000D0, "Member 'UCharaRotateComponent_C::LeftRotate' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, IdleMotion) == 0x0000E0, "Member 'UCharaRotateComponent_C::IdleMotion' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, RotateBlend) == 0x0000F0, "Member 'UCharaRotateComponent_C::RotateBlend' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, Index_CharaRotateComponent_C) == 0x000100, "Member 'UCharaRotateComponent_C::Index_CharaRotateComponent_C' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, Length) == 0x000104, "Member 'UCharaRotateComponent_C::Length' has a wrong offset!");
static_assert(offsetof(UCharaRotateComponent_C, InvalidAngle) == 0x000108, "Member 'UCharaRotateComponent_C::InvalidAngle' has a wrong offset!");

}
