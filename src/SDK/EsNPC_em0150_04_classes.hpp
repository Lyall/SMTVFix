#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsNPC_em0150_04

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventScriptBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass esNPC_em0150_04.esNPC_em0150_04_C
// 0x0008 (0x02F8 - 0x02F0)
class AEsNPC_em0150_04_C final : public ABP_EventScriptBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_EsNPC_em0150_04_C;                  // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_esNPC_em0150_04(int32 EntryPoint);
	void CheckActive();
	void ReceiveBeginPlay();
	void OnLoaded_0E38A2EA4724D2AEB4E20FBD0585E637(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"esNPC_em0150_04_C">();
	}
	static class AEsNPC_em0150_04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEsNPC_em0150_04_C>();
	}
};
static_assert(alignof(AEsNPC_em0150_04_C) == 0x000008, "Wrong alignment on AEsNPC_em0150_04_C");
static_assert(sizeof(AEsNPC_em0150_04_C) == 0x0002F8, "Wrong size on AEsNPC_em0150_04_C");
static_assert(offsetof(AEsNPC_em0150_04_C, UberGraphFrame_EsNPC_em0150_04_C) == 0x0002F0, "Member 'AEsNPC_em0150_04_C::UberGraphFrame_EsNPC_em0150_04_C' has a wrong offset!");

}

