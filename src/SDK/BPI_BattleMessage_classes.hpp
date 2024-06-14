#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BattleMessage

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_BattleMessage.BPI_BattleMessage_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_BattleMessage_C final : public IInterface
{
public:
	void IBattleMessageShow(int32 InMessageId, int32 ShowPos, bool IsSkillOrItemName, int32 SkillId, int32 SkillAptitude, int32 ItemId);
	void IBattleMessageHide();
	void IBattleMessageSetProgramString(int32 InIndex, const class FString& InStr);
	void IBattleMessageRemove();
	void IBattleMessageVisibility(ESlateVisibility InVisibility);
	void IBattleMessageSetIconElement(int32 Elementnumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_BattleMessage_C">();
	}
	static class IBPI_BattleMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_BattleMessage_C>();
	}
};
static_assert(alignof(IBPI_BattleMessage_C) == 0x000008, "Wrong alignment on IBPI_BattleMessage_C");
static_assert(sizeof(IBPI_BattleMessage_C) == 0x000028, "Wrong size on IBPI_BattleMessage_C");

}
