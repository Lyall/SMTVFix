#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_MaterialAnimCore

#include "Basic.hpp"

#include "MaterialAnimSetting_T_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetScalarParam
// 0x0018 (0x0018 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetScalarParam final
{
public:
	TArray<class FName>                           ParamNames;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Val;                                               // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetScalarParam) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetScalarParam");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetScalarParam) == 0x000018, "Wrong size on BPI_MaterialAnimCore_C_BI_SetScalarParam");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParam, ParamNames) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParam::ParamNames' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParam, Val) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParam::Val' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParam, NoUse) == 0x000014, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParam::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_ResetScalarParam
// 0x0018 (0x0018 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_ResetScalarParam final
{
public:
	TArray<class FName>                           ParamNmaes;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          NoUse;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_ResetScalarParam) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_ResetScalarParam");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_ResetScalarParam) == 0x000018, "Wrong size on BPI_MaterialAnimCore_C_BI_ResetScalarParam");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetScalarParam, ParamNmaes) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_ResetScalarParam::ParamNmaes' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetScalarParam, NoUse) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_ResetScalarParam::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetVectorParam
// 0x0028 (0x0028 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetVectorParam final
{
public:
	TArray<class FName>                           ParamNames;                                        // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                           Val;                                               // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetVectorParam) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetVectorParam");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetVectorParam) == 0x000028, "Wrong size on BPI_MaterialAnimCore_C_BI_SetVectorParam");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParam, ParamNames) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParam::ParamNames' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParam, Val) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParam::Val' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParam, NoUse) == 0x000020, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParam::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetScalarParamByArray
// 0x0028 (0x0028 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetScalarParamByArray final
{
public:
	TArray<class UMaterialInstanceDynamic*>       Materials;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           ParamNames;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Val;                                               // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetScalarParamByArray");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray) == 0x000028, "Wrong size on BPI_MaterialAnimCore_C_BI_SetScalarParamByArray");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray, Materials) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParamByArray::Materials' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray, ParamNames) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParamByArray::ParamNames' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray, Val) == 0x000020, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParamByArray::Val' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetScalarParamByArray, NoUse) == 0x000024, "Member 'BPI_MaterialAnimCore_C_BI_SetScalarParamByArray::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetVectorParamByArray
// 0x0038 (0x0038 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetVectorParamByArray final
{
public:
	TArray<class UMaterialInstanceDynamic*>       Materials;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           ParamNames;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                           Val;                                               // 0x0020(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetVectorParamByArray");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray) == 0x000038, "Wrong size on BPI_MaterialAnimCore_C_BI_SetVectorParamByArray");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray, Materials) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParamByArray::Materials' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray, ParamNames) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParamByArray::ParamNames' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray, Val) == 0x000020, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParamByArray::Val' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetVectorParamByArray, NoUse) == 0x000030, "Member 'BPI_MaterialAnimCore_C_BI_SetVectorParamByArray::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_OutLineSwitch
// 0x0002 (0x0002 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_OutLineSwitch final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_OutLineSwitch) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_OutLineSwitch");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_OutLineSwitch) == 0x000002, "Wrong size on BPI_MaterialAnimCore_C_BI_OutLineSwitch");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_OutLineSwitch, Value) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_OutLineSwitch::Value' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_OutLineSwitch, NoUse) == 0x000001, "Member 'BPI_MaterialAnimCore_C_BI_OutLineSwitch::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SelectFresnelSwitch
// 0x0002 (0x0002 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch) == 0x000002, "Wrong size on BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch, Value) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch::Value' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch, NoUse) == 0x000001, "Member 'BPI_MaterialAnimCore_C_BI_SelectFresnelSwitch::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SelectSwitch
// 0x0002 (0x0002 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SelectSwitch final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SelectSwitch) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SelectSwitch");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SelectSwitch) == 0x000002, "Wrong size on BPI_MaterialAnimCore_C_BI_SelectSwitch");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SelectSwitch, Value) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SelectSwitch::Value' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SelectSwitch, NoUse) == 0x000001, "Member 'BPI_MaterialAnimCore_C_BI_SelectSwitch::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_GetAllMID
// 0x0010 (0x0010 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_GetAllMID final
{
public:
	TArray<class UMaterialInstanceDynamic*>       Mid;                                               // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_GetAllMID) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_GetAllMID");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_GetAllMID) == 0x000010, "Wrong size on BPI_MaterialAnimCore_C_BI_GetAllMID");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_GetAllMID, Mid) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_GetAllMID::Mid' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_ToggleDitherEnable
// 0x0001 (0x0001 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_ToggleDitherEnable final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_ToggleDitherEnable) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_ToggleDitherEnable");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_ToggleDitherEnable) == 0x000001, "Wrong size on BPI_MaterialAnimCore_C_BI_ToggleDitherEnable");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ToggleDitherEnable, NoUse) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_ToggleDitherEnable::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_IsDitherEnable
// 0x0001 (0x0001 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_IsDitherEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_IsDitherEnable) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_IsDitherEnable");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_IsDitherEnable) == 0x000001, "Wrong size on BPI_MaterialAnimCore_C_BI_IsDitherEnable");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_IsDitherEnable, IsEnable) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_IsDitherEnable::IsEnable' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetDitherEnable
// 0x0002 (0x0002 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetDitherEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NoUse;                                             // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetDitherEnable) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetDitherEnable");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetDitherEnable) == 0x000002, "Wrong size on BPI_MaterialAnimCore_C_BI_SetDitherEnable");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherEnable, IsEnable) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherEnable, NoUse) == 0x000001, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherEnable::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetDitherDistance
// 0x000C (0x000C - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetDitherDistance final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpSec;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetDitherDistance) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetDitherDistance");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetDitherDistance) == 0x00000C, "Wrong size on BPI_MaterialAnimCore_C_BI_SetDitherDistance");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherDistance, Distance) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherDistance::Distance' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherDistance, InterpSec) == 0x000004, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherDistance::InterpSec' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherDistance, NoUse) == 0x000008, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherDistance::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_ResetDitherDistance
// 0x0008 (0x0008 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_ResetDitherDistance final
{
public:
	float                                         InterpSec;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_ResetDitherDistance) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_ResetDitherDistance");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_ResetDitherDistance) == 0x000008, "Wrong size on BPI_MaterialAnimCore_C_BI_ResetDitherDistance");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetDitherDistance, InterpSec) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_ResetDitherDistance::InterpSec' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetDitherDistance, NoUse) == 0x000004, "Member 'BPI_MaterialAnimCore_C_BI_ResetDitherDistance::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_UpdateDither
// 0x0008 (0x0008 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_UpdateDither final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentDitherRate;                                 // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_UpdateDither) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_UpdateDither");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_UpdateDither) == 0x000008, "Wrong size on BPI_MaterialAnimCore_C_BI_UpdateDither");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_UpdateDither, DeltaTime) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_UpdateDither::DeltaTime' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_UpdateDither, CurrentDitherRate) == 0x000004, "Member 'BPI_MaterialAnimCore_C_BI_UpdateDither::CurrentDitherRate' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_SetDitherRate
// 0x000C (0x000C - 0x0000)
struct BPI_MaterialAnimCore_C_BI_SetDitherRate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InterpSec;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_SetDitherRate) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_SetDitherRate");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_SetDitherRate) == 0x00000C, "Wrong size on BPI_MaterialAnimCore_C_BI_SetDitherRate");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherRate, Rate) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherRate::Rate' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherRate, InterpSec) == 0x000004, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherRate::InterpSec' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_SetDitherRate, NoUse) == 0x000008, "Member 'BPI_MaterialAnimCore_C_BI_SetDitherRate::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_ResetDitherRate
// 0x0008 (0x0008 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_ResetDitherRate final
{
public:
	float                                         InterpSec;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_ResetDitherRate) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_ResetDitherRate");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_ResetDitherRate) == 0x000008, "Wrong size on BPI_MaterialAnimCore_C_BI_ResetDitherRate");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetDitherRate, InterpSec) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_ResetDitherRate::InterpSec' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetDitherRate, NoUse) == 0x000004, "Member 'BPI_MaterialAnimCore_C_BI_ResetDitherRate::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_RetrieveMIDs
// 0x0020 (0x0020 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_RetrieveMIDs final
{
public:
	TArray<int32>                                 ElementNo;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UMaterialInstanceDynamic*>       Materials;                                         // 0x0010(0x0010)(Parm, OutParm)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_RetrieveMIDs) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_RetrieveMIDs");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_RetrieveMIDs) == 0x000020, "Wrong size on BPI_MaterialAnimCore_C_BI_RetrieveMIDs");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_RetrieveMIDs, ElementNo) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_RetrieveMIDs::ElementNo' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_RetrieveMIDs, Materials) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_RetrieveMIDs::Materials' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_CalcMaterialAnimSettingSec
// 0x0018 (0x0018 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec final
{
public:
	TArray<struct FMaterialAnimSetting_T>         MaterialAnimSettings;                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         Sec;                                               // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec) == 0x000018, "Wrong size on BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec, MaterialAnimSettings) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec::MaterialAnimSettings' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec, Sec) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_CalcMaterialAnimSettingSec::Sec' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_InitializeMaterial
// 0x0010 (0x0010 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_InitializeMaterial final
{
public:
	class UMeshComponent*                         Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_InitializeMaterial) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_InitializeMaterial");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_InitializeMaterial) == 0x000010, "Wrong size on BPI_MaterialAnimCore_C_BI_InitializeMaterial");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_InitializeMaterial, Mesh) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_InitializeMaterial::Mesh' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_InitializeMaterial, NoUse) == 0x000008, "Member 'BPI_MaterialAnimCore_C_BI_InitializeMaterial::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_GetDitherRate
// 0x0004 (0x0004 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_GetDitherRate final
{
public:
	float                                         DitherRate;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_GetDitherRate) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_GetDitherRate");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_GetDitherRate) == 0x000004, "Wrong size on BPI_MaterialAnimCore_C_BI_GetDitherRate");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_GetDitherRate, DitherRate) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_GetDitherRate::DitherRate' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_GetDitherDistance
// 0x0004 (0x0004 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_GetDitherDistance final
{
public:
	float                                         DitherDistance;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_GetDitherDistance) == 0x000004, "Wrong alignment on BPI_MaterialAnimCore_C_BI_GetDitherDistance");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_GetDitherDistance) == 0x000004, "Wrong size on BPI_MaterialAnimCore_C_BI_GetDitherDistance");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_GetDitherDistance, DitherDistance) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_GetDitherDistance::DitherDistance' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_MultiMeshInitializeMaterial
// 0x0018 (0x0018 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial final
{
public:
	TArray<class UMeshComponent*>                 Meshes;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          NoUse;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial) == 0x000018, "Wrong size on BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial, Meshes) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial::Meshes' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial, NoUse) == 0x000010, "Member 'BPI_MaterialAnimCore_C_BI_MultiMeshInitializeMaterial::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_ResetAllParam
// 0x0001 (0x0001 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_ResetAllParam final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_ResetAllParam) == 0x000001, "Wrong alignment on BPI_MaterialAnimCore_C_BI_ResetAllParam");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_ResetAllParam) == 0x000001, "Wrong size on BPI_MaterialAnimCore_C_BI_ResetAllParam");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_ResetAllParam, NoUse) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_ResetAllParam::NoUse' has a wrong offset!");

// Function BPI_MaterialAnimCore.BPI_MaterialAnimCore_C.BI_AddMaterial
// 0x0010 (0x0010 - 0x0000)
struct BPI_MaterialAnimCore_C_BI_AddMaterial final
{
public:
	class UMeshComponent*                         MeshComponent;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoUse;                                             // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_MaterialAnimCore_C_BI_AddMaterial) == 0x000008, "Wrong alignment on BPI_MaterialAnimCore_C_BI_AddMaterial");
static_assert(sizeof(BPI_MaterialAnimCore_C_BI_AddMaterial) == 0x000010, "Wrong size on BPI_MaterialAnimCore_C_BI_AddMaterial");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_AddMaterial, MeshComponent) == 0x000000, "Member 'BPI_MaterialAnimCore_C_BI_AddMaterial::MeshComponent' has a wrong offset!");
static_assert(offsetof(BPI_MaterialAnimCore_C_BI_AddMaterial, NoUse) == 0x000008, "Member 'BPI_MaterialAnimCore_C_BI_AddMaterial::NoUse' has a wrong offset!");

}
