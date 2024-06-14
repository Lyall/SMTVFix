#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtlListMenu

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Btl_ListMenu_T_structs.hpp"
#include "Engine_structs.hpp"
#include "Btl_ListMenuPool_T_structs.hpp"
#include "BtlUISkill_UseData_st_structs.hpp"
#include "BtlUIItemData_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtlListMenu.WB_BtlListMenu_C
// 0x0110 (0x0370 - 0x0260)
class UWB_BtlListMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButtonS5*                              ButtonS5_Down;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonS5*                              ButtonS5_Up;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasList;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_BG;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Down;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Pos;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_ScrollAnim;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Title;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Up;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BtlListMenuPart_C*                  WB_Cursor;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_ScrollBar_C*                        WB_ScrollBar;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSkill;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4564[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBtl_ListMenuPool_T>            MenuPartsPool;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsPartsCreated;                                    // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAppeared;                                        // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4565[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CursorIndex;                                       // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBtlUISkill_UseData_st>         SkillData;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBtlUIItemData>                 ItemData;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FBtl_ListMenu_T>                ListParts;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         ListMode;                                          // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ListTopIndex;                                      // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScrollPos;                                         // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInputEnable;                                     // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCursorMovable;                                   // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4566[0x2];                                     // 0x031E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Evt_SetHelpMes;                                    // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWB_BtlListMenuPart_C*>          ReservedRemoveParts;                               // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         MaxListLength;                                     // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OneFrameTime;                                      // 0x0344(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsListMoving;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Disappeared;                                       // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsScrollMoving;                                    // 0x034A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4567[0x5];                                     // 0x034B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Evt_OnListMenuCursorMove;                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Evt_OnListMenuSelected;                            // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Evt_SetHelpMes__DelegateSignature(int32 ID);
	void Evt_OnListMenuCursorMove__DelegateSignature(int32 MoveDirection);
	void Evt_OnListMenuSelected__DelegateSignature();
	void ExecuteUbergraph_WB_BtlListMenu(int32 EntryPoint);
	void BndEvt__WB_BtlListMenu_ButtonS5_Up_K2Node_ComponentBoundEvent_5_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void BndEvt__WB_BtlListMenu_ButtonS5_Down_K2Node_ComponentBoundEvent_4_ButtonClickEventS5__DelegateSignature(const struct FVector2D& Pos, const struct FVector2D& UV);
	void CallTick(float Delta);
	void InitDisappeared();
	void AppearCursor();
	void BndEvt__SsPlayer_Up_K2Node_ComponentBoundEvent_3_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayer_Title_K2Node_ComponentBoundEvent_2_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayer_Down_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayer_BG_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Disappear(float Rate, bool Immediately);
	void Appear(float Rate, bool Immediately);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void PlayBG_Anim(int32 AnimIndex, bool IsLoop);
	void PlayDownAnim(int32 AnimIndex, bool IsLoop);
	void PlayUpAnim(int32 AnimIndex, bool IsLoop);
	void PlayTitleAnim(int32 AnimIndex, bool IsLoop);
	void CreateListParts();
	void SetSkillData(TArray<struct FBtlUISkill_UseData_st>& Param_SkillData);
	void SetItemData(TArray<struct FBtlUIItemData>& Param_ItemData);
	void SetInitialCursorIndex(int32 Param_Index);
	void ApplyInitialPartsData(bool IsComeFromDown, bool SetScrollBarPos);
	void CalcPartPos(float Weight, struct FVector2D* Pos, float* Alpha);
	void UpdateListPos(float DeltaTime);
	void CalcDestPosWeight(int32 DataIndex, float* DestWeight);
	float EaseInOut(float Current, float Dest, float Alpha, float Exp, float DeltaTime, bool* Finished);
	void GetSelectedListIndex(int32* Param_Index);
	void Initialize(bool IsComeFromDown, bool SetScrollBarPos);
	void UpdateScrollPos(float DeltaTime);
	void ApplyCursorData();
	void CursorCtrl(int32 Direction, bool* CursorMoved);
	int32 GetDataLastIndex();
	void RequestPooledPart(int32 RequestIndex, class UWB_BtlListMenuPart_C** Part, int32* PoolIndex);
	void RemoveListPart(class UWB_BtlListMenuPart_C*& Part);
	void AddListPart(int32 DataIndex, class UWB_BtlListMenuPart_C*& Part, float DestPosWeight, float CurrentPosWeight, int32 PoolIndex, bool AddTop, int32 ListIndex);
	float CalcInitialPartPosWeight(bool IsComeFromDown, int32 CurrentIndex, int32 Param_ListTopIndex, int32 ListLastIndex);
	void GetResult(int32* Param_CursorIndex, int32* ID, bool* IsUsable, bool* Param_IsSkill);
	void GetInputEnable(bool* Enable);
	void GetLabelConcealed(bool* Concealed);
	void GetSelectedSkillData(struct FBtlUISkill_UseData_st* Data);
	void GetSelectedItemData(struct FBtlUIItemData* Data);
	void FindPart(int32 ListIndex, class UWB_BtlListMenuPart_C** Part, bool* Valid);
	void DebugCheckListNum();
	void DebugCheckDisappeared();
	void CalcScrollPos();
	void OnListPartsClicked(int32 Param_Index);
	void OnWorkScrollBar(float Position);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void MouseWheel(float MouseWheelDelta);
	void Debug_GetUsableSkillID(int32 ListIndex, int32* SkillId, bool* Usable);
	void CreateOneListPart();
	void DebugCheckPartsUsage();
	void RemoveAllListPart();
	void IsDisappeared(bool* Param_IsDisappeared);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtlListMenu_C">();
	}
	static class UWB_BtlListMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtlListMenu_C>();
	}
};
static_assert(alignof(UWB_BtlListMenu_C) == 0x000008, "Wrong alignment on UWB_BtlListMenu_C");
static_assert(sizeof(UWB_BtlListMenu_C) == 0x000370, "Wrong size on UWB_BtlListMenu_C");
static_assert(offsetof(UWB_BtlListMenu_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtlListMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ButtonS5_Down) == 0x000268, "Member 'UWB_BtlListMenu_C::ButtonS5_Down' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ButtonS5_Up) == 0x000270, "Member 'UWB_BtlListMenu_C::ButtonS5_Up' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, CanvasList) == 0x000278, "Member 'UWB_BtlListMenu_C::CanvasList' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_BG) == 0x000280, "Member 'UWB_BtlListMenu_C::SsPlayer_BG' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_Down) == 0x000288, "Member 'UWB_BtlListMenu_C::SsPlayer_Down' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_Pos) == 0x000290, "Member 'UWB_BtlListMenu_C::SsPlayer_Pos' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_ScrollAnim) == 0x000298, "Member 'UWB_BtlListMenu_C::SsPlayer_ScrollAnim' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_Title) == 0x0002A0, "Member 'UWB_BtlListMenu_C::SsPlayer_Title' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SsPlayer_Up) == 0x0002A8, "Member 'UWB_BtlListMenu_C::SsPlayer_Up' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, WB_Cursor) == 0x0002B0, "Member 'UWB_BtlListMenu_C::WB_Cursor' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, WB_ScrollBar) == 0x0002B8, "Member 'UWB_BtlListMenu_C::WB_ScrollBar' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsSkill) == 0x0002C0, "Member 'UWB_BtlListMenu_C::IsSkill' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, MenuPartsPool) == 0x0002C8, "Member 'UWB_BtlListMenu_C::MenuPartsPool' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsPartsCreated) == 0x0002D8, "Member 'UWB_BtlListMenu_C::IsPartsCreated' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsAppeared) == 0x0002D9, "Member 'UWB_BtlListMenu_C::IsAppeared' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, CursorIndex) == 0x0002DC, "Member 'UWB_BtlListMenu_C::CursorIndex' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, SkillData) == 0x0002E0, "Member 'UWB_BtlListMenu_C::SkillData' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ItemData) == 0x0002F0, "Member 'UWB_BtlListMenu_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ListParts) == 0x000300, "Member 'UWB_BtlListMenu_C::ListParts' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ListMode) == 0x000310, "Member 'UWB_BtlListMenu_C::ListMode' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ListTopIndex) == 0x000314, "Member 'UWB_BtlListMenu_C::ListTopIndex' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ScrollPos) == 0x000318, "Member 'UWB_BtlListMenu_C::ScrollPos' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsInputEnable) == 0x00031C, "Member 'UWB_BtlListMenu_C::IsInputEnable' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsCursorMovable) == 0x00031D, "Member 'UWB_BtlListMenu_C::IsCursorMovable' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, Evt_SetHelpMes) == 0x000320, "Member 'UWB_BtlListMenu_C::Evt_SetHelpMes' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, ReservedRemoveParts) == 0x000330, "Member 'UWB_BtlListMenu_C::ReservedRemoveParts' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, MaxListLength) == 0x000340, "Member 'UWB_BtlListMenu_C::MaxListLength' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, OneFrameTime) == 0x000344, "Member 'UWB_BtlListMenu_C::OneFrameTime' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsListMoving) == 0x000348, "Member 'UWB_BtlListMenu_C::IsListMoving' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, Disappeared) == 0x000349, "Member 'UWB_BtlListMenu_C::Disappeared' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, IsScrollMoving) == 0x00034A, "Member 'UWB_BtlListMenu_C::IsScrollMoving' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, Evt_OnListMenuCursorMove) == 0x000350, "Member 'UWB_BtlListMenu_C::Evt_OnListMenuCursorMove' has a wrong offset!");
static_assert(offsetof(UWB_BtlListMenu_C, Evt_OnListMenuSelected) == 0x000360, "Member 'UWB_BtlListMenu_C::Evt_OnListMenuSelected' has a wrong offset!");

}
