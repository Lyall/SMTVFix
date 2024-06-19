#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CameraDitherComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CameraDitherComponent.BP_CameraDitherComponent_C
// 0x0018 (0x0178 - 0x0160)
class UBP_CameraDitherComponent_C final : public UCameraDitherComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0160(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Dither;                                            // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EDrawDebugTrace                               DitherVisibility;                                  // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DC4[0x2];                                     // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaskStartOffset;                                   // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PresetFadeTime;                                    // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TempDitherState;                                   // 0x0174(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CameraDitherComponent(int32 EntryPoint);
	void ManualTick();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	bool BP_Trace_For_Masking_Objects(TArray<struct FHitResult>* OutHits);
	void Initialize_Dither_Component(class USpringArmComponent* CameraBoom, class UCapsuleComponent* CapsuleComponent, class UCameraComponent* FollowCamera);
	void DebugTraceForDitherArea(bool IsDithering);
	struct FVector BP_CalcHitlocation();
	void SetVariables();
	void Set_Trace_Collisions(float TraceHeight, float TraceWidth, float TraceHeightOffset);
	void ToggleDitherState(bool NewDitherState);
	void TempToggleDitherState(bool ForceDitherOff);
	void Mask_Foliage();
	void TempToggleDitherState_Immediate(bool ForceDitherOff);
	void BPI_TempToggleDitherState_Immediate(bool ForceDitherOff, bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraDitherComponent_C">();
	}
	static class UBP_CameraDitherComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraDitherComponent_C>();
	}
};
static_assert(alignof(UBP_CameraDitherComponent_C) == 0x000008, "Wrong alignment on UBP_CameraDitherComponent_C");
static_assert(sizeof(UBP_CameraDitherComponent_C) == 0x000178, "Wrong size on UBP_CameraDitherComponent_C");
static_assert(offsetof(UBP_CameraDitherComponent_C, UberGraphFrame) == 0x000160, "Member 'UBP_CameraDitherComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CameraDitherComponent_C, Dither) == 0x000168, "Member 'UBP_CameraDitherComponent_C::Dither' has a wrong offset!");
static_assert(offsetof(UBP_CameraDitherComponent_C, DitherVisibility) == 0x000169, "Member 'UBP_CameraDitherComponent_C::DitherVisibility' has a wrong offset!");
static_assert(offsetof(UBP_CameraDitherComponent_C, MaskStartOffset) == 0x00016C, "Member 'UBP_CameraDitherComponent_C::MaskStartOffset' has a wrong offset!");
static_assert(offsetof(UBP_CameraDitherComponent_C, PresetFadeTime) == 0x000170, "Member 'UBP_CameraDitherComponent_C::PresetFadeTime' has a wrong offset!");
static_assert(offsetof(UBP_CameraDitherComponent_C, TempDitherState) == 0x000174, "Member 'UBP_CameraDitherComponent_C::TempDitherState' has a wrong offset!");

}

