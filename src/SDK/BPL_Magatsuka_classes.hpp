#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Magatsuka

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "Project_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_Magatsuka.BPL_Magatsuka_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_Magatsuka_C final : public UBlueprintFunctionLibrary
{
public:
	static void ShowMagatsukaAll(TArray<class AActor*>& Actors, bool Show, class UObject* __WorldContext);
	static void RecalcMagatsukaGaze(TArray<class AActor*>& Actors, class UObject* __WorldContext);
	static void ReleaseMagatsukaGaze(TArray<class AActor*>& Actors, class UObject* __WorldContext);
	static void OtherScene_To_MagatsukaFound(class UObject* __WorldContext);
	static void MagatsukaFound_To_OtherScene(class UObject* __WorldContext);
	static void ChangeBGM_MagatsukaOrMap(EFadeType FadeType, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_Magatsuka_C">();
	}
	static class UBPL_Magatsuka_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_Magatsuka_C>();
	}
};
static_assert(alignof(UBPL_Magatsuka_C) == 0x000008, "Wrong alignment on UBPL_Magatsuka_C");
static_assert(sizeof(UBPL_Magatsuka_C) == 0x000028, "Wrong size on UBPL_Magatsuka_C");

}
