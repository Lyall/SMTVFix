#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelSequence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// 0x0002 (0x0002 - 0x0000)
struct FLevelSequenceCameraSettings final
{
public:
	bool                                          bOverrideAspectRatioAxisConstraint;                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAspectRatioAxisConstraint                    AspectRatioAxisConstraint;                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLevelSequenceCameraSettings) == 0x000001, "Wrong alignment on FLevelSequenceCameraSettings");
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x000002, "Wrong size on FLevelSequenceCameraSettings");
static_assert(offsetof(FLevelSequenceCameraSettings, bOverrideAspectRatioAxisConstraint) == 0x000000, "Member 'FLevelSequenceCameraSettings::bOverrideAspectRatioAxisConstraint' has a wrong offset!");
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x000001, "Member 'FLevelSequenceCameraSettings::AspectRatioAxisConstraint' has a wrong offset!");

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001 (0x0001 - 0x0000)
struct FBoundActorProxy final
{
public:
	uint8                                         Pad_2119[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBoundActorProxy) == 0x000001, "Wrong alignment on FBoundActorProxy");
static_assert(sizeof(FBoundActorProxy) == 0x000001, "Wrong size on FBoundActorProxy");

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// 0x0030 (0x0030 - 0x0000)
struct FLevelSequenceAnimSequenceLinkItem final
{
public:
	struct FGuid                                  SkelTrackGuid;                                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        PathToAnimSequence;                                // 0x0010(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportTransforms;                                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bExportCurves;                                     // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecordInWorldSpace;                               // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_211A[0x5];                                     // 0x002B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelSequenceAnimSequenceLinkItem) == 0x000008, "Wrong alignment on FLevelSequenceAnimSequenceLinkItem");
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x000030, "Wrong size on FLevelSequenceAnimSequenceLinkItem");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x000000, "Member 'FLevelSequenceAnimSequenceLinkItem::SkelTrackGuid' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x000010, "Member 'FLevelSequenceAnimSequenceLinkItem::PathToAnimSequence' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportTransforms) == 0x000028, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportTransforms' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportCurves) == 0x000029, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportCurves' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bRecordInWorldSpace) == 0x00002A, "Member 'FLevelSequenceAnimSequenceLinkItem::bRecordInWorldSpace' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038 (0x0038 - 0x0000)
struct FLevelSequenceBindingReference final
{
public:
	class FString                                 PackageName;                                       // 0x0000(0x0010)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                        ExternalObjectPath;                                // 0x0010(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 ObjectPath;                                        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLevelSequenceBindingReference) == 0x000008, "Wrong alignment on FLevelSequenceBindingReference");
static_assert(sizeof(FLevelSequenceBindingReference) == 0x000038, "Wrong size on FLevelSequenceBindingReference");
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x000000, "Member 'FLevelSequenceBindingReference::PackageName' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x000010, "Member 'FLevelSequenceBindingReference::ExternalObjectPath' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x000028, "Member 'FLevelSequenceBindingReference::ObjectPath' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010 (0x0010 - 0x0000)
struct FLevelSequenceBindingReferenceArray final
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLevelSequenceBindingReferenceArray) == 0x000008, "Wrong alignment on FLevelSequenceBindingReferenceArray");
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x000010, "Wrong size on FLevelSequenceBindingReferenceArray");
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x000000, "Member 'FLevelSequenceBindingReferenceArray::References' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0 (0x00A0 - 0x0000)
struct FLevelSequenceBindingReferences final
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0000(0x0050)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                            AnimSequenceInstances;                             // 0x0050(0x0050)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLevelSequenceBindingReferences) == 0x000008, "Wrong alignment on FLevelSequenceBindingReferences");
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x0000A0, "Wrong size on FLevelSequenceBindingReferences");
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x000000, "Member 'FLevelSequenceBindingReferences::BindingIdToReferences' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReferences, AnimSequenceInstances) == 0x000050, "Member 'FLevelSequenceBindingReferences::AnimSequenceInstances' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FLevelSequenceObjectReferenceMap final
{
public:
	uint8                                         Pad_211B[0x50];                                    // 0x0000(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelSequenceObjectReferenceMap) == 0x000008, "Wrong alignment on FLevelSequenceObjectReferenceMap");
static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x000050, "Wrong size on FLevelSequenceObjectReferenceMap");

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FLevelSequenceLegacyObjectReference final
{
public:
	uint8                                         Pad_211C[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelSequenceLegacyObjectReference) == 0x000008, "Wrong alignment on FLevelSequenceLegacyObjectReference");
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x000020, "Wrong size on FLevelSequenceLegacyObjectReference");

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038 (0x0038 - 0x0000)
struct FLevelSequenceObject final
{
public:
	TLazyObjectPtr<class UObject>                 ObjectOrOwner;                                     // 0x0000(0x001C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_211D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ComponentName;                                     // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                 CachedComponent;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLevelSequenceObject) == 0x000008, "Wrong alignment on FLevelSequenceObject");
static_assert(sizeof(FLevelSequenceObject) == 0x000038, "Wrong size on FLevelSequenceObject");
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x000000, "Member 'FLevelSequenceObject::ObjectOrOwner' has a wrong offset!");
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x000020, "Member 'FLevelSequenceObject::ComponentName' has a wrong offset!");
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x000030, "Member 'FLevelSequenceObject::CachedComponent' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C (0x000C - 0x0000)
struct FLevelSequenceSnapshotSettings final
{
public:
	uint8                                         ZeroPadAmount;                                     // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_211E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameRate                             FrameRate;                                         // 0x0004(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLevelSequenceSnapshotSettings) == 0x000004, "Wrong alignment on FLevelSequenceSnapshotSettings");
static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x00000C, "Wrong size on FLevelSequenceSnapshotSettings");
static_assert(offsetof(FLevelSequenceSnapshotSettings, ZeroPadAmount) == 0x000000, "Member 'FLevelSequenceSnapshotSettings::ZeroPadAmount' has a wrong offset!");
static_assert(offsetof(FLevelSequenceSnapshotSettings, FrameRate) == 0x000004, "Member 'FLevelSequenceSnapshotSettings::FrameRate' has a wrong offset!");

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00B8 (0x00B8 - 0x0000)
struct FLevelSequencePlayerSnapshot final
{
public:
	class FString                                 MasterName;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    MasterTime;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    SourceTime;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CurrentShotName;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    CurrentShotLocalTime;                              // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    CurrentShotSourceTime;                             // 0x0050(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourceTimecode;                                    // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCameraComponent>        CameraComponent;                                   // 0x0070(0x0028)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceSnapshotSettings         Settings;                                          // 0x0098(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_211F[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         ActiveShot;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                  ShotID;                                            // 0x00B0(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2120[0x4];                                     // 0x00B4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLevelSequencePlayerSnapshot) == 0x000008, "Wrong alignment on FLevelSequencePlayerSnapshot");
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x0000B8, "Wrong size on FLevelSequencePlayerSnapshot");
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x000000, "Member 'FLevelSequencePlayerSnapshot::MasterName' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x000010, "Member 'FLevelSequencePlayerSnapshot::MasterTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x000020, "Member 'FLevelSequencePlayerSnapshot::SourceTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x000030, "Member 'FLevelSequencePlayerSnapshot::CurrentShotName' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x000040, "Member 'FLevelSequencePlayerSnapshot::CurrentShotLocalTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x000050, "Member 'FLevelSequencePlayerSnapshot::CurrentShotSourceTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x000060, "Member 'FLevelSequencePlayerSnapshot::SourceTimecode' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x000070, "Member 'FLevelSequencePlayerSnapshot::CameraComponent' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, Settings) == 0x000098, "Member 'FLevelSequencePlayerSnapshot::Settings' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x0000A8, "Member 'FLevelSequencePlayerSnapshot::ActiveShot' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x0000B0, "Member 'FLevelSequencePlayerSnapshot::ShotID' has a wrong offset!");

}

