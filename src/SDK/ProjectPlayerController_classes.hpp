#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProjectPlayerController

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ProjectPlayerController.ProjectPlayerController_C
// 0x0028 (0x06E0 - 0x06B8)
class AProjectPlayerController_C final : public ACustomPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          LCount;                                            // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RCount;                                            // 0x06C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CamReset_R;                                        // 0x06C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CamReset_L;                                        // 0x06C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LRStick;                                           // 0x06C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2958[0x3];                                     // 0x06C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               InitRotation;                                      // 0x06C8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2959[0x4];                                     // 0x06D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            PlayerCameraCV;                                    // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProjectPlayerController(int32 EntryPoint);
	void ReceivePossess(class APawn* PossessedPawn);
	void InpAxisEvt_LookRight_Mouse_K2Node_InputAxisEvent_9(float AxisValue);
	void InpAxisEvt_LookUp_Mouse_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
	void OnChangeIgnoreMoveInput(bool bNewIgnoreInput);
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_0(float AxisValue);
	void InpActEvt_One_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ActPadEvt_Map_ActionJump_K2Node_ActionPadEvent_0(const struct FKey& Key);
	void ActPadEvt_Map_Dash_K2Node_ActionPadEvent_1(const struct FKey& Key);
	void ActPadEvt_Map_Dash_K2Node_ActionPadEvent_2(const struct FKey& Key);
	void ActPadEvt_Map_Dash_K2Node_ActionPadEvent_3(const struct FKey& Key);
	void ActPadEvt_Map_Dash_R_K2Node_ActionPadEvent_4(const struct FKey& Key);
	void ActPadEvt_Map_Dash_R_K2Node_ActionPadEvent_5(const struct FKey& Key);
	void ActPadEvt_Map_Dash_R_K2Node_ActionPadEvent_6(const struct FKey& Key);
	void ActPadEvt_Map_ToggleAutoRun_K2Node_ActionPadEvent_7(const struct FKey& Key);
	void ActPadEvt_Map_CameraReset_K2Node_ActionPadEvent_8(const struct FKey& Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ActPadEvt_Map_ViewDown_K2Node_ActionPadEvent_9(const struct FKey& Key);
	void ActPadEvt_Utl_Cancel_K2Node_ActionPadEvent_10(const struct FKey& Key);
	void ActPadEvt_Map_Attack_K2Node_ActionPadEvent_11(const struct FKey& Key);
	void Look_Up(float Value, bool IsMouse);
	void Look_Right(float Value, bool IsMouse);
	void ClampCameraInput(float Value, float* ClampValue);
	void DebugcameraSpeed_LR(float* Return);
	void DebugcameraSpeed_UD(float* Return);
	void Use_Garden_Tribute(bool* ShouldUse);
	void NewFunction_0(float CalcInput, float* Final);
	void GetInitRotation(struct FRotator* Param_InitRotation);
	void CalcCameraSpeed(E_AXIS_MAPPING_TYPE CameraAxis, float InputSpeed, bool IsMouseInput, float* CameraSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProjectPlayerController_C">();
	}
	static class AProjectPlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProjectPlayerController_C>();
	}
};
static_assert(alignof(AProjectPlayerController_C) == 0x000008, "Wrong alignment on AProjectPlayerController_C");
static_assert(sizeof(AProjectPlayerController_C) == 0x0006E0, "Wrong size on AProjectPlayerController_C");
static_assert(offsetof(AProjectPlayerController_C, UberGraphFrame) == 0x0006B8, "Member 'AProjectPlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, LCount) == 0x0006C0, "Member 'AProjectPlayerController_C::LCount' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, RCount) == 0x0006C1, "Member 'AProjectPlayerController_C::RCount' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, CamReset_R) == 0x0006C2, "Member 'AProjectPlayerController_C::CamReset_R' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, CamReset_L) == 0x0006C3, "Member 'AProjectPlayerController_C::CamReset_L' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, LRStick) == 0x0006C4, "Member 'AProjectPlayerController_C::LRStick' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, InitRotation) == 0x0006C8, "Member 'AProjectPlayerController_C::InitRotation' has a wrong offset!");
static_assert(offsetof(AProjectPlayerController_C, PlayerCameraCV) == 0x0006D8, "Member 'AProjectPlayerController_C::PlayerCameraCV' has a wrong offset!");

}

