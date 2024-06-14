#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BattleCharaPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BattleCharaPanel.WB_BattleCharaPanel_C
// 0x01E8 (0x0448 - 0x0260)
class UWB_BattleCharaPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_DevilStock;                            // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Party;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PCamp;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PStatus;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelCharaPanelArea;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelStatusPanelArea;                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EnemyCanvas;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainCanvas;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBattlePosition;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBlackCurtaion;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBMainMember;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBMainPartition;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBStockMember;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBStockPartition;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerDevilStock;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerEnemyCursor;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerEnemyMember;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerEnemyPartition;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerMainCursor;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerMainMember;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerMainPartition;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPosition;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerScroll;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerStockCursor;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerStockMember;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerStockPartition;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StockCanvas;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_10;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_11;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_12;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_13;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_14;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_15;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_00;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_01;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_02;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_03;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_04;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_05;                                  // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_06;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_07;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_08;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_09;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E00;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E01;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E02;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E03;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E04;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_CharaPanel_C*                       WB_CharaPanel_E05;                                 // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon01_C*                    WB_NNumberIcon01Denominator;                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon01_C*                    WB_NNumberIcon01Numerator;                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NSlashIcon01_C*                     WB_NSlashIcon01;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ScrollBar_C*                        WB_ScrollBar;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Stocknumber;                                       // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stockmax;                                          // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offsetcursorinstancerate;                          // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mainoffsetcursorinstanceflag;                      // 0x0424(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Stockoffsetcursorinstanceflag;                     // 0x0425(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Enemyoffsetcursorinstanceflag;                     // 0x0426(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExistScrollBar;                                  // 0x0427(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Localoffsetinstancerate;                           // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_547C[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWB_CharaPanel_C*>               WBCharaPanelArray;                                 // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsInitializeFlag;                                  // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsItScrollBar;                                     // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_547D[0x2];                                     // 0x0442(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scrollvarvalue;                                    // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_BattleCharaPanel(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__SsPlayerScroll_K2Node_ComponentBoundEvent_15_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerEnemyCursor_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerStockCursor_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerMainCursor_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerBStockMember_K2Node_ComponentBoundEvent_11_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerBStockPartition_K2Node_ComponentBoundEvent_10_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerBMainMember_K2Node_ComponentBoundEvent_9_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerBMainPartiyion_K2Node_ComponentBoundEvent_8_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerBlackCurtaion_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerEnemyMember_K2Node_ComponentBoundEvent_6_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerEnemyPartition_K2Node_ComponentBoundEvent_5_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerDevilStock_K2Node_ComponentBoundEvent_4_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerStockMember_K2Node_ComponentBoundEvent_3_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerStockPartition_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerMainMember_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerMainPartition_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__WB_BattleCharaPanel_WB_ScrollBar_K2Node_ComponentBoundEvent_0_OnScrolledByMouse__DelegateSignature(float Position);
	void GetWBCharaPanel(int32 InIndex, class UWB_CharaPanel_C** OutWidget);
	void CharaPanelOn();
	void CharaPanelOff();
	void SetWBCharaPosition(int32 InIndex, const struct FVector2D& InPosition);
	void SetMenuPosition(int32 InMenuType);
	void MemberMenuIn(int32 InMenuType);
	void MemberMenuOut();
	void MemberMenuOutSummon(bool InPanleOff);
	void SetStockNumber(int32 InNumber, int32 InMax);
	void UpdateStockNumber();
	void SetNumberFontColor(int32 InColorType);
	void GetCharaPanelPosition(int32 InType, struct FVector2D* OutVec2);
	void SummonPanelOn();
	void SummonPanelOff();
	void EnemyPanelOn();
	void EnemyPanelOff();
	void MemberMenuOutStatus();
	void SetOffsetCursorAnimation(int32 InOffsetIndex, int32 InAnimationType, bool InInstanceFrameOn);
	void GetOffsetCursorAnimationWidget(int32 InType, class USsPlayerWidget** OutWidget);
	void SetOffsetCursorInstanceRate(int32 InOffsetType);
	void SetOffsetCursorFlag(int32 InOffsetType, bool InSwitch);
	void PanelScrollBarIn();
	void PanelScrollBarOut();
	void SetPanelScrollRate(float InRate);
	void AddWBCharaPanel(int32 InType, class UWB_CharaPanel_C* InWBCharaPanel);
	void GetScrollBarValue(float* OutValue);
	void ResetScrollBarFlag();
	void IsPartyStockArea(bool* OutParam);
	void IsStatusStockArea(bool* OutParam);
	void SetScrollNumber(int32 InMaxNumber, int32 InDispNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BattleCharaPanel_C">();
	}
	static class UWB_BattleCharaPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BattleCharaPanel_C>();
	}
};
static_assert(alignof(UWB_BattleCharaPanel_C) == 0x000008, "Wrong alignment on UWB_BattleCharaPanel_C");
static_assert(sizeof(UWB_BattleCharaPanel_C) == 0x000448, "Wrong size on UWB_BattleCharaPanel_C");
static_assert(offsetof(UWB_BattleCharaPanel_C, UberGraphFrame) == 0x000260, "Member 'UWB_BattleCharaPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanel) == 0x000268, "Member 'UWB_BattleCharaPanel_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanel_DevilStock) == 0x000270, "Member 'UWB_BattleCharaPanel_C::CanvasPanel_DevilStock' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanel_Party) == 0x000278, "Member 'UWB_BattleCharaPanel_C::CanvasPanel_Party' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanel_PCamp) == 0x000280, "Member 'UWB_BattleCharaPanel_C::CanvasPanel_PCamp' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanel_PStatus) == 0x000288, "Member 'UWB_BattleCharaPanel_C::CanvasPanel_PStatus' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanelCharaPanelArea) == 0x000290, "Member 'UWB_BattleCharaPanel_C::CanvasPanelCharaPanelArea' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, CanvasPanelStatusPanelArea) == 0x000298, "Member 'UWB_BattleCharaPanel_C::CanvasPanelStatusPanelArea' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, EnemyCanvas) == 0x0002A0, "Member 'UWB_BattleCharaPanel_C::EnemyCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, MainCanvas) == 0x0002A8, "Member 'UWB_BattleCharaPanel_C::MainCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBattlePosition) == 0x0002B0, "Member 'UWB_BattleCharaPanel_C::SsPlayerBattlePosition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBlackCurtaion) == 0x0002B8, "Member 'UWB_BattleCharaPanel_C::SsPlayerBlackCurtaion' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBMainMember) == 0x0002C0, "Member 'UWB_BattleCharaPanel_C::SsPlayerBMainMember' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBMainPartition) == 0x0002C8, "Member 'UWB_BattleCharaPanel_C::SsPlayerBMainPartition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBStockMember) == 0x0002D0, "Member 'UWB_BattleCharaPanel_C::SsPlayerBStockMember' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerBStockPartition) == 0x0002D8, "Member 'UWB_BattleCharaPanel_C::SsPlayerBStockPartition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerDevilStock) == 0x0002E0, "Member 'UWB_BattleCharaPanel_C::SsPlayerDevilStock' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerEnemyCursor) == 0x0002E8, "Member 'UWB_BattleCharaPanel_C::SsPlayerEnemyCursor' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerEnemyMember) == 0x0002F0, "Member 'UWB_BattleCharaPanel_C::SsPlayerEnemyMember' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerEnemyPartition) == 0x0002F8, "Member 'UWB_BattleCharaPanel_C::SsPlayerEnemyPartition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerMainCursor) == 0x000300, "Member 'UWB_BattleCharaPanel_C::SsPlayerMainCursor' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerMainMember) == 0x000308, "Member 'UWB_BattleCharaPanel_C::SsPlayerMainMember' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerMainPartition) == 0x000310, "Member 'UWB_BattleCharaPanel_C::SsPlayerMainPartition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerPosition) == 0x000318, "Member 'UWB_BattleCharaPanel_C::SsPlayerPosition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerScroll) == 0x000320, "Member 'UWB_BattleCharaPanel_C::SsPlayerScroll' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerStockCursor) == 0x000328, "Member 'UWB_BattleCharaPanel_C::SsPlayerStockCursor' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerStockMember) == 0x000330, "Member 'UWB_BattleCharaPanel_C::SsPlayerStockMember' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, SsPlayerStockPartition) == 0x000338, "Member 'UWB_BattleCharaPanel_C::SsPlayerStockPartition' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, StockCanvas) == 0x000340, "Member 'UWB_BattleCharaPanel_C::StockCanvas' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_10) == 0x000348, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_10' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_11) == 0x000350, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_11' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_12) == 0x000358, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_12' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_13) == 0x000360, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_13' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_14) == 0x000368, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_14' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_15) == 0x000370, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_15' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_00) == 0x000378, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_00' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_01) == 0x000380, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_01' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_02) == 0x000388, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_02' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_03) == 0x000390, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_03' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_04) == 0x000398, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_04' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_05) == 0x0003A0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_05' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_06) == 0x0003A8, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_06' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_07) == 0x0003B0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_07' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_08) == 0x0003B8, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_08' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_09) == 0x0003C0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_09' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E00) == 0x0003C8, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E00' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E01) == 0x0003D0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E01' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E02) == 0x0003D8, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E02' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E03) == 0x0003E0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E03' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E04) == 0x0003E8, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E04' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_CharaPanel_E05) == 0x0003F0, "Member 'UWB_BattleCharaPanel_C::WB_CharaPanel_E05' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_NNumberIcon01Denominator) == 0x0003F8, "Member 'UWB_BattleCharaPanel_C::WB_NNumberIcon01Denominator' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_NNumberIcon01Numerator) == 0x000400, "Member 'UWB_BattleCharaPanel_C::WB_NNumberIcon01Numerator' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_NSlashIcon01) == 0x000408, "Member 'UWB_BattleCharaPanel_C::WB_NSlashIcon01' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WB_ScrollBar) == 0x000410, "Member 'UWB_BattleCharaPanel_C::WB_ScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Stocknumber) == 0x000418, "Member 'UWB_BattleCharaPanel_C::Stocknumber' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Stockmax) == 0x00041C, "Member 'UWB_BattleCharaPanel_C::Stockmax' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Offsetcursorinstancerate) == 0x000420, "Member 'UWB_BattleCharaPanel_C::Offsetcursorinstancerate' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Mainoffsetcursorinstanceflag) == 0x000424, "Member 'UWB_BattleCharaPanel_C::Mainoffsetcursorinstanceflag' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Stockoffsetcursorinstanceflag) == 0x000425, "Member 'UWB_BattleCharaPanel_C::Stockoffsetcursorinstanceflag' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Enemyoffsetcursorinstanceflag) == 0x000426, "Member 'UWB_BattleCharaPanel_C::Enemyoffsetcursorinstanceflag' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, IsExistScrollBar) == 0x000427, "Member 'UWB_BattleCharaPanel_C::IsExistScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Localoffsetinstancerate) == 0x000428, "Member 'UWB_BattleCharaPanel_C::Localoffsetinstancerate' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, WBCharaPanelArray) == 0x000430, "Member 'UWB_BattleCharaPanel_C::WBCharaPanelArray' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, IsInitializeFlag) == 0x000440, "Member 'UWB_BattleCharaPanel_C::IsInitializeFlag' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, IsItScrollBar) == 0x000441, "Member 'UWB_BattleCharaPanel_C::IsItScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_BattleCharaPanel_C, Scrollvarvalue) == 0x000444, "Member 'UWB_BattleCharaPanel_C::Scrollvarvalue' has a wrong offset!");

}

