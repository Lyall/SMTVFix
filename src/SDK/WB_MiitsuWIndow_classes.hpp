#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_MiitsuWIndow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MakkaWindowAnimState_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_MiitsuWIndow.WB_MiitsuWIndow_C
// 0x0060 (0x02C0 - 0x0260)
class UWB_MiitsuWIndow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USsPlayerWidget*                        SsPlayer_Point;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Pos;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USsPlayerWidget*                        SsPlayer_Total;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MakkaWindowNumber_C*                WB_PointNumber;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_MakkaWindowNumber_C*                WB_TotalNumber;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsUnderMakkaWindow;                                // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DigitMoveFrameNum;                                 // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MakkaWindowAnimState                        AnimState_Point;                                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MakkaWindowAnimState                        AnimState_Total;                                   // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29A[0x2];                                      // 0x029A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DispPoint;                                         // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispTotal;                                         // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestPoint;                                         // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DestTotal;                                         // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddPoint_ByTick;                                   // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddTotal_ByTick;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving_Point;                                    // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMoving_Total;                                    // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B6[0x2];                                      // 0x02B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CampPosOffset;                                     // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimPlayRate;                                      // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_MiitsuWIndow(int32 EntryPoint);
	void BndEvt__SsPlayer_Cost_K2Node_ComponentBoundEvent_1_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void BndEvt__SsPlayer_Point_K2Node_ComponentBoundEvent_0_SsWidgetEndPlaySignature2__DelegateSignature(class FName AnimPackName, class FName AnimationName, int32 AnimPackIndex, int32 AnimationIndex);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Init();
	void SetPositionType(bool IsUnderMakkaWin);
	void SetAnimState_PointWindow(E_MakkaWindowAnimState InState);
	void SetAnimState_TotalWindow(E_MakkaWindowAnimState InState);
	void GetAnimState_PointWindow(E_MakkaWindowAnimState* AnimState);
	void GetAnimState_TotalWindow(E_MakkaWindowAnimState* AnimState);
	void SetPointNum(int32 NewNum, bool PlayAnim);
	void SetTotalNum(int32 NewNum, bool PlayAnim);
	void UpdateSsPartsPos();
	void UpdateNumberMoveAnim();
	void AddPointNum(int32 AddNum, bool PlayAnim);
	void AddTotalNum(int32 AddNum, bool PlayAnim);
	void SkipPointMoveAnim();
	void SkipTotalMoveAnim();
	void GetMovingState_Point(bool* IsMoving);
	void GetMovingState_Total(bool* IsMoving);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_MiitsuWIndow_C">();
	}
	static class UWB_MiitsuWIndow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_MiitsuWIndow_C>();
	}
};
static_assert(alignof(UWB_MiitsuWIndow_C) == 0x000008, "Wrong alignment on UWB_MiitsuWIndow_C");
static_assert(sizeof(UWB_MiitsuWIndow_C) == 0x0002C0, "Wrong size on UWB_MiitsuWIndow_C");
static_assert(offsetof(UWB_MiitsuWIndow_C, UberGraphFrame) == 0x000260, "Member 'UWB_MiitsuWIndow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, SsPlayer_Point) == 0x000268, "Member 'UWB_MiitsuWIndow_C::SsPlayer_Point' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, SsPlayer_Pos) == 0x000270, "Member 'UWB_MiitsuWIndow_C::SsPlayer_Pos' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, SsPlayer_Total) == 0x000278, "Member 'UWB_MiitsuWIndow_C::SsPlayer_Total' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, WB_PointNumber) == 0x000280, "Member 'UWB_MiitsuWIndow_C::WB_PointNumber' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, WB_TotalNumber) == 0x000288, "Member 'UWB_MiitsuWIndow_C::WB_TotalNumber' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, IsUnderMakkaWindow) == 0x000290, "Member 'UWB_MiitsuWIndow_C::IsUnderMakkaWindow' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, DigitMoveFrameNum) == 0x000294, "Member 'UWB_MiitsuWIndow_C::DigitMoveFrameNum' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, AnimState_Point) == 0x000298, "Member 'UWB_MiitsuWIndow_C::AnimState_Point' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, AnimState_Total) == 0x000299, "Member 'UWB_MiitsuWIndow_C::AnimState_Total' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, DispPoint) == 0x00029C, "Member 'UWB_MiitsuWIndow_C::DispPoint' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, DispTotal) == 0x0002A0, "Member 'UWB_MiitsuWIndow_C::DispTotal' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, DestPoint) == 0x0002A4, "Member 'UWB_MiitsuWIndow_C::DestPoint' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, DestTotal) == 0x0002A8, "Member 'UWB_MiitsuWIndow_C::DestTotal' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, AddPoint_ByTick) == 0x0002AC, "Member 'UWB_MiitsuWIndow_C::AddPoint_ByTick' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, AddTotal_ByTick) == 0x0002B0, "Member 'UWB_MiitsuWIndow_C::AddTotal_ByTick' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, IsMoving_Point) == 0x0002B4, "Member 'UWB_MiitsuWIndow_C::IsMoving_Point' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, IsMoving_Total) == 0x0002B5, "Member 'UWB_MiitsuWIndow_C::IsMoving_Total' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, CampPosOffset) == 0x0002B8, "Member 'UWB_MiitsuWIndow_C::CampPosOffset' has a wrong offset!");
static_assert(offsetof(UWB_MiitsuWIndow_C, AnimPlayRate) == 0x0002BC, "Member 'UWB_MiitsuWIndow_C::AnimPlayRate' has a wrong offset!");

}

