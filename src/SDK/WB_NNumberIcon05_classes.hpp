#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_NNumberIcon05

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_NNumberIcon05.WB_NNumberIcon05_C
// 0x0068 (0x02C8 - 0x0260)
class UWB_NNumberIcon05_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Imagedigit1;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagedigit2;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagedigit3;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagedigit4;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagedigit5;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainPanel;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 Digit;                                             // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Devparam;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number;                                            // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Subpos;                                            // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCheckSpace;                                      // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4983[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   ColorType;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WB_NNumberIcon05(int32 EntryPoint);
	void Construct();
	void SetNumber(int32 InParam, bool InZeroSpace, bool InLeft);
	void SetNumberDisp(int32 InIndex, ESlateVisibility InDisp);
	void GetImageNo(int32 InDigit, class UImage** OutImage);
	void SetFontColor(int32 InColorType);
	void SetQuestion(int32 InDigits, bool InZeroSpace, bool InLeft);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_NNumberIcon05_C">();
	}
	static class UWB_NNumberIcon05_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_NNumberIcon05_C>();
	}
};
static_assert(alignof(UWB_NNumberIcon05_C) == 0x000008, "Wrong alignment on UWB_NNumberIcon05_C");
static_assert(sizeof(UWB_NNumberIcon05_C) == 0x0002C8, "Wrong size on UWB_NNumberIcon05_C");
static_assert(offsetof(UWB_NNumberIcon05_C, UberGraphFrame) == 0x000260, "Member 'UWB_NNumberIcon05_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Imagedigit1) == 0x000268, "Member 'UWB_NNumberIcon05_C::Imagedigit1' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Imagedigit2) == 0x000270, "Member 'UWB_NNumberIcon05_C::Imagedigit2' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Imagedigit3) == 0x000278, "Member 'UWB_NNumberIcon05_C::Imagedigit3' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Imagedigit4) == 0x000280, "Member 'UWB_NNumberIcon05_C::Imagedigit4' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Imagedigit5) == 0x000288, "Member 'UWB_NNumberIcon05_C::Imagedigit5' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, MainPanel) == 0x000290, "Member 'UWB_NNumberIcon05_C::MainPanel' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Digit) == 0x000298, "Member 'UWB_NNumberIcon05_C::Digit' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Devparam) == 0x0002A8, "Member 'UWB_NNumberIcon05_C::Devparam' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Number) == 0x0002AC, "Member 'UWB_NNumberIcon05_C::Number' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, Subpos) == 0x0002B0, "Member 'UWB_NNumberIcon05_C::Subpos' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, IsCheckSpace) == 0x0002B4, "Member 'UWB_NNumberIcon05_C::IsCheckSpace' has a wrong offset!");
static_assert(offsetof(UWB_NNumberIcon05_C, ColorType) == 0x0002B8, "Member 'UWB_NNumberIcon05_C::ColorType' has a wrong offset!");

}

