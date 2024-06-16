#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampQuestCtrl2

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_CampQuest_CtrlState_structs.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CampQuestCtrl2.BPI_CampQuestCtrl2_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CampQuestCtrl2_C final : public IInterface
{
public:
	void CampQuest_IsExistNewIcon(bool* ExistNewIcon);
	void CampQuest_AdvanceSubState();
	void CampQuest_GetSubState(int32* SubState);
	void CampQuest_GetState(E_CampQuest_CtrlState* CampQuestState);
	void CampQuest_LoadData();
	void CampQuest_Update();
	void CampQuest_Close(bool SkipAnim);
	void CampQuest_Open(E_WIDGET_PRIO InWidgetPrio);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CampQuestCtrl2_C">();
	}
	static class IBPI_CampQuestCtrl2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CampQuestCtrl2_C>();
	}
};
static_assert(alignof(IBPI_CampQuestCtrl2_C) == 0x000008, "Wrong alignment on IBPI_CampQuestCtrl2_C");
static_assert(sizeof(IBPI_CampQuestCtrl2_C) == 0x000028, "Wrong size on IBPI_CampQuestCtrl2_C");

}
