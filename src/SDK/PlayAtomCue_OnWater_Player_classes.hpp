#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayAtomCue_OnWater_Player

#include "Basic.hpp"

#include "AnimNotify_PlayAtomCue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayAtomCue_OnWater_Player.PlayAtomCue_OnWater_Player_C
// 0x0000 (0x0058 - 0x0058)
class UPlayAtomCue_OnWater_Player_C final : public UPlayAtomCue_C
{
public:
	class FString GetNotifyName() const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayAtomCue_OnWater_Player_C">();
	}
	static class UPlayAtomCue_OnWater_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayAtomCue_OnWater_Player_C>();
	}
};
static_assert(alignof(UPlayAtomCue_OnWater_Player_C) == 0x000008, "Wrong alignment on UPlayAtomCue_OnWater_Player_C");
static_assert(sizeof(UPlayAtomCue_OnWater_Player_C) == 0x000058, "Wrong size on UPlayAtomCue_OnWater_Player_C");

}

