#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Chara_AnimBP

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Chara_AnimBP.BPI_Chara_AnimBP_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Chara_AnimBP_C final : public IInterface
{
public:
	void SetAnimationMode(E_CHARA_ANIMATION_MODE Mode, float BlendTime);
	void SetDefaultAnimation(class UAnimSequenceBase* Animation);
	void SetPoseWeightTable(class UCustomPoseWeightTable* PoseWeightTable);
	void SetMumbleAnimation(class UAnimSequenceBase* Animation);
	void SetMumbleEnable(bool Enable);
	void SetBoneMotionEnable(bool Enable);

	void GetAnimationMode(E_CHARA_ANIMATION_MODE* ModeCurrent, E_CHARA_ANIMATION_MODE* ModePrevious) const;
	class UAnimSequenceBase* GetDefaultAnimation() const;
	class UAnimSequenceBase* GetMumbleAnimation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Chara_AnimBP_C">();
	}
	static class IBPI_Chara_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Chara_AnimBP_C>();
	}
};
static_assert(alignof(IBPI_Chara_AnimBP_C) == 0x000008, "Wrong alignment on IBPI_Chara_AnimBP_C");
static_assert(sizeof(IBPI_Chara_AnimBP_C) == 0x000028, "Wrong size on IBPI_Chara_AnimBP_C");

}

