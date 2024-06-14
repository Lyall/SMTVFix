#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CharaIK_AnimBP

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CharaIK_AnimBP.BPI_CharaIK_AnimBP_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CharaIK_AnimBP_C final : public IInterface
{
public:
	void SetRootOffsetEnable(bool Enable);
	void SetRootOffset(const struct FVector& Offset, const struct FRotator& DeltaRotation);
	void SetLegIKEnable(bool Enable, bool Immediately);
	void SetLegIKEffector(int32 Param_Index, const struct FVector& Location, const struct FRotator& DeltaRotation);
	void SetLegIKTarget(int32 Param_Index, const struct FVector& Location);
	void SetHeadIKEnable(bool Enable, bool Immediately);
	void SetHeadIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetEyeIKEnable(bool Enable, bool Immediately);
	void SetEyeIKRotation(int32 Param_Index, const struct FRotator& Rotation);
	void SetLookAtEnable(bool Enable);
	void SetBodyIKEnable(bool Enable, bool Immediately);
	void SetFloatingIKPerch(float Alpha);
	void SetPrimaryWorldOffsetBoneTrans(const struct FTransform& Trans, float BlendAlpha);
	void SetEnableBoneTrans(bool IsEnable);
	void SetWorldOffsetBoneTranses(const TArray<struct FTransform>& Transes, const TArray<float>& TransAlphas);
	void SetInvalidLegIK(bool Invalid, int32 Param_Index);
	void SetHeadIKRotationTick(int32 Param_Index, const struct FRotator& Rotation, float DeltaTime);
	void InvalidLookAt(bool Invalid);
	void ChangeTwistAsset(int32 Param_Index);
	void SetHeadIKInterpSpeed(float NewSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CharaIK_AnimBP_C">();
	}
	static class IBPI_CharaIK_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CharaIK_AnimBP_C>();
	}
};
static_assert(alignof(IBPI_CharaIK_AnimBP_C) == 0x000008, "Wrong alignment on IBPI_CharaIK_AnimBP_C");
static_assert(sizeof(IBPI_CharaIK_AnimBP_C) == 0x000028, "Wrong size on IBPI_CharaIK_AnimBP_C");

}

