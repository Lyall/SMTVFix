#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_PlayerCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_PlayerCamera.BPL_PlayerCamera_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_PlayerCamera_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetPlayerSpringArm(class UObject* __WorldContext, class UCustomSpringArmComponent** PlayerSpringArmComponent);
	static void SendDiscardPlayerSpringArmLagRequest(class UObject* __WorldContext, bool* Success);
	static void GetPlayerCamera(class UObject* __WorldContext, class UCameraComponent** PlayerCamera);
	static void GetDefaultPlayerCameraFOV(class UObject* __WorldContext, float* DefaultFOV);
	static void Set_View_Target_with_Blend_Curve(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, const class UCurveFloat* BlendCurve, bool bForceOverwrite, class UObject* __WorldContext);
	static void Set_View_Target_with_Blend_Quartanion(class UObject* PlayerController, class AActor* NewViewTarget, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing, bool bForceOverwrite, class UObject* __WorldContext);
	static void ResetPlayerCameraRotation(bool UseDelay, class UObject* __WorldContext);
	static void SetPlayerCameraRotation(bool UseDelay, const struct FRotator& NewRotation, class UObject* __WorldContext);
	static void TryForceUpdatePlayerCameraCache(class UObject* __WorldContext);
	static void ForceImmediateCameraHeightAdjust(class UObject* __WorldContext);
	static void Immediate_Temp_Toggle_Dither_State(bool ForceDitherOff, class UObject* __WorldContext);
	static void ReapplyDitherState(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_PlayerCamera_C">();
	}
	static class UBPL_PlayerCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_PlayerCamera_C>();
	}
};
static_assert(alignof(UBPL_PlayerCamera_C) == 0x000008, "Wrong alignment on UBPL_PlayerCamera_C");
static_assert(sizeof(UBPL_PlayerCamera_C) == 0x000028, "Wrong size on UBPL_PlayerCamera_C");

}

