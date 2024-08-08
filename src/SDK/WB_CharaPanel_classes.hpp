#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CharaPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CharaPanel.WB_CharaPanel_C
// 0x0218 (0x0478 - 0x0260)
class UWB_CharaPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5Mouse;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ETC;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Normal;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelCost;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelEffect01;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelEffect02;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelHPMP;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelIcon;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelSIcon01;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelSIcon02;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelSIcon03;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelSIcon07;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelUnknown;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBadStatus01;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCharaIcon;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageGardenTalk;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHPBar;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHPBase;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHPMovebase;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHPMovegauge;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMPBar;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMPBase;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMPMovebase;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageMPMovegauge;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport01;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport02;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport03;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport04;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport05;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport06;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport07_1;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSupport08;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageUnselectablePanel;                            // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageUnselectablePanelNon;                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainCanvas;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerActorPanel;                                // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerAnimation;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBackPanel;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerBadstatusPanel;                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerCDGauge;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerCDPanel;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerDamage;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerETC;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerHPMPGauge;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerLevelUpAndMCircle;                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerNewIcon;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPanelFrame;                                // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerPosition;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerRecovery;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSelectPanel;                               // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSIcon01;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSIcon02;                                   // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSIcon03;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSIcon07;                                   // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerSummoned;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerUnenrolled;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerUnknown;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayerVariousIcon;                               // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlockName;                                     // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlockRace;                                     // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon03D8_C*                  WB_NNumberIcon03D8Cost;                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon03_C*                    WB_NNumberIcon03HP;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon03_C*                    WB_NNumberIcon03Level;                             // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_NNumberIcon03_C*                    WB_NNumberIcon03MP;                                // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Adjustpositionflag;                                // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActorOnFlag;                                     // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSummonOnFlag;                                    // 0x046A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFadeOut;                                         // 0x046B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFadeIn;                                          // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46D[0x3];                                      // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Calcratio;                                         // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnClicked;                                         // 0x0474(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OnHovered;                                         // 0x0475(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_CharaPanel(int32 EntryPoint);
	void Construct();
	void BndEvt__WB_CharaPanel_ButtonS5Mouse_K2Node_ComponentBoundEvent_0_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_CharaPanel_ButtonS5Mouse_K2Node_ComponentBoundEvent_1_ButtonSimpleEventS5__DelegateSignature();
	void BndEvt__SsPlayerLevelUp_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerRecovery_K2Node_ComponentBoundEvent_6_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerDamage_K2Node_ComponentBoundEvent_5_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayerAnimation_K2Node_ComponentBoundEvent_4_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void CharaPanelOn(int32 InType);
	void BadstatusIconOn(int32 InPos, E_BAD_STATUS InBadStatus);
	void BadstatusIconOff(int32 InPos);
	void SupportIconOn(int32 InPos, int32 InParam);
	void SupportIconOff(int32 InPos);
	void SetHPParamDec(float InRatio, float InCalcRatio, int32 InHp, int32 InHPMax);
	void SetPosition(const struct FVector2D& InPos);
	void SetCharaNameText(const class FText& InName);
	void SetRaceNameText(const class FText& InText);
	void SetMPParamDec(float InRatio, float InCalcRatio, int32 InMp, int32 InMPMax);
	void SetCharaTexture(int32 InCharaId, class UTexture* InTextureRef);
	void SetLevel(int32 InLevel);
	void SetLevelFontColor(int32 InType);
	void SetHPFontColor(int32 InType);
	void SetMPFontColor(int32 InType);
	void ActorPanelOn();
	void ActorPanelOff();
	void SetMPParamAdd(float InRatio, float InCalcRatio, int32 InMp, int32 InMPMax);
	void SetReserveMPParamAdd(float InBeforeRatio, float InAfterRatio);
	void SelectPanelOn();
	void SelectPanelOff();
	void BadstatusPanelOn(E_BAD_STATUS InBadStatus);
	void BadstatusPanelOff();
	void SetNameColor(const struct FLinearColor& InColor);
	void CreatePositionData(const struct FVector2D& InVec, float InSizeX, float InSizeY, struct FVector2D* OutVec);
	void GetPositionDataByPartsName(class FName InPartsName, class USsPlayerWidget* InSSData, float InSizeX, float InSizeY, struct FVector2D* OutVec);
	void SetDamageAnimation();
	void SetRecoveryAnimation(int32 InParam, int32 InType);
	void SummonPanelOn();
	void SummonPanelOff();
	void ExistInPartyOn();
	void ExistInPartyOff();
	void InitPosition();
	void CostPanelOn(int32 InCostType, int32 InCost);
	void CostPanelOff();
	void SetPanelFadeIn(int32 InStartTime);
	void SetPanelFadeOut(int32 InStartTime);
	void SetPanelFadeInBySummon();
	void ActorPanelOnNoMove();
	void UnknownPanelOn();
	void UnknownPanelOff();
	void UnenrolledPanelOn();
	void UnenrolledPanelOff();
	void SetLevelUpAnimation(bool Immediate);
	void CloseLevelUpAnimation(bool Immediate);
	void UnSelectablePanelOn();
	void UnSelectablePanelOff();
	void CalcHPMPBarDisp();
	void NewIconOn();
	void NewIconOff();
	void SetHPParamAdd(float InRatio, float InCalcRatio, int32 InHp, int32 InHPMax);
	void SetReserveMPParam(float InBeforeRatio, float InAfterRatio);
	void SetReserveHPParamAdd(float InBeforeRatio, float InAfterRatio);
	void SetPanelOn();
	void SetSummonAnimation();
	void SetBadstatusIcon(int32 InPos, E_BAD_STATUS InBadStatus);
	void SetImageBadStatus(class UImage* InImage, E_BAD_STATUS InBadStatus);
	void ResetBadstatusIcon(int32 InPos);
	void SetSupportIcon(int32 InPos, int32 InSupportIndex);
	void SetImageSupport(class UImage* InImage, int32 InSupportIndex);
	void ResetSupportIcon(int32 InPos);
	void GetImageSupport(int32 InPos, class UImage** OutImage);
	void SetUnknownEnemy(int32 InType);
	void SetEnemyMpPanel(int32 InDegits);
	void SetCostFontColor(int32 InFontColor);
	void ResetRecoveryAnimation();
	void SetHiddenAnimation();
	void GetMainPosition(struct FVector2D* OutVec);
	void IsFinishedFadeOut(bool* OutFinished);
	void ActorPanelOffNoMove();
	void NewIconOnByRate(int32 InFrame);
	void GetNewIconFrame(int32* OutRate);
	void NonePanelOn();
	void NonePanelOff();
	void SetOffsetPosition(const struct FVector2D& InVec);
	void IsFinishedFadeIn(bool* OutFinished);
	void GetSupportIconSSPlayer(int32 InIndex, class USsPlayerWidget** OutSSPlayer);
	void SetSupportIconLoop(int32 InIndex, int32 InTurn);
	void UnSelectablePanelOnOfNon();
	void UnSelectablePanelOffOfNon();
	void SetGaugeAlpha(int32 InType, float InAlpha);
	void CalcAddRatio(float InBefore, float InAfter, float* OutBefore, float* OutAfter);
	void SetImageSize(class UImage* InImage, const struct FVector2D& InScale);
	void SetGaugeAlphaAll(float InAlpha0, float InAlpha1, float InAlpha2, float InAlpha3);
	void GuestTagOn();
	void GuestTagOff();
	void SetProductIcon();
	void ResetProductIcon();
	void ProductIconOn();
	void ProductIconOff();
	void SetBalloonIcon();
	void ResetBalloonIcon();
	void BalloonIconOn();
	void BalloonIconOff();
	void ResetMouseFlag();
	void IsItClicked(bool* OutClicked);
	void IsItHovered(bool* OutHovered);
	void EnableMouseFocus();
	void DisableMouseFocus();
	void Calc_Garden_Talk_Icon(int32 InNkmIndex, bool InPlayer);
	void GetGardenTalkIconUV(E_MINIMAP_POI_ICON InIconType, float* OutU, float* OutV);
	void ResetGardenTalkIcon();
	void CalcTickEvent();

	void IsEndLevelUpAnimation(bool* IsEnd) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CharaPanel_C">();
	}
	static class UWB_CharaPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CharaPanel_C>();
	}
};
static_assert(alignof(UWB_CharaPanel_C) == 0x000008, "Wrong alignment on UWB_CharaPanel_C");
static_assert(sizeof(UWB_CharaPanel_C) == 0x000478, "Wrong size on UWB_CharaPanel_C");
static_assert(offsetof(UWB_CharaPanel_C, UberGraphFrame) == 0x000260, "Member 'UWB_CharaPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ButtonS5Mouse) == 0x000268, "Member 'UWB_CharaPanel_C::ButtonS5Mouse' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanel_ETC) == 0x000270, "Member 'UWB_CharaPanel_C::CanvasPanel_ETC' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanel_Normal) == 0x000278, "Member 'UWB_CharaPanel_C::CanvasPanel_Normal' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelCost) == 0x000280, "Member 'UWB_CharaPanel_C::CanvasPanelCost' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelEffect01) == 0x000288, "Member 'UWB_CharaPanel_C::CanvasPanelEffect01' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelEffect02) == 0x000290, "Member 'UWB_CharaPanel_C::CanvasPanelEffect02' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelHPMP) == 0x000298, "Member 'UWB_CharaPanel_C::CanvasPanelHPMP' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelIcon) == 0x0002A0, "Member 'UWB_CharaPanel_C::CanvasPanelIcon' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelSIcon01) == 0x0002A8, "Member 'UWB_CharaPanel_C::CanvasPanelSIcon01' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelSIcon02) == 0x0002B0, "Member 'UWB_CharaPanel_C::CanvasPanelSIcon02' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelSIcon03) == 0x0002B8, "Member 'UWB_CharaPanel_C::CanvasPanelSIcon03' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelSIcon07) == 0x0002C0, "Member 'UWB_CharaPanel_C::CanvasPanelSIcon07' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, CanvasPanelUnknown) == 0x0002C8, "Member 'UWB_CharaPanel_C::CanvasPanelUnknown' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageBadStatus01) == 0x0002D0, "Member 'UWB_CharaPanel_C::ImageBadStatus01' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageCharaIcon) == 0x0002D8, "Member 'UWB_CharaPanel_C::ImageCharaIcon' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageGardenTalk) == 0x0002E0, "Member 'UWB_CharaPanel_C::ImageGardenTalk' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageHPBar) == 0x0002E8, "Member 'UWB_CharaPanel_C::ImageHPBar' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageHPBase) == 0x0002F0, "Member 'UWB_CharaPanel_C::ImageHPBase' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageHPMovebase) == 0x0002F8, "Member 'UWB_CharaPanel_C::ImageHPMovebase' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageHPMovegauge) == 0x000300, "Member 'UWB_CharaPanel_C::ImageHPMovegauge' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageMPBar) == 0x000308, "Member 'UWB_CharaPanel_C::ImageMPBar' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageMPBase) == 0x000310, "Member 'UWB_CharaPanel_C::ImageMPBase' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageMPMovebase) == 0x000318, "Member 'UWB_CharaPanel_C::ImageMPMovebase' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageMPMovegauge) == 0x000320, "Member 'UWB_CharaPanel_C::ImageMPMovegauge' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport01) == 0x000328, "Member 'UWB_CharaPanel_C::ImageSupport01' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport02) == 0x000330, "Member 'UWB_CharaPanel_C::ImageSupport02' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport03) == 0x000338, "Member 'UWB_CharaPanel_C::ImageSupport03' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport04) == 0x000340, "Member 'UWB_CharaPanel_C::ImageSupport04' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport05) == 0x000348, "Member 'UWB_CharaPanel_C::ImageSupport05' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport06) == 0x000350, "Member 'UWB_CharaPanel_C::ImageSupport06' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport07_1) == 0x000358, "Member 'UWB_CharaPanel_C::ImageSupport07_1' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageSupport08) == 0x000360, "Member 'UWB_CharaPanel_C::ImageSupport08' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageUnselectablePanel) == 0x000368, "Member 'UWB_CharaPanel_C::ImageUnselectablePanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, ImageUnselectablePanelNon) == 0x000370, "Member 'UWB_CharaPanel_C::ImageUnselectablePanelNon' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, MainCanvas) == 0x000378, "Member 'UWB_CharaPanel_C::MainCanvas' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerActorPanel) == 0x000380, "Member 'UWB_CharaPanel_C::SsPlayerActorPanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerAnimation) == 0x000388, "Member 'UWB_CharaPanel_C::SsPlayerAnimation' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerBackPanel) == 0x000390, "Member 'UWB_CharaPanel_C::SsPlayerBackPanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerBadstatusPanel) == 0x000398, "Member 'UWB_CharaPanel_C::SsPlayerBadstatusPanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerCDGauge) == 0x0003A0, "Member 'UWB_CharaPanel_C::SsPlayerCDGauge' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerCDPanel) == 0x0003A8, "Member 'UWB_CharaPanel_C::SsPlayerCDPanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerDamage) == 0x0003B0, "Member 'UWB_CharaPanel_C::SsPlayerDamage' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerETC) == 0x0003B8, "Member 'UWB_CharaPanel_C::SsPlayerETC' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerHPMPGauge) == 0x0003C0, "Member 'UWB_CharaPanel_C::SsPlayerHPMPGauge' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerLevelUpAndMCircle) == 0x0003C8, "Member 'UWB_CharaPanel_C::SsPlayerLevelUpAndMCircle' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerNewIcon) == 0x0003D0, "Member 'UWB_CharaPanel_C::SsPlayerNewIcon' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerPanelFrame) == 0x0003D8, "Member 'UWB_CharaPanel_C::SsPlayerPanelFrame' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerPosition) == 0x0003E0, "Member 'UWB_CharaPanel_C::SsPlayerPosition' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerRecovery) == 0x0003E8, "Member 'UWB_CharaPanel_C::SsPlayerRecovery' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSelectPanel) == 0x0003F0, "Member 'UWB_CharaPanel_C::SsPlayerSelectPanel' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSIcon01) == 0x0003F8, "Member 'UWB_CharaPanel_C::SsPlayerSIcon01' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSIcon02) == 0x000400, "Member 'UWB_CharaPanel_C::SsPlayerSIcon02' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSIcon03) == 0x000408, "Member 'UWB_CharaPanel_C::SsPlayerSIcon03' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSIcon07) == 0x000410, "Member 'UWB_CharaPanel_C::SsPlayerSIcon07' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerSummoned) == 0x000418, "Member 'UWB_CharaPanel_C::SsPlayerSummoned' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerUnenrolled) == 0x000420, "Member 'UWB_CharaPanel_C::SsPlayerUnenrolled' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerUnknown) == 0x000428, "Member 'UWB_CharaPanel_C::SsPlayerUnknown' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, SsPlayerVariousIcon) == 0x000430, "Member 'UWB_CharaPanel_C::SsPlayerVariousIcon' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, TextBlockName) == 0x000438, "Member 'UWB_CharaPanel_C::TextBlockName' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, TextBlockRace) == 0x000440, "Member 'UWB_CharaPanel_C::TextBlockRace' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, WB_NNumberIcon03D8Cost) == 0x000448, "Member 'UWB_CharaPanel_C::WB_NNumberIcon03D8Cost' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, WB_NNumberIcon03HP) == 0x000450, "Member 'UWB_CharaPanel_C::WB_NNumberIcon03HP' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, WB_NNumberIcon03Level) == 0x000458, "Member 'UWB_CharaPanel_C::WB_NNumberIcon03Level' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, WB_NNumberIcon03MP) == 0x000460, "Member 'UWB_CharaPanel_C::WB_NNumberIcon03MP' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, Adjustpositionflag) == 0x000468, "Member 'UWB_CharaPanel_C::Adjustpositionflag' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, IsActorOnFlag) == 0x000469, "Member 'UWB_CharaPanel_C::IsActorOnFlag' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, IsSummonOnFlag) == 0x00046A, "Member 'UWB_CharaPanel_C::IsSummonOnFlag' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, IsFadeOut) == 0x00046B, "Member 'UWB_CharaPanel_C::IsFadeOut' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, IsFadeIn) == 0x00046C, "Member 'UWB_CharaPanel_C::IsFadeIn' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, Calcratio) == 0x000470, "Member 'UWB_CharaPanel_C::Calcratio' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, OnClicked) == 0x000474, "Member 'UWB_CharaPanel_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWB_CharaPanel_C, OnHovered) == 0x000475, "Member 'UWB_CharaPanel_C::OnHovered' has a wrong offset!");

}

