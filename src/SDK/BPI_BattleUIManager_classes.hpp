#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleUIManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleUIManager.BPI_BattleUIManager_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleUIManager_C final : public IInterface
{
public:
	void BI_PressIconSlideOut(bool* Ret);
	void BI_PressIconSlideIn(bool* Ret);
	void BI_UpliftingGaugeSlideOut(bool* Ret);
	void BI_UpliftingGaugeSlideIn(bool* Ret);
	void BI_ShowBlankNumber(int32 HP_Value, int32 MP_Value, E_BTL_UTIL_ICON_TYPE HitType, int32 Level, E_BTL_NUMEFF NumEffectType, const struct FVector& SocketLocation, struct FVector2D& PosOffset, const int32& Ratio_, float PlayRate, float SizeRate, int32 PartyIndex, TScriptInterface<class IBPI_BattleNumberActor_C>* Number);
	void BI_HideNumber(TScriptInterface<class IBPI_BattleNumberActor_C> Number, bool* NoUse);
	void BI_UtilIconShowByPartyIndex(E_BTL_UTIL_ICON_TYPE Type, float PlayRate, int32 PartyIndex, class FName SocketName, TScriptInterface<class IBPI_BattleUtilIconActor_C>* Icon);
	void BI_UtilIconHide(TScriptInterface<class IBPI_BattleUtilIconActor_C> Icon, bool* NoUse);
	void BI_PressIconIsWorking(bool* IsWorking);
	void BI_IsDisappearedMainUI(bool* IsDisappeared);
	void BI_GetMainUIDisappeared(bool* PressIcon, bool* Uplifting);
	void BI_PressIconAreAllShown(bool* Shown);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleUIManager_C">();
	}
	static class IBPI_BattleUIManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleUIManager_C>();
	}
};
static_assert(alignof(IBPI_BattleUIManager_C) == 0x000008, "Wrong alignment on IBPI_BattleUIManager_C");
static_assert(sizeof(IBPI_BattleUIManager_C) == 0x000028, "Wrong size on IBPI_BattleUIManager_C");

}

