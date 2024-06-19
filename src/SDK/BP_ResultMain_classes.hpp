#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ResultMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "Project_classes.hpp"
#include "E_ScreenTransitionFadeType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ResultMain.BP_ResultMain_C
// 0x0198 (0x0428 - 0x0290)
class ABP_ResultMain_C final : public AResultMainBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Disp_End;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          M_IsInitializing;                                  // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GetMakkaFlag;                                      // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          GetItemFlag;                                       // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_ResultEnd;                                       // 0x02B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_ExistResultEvent;                                // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D0E[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            M_NewResultStatus;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResultData                            M_ResultData;                                      // 0x02C0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 M_LevelUpEvent;                                    // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_ResultTopCtrl;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_CharaChanger;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_MovieCtrlActor;                                  // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_StatusEnvironment;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ResultTopCtrl_C>  M_ResultTopCtrlBPI;                                // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         M_Status;                                          // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D0F[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_LvUpEvent_C>      M_LvUpEventBPI;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         M_SpawnedActorCnt;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Const_NeedActorNum;                                // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_FromBattle;                                      // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D10[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_StatusCharaChanger_C> M_StatusCharaChanger;                              // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EBgmScene                                     M_BeforeBGMScene;                                  // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D11[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_UIMovieCtrl_C>    M_MovieCtrl;                                       // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_EndFadeWhite;                                    // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D12[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProjectSubLevelStatus>         M_BeforeSubLevel;                                  // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          M_SpawnComplete;                                   // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D13[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 M_CameraActorClass;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_MovieActorClass;                                 // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_ResultTopActorClass;                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_LvUpActorClass;                                  // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_DefaultCameraTarget;                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_EnvChanging;                                     // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsEndStartTransition;                            // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D14[0x6];                                     // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Disp_HideEnv;                                      // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          M_OtherEnvEndWait;                                 // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_WaitBindHideEnv;                                 // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D15[0x6];                                     // 0x0412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Disp_CoveredScreen;                                // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Disp_End__DelegateSignature();
	void Disp_HideEnv__DelegateSignature();
	void Disp_CoveredScreen__DelegateSignature();
	void ExecuteUbergraph_BP_ResultMain(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Private_Init();
	void StartResult();
	void CalcLevelUp();
	void EndAllEvent();
	void Private_SpawnEnvironment();
	void ReceiveTick(float DeltaSeconds);
	void OnLoaded_F460E84B40DD7CBF6B8D519A35AE3A21(TSubclassOf<class UObject> Loaded);
	void OnLoaded_595AAE5C4A6524C0BF1213B778433B44(TSubclassOf<class UObject> Loaded);
	void OnLoaded_287509E74C0EDFCBA0D1BB880CBBC8A7(TSubclassOf<class UObject> Loaded);
	void OnLoaded_FFB235B8426CC5BF55A5F7A71EE8107E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_5A30892A4E57C587DD48E2A1CB80FA41(TSubclassOf<class UObject> Loaded);
	void OnLoaded_27939E0B40F528B0353C0BBDF3120BDF(TSubclassOf<class UObject> Loaded);
	void Initialize(bool FromBattle, bool GetMakkaInResult, bool GetItemInResult, bool EndFadeOutWhite, bool* Success);
	void ClearWidgetAndActor(bool* Finished);
	void DestroyEventDataObject();
	void CloseHelpWindow();
	void IsEndResult(bool* IsEnd);
	void ClearMsgText();
	void IsInitialized(bool* Complete);
	void SpawnComplete(bool* Complete);
	void UpdateWidgetMode();
	void GetIsEndInTransition(bool* IsEnd);
	void SetOtherEnvWait(bool Param_M_OtherEnvEndWait);
	void Hide_Env_Request(const TDelegate<void()>& ____);
	void AfterScreenIsCovered(bool* Dummy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ResultMain_C">();
	}
	static class ABP_ResultMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ResultMain_C>();
	}
};
static_assert(alignof(ABP_ResultMain_C) == 0x000008, "Wrong alignment on ABP_ResultMain_C");
static_assert(sizeof(ABP_ResultMain_C) == 0x000428, "Wrong size on ABP_ResultMain_C");
static_assert(offsetof(ABP_ResultMain_C, UberGraphFrame) == 0x000290, "Member 'ABP_ResultMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_ResultMain_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, Disp_End) == 0x0002A0, "Member 'ABP_ResultMain_C::Disp_End' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_IsInitializing) == 0x0002B0, "Member 'ABP_ResultMain_C::M_IsInitializing' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, GetMakkaFlag) == 0x0002B1, "Member 'ABP_ResultMain_C::GetMakkaFlag' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, GetItemFlag) == 0x0002B2, "Member 'ABP_ResultMain_C::GetItemFlag' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ResultEnd) == 0x0002B3, "Member 'ABP_ResultMain_C::M_ResultEnd' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ExistResultEvent) == 0x0002B4, "Member 'ABP_ResultMain_C::M_ExistResultEvent' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_NewResultStatus) == 0x0002B8, "Member 'ABP_ResultMain_C::M_NewResultStatus' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ResultData) == 0x0002C0, "Member 'ABP_ResultMain_C::M_ResultData' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_LevelUpEvent) == 0x000328, "Member 'ABP_ResultMain_C::M_LevelUpEvent' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ResultTopCtrl) == 0x000330, "Member 'ABP_ResultMain_C::M_ResultTopCtrl' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_CharaChanger) == 0x000338, "Member 'ABP_ResultMain_C::M_CharaChanger' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_MovieCtrlActor) == 0x000340, "Member 'ABP_ResultMain_C::M_MovieCtrlActor' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_StatusEnvironment) == 0x000348, "Member 'ABP_ResultMain_C::M_StatusEnvironment' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ResultTopCtrlBPI) == 0x000350, "Member 'ABP_ResultMain_C::M_ResultTopCtrlBPI' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_Status) == 0x000360, "Member 'ABP_ResultMain_C::M_Status' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_LvUpEventBPI) == 0x000368, "Member 'ABP_ResultMain_C::M_LvUpEventBPI' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_SpawnedActorCnt) == 0x000378, "Member 'ABP_ResultMain_C::M_SpawnedActorCnt' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, Const_NeedActorNum) == 0x00037C, "Member 'ABP_ResultMain_C::Const_NeedActorNum' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_FromBattle) == 0x000380, "Member 'ABP_ResultMain_C::M_FromBattle' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_StatusCharaChanger) == 0x000388, "Member 'ABP_ResultMain_C::M_StatusCharaChanger' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_BeforeBGMScene) == 0x000398, "Member 'ABP_ResultMain_C::M_BeforeBGMScene' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_MovieCtrl) == 0x0003A0, "Member 'ABP_ResultMain_C::M_MovieCtrl' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_EndFadeWhite) == 0x0003B0, "Member 'ABP_ResultMain_C::M_EndFadeWhite' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_BeforeSubLevel) == 0x0003B8, "Member 'ABP_ResultMain_C::M_BeforeSubLevel' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_SpawnComplete) == 0x0003C8, "Member 'ABP_ResultMain_C::M_SpawnComplete' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_CameraActorClass) == 0x0003D0, "Member 'ABP_ResultMain_C::M_CameraActorClass' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_MovieActorClass) == 0x0003D8, "Member 'ABP_ResultMain_C::M_MovieActorClass' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_ResultTopActorClass) == 0x0003E0, "Member 'ABP_ResultMain_C::M_ResultTopActorClass' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_LvUpActorClass) == 0x0003E8, "Member 'ABP_ResultMain_C::M_LvUpActorClass' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_DefaultCameraTarget) == 0x0003F0, "Member 'ABP_ResultMain_C::M_DefaultCameraTarget' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_EnvChanging) == 0x0003F8, "Member 'ABP_ResultMain_C::M_EnvChanging' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_IsEndStartTransition) == 0x0003F9, "Member 'ABP_ResultMain_C::M_IsEndStartTransition' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, Disp_HideEnv) == 0x000400, "Member 'ABP_ResultMain_C::Disp_HideEnv' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_OtherEnvEndWait) == 0x000410, "Member 'ABP_ResultMain_C::M_OtherEnvEndWait' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, M_WaitBindHideEnv) == 0x000411, "Member 'ABP_ResultMain_C::M_WaitBindHideEnv' has a wrong offset!");
static_assert(offsetof(ABP_ResultMain_C, Disp_CoveredScreen) == 0x000418, "Member 'ABP_ResultMain_C::Disp_CoveredScreen' has a wrong offset!");

}

