#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_FacilityListBase

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_FacilityListBase.WB_FacilityListBase_C
// 0x0010 (0x0270 - 0x0260)
class UWB_FacilityListBase_C : public UUserWidget
{
public:
	int32                                         DataNum;                                           // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispNum;                                           // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispTop;                                           // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DispCursor;                                        // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InitScrollCrtl(int32 InDispNum, int32 InDataNum, int32 InDataIndex);
	void ScrollUp(int32* NewSelect);
	void ScrollDown(int32* NewSelect);
	void ScrollPageUp(int32* NewSelect);
	void ScrollPageDown(int32* NewSelect);
	void SetDispCursor(int32 DispIndex, int32* NewSelect);
	void SetDataIndex(int32 Param_Index, int32* NewSelect);
	void SetDispTop(int32 DataIndex, int32* Param_DispTop);
	void SetScrollRate(float InScrollRate);
	void GetSelectDataIndex(int32* DataIndex);
	void GetDispDataIndex(int32* Top, int32* Bottom);
	void GetDispNum(int32* Num);
	void GetDataNum(int32* Num);
	void GetDispCursor(int32* Num);
	void GetScrollRate(float* Rate);
	void SetDataIndexTop(int32 Param_Index, int32* NewSelect);
	void SetDataIndexBottom(int32 Param_Index, int32* NewSelect);
	void IsSelectTop(bool* bTop);
	void IsSelectBottom(bool* bBottom);
	void SetSelectDataIndex(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_FacilityListBase_C">();
	}
	static class UWB_FacilityListBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_FacilityListBase_C>();
	}
};
static_assert(alignof(UWB_FacilityListBase_C) == 0x000008, "Wrong alignment on UWB_FacilityListBase_C");
static_assert(sizeof(UWB_FacilityListBase_C) == 0x000270, "Wrong size on UWB_FacilityListBase_C");
static_assert(offsetof(UWB_FacilityListBase_C, DataNum) == 0x000260, "Member 'UWB_FacilityListBase_C::DataNum' has a wrong offset!");
static_assert(offsetof(UWB_FacilityListBase_C, DispNum) == 0x000264, "Member 'UWB_FacilityListBase_C::DispNum' has a wrong offset!");
static_assert(offsetof(UWB_FacilityListBase_C, DispTop) == 0x000268, "Member 'UWB_FacilityListBase_C::DispTop' has a wrong offset!");
static_assert(offsetof(UWB_FacilityListBase_C, DispCursor) == 0x00026C, "Member 'UWB_FacilityListBase_C::DispCursor' has a wrong offset!");

}

