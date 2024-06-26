#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CampHelpCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CampHelpCtrl.BPI_CampHelpCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CampHelpCtrl_C final : public IInterface
{
public:
	void ICampHelpRemove();
	void ICampHelpGetListFadeOut(bool* OutFlag);
	void ICampHelpProc(bool* OutFinished);
	void ICampHelpCreate(E_WIDGET_PRIO InPrio);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CampHelpCtrl_C">();
	}
	static class IBPI_CampHelpCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CampHelpCtrl_C>();
	}
};
static_assert(alignof(IBPI_CampHelpCtrl_C) == 0x000008, "Wrong alignment on IBPI_CampHelpCtrl_C");
static_assert(sizeof(IBPI_CampHelpCtrl_C) == 0x000028, "Wrong size on IBPI_CampHelpCtrl_C");

}

