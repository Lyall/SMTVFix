#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Ryuketsu

#include "Basic.hpp"

#include "RyuketsuFTList_st_structs.hpp"
#include "Engine_structs.hpp"
#include "E_RyuketsuStep_structs.hpp"
#include "RyuketsuFastL_ST_structs.hpp"
#include "E_RyuketsuTopMenu_structs.hpp"
#include "WB_RyuketsuBase_classes.hpp"
#include "Project_structs.hpp"
#include "E_SaveLoadEndType_structs.hpp"
#include "E_SORTWINDOW_MOUSE_EVENT_TYPE_structs.hpp"
#include "E_TutorialWindow_WidgetState_structs.hpp"
#include "E_SORTWINDOW_ANIM_STATE_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Ryuketsu.WB_Ryuketsu_C
// 0x0248 (0x0578 - 0x0330)
class UWB_Ryuketsu_C final : public UWB_RyuketsuBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USsPlayerWidget*                        SsPlayerWidget_Back;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_RyuketsuStep                                Step;                                              // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEE7[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                FastTravel;                                        // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRyuketsuFastL_ST>              WarpList;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UClass>                   UniteCtrl_Soft;                                    // 0x0360(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 UniteCtrl;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Keylock;                                           // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEE8[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SampleSaveList_C*                   M_SampleWidget;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actormsgctrl;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Savedecidegstatus;                                 // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Dialoggcount;                                      // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           HelpLabel;                                         // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CheckChangeTopMenuLabel;                           // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEE9[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CheckFlagList;                                     // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  CheckFlagListSW;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Temp;                                              // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEEA[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           TopMenuLabel;                                      // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  TopMenuNewIcon;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Topmenucursor;                                     // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CureMakka;                                         // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SmallStep;                                         // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MsgWindowStep;                                     // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MsgWinLabel;                                       // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           MsgChoiceLabels;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  MsgNewIcons;                                       // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MsgExeText;                                        // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEEB[0x3];                                     // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MsgFirstCursor;                                    // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WarpL_Cursor;                                      // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEEC[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_RyuketsuTopMenu>                     TopMenuEnum;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_RyuketsuHealCtrl_C*                 HealActor;                                         // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   M_saveLoadCtrl_Soft;                               // 0x0470(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 M_saveLoadCtrl;                                    // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LargeList;                                         // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEED[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Ryuketsu_FT_C*                      WB_FastTravel;                                     // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FT_MapID;                                          // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FT_AreaID;                                         // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MapLoading;                                        // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEEE[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FT_RyuketsuID;                                     // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_WIDGET_PRIO                                 MsgPrio;                                           // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEEF[0x7];                                     // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_Ryuketsu_Black_C*                   BlackUI;                                           // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_RyuketsuStep                                Step_BeforeTopMenu;                                // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DEF0[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRyuketsuFTList_st>             WarpUIList;                                        // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AnimWait;                                          // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEF1[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AccessIndex;                                       // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           WarpCamera;                                        // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   AreaName;                                          // 0x04F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 UniteClass;                                        // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UniteLoadEnd;                                      // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShopLoadEnd;                                       // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstKeyLock_Up;                                   // 0x051A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstKeyLock_Down;                                 // 0x051B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstKeyLock_Left;                                 // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FirstKeyLock_Right;                                // 0x051D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEF2[0x2];                                     // 0x051E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ShopClass;                                         // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   ShopCtrl_soft;                                     // 0x0528(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                 ShopCtrl;                                          // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FT_SlotListCtrl;                                   // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TransitionFade_ForSave;                            // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DEF3[0x3];                                     // 0x0561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempCursor;                                        // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                  TopMenuGrayOut;                                    // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_Ryuketsu(int32 EntryPoint);
	void TickFromComp(float DeltaSec);
	void Destruct();
	void OnSsEndPlay_(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void SpawnMsgWindow();
	void Construct();
	void TopMenu_Text();
	void _SsEndPlay(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void ChangeTopMenu();
	void Tick_TopMenu();
	void ChangeGarden();
	void ChangeIconView();
	void Tick_Garden();
	void Move_Middle();
	void Move_Large();
	void FT_MouseInputEvent(E_SORTWINDOW_MOUSE_EVENT_TYPE MouseEventType, int32 SelectListIdx, int32 SelectSlotIdx, int32 ListScrollOffset);
	void BlackCurtainEnd_ForGarden(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void FT_BindMouseInputEvent();
	void Decide_Middle();
	void Decide_Large();
	void WarpEnd_ForGarden(class AActor* Actor, EEndPlayReason EndPlayReason);
	void StartBlack(E_WIDGET_PRIO Prio, bool Exec);
	void EndBlack(bool Exec);
	void Evt_HideEnd();
	void ChangeCure();
	void Tick_Cure();
	void ChangeAreaName(const class FText& Text);
	void EvtDis_ReadyEnd_();
	void OnDestroyed_(class AActor* DestroyedActor);
	void Evt_FadeOutEnd_Enter();
	void Evt_FadeOutEnd_Exit();
	void Change_Shop();
	void CallShopEnd(class AActor* DestroyedActor);
	void SsEndPlay_Shop(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void DeleteRyuketsuRadar();
	void ChangeRyuketsuRadar(int32 Param_RyuketsuID);
	void Tick_LoadingAllMap();
	void CloseAllMap();
	void ChangeAllMap(int32 MapId, int32 AreaId);
	void OpenAllMap(int32 MapId, int32 AreaId);
	void OnEndPlay______0(class AActor* Actor, EEndPlayReason EndPlayReason);
	void ChangeSave();
	void Tick_Save();
	void ChangeFastTravel();
	void Warp(int32 ID);
	void Tick_FastTravel();
	void OnEndPlay______1(class AActor* Actor, EEndPlayReason EndPlayReason);
	void SsEndPlay_Jakyo(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Evt_UniteEnd(class AActor* DestroyedActor);
	void Evt_CampRestart();
	void ChangeJakyo();
	void ResetFadeOut();
	void OnLoaded_33B0A96D4E041EE79D784EA0EE23549E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_3278A8BB406E35548F5A58B8ACCDD93F(TSubclassOf<class UObject> Loaded);
	void OnLoaded_5948441A47AFAD0CCB3FC080B8EF8DC8(TSubclassOf<class UObject> Loaded);
	void UpdateTopMenu();
	void InitWarplList();
	class FText GetWarpName(const class FName& Label);
	void DecideRyuketsuName();
	void InitWarpMidListUI(TArray<struct FRyuketsuFastM_ST>& List);
	void InitWarpLargeListUI();
	void MakeTopMenu();
	void GetCurrentCursorRyuketsu(int32* MapId, int32* AreaId, int32* MinimapAreaID, int32* Param_RyuketsuID, class FText* Text);
	void ConvertAreaID_MapToMinimap(int32 MapId, int32 AreaId, int32* Out_AreaID);
	void GetCursorRyuketsu(int32 Param_Cursor, int32* MapId, int32* AreaId, int32* MinimapAreaID, int32* Param_RyuketsuID, class FText* Text);
	void CalcRyuketsuListSelect();
	void GetAccessRyuketsuIndex(int32* Param_Index);
	void GetWarpPointPos(struct FVector* Location, struct FRotator* Rotation);
	void CalcFirstKeyLoct();
	void PadCheck_FTSlotCursor(bool* MovedCursor);
	void CheckMouseWheel_ForFT(bool* Up, bool* Down);
	void UpdateRyuketsuWarpBtnHelp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Ryuketsu_C">();
	}
	static class UWB_Ryuketsu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Ryuketsu_C>();
	}
};
static_assert(alignof(UWB_Ryuketsu_C) == 0x000008, "Wrong alignment on UWB_Ryuketsu_C");
static_assert(sizeof(UWB_Ryuketsu_C) == 0x000578, "Wrong size on UWB_Ryuketsu_C");
static_assert(offsetof(UWB_Ryuketsu_C, UberGraphFrame) == 0x000330, "Member 'UWB_Ryuketsu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, SsPlayerWidget_Back) == 0x000338, "Member 'UWB_Ryuketsu_C::SsPlayerWidget_Back' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Step) == 0x000340, "Member 'UWB_Ryuketsu_C::Step' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FastTravel) == 0x000348, "Member 'UWB_Ryuketsu_C::FastTravel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, WarpList) == 0x000350, "Member 'UWB_Ryuketsu_C::WarpList' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, UniteCtrl_Soft) == 0x000360, "Member 'UWB_Ryuketsu_C::UniteCtrl_Soft' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, UniteCtrl) == 0x000388, "Member 'UWB_Ryuketsu_C::UniteCtrl' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Keylock) == 0x000390, "Member 'UWB_Ryuketsu_C::Keylock' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, M_SampleWidget) == 0x000398, "Member 'UWB_Ryuketsu_C::M_SampleWidget' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Actormsgctrl) == 0x0003A0, "Member 'UWB_Ryuketsu_C::Actormsgctrl' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Savedecidegstatus) == 0x0003A8, "Member 'UWB_Ryuketsu_C::Savedecidegstatus' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Dialoggcount) == 0x0003AC, "Member 'UWB_Ryuketsu_C::Dialoggcount' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, HelpLabel) == 0x0003B0, "Member 'UWB_Ryuketsu_C::HelpLabel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, CheckChangeTopMenuLabel) == 0x0003C0, "Member 'UWB_Ryuketsu_C::CheckChangeTopMenuLabel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, CheckFlagList) == 0x0003C8, "Member 'UWB_Ryuketsu_C::CheckFlagList' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, CheckFlagListSW) == 0x0003D8, "Member 'UWB_Ryuketsu_C::CheckFlagListSW' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Temp) == 0x0003E8, "Member 'UWB_Ryuketsu_C::Temp' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TopMenuLabel) == 0x0003F0, "Member 'UWB_Ryuketsu_C::TopMenuLabel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TopMenuNewIcon) == 0x000400, "Member 'UWB_Ryuketsu_C::TopMenuNewIcon' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Topmenucursor) == 0x000410, "Member 'UWB_Ryuketsu_C::Topmenucursor' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, CureMakka) == 0x000414, "Member 'UWB_Ryuketsu_C::CureMakka' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, SmallStep) == 0x000418, "Member 'UWB_Ryuketsu_C::SmallStep' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgWindowStep) == 0x00041C, "Member 'UWB_Ryuketsu_C::MsgWindowStep' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgWinLabel) == 0x000420, "Member 'UWB_Ryuketsu_C::MsgWinLabel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgChoiceLabels) == 0x000428, "Member 'UWB_Ryuketsu_C::MsgChoiceLabels' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgNewIcons) == 0x000438, "Member 'UWB_Ryuketsu_C::MsgNewIcons' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgExeText) == 0x000448, "Member 'UWB_Ryuketsu_C::MsgExeText' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgFirstCursor) == 0x00044C, "Member 'UWB_Ryuketsu_C::MsgFirstCursor' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, WarpL_Cursor) == 0x000450, "Member 'UWB_Ryuketsu_C::WarpL_Cursor' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TopMenuEnum) == 0x000458, "Member 'UWB_Ryuketsu_C::TopMenuEnum' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, HealActor) == 0x000468, "Member 'UWB_Ryuketsu_C::HealActor' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, M_saveLoadCtrl_Soft) == 0x000470, "Member 'UWB_Ryuketsu_C::M_saveLoadCtrl_Soft' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, M_saveLoadCtrl) == 0x000498, "Member 'UWB_Ryuketsu_C::M_saveLoadCtrl' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, LargeList) == 0x0004A0, "Member 'UWB_Ryuketsu_C::LargeList' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, WB_FastTravel) == 0x0004A8, "Member 'UWB_Ryuketsu_C::WB_FastTravel' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FT_MapID) == 0x0004B0, "Member 'UWB_Ryuketsu_C::FT_MapID' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FT_AreaID) == 0x0004B4, "Member 'UWB_Ryuketsu_C::FT_AreaID' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MapLoading) == 0x0004B8, "Member 'UWB_Ryuketsu_C::MapLoading' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FT_RyuketsuID) == 0x0004BC, "Member 'UWB_Ryuketsu_C::FT_RyuketsuID' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, MsgPrio) == 0x0004C0, "Member 'UWB_Ryuketsu_C::MsgPrio' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, BlackUI) == 0x0004C8, "Member 'UWB_Ryuketsu_C::BlackUI' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, Step_BeforeTopMenu) == 0x0004D0, "Member 'UWB_Ryuketsu_C::Step_BeforeTopMenu' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, WarpUIList) == 0x0004D8, "Member 'UWB_Ryuketsu_C::WarpUIList' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, AnimWait) == 0x0004E8, "Member 'UWB_Ryuketsu_C::AnimWait' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, AccessIndex) == 0x0004EC, "Member 'UWB_Ryuketsu_C::AccessIndex' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, WarpCamera) == 0x0004F0, "Member 'UWB_Ryuketsu_C::WarpCamera' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, AreaName) == 0x0004F8, "Member 'UWB_Ryuketsu_C::AreaName' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, UniteClass) == 0x000510, "Member 'UWB_Ryuketsu_C::UniteClass' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, UniteLoadEnd) == 0x000518, "Member 'UWB_Ryuketsu_C::UniteLoadEnd' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, ShopLoadEnd) == 0x000519, "Member 'UWB_Ryuketsu_C::ShopLoadEnd' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FirstKeyLock_Up) == 0x00051A, "Member 'UWB_Ryuketsu_C::FirstKeyLock_Up' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FirstKeyLock_Down) == 0x00051B, "Member 'UWB_Ryuketsu_C::FirstKeyLock_Down' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FirstKeyLock_Left) == 0x00051C, "Member 'UWB_Ryuketsu_C::FirstKeyLock_Left' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FirstKeyLock_Right) == 0x00051D, "Member 'UWB_Ryuketsu_C::FirstKeyLock_Right' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, ShopClass) == 0x000520, "Member 'UWB_Ryuketsu_C::ShopClass' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, ShopCtrl_soft) == 0x000528, "Member 'UWB_Ryuketsu_C::ShopCtrl_soft' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, ShopCtrl) == 0x000550, "Member 'UWB_Ryuketsu_C::ShopCtrl' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, FT_SlotListCtrl) == 0x000558, "Member 'UWB_Ryuketsu_C::FT_SlotListCtrl' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TransitionFade_ForSave) == 0x000560, "Member 'UWB_Ryuketsu_C::TransitionFade_ForSave' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TempCursor) == 0x000564, "Member 'UWB_Ryuketsu_C::TempCursor' has a wrong offset!");
static_assert(offsetof(UWB_Ryuketsu_C, TopMenuGrayOut) == 0x000568, "Member 'UWB_Ryuketsu_C::TopMenuGrayOut' has a wrong offset!");

}

