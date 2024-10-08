#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MapUnResident_ST

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct MapUnResident_ST.MapUnResident_ST
// 0x0028 (0x0028 - 0x0000)
struct FMapUnResident_ST final
{
public:
	class FName                                   StartFlag_10_BD9C2C00433A99606FDD918B8DE5EE67;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EndFlag_11_20C511C9436E835F5D7EB288D85F192B;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPrimaryAssetId>                UnresidentLevel_9_9C545A3241E40333A8DB9DB9B5156451; // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         AreaId_14_F157A5464C9AAD462EDF2FB8CD0A14A5;        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FMapUnResident_ST) == 0x000008, "Wrong alignment on FMapUnResident_ST");
static_assert(sizeof(FMapUnResident_ST) == 0x000028, "Wrong size on FMapUnResident_ST");
static_assert(offsetof(FMapUnResident_ST, StartFlag_10_BD9C2C00433A99606FDD918B8DE5EE67) == 0x000000, "Member 'FMapUnResident_ST::StartFlag_10_BD9C2C00433A99606FDD918B8DE5EE67' has a wrong offset!");
static_assert(offsetof(FMapUnResident_ST, EndFlag_11_20C511C9436E835F5D7EB288D85F192B) == 0x000008, "Member 'FMapUnResident_ST::EndFlag_11_20C511C9436E835F5D7EB288D85F192B' has a wrong offset!");
static_assert(offsetof(FMapUnResident_ST, UnresidentLevel_9_9C545A3241E40333A8DB9DB9B5156451) == 0x000010, "Member 'FMapUnResident_ST::UnresidentLevel_9_9C545A3241E40333A8DB9DB9B5156451' has a wrong offset!");
static_assert(offsetof(FMapUnResident_ST, AreaId_14_F157A5464C9AAD462EDF2FB8CD0A14A5) == 0x000020, "Member 'FMapUnResident_ST::AreaId_14_F157A5464C9AAD462EDF2FB8CD0A14A5' has a wrong offset!");

}

