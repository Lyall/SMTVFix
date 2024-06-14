#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialShaderQualitySettings

#include "Basic.hpp"

#include "MaterialShaderQualitySettings_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (0x0078 - 0x0028)
class UMaterialShaderQualitySettings final : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                 // 0x0028(0x0050)(NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialShaderQualitySettings">();
	}
	static class UMaterialShaderQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialShaderQualitySettings>();
	}
};
static_assert(alignof(UMaterialShaderQualitySettings) == 0x000008, "Wrong alignment on UMaterialShaderQualitySettings");
static_assert(sizeof(UMaterialShaderQualitySettings) == 0x000078, "Wrong size on UMaterialShaderQualitySettings");
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x000028, "Member 'UMaterialShaderQualitySettings::ForwardSettingMap' has a wrong offset!");

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0038 (0x0060 - 0x0028)
class UShaderPlatformQualitySettings final : public UObject
{
public:
	struct FMaterialQualityOverrides              QualityOverrides[0x4];                             // 0x0028(0x0009)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E1B[0x14];                                    // 0x004C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ShaderPlatformQualitySettings">();
	}
	static class UShaderPlatformQualitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShaderPlatformQualitySettings>();
	}
};
static_assert(alignof(UShaderPlatformQualitySettings) == 0x000008, "Wrong alignment on UShaderPlatformQualitySettings");
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x000060, "Wrong size on UShaderPlatformQualitySettings");
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x000028, "Member 'UShaderPlatformQualitySettings::QualityOverrides' has a wrong offset!");

}

