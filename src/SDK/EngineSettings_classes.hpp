#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EngineSettings

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "EngineSettings_structs.hpp"


namespace SDK
{

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings final : public UObject
{
public:
	int32                                         MaxScrollbackSize;                                 // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E75[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAutoCompleteCommand>           ManualAutoCompleteList;                            // 0x0030(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         AutoCompleteMapPaths;                              // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                         BackgroundOpacityPercentage;                       // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOrderTopToBottom;                                 // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayHelpInAutoComplete;                        // 0x0055(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E76[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 InputColor;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 HistoryColor;                                      // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteCommandColor;                          // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteCVarColor;                             // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 AutoCompleteFadedColor;                            // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E77[0x4];                                     // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleSettings">();
	}
	static class UConsoleSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleSettings>();
	}
};
static_assert(alignof(UConsoleSettings) == 0x000008, "Wrong alignment on UConsoleSettings");
static_assert(sizeof(UConsoleSettings) == 0x000070, "Wrong size on UConsoleSettings");
static_assert(offsetof(UConsoleSettings, MaxScrollbackSize) == 0x000028, "Member 'UConsoleSettings::MaxScrollbackSize' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 0x000030, "Member 'UConsoleSettings::ManualAutoCompleteList' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 0x000040, "Member 'UConsoleSettings::AutoCompleteMapPaths' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, BackgroundOpacityPercentage) == 0x000050, "Member 'UConsoleSettings::BackgroundOpacityPercentage' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, bOrderTopToBottom) == 0x000054, "Member 'UConsoleSettings::bOrderTopToBottom' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, bDisplayHelpInAutoComplete) == 0x000055, "Member 'UConsoleSettings::bDisplayHelpInAutoComplete' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, InputColor) == 0x000058, "Member 'UConsoleSettings::InputColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, HistoryColor) == 0x00005C, "Member 'UConsoleSettings::HistoryColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 0x000060, "Member 'UConsoleSettings::AutoCompleteCommandColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 0x000064, "Member 'UConsoleSettings::AutoCompleteCVarColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 0x000068, "Member 'UConsoleSettings::AutoCompleteFadedColor' has a wrong offset!");

// Class EngineSettings.GameMapsSettings
// 0x00C8 (0x00F0 - 0x0028)
class UGameMapsSettings final : public UObject
{
public:
	class FString                                 LocalMapOptions;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        TransitionMap;                                     // 0x0038(0x0018)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSplitscreen;                                   // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETwoPlayerSplitScreenType                     TwoPlayerSplitscreenLayout;                        // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EThreePlayerSplitScreenType                   ThreePlayerSplitscreenLayout;                      // 0x0052(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFourPlayerSplitScreenType                    FourPlayerSplitscreenLayout;                       // 0x0053(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOffsetPlayerGamepadIds;                           // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E78[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         GameInstanceClass;                                 // 0x0058(0x0018)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        GameDefaultMap;                                    // 0x0070(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                        ServerDefaultMap;                                  // 0x0088(0x0018)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                         GlobalDefaultGameMode;                             // 0x00A0(0x0018)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftClassPath                         GlobalDefaultServerGameMode;                       // 0x00B8(0x0018)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                  GameModeMapPrefixes;                               // 0x00D0(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)
	TArray<struct FGameModeName>                  GameModeClassAliases;                              // 0x00E0(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate)

public:
	static class UGameMapsSettings* GetGameMapsSettings();

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);

	bool GetSkipAssigningGamepadToPlayer1() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameMapsSettings">();
	}
	static class UGameMapsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameMapsSettings>();
	}
};
static_assert(alignof(UGameMapsSettings) == 0x000008, "Wrong alignment on UGameMapsSettings");
static_assert(sizeof(UGameMapsSettings) == 0x0000F0, "Wrong size on UGameMapsSettings");
static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 0x000028, "Member 'UGameMapsSettings::LocalMapOptions' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 0x000038, "Member 'UGameMapsSettings::TransitionMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, bUseSplitscreen) == 0x000050, "Member 'UGameMapsSettings::bUseSplitscreen' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 0x000051, "Member 'UGameMapsSettings::TwoPlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 0x000052, "Member 'UGameMapsSettings::ThreePlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 0x000053, "Member 'UGameMapsSettings::FourPlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, bOffsetPlayerGamepadIds) == 0x000054, "Member 'UGameMapsSettings::bOffsetPlayerGamepadIds' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 0x000058, "Member 'UGameMapsSettings::GameInstanceClass' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 0x000070, "Member 'UGameMapsSettings::GameDefaultMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 0x000088, "Member 'UGameMapsSettings::ServerDefaultMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 0x0000A0, "Member 'UGameMapsSettings::GlobalDefaultGameMode' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 0x0000B8, "Member 'UGameMapsSettings::GlobalDefaultServerGameMode' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 0x0000D0, "Member 'UGameMapsSettings::GameModeMapPrefixes' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 0x0000E0, "Member 'UGameMapsSettings::GameModeClassAliases' has a wrong offset!");

// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings final : public UObject
{
public:
	int32                                         MinDynamicBandwidth;                               // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDynamicBandwidth;                               // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalNetBandwidth;                                 // 0x0030(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BadPingThreshold;                                  // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsStandbyCheckingEnabled : 1;                     // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E79[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StandbyRxCheatTime;                                // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandbyTxCheatTime;                                // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForRxStandby;                        // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForTxStandby;                        // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentForBadPing;                                 // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JoinInProgressStandbyWaitTime;                     // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E7A[0x4];                                     // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameNetworkManagerSettings">();
	}
	static class UGameNetworkManagerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameNetworkManagerSettings>();
	}
};
static_assert(alignof(UGameNetworkManagerSettings) == 0x000008, "Wrong alignment on UGameNetworkManagerSettings");
static_assert(sizeof(UGameNetworkManagerSettings) == 0x000058, "Wrong size on UGameNetworkManagerSettings");
static_assert(offsetof(UGameNetworkManagerSettings, MinDynamicBandwidth) == 0x000028, "Member 'UGameNetworkManagerSettings::MinDynamicBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, MaxDynamicBandwidth) == 0x00002C, "Member 'UGameNetworkManagerSettings::MaxDynamicBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, TotalNetBandwidth) == 0x000030, "Member 'UGameNetworkManagerSettings::TotalNetBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, BadPingThreshold) == 0x000034, "Member 'UGameNetworkManagerSettings::BadPingThreshold' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyRxCheatTime) == 0x00003C, "Member 'UGameNetworkManagerSettings::StandbyRxCheatTime' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyTxCheatTime) == 0x000040, "Member 'UGameNetworkManagerSettings::StandbyTxCheatTime' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForRxStandby) == 0x000044, "Member 'UGameNetworkManagerSettings::PercentMissingForRxStandby' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForTxStandby) == 0x000048, "Member 'UGameNetworkManagerSettings::PercentMissingForTxStandby' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentForBadPing) == 0x00004C, "Member 'UGameNetworkManagerSettings::PercentForBadPing' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime) == 0x000050, "Member 'UGameNetworkManagerSettings::JoinInProgressStandbyWaitTime' has a wrong offset!");

// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings final : public UObject
{
public:
	int32                                         MaxSpectators;                                     // 0x0028(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPlayers;                                        // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRequiresPushToTalk : 1;                           // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E7B[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameSessionSettings">();
	}
	static class UGameSessionSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSessionSettings>();
	}
};
static_assert(alignof(UGameSessionSettings) == 0x000008, "Wrong alignment on UGameSessionSettings");
static_assert(sizeof(UGameSessionSettings) == 0x000038, "Wrong size on UGameSessionSettings");
static_assert(offsetof(UGameSessionSettings, MaxSpectators) == 0x000028, "Member 'UGameSessionSettings::MaxSpectators' has a wrong offset!");
static_assert(offsetof(UGameSessionSettings, MaxPlayers) == 0x00002C, "Member 'UGameSessionSettings::MaxPlayers' has a wrong offset!");

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralEngineSettings">();
	}
	static class UGeneralEngineSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralEngineSettings>();
	}
};
static_assert(alignof(UGeneralEngineSettings) == 0x000008, "Wrong alignment on UGeneralEngineSettings");
static_assert(sizeof(UGeneralEngineSettings) == 0x000028, "Wrong size on UGeneralEngineSettings");

// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0110 - 0x0028)
class UGeneralProjectSettings final : public UObject
{
public:
	class FString                                 CompanyName;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CompanyDistinguishedName;                          // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CopyrightNotice;                                   // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0058(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Homepage;                                          // 0x0068(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LicensingTerms;                                    // 0x0078(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PrivacyPolicy;                                     // 0x0088(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ProjectID;                                         // 0x0098(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProjectName;                                       // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProjectVersion;                                    // 0x00B8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SupportContact;                                    // 0x00C8(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   ProjectDisplayedTitle;                             // 0x00D8(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                   ProjectDebugTitleInfo;                             // 0x00F0(0x0018)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bShouldWindowPreserveAspectRatio;                  // 0x0108(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseBorderlessWindow;                              // 0x0109(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartInVR;                                        // 0x010A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowWindowResize;                                // 0x010B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowClose;                                       // 0x010C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMaximize;                                    // 0x010D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowMinimize;                                    // 0x010E(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E7C[0x1];                                     // 0x010F(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralProjectSettings">();
	}
	static class UGeneralProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralProjectSettings>();
	}
};
static_assert(alignof(UGeneralProjectSettings) == 0x000008, "Wrong alignment on UGeneralProjectSettings");
static_assert(sizeof(UGeneralProjectSettings) == 0x000110, "Wrong size on UGeneralProjectSettings");
static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 0x000028, "Member 'UGeneralProjectSettings::CompanyName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 0x000038, "Member 'UGeneralProjectSettings::CompanyDistinguishedName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 0x000048, "Member 'UGeneralProjectSettings::CopyrightNotice' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, Description) == 0x000058, "Member 'UGeneralProjectSettings::Description' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 0x000068, "Member 'UGeneralProjectSettings::Homepage' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 0x000078, "Member 'UGeneralProjectSettings::LicensingTerms' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 0x000088, "Member 'UGeneralProjectSettings::PrivacyPolicy' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 0x000098, "Member 'UGeneralProjectSettings::ProjectID' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 0x0000A8, "Member 'UGeneralProjectSettings::ProjectName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 0x0000B8, "Member 'UGeneralProjectSettings::ProjectVersion' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 0x0000C8, "Member 'UGeneralProjectSettings::SupportContact' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 0x0000D8, "Member 'UGeneralProjectSettings::ProjectDisplayedTitle' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 0x0000F0, "Member 'UGeneralProjectSettings::ProjectDebugTitleInfo' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bShouldWindowPreserveAspectRatio) == 0x000108, "Member 'UGeneralProjectSettings::bShouldWindowPreserveAspectRatio' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bUseBorderlessWindow) == 0x000109, "Member 'UGeneralProjectSettings::bUseBorderlessWindow' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bStartInVR) == 0x00010A, "Member 'UGeneralProjectSettings::bStartInVR' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowWindowResize) == 0x00010B, "Member 'UGeneralProjectSettings::bAllowWindowResize' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowClose) == 0x00010C, "Member 'UGeneralProjectSettings::bAllowClose' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowMaximize) == 0x00010D, "Member 'UGeneralProjectSettings::bAllowMaximize' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowMinimize) == 0x00010E, "Member 'UGeneralProjectSettings::bAllowMinimize' has a wrong offset!");

// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings final : public UObject
{
public:
	uint8                                         bShowHUD : 1;                                      // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E7D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           DebugDisplay;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HudSettings">();
	}
	static class UHudSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudSettings>();
	}
};
static_assert(alignof(UHudSettings) == 0x000008, "Wrong alignment on UHudSettings");
static_assert(sizeof(UHudSettings) == 0x000040, "Wrong size on UHudSettings");
static_assert(offsetof(UHudSettings, DebugDisplay) == 0x000030, "Member 'UHudSettings::DebugDisplay' has a wrong offset!");

}

