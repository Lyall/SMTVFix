#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattleCalc

#include "Basic.hpp"

#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BattleCalc.BattleCalc_C
// 0x0000 (0x0BA0 - 0x0BA0)
class UBattleCalc_C final : public UBattleCalcBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCalc_C">();
	}
	static class UBattleCalc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCalc_C>();
	}
};
static_assert(alignof(UBattleCalc_C) == 0x000008, "Wrong alignment on UBattleCalc_C");
static_assert(sizeof(UBattleCalc_C) == 0x000BA0, "Wrong size on UBattleCalc_C");

}
