#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DifficulitySelectCtrl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Project_structs.hpp"
#include "E_DifficulitySelectEndType_structs.hpp"
#include "E_DifficulitySelectPlace_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_DifficulitySelectCtrl.BPI_DifficulitySelectCtrl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_DifficulitySelectCtrl_C final : public IInterface
{
public:
	void StartDifficultySelect(E_DifficulitySelectPlace InType);
	void GetDifficulitySelectEndType(E_DifficulitySelectEndType* OutType);
	void GetSelectDifficulity(E_GAME_DIFFICULTY* OutType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_DifficulitySelectCtrl_C">();
	}
	static class IBPI_DifficulitySelectCtrl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_DifficulitySelectCtrl_C>();
	}
};
static_assert(alignof(IBPI_DifficulitySelectCtrl_C) == 0x000008, "Wrong alignment on IBPI_DifficulitySelectCtrl_C");
static_assert(sizeof(IBPI_DifficulitySelectCtrl_C) == 0x000028, "Wrong size on IBPI_DifficulitySelectCtrl_C");

}

