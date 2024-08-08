#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OOMAGATOKI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "BattleSkillActionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OOMAGATOKI.OOMAGATOKI_C
// 0x0030 (0x0970 - 0x0940)
class AOOMAGATOKI_C final : public ABattleSkillActionBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_OOMAGATOKI_C;                       // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         PostFadeOut_Weight_AC386B10496D2C9A5D9A02A0422F38C9; // 0x0940(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PostFadeOut__Direction_AC386B10496D2C9A5D9A02A0422F38C9; // 0x0944(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_945[0x3];                                      // 0x0945(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PostFadeOut;                                       // 0x0948(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostFadeIn_Weight_7C6FEA7D4E4D40A87A39CE883D56005B; // 0x0950(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            PostFadeIn__Direction_7C6FEA7D4E4D40A87A39CE883D56005B; // 0x0954(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_955[0x3];                                      // 0x0955(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PostFadeIn;                                        // 0x0958(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CHARA_MOTION_ID                             HeroIdle;                                          // 0x0960(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_961[0x3];                                      // 0x0961(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BlankTask;                                         // 0x0964(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginActorIndex;                                  // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OOMAGATOKI(int32 EntryPoint);
	void Performance(int32 Step);
	void PostFadeOut__UpdateFunc();
	void PostFadeOut__FinishedFunc();
	void PostFadeIn__UpdateFunc();
	void PostFadeIn__FinishedFunc();
	void RecoverFading();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void IntroductionFunc();
	void HitFunc();
	void CounterFunc();
	void DeadFunc();
	void FinishFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OOMAGATOKI_C">();
	}
	static class AOOMAGATOKI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOOMAGATOKI_C>();
	}
};
static_assert(alignof(AOOMAGATOKI_C) == 0x000010, "Wrong alignment on AOOMAGATOKI_C");
static_assert(sizeof(AOOMAGATOKI_C) == 0x000970, "Wrong size on AOOMAGATOKI_C");
static_assert(offsetof(AOOMAGATOKI_C, UberGraphFrame_OOMAGATOKI_C) == 0x000938, "Member 'AOOMAGATOKI_C::UberGraphFrame_OOMAGATOKI_C' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeOut_Weight_AC386B10496D2C9A5D9A02A0422F38C9) == 0x000940, "Member 'AOOMAGATOKI_C::PostFadeOut_Weight_AC386B10496D2C9A5D9A02A0422F38C9' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeOut__Direction_AC386B10496D2C9A5D9A02A0422F38C9) == 0x000944, "Member 'AOOMAGATOKI_C::PostFadeOut__Direction_AC386B10496D2C9A5D9A02A0422F38C9' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeOut) == 0x000948, "Member 'AOOMAGATOKI_C::PostFadeOut' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeIn_Weight_7C6FEA7D4E4D40A87A39CE883D56005B) == 0x000950, "Member 'AOOMAGATOKI_C::PostFadeIn_Weight_7C6FEA7D4E4D40A87A39CE883D56005B' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeIn__Direction_7C6FEA7D4E4D40A87A39CE883D56005B) == 0x000954, "Member 'AOOMAGATOKI_C::PostFadeIn__Direction_7C6FEA7D4E4D40A87A39CE883D56005B' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, PostFadeIn) == 0x000958, "Member 'AOOMAGATOKI_C::PostFadeIn' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, HeroIdle) == 0x000960, "Member 'AOOMAGATOKI_C::HeroIdle' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, BlankTask) == 0x000964, "Member 'AOOMAGATOKI_C::BlankTask' has a wrong offset!");
static_assert(offsetof(AOOMAGATOKI_C, OriginActorIndex) == 0x000968, "Member 'AOOMAGATOKI_C::OriginActorIndex' has a wrong offset!");

}

