#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AogamiDebris

#include "Basic.hpp"

#include "AogamiDebrisPose_structs.hpp"
#include "E_MapGimmickHideReason_structs.hpp"
#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "E_AogamiDebrisMotion_structs.hpp"
#include "MapEventHit_Type_AAction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AogamiDebris.BP_AogamiDebris_C
// 0x0150 (0x0520 - 0x03D0)
class ABP_AogamiDebris_C final : public AMapEventHit_Type_AAction_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AogamiDebris_C;                  // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBPC_ResidentSound_C*                   BPC_ResidentSound;                                 // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MapGimmickAreaEntry_C*             BPC_MapGimmickAreaEntry;                           // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Gaze_Point;                                        // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        WallCheckPoint;                                    // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_CameraInside__Direction_98AFB4E545839306509AEC9E0254A187; // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9541[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_CameraInside;                             // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_Effect_Alpha_F12756554A77A3D8AD4BEBB05FDA0C96; // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_Effect__Direction_F12756554A77A3D8AD4BEBB05FDA0C96; // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9542[0x3];                                     // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_Effect;                                   // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HideReason;                                        // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gaze;                                              // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9543[0x3];                                     // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ManualMapID;                                       // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseManualMapID;                                    // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9544[0x3];                                     // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_BP_AogamiDebris_C;                           // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TableIndex;                                        // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAogamiDebrisData                      AogamiDebrisData;                                  // 0x0448(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          MapPauseCheck;                                     // 0x045C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_AogamiDebrisMotion                          Motion;                                            // 0x045D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MeshVisible;                                       // 0x045E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9545[0x1];                                     // 0x045F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 SkeltalMesh;                                       // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAogamiDebrisPose                      DataTable;                                         // 0x0468(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       DMIs;                                              // 0x04E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          EffectVisible;                                     // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9546[0x3];                                     // 0x04F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightDefaultIntensity;                             // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Particle;                                          // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnceScaleSetting;                                  // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9547[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAtomCue*                          LoopCue;                                           // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAtomCue*                          GetCue;                                            // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockContinuousAAction;                            // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_AogamiDebris(int32 EntryPoint);
	void BPI_AogamiDebrisCameraInside(const struct FVector& CameraPos);
	void SetEffectVisible(bool Visible, bool Anim);
	void SetMeshVisibility(bool Visible);
	void AfterGetPiece();
	void ReceiveTick(float DeltaSeconds);
	void EventHitAction();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void BPI_HideGimmick(E_MapGimmickHideReason Param_HideReason);
	void BPI_ShowGimmick(E_MapGimmickHideReason Param_HideReason);
	void UpdateActive();
	void EvtDis_Hide_();
	void EvtDis_Show_();
	void ReceiveBeginPlay();
	void OnLoaded_675A044649F76ED9C782B286CB195269(class UObject* Loaded);
	void OnLoaded_2937499042F992BF312A6EBF58C3E12B(class UObject* Loaded);
	void OnLoaded_30E44BF94D36DD156FBDACB35A7C1D51(class UObject* Loaded);
	void OnLoaded_FD85D9D9479AABDFF8A378A10D8634C9(class UObject* Loaded);
	void OnLoaded_645CA1794707F3B15888D8A495502D64(class UObject* Loaded);
	void Timeline_CameraInside__UpdateFunc();
	void Timeline_CameraInside__FinishedFunc();
	void Timeline_Effect__UpdateFunc();
	void Timeline_Effect__FinishedFunc();
	void UserConstructionScript();
	void DebugTextView(bool View);
	void GetSkeletalMesh_Soft(TSoftObjectPtr<class USkeletalMesh>* Mesh);
	void GetAnimation_Soft(TSoftObjectPtr<class UAnimSequence>* Anim);
	void SettingScale();
	void GetDefaultScale(float* Scale);
	void SetMinimapIconTableRow(int32 Param_Index, struct FMinimapIconTableRow* OutRow, bool* NeedToAddMore);

	EGazeTargetType GetGazeTargetType() const;
	struct FVector GetGazeTargetLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AogamiDebris_C">();
	}
	static class ABP_AogamiDebris_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AogamiDebris_C>();
	}
};
static_assert(alignof(ABP_AogamiDebris_C) == 0x000008, "Wrong alignment on ABP_AogamiDebris_C");
static_assert(sizeof(ABP_AogamiDebris_C) == 0x000520, "Wrong size on ABP_AogamiDebris_C");
static_assert(offsetof(ABP_AogamiDebris_C, UberGraphFrame_BP_AogamiDebris_C) == 0x0003D0, "Member 'ABP_AogamiDebris_C::UberGraphFrame_BP_AogamiDebris_C' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, BPC_ResidentSound) == 0x0003D8, "Member 'ABP_AogamiDebris_C::BPC_ResidentSound' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, ParticleSystem) == 0x0003E0, "Member 'ABP_AogamiDebris_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, PointLight) == 0x0003E8, "Member 'ABP_AogamiDebris_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Capsule) == 0x0003F0, "Member 'ABP_AogamiDebris_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, BPC_MapGimmickAreaEntry) == 0x0003F8, "Member 'ABP_AogamiDebris_C::BPC_MapGimmickAreaEntry' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Gaze_Point) == 0x000400, "Member 'ABP_AogamiDebris_C::Gaze_Point' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, WallCheckPoint) == 0x000408, "Member 'ABP_AogamiDebris_C::WallCheckPoint' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Timeline_CameraInside__Direction_98AFB4E545839306509AEC9E0254A187) == 0x000410, "Member 'ABP_AogamiDebris_C::Timeline_CameraInside__Direction_98AFB4E545839306509AEC9E0254A187' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Timeline_CameraInside) == 0x000418, "Member 'ABP_AogamiDebris_C::Timeline_CameraInside' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Timeline_Effect_Alpha_F12756554A77A3D8AD4BEBB05FDA0C96) == 0x000420, "Member 'ABP_AogamiDebris_C::Timeline_Effect_Alpha_F12756554A77A3D8AD4BEBB05FDA0C96' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Timeline_Effect__Direction_F12756554A77A3D8AD4BEBB05FDA0C96) == 0x000424, "Member 'ABP_AogamiDebris_C::Timeline_Effect__Direction_F12756554A77A3D8AD4BEBB05FDA0C96' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Timeline_Effect) == 0x000428, "Member 'ABP_AogamiDebris_C::Timeline_Effect' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, HideReason) == 0x000430, "Member 'ABP_AogamiDebris_C::HideReason' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Gaze) == 0x000434, "Member 'ABP_AogamiDebris_C::Gaze' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, ManualMapID) == 0x000438, "Member 'ABP_AogamiDebris_C::ManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, UseManualMapID) == 0x00043C, "Member 'ABP_AogamiDebris_C::UseManualMapID' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Index_BP_AogamiDebris_C) == 0x000440, "Member 'ABP_AogamiDebris_C::Index_BP_AogamiDebris_C' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, TableIndex) == 0x000444, "Member 'ABP_AogamiDebris_C::TableIndex' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, AogamiDebrisData) == 0x000448, "Member 'ABP_AogamiDebris_C::AogamiDebrisData' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, MapPauseCheck) == 0x00045C, "Member 'ABP_AogamiDebris_C::MapPauseCheck' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Motion) == 0x00045D, "Member 'ABP_AogamiDebris_C::Motion' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, MeshVisible) == 0x00045E, "Member 'ABP_AogamiDebris_C::MeshVisible' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, SkeltalMesh) == 0x000460, "Member 'ABP_AogamiDebris_C::SkeltalMesh' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, DataTable) == 0x000468, "Member 'ABP_AogamiDebris_C::DataTable' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, DMIs) == 0x0004E0, "Member 'ABP_AogamiDebris_C::DMIs' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, EffectVisible) == 0x0004F0, "Member 'ABP_AogamiDebris_C::EffectVisible' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, LightDefaultIntensity) == 0x0004F4, "Member 'ABP_AogamiDebris_C::LightDefaultIntensity' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, Particle) == 0x0004F8, "Member 'ABP_AogamiDebris_C::Particle' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, OnceScaleSetting) == 0x000500, "Member 'ABP_AogamiDebris_C::OnceScaleSetting' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, LoopCue) == 0x000508, "Member 'ABP_AogamiDebris_C::LoopCue' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, GetCue) == 0x000510, "Member 'ABP_AogamiDebris_C::GetCue' has a wrong offset!");
static_assert(offsetof(ABP_AogamiDebris_C, BlockContinuousAAction) == 0x000518, "Member 'ABP_AogamiDebris_C::BlockContinuousAAction' has a wrong offset!");

}

