#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GameOver

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Project_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_GameOver.WB_GameOver_C
// 0x0050 (0x02B0 - 0x0260)
class UWB_GameOver_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BGImage;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         M_Cursor;                                          // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSaveLoadHeaderData>            M_HeaderArray;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         M_TargetSlot;                                      // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_Step;                                            // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GAMEOVER_RESULT                             M_Result;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_IsDebugResult;                                   // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_GameOver(int32 EntryPoint);
	void OnAnimationFinished______0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	struct FSlateColor GetColorAndOpacity_0();
	struct FSlateColor GetColorAndOpacity_1();
	void IsFinished(bool* RetValue);
	void GetResult(E_GAMEOVER_RESULT* RetValue);
	void GetTargetSlot(int32* RetValue);
	void IsDebugFinish(bool* RetValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_GameOver_C">();
	}
	static class UWB_GameOver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_GameOver_C>();
	}
};
static_assert(alignof(UWB_GameOver_C) == 0x000008, "Wrong alignment on UWB_GameOver_C");
static_assert(sizeof(UWB_GameOver_C) == 0x0002B0, "Wrong size on UWB_GameOver_C");
static_assert(offsetof(UWB_GameOver_C, UberGraphFrame) == 0x000260, "Member 'UWB_GameOver_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, FadeIn) == 0x000268, "Member 'UWB_GameOver_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, BGImage) == 0x000270, "Member 'UWB_GameOver_C::BGImage' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, TextBlock_0) == 0x000278, "Member 'UWB_GameOver_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, TextBlock_1) == 0x000280, "Member 'UWB_GameOver_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_Cursor) == 0x000288, "Member 'UWB_GameOver_C::M_Cursor' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_HeaderArray) == 0x000290, "Member 'UWB_GameOver_C::M_HeaderArray' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_TargetSlot) == 0x0002A0, "Member 'UWB_GameOver_C::M_TargetSlot' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_Step) == 0x0002A4, "Member 'UWB_GameOver_C::M_Step' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_Result) == 0x0002A8, "Member 'UWB_GameOver_C::M_Result' has a wrong offset!");
static_assert(offsetof(UWB_GameOver_C, M_IsDebugResult) == 0x0002A9, "Member 'UWB_GameOver_C::M_IsDebugResult' has a wrong offset!");

}

