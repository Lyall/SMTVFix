#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_DG_Util

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_DG_Util.BPL_DG_Util_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_DG_Util_C final : public UBlueprintFunctionLibrary
{
public:
	static void BPL_DG_CalcDataId_m035_obj(class AActor* Actor, class UObject* __WorldContext);
	static void BPL_DG_CalcDataId_ChangeArea(class AActor* Actor, class UObject* __WorldContext);
	static void BPL_DG_CalcDataId_Time(class AActor* Actor, class UObject* __WorldContext);
	static void BPL_DG_CalcDataId_class(class AActor* Actor, class UClass* Param_Class, class UObject* __WorldContext);
	static void BPL_DG_CalcDataId_class2(class AActor* Actor, class UClass* Param_Class, class UClass* Class2, class UObject* __WorldContext);
	static void BPL_DG_CalcDataId_class3(class AActor* Actor, class UClass* Param_Class, class UClass* Class2, class UClass* Class3, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_DG_Util_C">();
	}
	static class UBPL_DG_Util_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_DG_Util_C>();
	}
};
static_assert(alignof(UBPL_DG_Util_C) == 0x000008, "Wrong alignment on UBPL_DG_Util_C");
static_assert(sizeof(UBPL_DG_Util_C) == 0x000028, "Wrong size on UBPL_DG_Util_C");

}

