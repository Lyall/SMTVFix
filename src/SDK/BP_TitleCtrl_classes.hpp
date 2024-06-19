#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleCtrl

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "E_SaveLoadEndType_structs.hpp"
#include "E_DifficulitySelectEndType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_NewGameType_structs.hpp"
#include "E_TitleEndType_structs.hpp"
#include "E_TitleCtrlStatus_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleCtrl.BP_TitleCtrl_C
// 0x0228 (0x0448 - 0x0220)
class ABP_TitleCtrl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_TitleMainMenu_2_C*                  M_TitleWidget;                                     // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_ExistSaveData;                                   // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_Initialized;                                     // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_IsEnd;                                           // 0x023A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_NewGameType                                 M_NewGameType;                                     // 0x023B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_SaveDataID;                                      // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_Selected;                                        // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A1[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_NoInputTime;                                     // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TitleEndType                                M_EndType;                                         // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25A2[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Const_TimeOutTime;                                 // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_optionCtrl;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_optionCtrl_Soft;                                 // 0x0258(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         M_OptionStatus;                                    // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25A3[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_TitleBack_C*                        M_BGMovie;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_saveLoadCtrl;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_saveLoadCtrl_Soft;                               // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         M_saveLoadStatus;                                  // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TitleCtrlStatus                             M_GStatus;                                         // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TitleCtrlStatus                             M_GStatusNext;                                     // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsStartedFadeOut;                                // 0x02C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A4[0x1];                                     // 0x02C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UIMovieCtrlBase_C*                  M_MovieCtrl;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_SaveLoadCtrlClass;                               // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_OptionCtrlClass;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_TopFadeStep;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25A5[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 M_DifficultySelectCtrlClass;                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 M_DifficultySelectCtrl;                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_DifficultySelectCtrlSoft;                        // 0x02F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         M_DifficultySelectStatus;                          // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GAME_DIFFICULTY                             M_SelectedDifficulty;                              // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25A6[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 M_BenefitSelectCtrlClass;                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_CopyrightCtrlClass;                              // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 M_ConvertCtrlClass;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_MovieWait;                                       // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_WaitSaveHeaderLoad;                              // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A7[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 M_BenefitSelectCtrl;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_BenefitSelectCtrlSoft;                           // 0x0350(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FBenefitData                           M_BenefitData;                                     // 0x0378(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_SelectMax;                                       // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Select;                                          // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_StatusStep;                                      // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_UseTitleTopInChildState;                         // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A8[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 M_CopyrightCtrl;                                   // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_CopyrightCtrl_Soft;                              // 0x03C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 M_ConvertCtrl;                                     // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_ConvertCtrl_Soft;                                // 0x03F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          M_EnableConvertSaveData;                           // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A9[0x7];                                     // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_TITLE_TOP_SELECTION>                 M_TitleTopSelection;                               // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_TITLE_TOP_SELECTION                         M_TitleTopEndType;                                 // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25AA[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_bgmv_camp_Ctrl_C*                   M_ItemMovieCtrl;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TitleCtrl(int32 EntryPoint);
	void Private_LoadHeader();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Private_Initialize();
	void StartCtrl();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_73E854CA4A4A00CCF0276EAD888280E9(TSubclassOf<class UObject> Loaded);
	void OnLoaded_F626ACB2404288A4FBFAD08736779276(TSubclassOf<class UObject> Loaded);
	void OnLoaded_70DE6DFF41872028BF2E12927655FE49(TSubclassOf<class UObject> Loaded);
	void OnLoaded_2D484EA94E42E2485BA45CAB3377E4D6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_74EC4B344489C4AD2B7E65945E9C49A2(TSubclassOf<class UObject> Loaded);
	void OnLoaded_39B295964692A44CB6EAE6A93C776812(TSubclassOf<class UObject> Loaded);
	void TickFunc_TitleTop(float DeltaSeconds);
	void DestroyCreatedObj();
	void UpdateTopInput(int32* ButtonNum, int32* Cursornum, bool* TriggerNum);
	void TickFunc_Initializing();
	void TickStartTitleTop();
	void TickStartContinue();
	void TickStartOption();
	void TickFunc_Continue();
	void TickFunc_Option();
	void EndCtrl(E_TitleEndType In_EndType, E_NewGameType In_NewGameType, int32 In_SaveDataID);
	void SpawnOptionCtrl();
	void SpawnDifficultySelectCtrl();
	void TickStartDifficultySelect();
	void TickFunc_DifficultySelect();
	void SpawnBenefitSelectCtrl();
	void SpawnCopyrightCtrl();
	void SpawnConvertCtrl();
	void HelpWindowExecutionClose();
	void DispFunc_OnHoveredMouse(int32 Param_Index);
	void DispFunc_OnClickedMouse(int32 Param_Index);
	void DecideTopSelection(int32 Param_Index);
	void ChangeTopCursor(int32 Add, int32 Set, bool IsLimitStop);
	void TickFunc_Copyright();
	void TickFunc_SelectEnd();
	void TickFunc_Convert();
	void TickStartOption_Copyright();
	void TickStartOption_SelectEnd();
	void TickStartOption_Convert();
	void OpenDialogYesNo(class UScriptMessageAsset* InScriptMessageAsset, class FName DialogTextLabel, int32 InitCursorPosition);
	void DialogCtrlInput(int32* InputButtonNum, int32* InputCursorNum, bool* IsTriggerInput);
	void DialogCtrlUpdate(bool* SelectedYes, bool* SelectedNo);
	void SpawnItemMovieCtrl();
	void GetNewgameType(E_NewGameType* Type);
	void GetSaveDataIndex(int32* ID);
	void GetEndType(E_TitleEndType* Type);
	void IsEndTitleCtrl(bool* IsEnd);
	void GetDifficulty(E_GAME_DIFFICULTY* Difficulty);
	void GetBenefitData(struct FBenefitData* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleCtrl_C">();
	}
	static class ABP_TitleCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleCtrl_C>();
	}
};
static_assert(alignof(ABP_TitleCtrl_C) == 0x000008, "Wrong alignment on ABP_TitleCtrl_C");
static_assert(sizeof(ABP_TitleCtrl_C) == 0x000448, "Wrong size on ABP_TitleCtrl_C");
static_assert(offsetof(ABP_TitleCtrl_C, UberGraphFrame) == 0x000220, "Member 'ABP_TitleCtrl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, DefaultSceneRoot) == 0x000228, "Member 'ABP_TitleCtrl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_TitleWidget) == 0x000230, "Member 'ABP_TitleCtrl_C::M_TitleWidget' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_ExistSaveData) == 0x000238, "Member 'ABP_TitleCtrl_C::M_ExistSaveData' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_Initialized) == 0x000239, "Member 'ABP_TitleCtrl_C::M_Initialized' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_IsEnd) == 0x00023A, "Member 'ABP_TitleCtrl_C::M_IsEnd' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_NewGameType) == 0x00023B, "Member 'ABP_TitleCtrl_C::M_NewGameType' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_SaveDataID) == 0x00023C, "Member 'ABP_TitleCtrl_C::M_SaveDataID' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_Selected) == 0x000240, "Member 'ABP_TitleCtrl_C::M_Selected' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_NoInputTime) == 0x000244, "Member 'ABP_TitleCtrl_C::M_NoInputTime' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_EndType) == 0x000248, "Member 'ABP_TitleCtrl_C::M_EndType' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, Const_TimeOutTime) == 0x00024C, "Member 'ABP_TitleCtrl_C::Const_TimeOutTime' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_optionCtrl) == 0x000250, "Member 'ABP_TitleCtrl_C::M_optionCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_optionCtrl_Soft) == 0x000258, "Member 'ABP_TitleCtrl_C::M_optionCtrl_Soft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_OptionStatus) == 0x000280, "Member 'ABP_TitleCtrl_C::M_OptionStatus' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_BGMovie) == 0x000288, "Member 'ABP_TitleCtrl_C::M_BGMovie' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_saveLoadCtrl) == 0x000290, "Member 'ABP_TitleCtrl_C::M_saveLoadCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_saveLoadCtrl_Soft) == 0x000298, "Member 'ABP_TitleCtrl_C::M_saveLoadCtrl_Soft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_saveLoadStatus) == 0x0002C0, "Member 'ABP_TitleCtrl_C::M_saveLoadStatus' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_GStatus) == 0x0002C4, "Member 'ABP_TitleCtrl_C::M_GStatus' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_GStatusNext) == 0x0002C5, "Member 'ABP_TitleCtrl_C::M_GStatusNext' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_IsStartedFadeOut) == 0x0002C6, "Member 'ABP_TitleCtrl_C::M_IsStartedFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_MovieCtrl) == 0x0002C8, "Member 'ABP_TitleCtrl_C::M_MovieCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_SaveLoadCtrlClass) == 0x0002D0, "Member 'ABP_TitleCtrl_C::M_SaveLoadCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_OptionCtrlClass) == 0x0002D8, "Member 'ABP_TitleCtrl_C::M_OptionCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_TopFadeStep) == 0x0002E0, "Member 'ABP_TitleCtrl_C::M_TopFadeStep' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_DifficultySelectCtrlClass) == 0x0002E8, "Member 'ABP_TitleCtrl_C::M_DifficultySelectCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_DifficultySelectCtrl) == 0x0002F0, "Member 'ABP_TitleCtrl_C::M_DifficultySelectCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_DifficultySelectCtrlSoft) == 0x0002F8, "Member 'ABP_TitleCtrl_C::M_DifficultySelectCtrlSoft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_DifficultySelectStatus) == 0x000320, "Member 'ABP_TitleCtrl_C::M_DifficultySelectStatus' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_SelectedDifficulty) == 0x000324, "Member 'ABP_TitleCtrl_C::M_SelectedDifficulty' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_BenefitSelectCtrlClass) == 0x000328, "Member 'ABP_TitleCtrl_C::M_BenefitSelectCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_CopyrightCtrlClass) == 0x000330, "Member 'ABP_TitleCtrl_C::M_CopyrightCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_ConvertCtrlClass) == 0x000338, "Member 'ABP_TitleCtrl_C::M_ConvertCtrlClass' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_MovieWait) == 0x000340, "Member 'ABP_TitleCtrl_C::M_MovieWait' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_WaitSaveHeaderLoad) == 0x000341, "Member 'ABP_TitleCtrl_C::M_WaitSaveHeaderLoad' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_BenefitSelectCtrl) == 0x000348, "Member 'ABP_TitleCtrl_C::M_BenefitSelectCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_BenefitSelectCtrlSoft) == 0x000350, "Member 'ABP_TitleCtrl_C::M_BenefitSelectCtrlSoft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_BenefitData) == 0x000378, "Member 'ABP_TitleCtrl_C::M_BenefitData' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_SelectMax) == 0x0003B0, "Member 'ABP_TitleCtrl_C::M_SelectMax' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_Select) == 0x0003B4, "Member 'ABP_TitleCtrl_C::M_Select' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_StatusStep) == 0x0003B8, "Member 'ABP_TitleCtrl_C::M_StatusStep' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_UseTitleTopInChildState) == 0x0003BC, "Member 'ABP_TitleCtrl_C::M_UseTitleTopInChildState' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_CopyrightCtrl) == 0x0003C0, "Member 'ABP_TitleCtrl_C::M_CopyrightCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_CopyrightCtrl_Soft) == 0x0003C8, "Member 'ABP_TitleCtrl_C::M_CopyrightCtrl_Soft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_ConvertCtrl) == 0x0003F0, "Member 'ABP_TitleCtrl_C::M_ConvertCtrl' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_ConvertCtrl_Soft) == 0x0003F8, "Member 'ABP_TitleCtrl_C::M_ConvertCtrl_Soft' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_EnableConvertSaveData) == 0x000420, "Member 'ABP_TitleCtrl_C::M_EnableConvertSaveData' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_TitleTopSelection) == 0x000428, "Member 'ABP_TitleCtrl_C::M_TitleTopSelection' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_TitleTopEndType) == 0x000438, "Member 'ABP_TitleCtrl_C::M_TitleTopEndType' has a wrong offset!");
static_assert(offsetof(ABP_TitleCtrl_C, M_ItemMovieCtrl) == 0x000440, "Member 'ABP_TitleCtrl_C::M_ItemMovieCtrl' has a wrong offset!");

}

