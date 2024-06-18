#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropertyPath

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PropertyPath.PropertyPathSegment
// 0x0028 (0x0028 - 0x0000)
struct FPropertyPathSegment final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArrayIndex;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24E0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStruct*                                Struct;                                            // 0x0010(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_24E1[0x10];                                    // 0x0018(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPropertyPathSegment) == 0x000008, "Wrong alignment on FPropertyPathSegment");
static_assert(sizeof(FPropertyPathSegment) == 0x000028, "Wrong size on FPropertyPathSegment");
static_assert(offsetof(FPropertyPathSegment, Name) == 0x000000, "Member 'FPropertyPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, ArrayIndex) == 0x000008, "Member 'FPropertyPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FPropertyPathSegment, Struct) == 0x000010, "Member 'FPropertyPathSegment::Struct' has a wrong offset!");

// ScriptStruct PropertyPath.CachedPropertyPath
// 0x0028 (0x0028 - 0x0000)
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>           Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_24E2[0x8];                                     // 0x0010(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFunction*                              CachedFunction;                                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_24E3[0x8];                                     // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedPropertyPath) == 0x000008, "Wrong alignment on FCachedPropertyPath");
static_assert(sizeof(FCachedPropertyPath) == 0x000028, "Wrong size on FCachedPropertyPath");
static_assert(offsetof(FCachedPropertyPath, Segments) == 0x000000, "Member 'FCachedPropertyPath::Segments' has a wrong offset!");
static_assert(offsetof(FCachedPropertyPath, CachedFunction) == 0x000018, "Member 'FCachedPropertyPath::CachedFunction' has a wrong offset!");

}

