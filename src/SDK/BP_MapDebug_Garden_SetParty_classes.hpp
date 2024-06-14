#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MapDebug_Garden_SetParty

#include "Basic.hpp"

#include "Project_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MapDebug_Garden_SetParty.BP_MapDebug_Garden_SetParty_C
// 0x0000 (0x0038 - 0x0038)
class UBP_MapDebug_Garden_SetParty_C final : public UDebugFuncBaseObj
{
public:
	bool ExecFunc(const class FName& ItemPathName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapDebug_Garden_SetParty_C">();
	}
	static class UBP_MapDebug_Garden_SetParty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MapDebug_Garden_SetParty_C>();
	}
};
static_assert(alignof(UBP_MapDebug_Garden_SetParty_C) == 0x000008, "Wrong alignment on UBP_MapDebug_Garden_SetParty_C");
static_assert(sizeof(UBP_MapDebug_Garden_SetParty_C) == 0x000038, "Wrong size on UBP_MapDebug_Garden_SetParty_C");

}

