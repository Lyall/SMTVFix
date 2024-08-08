#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_BtnHelp2

#include "Basic.hpp"

#include "Project_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_BtnHelp2.WB_BtnHelp2_C
// 0x0070 (0x02D0 - 0x0260)
class UWB_BtnHelp2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_HelpSlot;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Pos;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Slot;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWB_BtnHelpSlot2_C*>             SlotList;                                          // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FBtnHelpInfo>                   CurrentInfo;                                       // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_BTN_HELP_DIR                                HelpDir;                                           // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_POS_TYPE                           PosType;                                           // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_IsGamePad;                                   // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A3[0x5];                                      // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBtnHelpInfo>                   Debug_HelpInfo;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible)
	E_BTN_HELP_POS_TYPE                           Debug_PosType;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BTN_HELP_DIR                                Debug_HelpDirection;                               // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BA[0x2];                                      // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   UsingAnimPack;                                     // 0x02BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimPlayRate;                                      // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BtnHelpMaxNum;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Design_Time;                                    // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_BtnHelp2(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void ResetPartsParam();
	void PlayAnim_Setup();
	void PlayAnim_In();
	void PlayAnim_Out();
	void PlayAnim_Loop();
	void SetHelpInfo(TArray<struct FBtnHelpInfo>& InInfo);
	void SetPosType(E_BTN_HELP_POS_TYPE Param_PosType);
	void SetDirectionType(E_BTN_HELP_DIR Param_HelpDir);
	void SetDispMode(bool IsGamePad);
	void GetNowAssignAnim(class FName* AnimationName, bool* IsPlaying);
	void UpdateBasePos();
	void SetActiveColor(int32 BtnHelpIdx, bool IsActiveColor);
	void SetHoldEffect(int32 BtnHelpIdx, bool IsDrawEffect);
	void SetActiveColor_All(bool IsActiveColor);
	void SetHoldEffect_All(bool IsDrawEffect);
	void GetActiveColor(int32 BtnHelpIdx, bool* IsActive);
	void UpdateHelpPos();
	void ReloadKeyboardText();
	void SetHelpMaxNum(int32 InHelpMaxNum);
	void GetHelpMaxNum(int32* Param_BtnHelpMaxNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_BtnHelp2_C">();
	}
	static class UWB_BtnHelp2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_BtnHelp2_C>();
	}
};
static_assert(alignof(UWB_BtnHelp2_C) == 0x000008, "Wrong alignment on UWB_BtnHelp2_C");
static_assert(sizeof(UWB_BtnHelp2_C) == 0x0002D0, "Wrong size on UWB_BtnHelp2_C");
static_assert(offsetof(UWB_BtnHelp2_C, UberGraphFrame) == 0x000260, "Member 'UWB_BtnHelp2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Canvas_HelpSlot) == 0x000268, "Member 'UWB_BtnHelp2_C::Canvas_HelpSlot' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, SsPlayer_Pos) == 0x000270, "Member 'UWB_BtnHelp2_C::SsPlayer_Pos' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, SsPlayer_Slot) == 0x000278, "Member 'UWB_BtnHelp2_C::SsPlayer_Slot' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, SlotList) == 0x000280, "Member 'UWB_BtnHelp2_C::SlotList' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, CurrentInfo) == 0x000290, "Member 'UWB_BtnHelp2_C::CurrentInfo' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, HelpDir) == 0x0002A0, "Member 'UWB_BtnHelp2_C::HelpDir' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, PosType) == 0x0002A1, "Member 'UWB_BtnHelp2_C::PosType' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Debug_IsGamePad) == 0x0002A2, "Member 'UWB_BtnHelp2_C::Debug_IsGamePad' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Debug_HelpInfo) == 0x0002A8, "Member 'UWB_BtnHelp2_C::Debug_HelpInfo' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Debug_PosType) == 0x0002B8, "Member 'UWB_BtnHelp2_C::Debug_PosType' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Debug_HelpDirection) == 0x0002B9, "Member 'UWB_BtnHelp2_C::Debug_HelpDirection' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, UsingAnimPack) == 0x0002BC, "Member 'UWB_BtnHelp2_C::UsingAnimPack' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, AnimPlayRate) == 0x0002C4, "Member 'UWB_BtnHelp2_C::AnimPlayRate' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, BtnHelpMaxNum) == 0x0002C8, "Member 'UWB_BtnHelp2_C::BtnHelpMaxNum' has a wrong offset!");
static_assert(offsetof(UWB_BtnHelp2_C, Is_Design_Time) == 0x0002CC, "Member 'UWB_BtnHelp2_C::Is_Design_Time' has a wrong offset!");

}

