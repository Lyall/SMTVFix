#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampCotrol_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampCotrol_2.BP_CampCotrol_2_C
// 0x00B0 (0x02D0 - 0x0220)
class ABP_CampCotrol_2_C final : public ACampControlBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CampOpenFlag;                                      // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B58[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CloseCamp;                                         // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFromFacility;                                    // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B59[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAtomCue*                          M_CampBGM;                                         // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DidUsePillar;                                      // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5A[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   SORCampTopCtrl;                                    // 0x0260(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 ClassCampTopCtrl;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_CampTopCtrl_C>    BPICampTopCtrl;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCampOpened;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5B[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DestroyActorWork;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CampCamera;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DefaultCameraTarget;                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_bgmv_camp_Ctrl_C*                   MovieCtrl;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_StatusEnvironment_C*                Environment;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetIsCampOpen(bool* Param_IsCampOpen);
	bool CheckCampOpenFlag();
	void OnLoaded_20B106F442986DC0ACBDAAA873BBBE3A(TSubclassOf<class UObject> Loaded);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CampClose();
	void ReceiveDestroyed();
	void CampReturnTitle();
	void OpenCamp();
	void PlayerLock(bool IsLock);
	void ExecuteUbergraph_BP_CampCotrol_2(int32 EntryPoint);
	void CloseCamp__DelegateSignature(bool InForceCloseCamp, bool InReturnTitle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampCotrol_2_C">();
	}
	static class ABP_CampCotrol_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampCotrol_2_C>();
	}
};
static_assert(alignof(ABP_CampCotrol_2_C) == 0x000008, "Wrong alignment on ABP_CampCotrol_2_C");
static_assert(sizeof(ABP_CampCotrol_2_C) == 0x0002D0, "Wrong size on ABP_CampCotrol_2_C");
static_assert(offsetof(ABP_CampCotrol_2_C, UberGraphFrame) == 0x000220, "Member 'ABP_CampCotrol_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_CampCotrol_2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, CampOpenFlag) == 0x000230, "Member 'ABP_CampCotrol_2_C::CampOpenFlag' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, CloseCamp) == 0x000238, "Member 'ABP_CampCotrol_2_C::CloseCamp' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, IsFromFacility) == 0x000248, "Member 'ABP_CampCotrol_2_C::IsFromFacility' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, M_CampBGM) == 0x000250, "Member 'ABP_CampCotrol_2_C::M_CampBGM' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, DidUsePillar) == 0x000258, "Member 'ABP_CampCotrol_2_C::DidUsePillar' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, SORCampTopCtrl) == 0x000260, "Member 'ABP_CampCotrol_2_C::SORCampTopCtrl' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, ClassCampTopCtrl) == 0x000288, "Member 'ABP_CampCotrol_2_C::ClassCampTopCtrl' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, BPICampTopCtrl) == 0x000290, "Member 'ABP_CampCotrol_2_C::BPICampTopCtrl' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, IsCampOpened) == 0x0002A0, "Member 'ABP_CampCotrol_2_C::IsCampOpened' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, DestroyActorWork) == 0x0002A8, "Member 'ABP_CampCotrol_2_C::DestroyActorWork' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, CampCamera) == 0x0002B0, "Member 'ABP_CampCotrol_2_C::CampCamera' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, DefaultCameraTarget) == 0x0002B8, "Member 'ABP_CampCotrol_2_C::DefaultCameraTarget' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, MovieCtrl) == 0x0002C0, "Member 'ABP_CampCotrol_2_C::MovieCtrl' has a wrong offset!");
static_assert(offsetof(ABP_CampCotrol_2_C, Environment) == 0x0002C8, "Member 'ABP_CampCotrol_2_C::Environment' has a wrong offset!");

}
