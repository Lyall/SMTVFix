#include "stdafx.h"
#include "helper.hpp"

#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

// UE4 SDK
#include "SDK/Engine_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/ProjectPlayerCameraManager_classes.hpp"
#include "SDK/WBP_LogoScreen_classes.hpp"
#include "SDK/WBP_EventMovie_classes.hpp"
#include "SDK/WB_ScreenFade_classes.hpp"
#include "SDK/WB_ScreenTransition_classes.hpp"
#include "SDK/WB_EventColorFade_classes.hpp"
#include "SDK/WB_Loading_classes.hpp"
#include "SDK/WB_EncountScene_classes.hpp"
#include "SDK/WB_MsgWindow_classes.hpp"
#include "SDK/WB_MsgSelectMenu_classes.hpp"
#include "SDK/SpriteStudio6_classes.hpp"

HMODULE baseModule = GetModuleHandle(NULL);

// Version
std::string sFixName = "SMTVFix";
std::string sFixVer = "0.9.8";
std::string sLogFile = sFixName + ".log";

// Logger
std::shared_ptr<spdlog::logger> logger;
std::filesystem::path sExePath;
std::string sExeName;

// Ini
inipp::Ini<char> ini;
std::string sConfigFile = sFixName + ".ini";
std::pair DesktopDimensions = { 0,0 };

// Ini variables
bool bFixAspect;
bool bFixHUD;
bool bFixFOV;
bool bFixBattleTransition;
bool bIntroSkip;
bool bIntroSkipMovie;
bool bEnableConsole;
bool bDisableMenuFPSCap;
bool bEnableTAA;
bool bEnableGen5TAAU;
bool bScreenPercentage;
float fScreenPercentage = 100.0f;
bool bAdjustCam;
float fAdjustDist;
float fAdjustFOV;
float fAdjustHeight;
bool bForceMovieRes;
bool bPauseOnFocusLoss;
bool bShadowQuality;
int iShadowResolution;
bool bEnableGTAO;
bool bGTAOHalfRes;
bool bAdjustLOD;
float fFoliageDistanceScale;
float fViewDistanceScale;
int iSSAOLevel;
bool bEnableSSGI;
int iSSGIQuality;
bool bHalfResSSGI;
bool bVignette;
bool bUROEnabled;
std::vector<std::pair<std::string, std::string>> sCustomCVars;

// Aspect ratio + HUD stuff
float fPi = (float)3.141592653;
float fAspectRatio;
float fNativeAspect = (float)16 / 9;
float fAspectMultiplier;
float fHUDWidth;
float fHUDHeight;
float fHUDWidthOffset;
float fHUDHeightOffset;

// Variables
int iCurrentResX;
int iCurrentResY;
int iOldResX;
int iOldResY;
bool bCachedConsoleObjects = false;
SDK::UWBP_EventMovie_C* EventMovie = nullptr;
LPCWSTR sWindowClassName = L"UnrealWindow";

// CVAR addresses
SDK::TMap<SDK::FString, Unreal::FConsoleObject*> ConsoleObjects;

SafetyHookInline RenTexPostLoad{};
void* RenTexPostLoad_Hooked(uint8_t* thisptr)
{
    auto renTex = (SDK::UTextureRenderTarget2D*)thisptr;

    spdlog::info("Render Texture 2D Resolution: {}: Old render texture resolution = {}x{}", renTex->GetName(), renTex->SizeX, renTex->SizeY);

    if (bFixBattleTransition)
    {
        renTex->SizeX = DesktopDimensions.first;
        renTex->SizeY = DesktopDimensions.second;
        spdlog::info("Render Texture 2D Resolution: {}: New render texture resolution = {}x{}", renTex->GetName(), renTex->SizeX, renTex->SizeY);
    }

    // Run original function
    return RenTexPostLoad.stdcall<void*>(thisptr);
}

void CalculateAspectRatio()
{
    // Get r.ScreenPercentage
    if (bCachedConsoleObjects) {
        SDK::IConsoleVariable* ScreenPercentageCVAR = Unreal::FindCVAR("r.ScreenPercentage", ConsoleObjects);

        if (bScreenPercentage && ScreenPercentageCVAR->GetFloat() != fScreenPercentage) {
            ScreenPercentageCVAR->SetFlags(SDK::ECVF_SetByConstructor);
            ScreenPercentageCVAR->Set(std::to_wstring(fScreenPercentage).c_str());
            spdlog::info("Set CVARS: Set r.ScreenPercentage to {}", ScreenPercentageCVAR->GetFloat());
        }

        if (ScreenPercentageCVAR) {
            fScreenPercentage = ScreenPercentageCVAR->GetFloat();
        }
        else {
            spdlog::error("Current Resolution: Failed to retrieve r.ScreenPercentage CVAR value. Assuming r.ScreenPercentage = 100");
            fScreenPercentage = 100.0f;
        }
    }

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD variables
    fHUDWidth = iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2;
    fHUDHeightOffset = 0;
    if (fAspectRatio < fNativeAspect) {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2;
    }

    // Log details about current resolution
    spdlog::info("----------");
    spdlog::info("Current Resolution: Base Resolution: {}x{}", iCurrentResX, iCurrentResY);
    spdlog::info("Current Resolution: Screen Percentage: {}", fScreenPercentage);
    spdlog::info("Current Resolution: Scaled Resolution: {}x{}", iCurrentResX * (fScreenPercentage / 100), iCurrentResY * (fScreenPercentage / 100));
    spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
    spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
    spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
    spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
    spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
    spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
    spdlog::info("----------");
}

void Logging()
{
    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(baseModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // spdlog initialisation
    {
        try {
            logger = spdlog::basic_logger_st(sFixName.c_str(), sExePath.string() + sLogFile, true);
            spdlog::set_default_logger(logger);

            spdlog::flush_on(spdlog::level::debug);
            spdlog::info("----------");
            spdlog::info("{} v{} loaded.", sFixName.c_str(), sFixVer.c_str());
            spdlog::info("----------");
            spdlog::info("Path to logfile: {}", sExePath.string() + sLogFile);
            spdlog::info("----------");

            // Log module details
            spdlog::info("Module Name: {0:s}", sExeName.c_str());
            spdlog::info("Module Path: {0:s}", sExePath.string());
            spdlog::info("Module Address: 0x{0:x}", (uintptr_t)baseModule);
            spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(baseModule));
            spdlog::info("----------");
        }
        catch (const spdlog::spdlog_ex& ex) {
            AllocConsole();
            FILE* dummy;
            freopen_s(&dummy, "CONOUT$", "w", stdout);
            std::cout << "Log initialisation failed: " << ex.what() << std::endl;
            FreeLibraryAndExitThread(baseModule, 1);
        }
    }
}

void ReadConfig()
{
    // Initialise config
    std::ifstream iniFile(sExePath.string() + sConfigFile);
    if (!iniFile) {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVer.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sExePath.string().c_str() << std::endl;
        FreeLibraryAndExitThread(baseModule, 1);
    }
    else {
        spdlog::info("Path to config file: {}", sExePath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Read ini file
    ini.strip_trailing_comments();
    inipp::get_value(ini.sections["Intro Skip"], "Enabled", bIntroSkip);
    inipp::get_value(ini.sections["Intro Skip"], "SkipMovie", bIntroSkipMovie);
    inipp::get_value(ini.sections["Enable Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Remove 60FPS Cap"], "Enabled", bDisableMenuFPSCap);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Fix Battle Transition"], "Enabled", bFixBattleTransition);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Enabled", bAdjustCam);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Distance", fAdjustDist);
    inipp::get_value(ini.sections["Adjust Player Camera"], "FOV", fAdjustFOV);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Height", fAdjustHeight);
    inipp::get_value(ini.sections["Force 4K Movies"], "Enabled", bForceMovieRes);
    inipp::get_value(ini.sections["Pause on Focus Loss"], "Enabled", bPauseOnFocusLoss);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", fScreenPercentage);
    inipp::get_value(ini.sections["Enable TAA"], "Enabled", bEnableTAA);
    inipp::get_value(ini.sections["Enable TAA"], "TAAU_Gen5", bEnableGen5TAAU);
    inipp::get_value(ini.sections["Shadow Quality"], "Enabled", bShadowQuality);
    inipp::get_value(ini.sections["Shadow Quality"], "Resolution", iShadowResolution);
    inipp::get_value(ini.sections["Level of Detail"], "Enabled", bAdjustLOD);
    inipp::get_value(ini.sections["Level of Detail"], "Foliage", fFoliageDistanceScale);
    inipp::get_value(ini.sections["Level of Detail"], "ViewDistance", fViewDistanceScale);
    inipp::get_value(ini.sections["Ambient Occlusion Quality"], "Levels", iSSAOLevel);
    inipp::get_value(ini.sections["GTAO Ambient Occlusion"], "Enabled", bEnableGTAO);
    inipp::get_value(ini.sections["GTAO Ambient Occlusion"], "HalfRes", bGTAOHalfRes);
    inipp::get_value(ini.sections["SSGI"], "Enabled", bEnableSSGI);
    inipp::get_value(ini.sections["SSGI"], "Quality", iSSGIQuality);
    inipp::get_value(ini.sections["SSGI"], "HalfRes", bHalfResSSGI);
    inipp::get_value(ini.sections["Vignette"], "Enabled", bVignette);
    inipp::get_value(ini.sections["Update Rate Optimizations"], "Enabled", bUROEnabled);
    auto it = ini.sections.find("Custom CVars");
    if (it != ini.sections.end()) {
        for (const auto& pair : it->second) {
            sCustomCVars.emplace_back(pair.first, pair.second);
        }
    }

    // Log config parse
    spdlog::info("Config Parse: bIntroSkip: {}", bIntroSkip);
    spdlog::info("Config Parse: bIntroSkipMovie: {}", bIntroSkipMovie);
    spdlog::info("Config Parse: bEnableConsole: {}", bEnableConsole);
    spdlog::info("Config Parse: bDisableMenuFPSCap: {}", bDisableMenuFPSCap);
    spdlog::info("Config Parse: bFixAspect: {}", bFixAspect);
    spdlog::info("Config Parse: bFixHUD: {}", bFixHUD);
    spdlog::info("Config Parse: bFixFOV: {}", bFixFOV);
    spdlog::info("Config Parse: bFixBattleTransition: {}", bFixBattleTransition);
    spdlog::info("Config Parse: bAdjustCam: {}", bAdjustCam);
    spdlog::info("Config Parse: fAdjustFOV: {}", fAdjustFOV);
    if (fAdjustFOV < (float)1 || fAdjustFOV >(float)180)
    {
        fAdjustFOV = std::clamp(fAdjustFOV, (float)1, (float)180);
        spdlog::warn("Config Parse: fAdjustFOV value invalid, clamped to {}", fAdjustFOV);
    }
    spdlog::info("Config Parse: fAdjustDist: {}", fAdjustDist);
    if (fAdjustDist < (float)1 || fAdjustDist >(float)10000)
    {
        fAdjustDist = std::clamp(fAdjustDist, (float)1, (float)10000);
        spdlog::warn("Config Parse: fAdjustDist value invalid, clamped to {}", fAdjustDist);
    }
    spdlog::info("Config Parse: fAdjustHeight: {}", fAdjustHeight);
    if (fAdjustHeight < (float)1 || fAdjustHeight >(float)10000)
    {
        fAdjustHeight = std::clamp(fAdjustHeight, (float)1, (float)10000);
        spdlog::warn("Config Parse: fAdjustHeight value invalid, clamped to {}", fAdjustHeight);
    }
    spdlog::info("Config Parse: bForceMovieRes: {}", bForceMovieRes);
    spdlog::info("Config Parse: bPauseOnFocusLoss: {}", bPauseOnFocusLoss);
    spdlog::info("Config Parse: bScreenPercentage: {}", bScreenPercentage);
    spdlog::info("Config Parse: fScreenPercentage: {}", fScreenPercentage);
    if (fScreenPercentage < (float)10 || fScreenPercentage >(float)400)
    {
        fScreenPercentage = std::clamp(fScreenPercentage, (float)10, (float)400);
        spdlog::warn("Config Parse: fScreenPercentage value invalid, clamped to {}", fScreenPercentage);
    }
    spdlog::info("Config Parse: bEnableTAA: {}", bEnableTAA);
    spdlog::info("Config Parse: bEnableGen5TAAU: {}", bEnableGen5TAAU);
    spdlog::info("Config Parse: bShadowQuality: {}", bShadowQuality);
    iShadowResolution = ((iShadowResolution + 127) / 128) * 128; // Round up to a multiple of 128
    spdlog::info("Config Parse: iShadowResolution: {}", iShadowResolution);
    if (iShadowResolution < 256 || iShadowResolution > 8192)  // Shadows break over 8192
    {
        iShadowResolution = std::clamp(iShadowResolution, 256, 8192);
        spdlog::warn("Config Parse: iShadowResolution value invalid, clamped to {}", iShadowResolution);
    }
    spdlog::info("Config Parse: bAdjustLOD: {}", bAdjustLOD);
    spdlog::info("Config Parse: fViewDistanceScale: {}", fViewDistanceScale);
    if (fViewDistanceScale < (float)1 || fViewDistanceScale >(float)10)
    {
        fViewDistanceScale = std::clamp(fViewDistanceScale, (float)1, (float)10);
        spdlog::warn("Config Parse: fViewDistanceScale value invalid, clamped to {}", fViewDistanceScale);
    }
    spdlog::info("Config Parse: fFoliageDistanceScale: {}", fFoliageDistanceScale);
    if (fFoliageDistanceScale < (float)1 || fFoliageDistanceScale >(float)10)
    {
        fFoliageDistanceScale = std::clamp(fFoliageDistanceScale, (float)1, (float)10);
        spdlog::warn("Config Parse: fFoliageDistanceScale value invalid, clamped to {}", fFoliageDistanceScale);
    }
    spdlog::info("Config Parse: bEnableGTAO: {}", bEnableGTAO);
    spdlog::info("Config Parse: bGTAOHalfRes: {}", bGTAOHalfRes);
    spdlog::info("Config Parse: iSSAOLevel: {}", iSSAOLevel);
    if (iSSAOLevel < -1 || iSSAOLevel > 3)
    {
        iSSAOLevel = std::clamp(iSSAOLevel, -1, 3);
        spdlog::warn("Config Parse: iSSAOLevel value invalid, clamped to {}", iSSAOLevel);
    }
    spdlog::info("Config Parse: bEnableSSGI: {}", bEnableSSGI);
    spdlog::info("Config Parse: iSSGIQuality: {}", iSSGIQuality);
    if (iSSGIQuality < 1 || iSSGIQuality > 4)
    {
        iSSGIQuality = std::clamp(iSSGIQuality, 1, 4);
        spdlog::warn("Config Parse: iSSGIQuality value invalid, clamped to {}", iSSGIQuality);
    }
    spdlog::info("Config Parse: bHalfResSSGI: {}", bHalfResSSGI);
    spdlog::info("Config Parse: bVignette: {}", bVignette);
    spdlog::info("Config Parse: bUROEnabled: {}", bUROEnabled);
    for (const auto& cvar : sCustomCVars) {
        spdlog::info("Config Parse: CustomCVars: {} = {}", cvar.first, cvar.second);
    }
    spdlog::info("----------");

    // Grab desktop resolution/aspect
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;

    // Calculate aspect ratio based on desktop resolution before we read it from the game
    CalculateAspectRatio();
}

void UpdateOffsets()
{
    // GObjects
    uint8_t* GObjectsScanResult = Memory::PatternScan(baseModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ?? 8B ?? ?? C1 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)GObjectsScanResult - (uintptr_t)baseModule);
        uintptr_t GObjectsAddr = Memory::GetAbsolute((uintptr_t)GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = (uintptr_t)GObjectsAddr - (uintptr_t)baseModule;
        spdlog::info("Offsets: GObjects: Offset: {:x}", SDK::Offsets::GObjects);
    }
    else if (!GObjectsScanResult) {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // AppendString
    uint8_t* AppendStringScanResult = Memory::PatternScan(baseModule, "48 89 ?? ?? ?? 48 89 ?? ?? ?? 57 48 83 ?? ?? 8B ?? 48 8B ?? 8B ?? 44 0F ?? ?? C1 ?? 10 48 8B ?? 80 3D ?? ?? ?? ?? 00 89 ?? ?? ?? 44 89 ?? ?? ?? 74 ?? 4C 8D ?? ?? ?? ?? ?? EB ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C ?? ?? C6 ?? ?? ?? ?? ?? 01 48 8B ?? ?? ?? 48 8B ?? 48 ?? ?? ?? 8D ?? ?? 49 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 ?? ?? 00");
    if (AppendStringScanResult) {
        spdlog::info("Offsets: AppendString: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AppendStringScanResult - (uintptr_t)baseModule);
        SDK::Offsets::AppendString = (uintptr_t)AppendStringScanResult - (uintptr_t)baseModule;
        spdlog::info("Offsets: AppendString: Offset: {:x}", SDK::Offsets::AppendString);
    }
    else if (!AppendStringScanResult) {
        spdlog::error("Offsets: AppendString: Pattern scan failed.");
    }

    // ProcessEvent
    uint8_t* ProcessEventScanResult = Memory::PatternScan(baseModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 8B ?? ?? 45 33 ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ProcessEventScanResult - (uintptr_t)baseModule);
        SDK::Offsets::ProcessEvent = (uintptr_t)ProcessEventScanResult - (uintptr_t)baseModule;
        spdlog::info("Offsets: ProcessEvent: Offset: {:x}", SDK::Offsets::ProcessEvent);
    }
    else if (!ProcessEventScanResult) {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void CurrentResolution()
{
    // Get current resolution
    uint8_t* CurrResolutionScanResult = Memory::PatternScan(baseModule, "89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 44 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? 44 ?? ?? ??");
    if (CurrResolutionScanResult)
    {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CurrResolutionScanResult - (uintptr_t)baseModule);

        static SafetyHookMid CurrResolutionMidHook{};
        CurrResolutionMidHook = safetyhook::create_mid(CurrResolutionScanResult,
            [](SafetyHookContext& ctx)
            {
                // Get ResX and ResY
                int iResX = (int)ctx.r9;
                int iResY = (int)ctx.rcx;

                // Only log on resolution change.
                if (iResX != iCurrentResX || iResY != iCurrentResY)
                {
                    iCurrentResX = iResX;
                    iCurrentResY = iResY;
                    CalculateAspectRatio();
                }
            });
    }
    else if (!CurrResolutionScanResult)
    {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void GetCVARs()
{
    // Get console objects
    uint8_t* ConsoleManagerSingletonScanResult = Memory::PatternScan(baseModule, "48 83 ?? ?? 48 83 3D ?? ?? ?? ?? 00 0F 85 ?? ?? ?? ?? B9 ?? ?? ?? ?? 48 89 ?? ?? ?? E8 ?? ?? ?? ?? 48 ?? ?? 48 ?? ??");
    if (ConsoleManagerSingletonScanResult) {
        spdlog::info("Console CVARs: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ConsoleManagerSingletonScanResult - (uintptr_t)baseModule);
        uintptr_t singletonAddr = Memory::GetAbsolute((uintptr_t)ConsoleManagerSingletonScanResult + 0x7) + 0x1;
        spdlog::info("Console CVARs: IConsoleManager singleton address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)singletonAddr - (uintptr_t)baseModule);

        int i = 0;
        while (!*(uintptr_t*)singletonAddr)
        {
            i++;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));

            if (i == 100) { // 10s
                spdlog::info("Console CVARs: Failed to find singleton adddress.");
                return;
            }
        }

        // Cache all console objects
        ConsoleObjects = Unreal::GetConsoleObjects(singletonAddr);

        if (ConsoleObjects.Num() != 0) {
            bCachedConsoleObjects = true;
            spdlog::info("Console CVARs: Cached all console objects.");
        }
        else {
            spdlog::error("Console CVARs: ConsoleObjects TMap is not valid.");
        }
    }
    else if (!ConsoleManagerSingletonScanResult) {
        spdlog::error("Console CVARs: Pattern scan failed.");
    }

    // Apply custom cvars from ini
    for (const auto& cvar : sCustomCVars) {
        auto consoleVariable = Unreal::FindCVAR(cvar.first, ConsoleObjects);
        if (consoleVariable) {
            // Convert to wstring
            std::wstring wValue(cvar.second.begin(), cvar.second.end());
            // Set value
            consoleVariable->Set(wValue.c_str());
            spdlog::info("Custom CVars: Set {} to {}", cvar.first, consoleVariable->GetString().ToString());
        }
        else {
            spdlog::info("Custom CVars: Failed to find {}", cvar.first);
        }
    }
}

void AspectFOV()
{
    if (bFixFOV)
    {
        // Field of View
        uint8_t* FOVScanResult = Memory::PatternScan(baseModule, "E9 ?? ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 45 ?? ?? ??");
        if (FOVScanResult)
        {
            spdlog::info("FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(FOVScanResult + 0xA,
                [](SafetyHookContext& ctx)
                {
                    // Fix vert- FOV when using an ultrawide aspect ratio
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                });
        }
        else if (!FOVScanResult)
        {
            spdlog::error("FOV: Pattern scan failed.");
        }
    }

    if (bAdjustCam)
    {
        // Adjust player camera
        uint8_t* PlayerCameraScanResult = Memory::PatternScan(baseModule, "49 ?? ?? C6 ?? ?? ?? 01 48 ?? ?? F3 0F ?? ?? ?? ?? F3 0F ?? ?? ?? ?? F3 0F ?? ?? ?? ??");
        if (PlayerCameraScanResult)
        {
            spdlog::info("PlayerCamera: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)PlayerCameraScanResult - (uintptr_t)baseModule);

            static SafetyHookMid PlayerCameraMidHook{};
            PlayerCameraMidHook = safetyhook::create_mid(PlayerCameraScanResult,
                [](SafetyHookContext& ctx)
                { 
                    if (ctx.rdi)
                    {
                        SDK::UObject* obj = (SDK::UObject*)ctx.rdi;
                        if (obj->IsA(SDK::AProjectPlayerCameraManager_C::StaticClass()))
                        {
                            SDK::AProjectPlayerCameraManager_C* camManager = (SDK::AProjectPlayerCameraManager_C*)(ctx.rdi);

                            // Check if "Standard" camera angle
                            if (SDK::UBPL_SystemData::GetFOVType() == SDK::E_OPTION_CONTENT_FOV_TYPE::E_OPTION_CONTENT_FOV_TYPE_STANDARD)
                            {
                                camManager->Camera_Standard_Preset.M_CameraDistance = (UC::int32)fAdjustDist;              // Default = 580
                                camManager->Camera_Standard_Preset.M_CameraFOV = (UC::int32)fAdjustFOV;                    // Default = 60
                                camManager->Camera_Standard_Preset.M_CameraRootHeight = (UC::int32)fAdjustHeight;          // Default = 73
                                camManager->SetCameraFOV(SDK::E_OPTION_CONTENT_FOV_TYPE::E_OPTION_CONTENT_FOV_TYPE_STANDARD);
                            }
                        }
                    }
                });
        }
        else if (!PlayerCameraScanResult)
        {
            spdlog::error("PlayerCamera: Pattern scan failed.");
        }
    }

    if (bFixAspect)
    {
        // Aspect Ratio
        uint8_t* AspectRatioScanResult = Memory::PatternScan(baseModule, "74 ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? EB ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B");
        if (AspectRatioScanResult)
        {
            spdlog::info("Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AspectRatioScanResult - (uintptr_t)baseModule);

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioScanResult + 0x27,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)&fAspectRatio;
                });
        }
        else if (!AspectRatioScanResult)
        {
            spdlog::error("Aspect Ratio: Pattern scan failed.");
        }

        // Freecam Aspect Ratio
        uint8_t* FreecamAspectRatioScanResult = Memory::PatternScan(baseModule, "4C 89 ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ??");
        if (FreecamAspectRatioScanResult)
        {
            spdlog::info("Freecam Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FreecamAspectRatioScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FreecamAspectRatioMidHook{};
            FreecamAspectRatioMidHook = safetyhook::create_mid(FreecamAspectRatioScanResult + 0x25,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)&fAspectRatio;
                });
        }
        else if (!FreecamAspectRatioScanResult)
        {
            spdlog::error("Freecam Aspect Ratio: Pattern scan failed.");
        }
    }
}

void HUD()
{
    // Render Texture 2D Resolution
    uint8_t* RenTex2DScanResult = Memory::PatternScan(baseModule, "8B ?? ?? ?? 00 00 44 ?? ?? ?? ?? ?? ?? 41 ?? ?? 8B ?? ?? ?? 00 00 44 ?? ?? ?? 66 ?? ?? ??");
    if (RenTex2DScanResult)
    {
        RenTexPostLoad = safetyhook::create_inline(reinterpret_cast<void*>(RenTex2DScanResult), RenTexPostLoad_Hooked);
        spdlog::info("Render Texture 2D Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RenTex2DScanResult - (uintptr_t)baseModule);
    }
    else if (!RenTex2DScanResult)
    {
        spdlog::error("Render Texture 2D Resolution: Pattern scan failed.");
    }

    if (bFixHUD)
    {
        // Movies - ManaComponent::IsPreparing()
        uint8_t* MoviePrepareScanResult = Memory::PatternScan(baseModule, "48 83 ?? ?? ?? ?? ?? 00 75 ?? 30 C0 C3 0F ?? ?? ?? ?? ?? ?? FE ??");
        if (MoviePrepareScanResult)
        {
            spdlog::info("Movies: Prepare: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MoviePrepareScanResult - (uintptr_t)baseModule);

            static SafetyHookMid MoviePrepareMidHook{};
            MoviePrepareMidHook = safetyhook::create_mid(MoviePrepareScanResult,
                [](SafetyHookContext& ctx)
                {
                    // Get WBP_EventMovie_C
                    int i = 0;
                    while (!EventMovie) {
                        std::this_thread::sleep_for(std::chrono::milliseconds(100));
                        for (int j = 0; j < SDK::UObject::GObjects->Num(); j++) {
                            SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(j);

                            if (!Obj)
                                continue;

                            if (Obj->IsA(SDK::UWBP_EventMovie_C::StaticClass()) && !Obj->IsDefaultObject() && (uintptr_t)Obj != (uintptr_t)EventMovie) {
                                EventMovie = static_cast<SDK::UWBP_EventMovie_C*>(Obj);
                                break;
                            }
                        }

                        i++;
                        if (i == 100) { // 10s
                            spdlog::error("Movies: Prepare: Failed to find WBP_EventMovie_C address.");
                            return;
                        }                       
                    }

                    // Add pillarboxing/letterboxing and scale movies
                    if (EventMovie->IsA(SDK::UWBP_EventMovie_C::StaticClass())) {
                        if (EventMovie->Image_0->RenderTransform.Scale.X == 1.00f && EventMovie->Image_0->RenderTransform.Scale.Y == 1.00f) {
                            spdlog::info("Movies: Prepare: WBP_EventMovie_C address = {:x}", (uintptr_t)EventMovie);
                            auto widgetTree = (SDK::UPanelWidget*)EventMovie->WidgetTree->RootWidget;

                            // Create background image
                            SDK::UObject* imgObj = SDK::UGameplayStatics::SpawnObject(UImage::StaticClass(), UImage::StaticClass()->Outer);
                            auto bgImg = static_cast<SDK::UImage*>(imgObj);

                            // Set brush to black
                            bgImg->Brush.TintColor = SDK::FSlateColor(SDK::FLinearColor(0.00f, 0.00f, 0.00f, 1.00f));

                            // Add background image widget as child of movie widget
                            widgetTree->AddChild(bgImg);

                            // Fill screen with background image and set z-order so it's behind the movie texture
                            auto Slot = static_cast<SDK::UCanvasPanelSlot*>(bgImg->Slot);
                            if (Slot) {
                                Slot->SetAnchors(SDK::FAnchors(SDK::FVector2D(0.00f, 0), SDK::FVector2D(1.00f, 1.00f)));
                                Slot->SetOffsets(SDK::FMargin(0.00f, 0.00f, 0.00f, 0.00f));
                                Slot->SetZOrder(-1000);
                            }

                            // Rescale movie texture
                            if (fAspectRatio > fNativeAspect) {
                                EventMovie->Image_0->SetRenderScale(SDK::FVector2D(1.00f / fAspectMultiplier, 1.00f));
                            }
                            else if (fAspectRatio < fNativeAspect) {
                                EventMovie->Image_0->SetRenderScale(SDK::FVector2D(1.00f, 1.00f * fAspectMultiplier));
                            }
                        }
                    } else {
                        spdlog::error("Movies: Prepare: Not a valid WBP_EventMovie_C address.");
                    }
                });
        }
        else if (!MoviePrepareScanResult)
        {
            spdlog::error("Movies: Prepare: Pattern scan failed.");
        }

        // Movies - ManaComponent::Stop()
        uint8_t* MovieStopScanResult = Memory::PatternScan(baseModule, "40 ?? 48 83 ?? ?? 48 8B ?? 48 8B ?? ?? ?? ?? ?? 48 85 ?? 0F 84 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ??");
        if (MovieStopScanResult)
        {
            spdlog::info("Movies: Stop: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MovieStopScanResult - (uintptr_t)baseModule);

            static SafetyHookMid MoviePlayMidHook{};
            MoviePlayMidHook = safetyhook::create_mid(MovieStopScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (EventMovie != nullptr) {
                        EventMovie = nullptr;
                        spdlog::info("Movies: Stop: Movie stopped.");
                    }
                });
        }
        else if (!MovieStopScanResult)
        {
            spdlog::error("Movies: Stop: Pattern scan failed.");
        }

        // Fix offset markers (i.e speech bubbles etc)
        uint8_t* MarkersScanResult = Memory::PatternScan(baseModule, "0F ?? ?? 66 ?? ?? ?? 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? 4C");
        if (MarkersScanResult)
        {
            spdlog::info("HUD: Markers: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MarkersScanResult - (uintptr_t)baseModule);

            static SafetyHookMid MarkersMidHook{};
            MarkersMidHook = safetyhook::create_mid(MarkersScanResult + 0xA,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = fHUDWidthOffset;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm1.f32[0] = fHUDHeightOffset;
                    }
                });
        }
        else if (!MarkersScanResult)
        {
            spdlog::error("HUD: Markers: Pattern scan failed.");
        }

        // HUD Backgrounds
        uint8_t* HUDBackgroundsScanResult = Memory::PatternScan(baseModule, "C3 F2 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? F2 0F ?? ?? ?? ?? F2 0F ?? ?? 48 ?? ??");
        if (HUDBackgroundsScanResult)
        {
            spdlog::info("HUD: HUDBackgrounds: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDBackgroundsScanResult - (uintptr_t)baseModule);

            static SafetyHookMid HUDBackgroundsMidHook{};
            HUDBackgroundsMidHook = safetyhook::create_mid(HUDBackgroundsScanResult + 0x9,
                [](SafetyHookContext& ctx)
                {
                    // Black Curtain
                    if (ctx.xmm0.f32[0] == 2200.00f && ctx.xmm0.f32[1] == 1200.00f)
                    {
                        if (fAspectRatio > fNativeAspect)
                        {
                            ctx.xmm0.f32[0] = 1200.00f * fAspectRatio;
                        }
                        else if (fAspectRatio < fNativeAspect)
                        {
                            ctx.xmm0.f32[1] = 2200.00f / fAspectRatio;
                        }
                    }

                    // Dialog BG
                    if (ctx.xmm0.f32[0] == 1940.00f && ctx.xmm0.f32[1] == 404.00f)
                    {
                        if (fAspectRatio > fNativeAspect)
                        {
                            ctx.xmm0.f32[0] = 1940.00f * fAspectMultiplier;
                        }
                        else if (fAspectRatio < fNativeAspect)
                        {
                            ctx.xmm0.f32[1] = 404.00f / fAspectMultiplier;
                        }
                    }
                });
        }
        else if (!HUDBackgroundsScanResult)
        {
            spdlog::error("HUD: HUDBackgrounds: Pattern scan failed.");
        }

        // Pause Background
        uint8_t* PauseBGScanResult = Memory::PatternScan(baseModule, "F3 0F ?? ?? ?? ?? ?? ?? 48 8D ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ??");
        if (PauseBGScanResult)
        {
            spdlog::info("HUD: PauseBG: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)PauseBGScanResult - (uintptr_t)baseModule);

            static SafetyHookMid PauseBGMidHook{};
            PauseBGMidHook = safetyhook::create_mid(PauseBGScanResult + 0x15,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = 1090.00f * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm1.f32[0] = 1930.00f / fAspectRatio;
                    }
                });
        }
        else if (!PauseBGScanResult)
        {
            spdlog::error("HUD: PauseBG: Pattern scan failed.");
        }

        // Battle Transition Blur
        uint8_t* EncountPanelSlotScanResult = Memory::PatternScan(baseModule, "49 ?? ?? 49 ?? ?? FF 90 ?? ?? ?? ?? 49 ?? ?? 49 ?? ?? 44 0F ?? ??");
        if (EncountPanelSlotScanResult)
        {
            spdlog::info("HUD: EncountPanelSlot: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)EncountPanelSlotScanResult - (uintptr_t)baseModule);

            static SafetyHookMid EncountPanelSlotMidHook{};
            EncountPanelSlotMidHook = safetyhook::create_mid(EncountPanelSlotScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (ctx.r14)
                    {
                        SDK::UObject* obj = (SDK::UObject*)ctx.r14;
                        if (obj->IsA(SDK::UCanvasPanelSlot::StaticClass()))
                        {
                            auto panelSlot = (SDK::UCanvasPanelSlot*)obj;
                            if (panelSlot->GetFullName().contains("WB_EncountScene_C.WidgetTree.CanvasPanel_0.CanvasPanelSlot_1"))
                            {
                                if (fAspectRatio > fNativeAspect)
                                {
                                    panelSlot->LayoutData.Offsets.Right = 1080.00f * fAspectRatio;
                                }
                                else if (fAspectRatio < fNativeAspect)
                                {
                                    panelSlot->LayoutData.Offsets.Bottom = 1920.00f / fAspectRatio;
                                }
                            }
                        }
                    }
                });
        }
        else if (!EncountPanelSlotScanResult)
        {
            spdlog::error("HUD: EncountPanelSlot: Pattern scan failed.");
        }
    }

    // Center HUD + Skip Intro
    uint8_t* HUDPositionScanResult = Memory::PatternScan(baseModule, "FF ?? 48 ?? ?? ?? ?? 0F ?? ?? 48 ?? ?? 0F ?? ?? 48 ?? ?? ?? 5F C3");
    if (HUDPositionScanResult)
    {
        spdlog::info("HUD: HUD Position: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDPositionScanResult - (uintptr_t)baseModule);

        static bool bHasSkippedIntro = false;
        static SafetyHookMid HUDPositionMidHook{};
        HUDPositionMidHook = safetyhook::create_mid(HUDPositionScanResult + 0xA,
            [](SafetyHookContext& ctx)
            {
                if (ctx.rcx)
                {
                    SDK::UObject* obj = (SDK::UObject*)ctx.rcx;

                    // Intro Skip
                    if (bIntroSkip && !bHasSkippedIntro)
                    {
                        if (obj->IsA(SDK::UWBP_LogoScreen_C::StaticClass()))
                        {
                            auto LogoScreen = (SDK::UWBP_LogoScreen_C*)ctx.rcx;
                            LogoScreen->bComplete = true;
                            spdlog::info("Intro Skip: Skipped intro logos.");
                            bHasSkippedIntro = true;
                        }
                    }

                    if (bFixHUD)
                    {
                        // Fix "new" on choice selections
                        if (obj->IsA(SDK::UWB_MsgWindow_C::StaticClass()))
                        {
                            auto messageWindow = (SDK::UWB_MsgWindow_C*)obj;
                            auto selectWidget = messageWindow->MsgSelectMenu->SsPlayerWidgetIcon;
                            selectWidget->bScissor = true;
                        }

                        // Check for whitelisted classes and skip centering them
                        if (obj == EventMovie || obj->IsA(SDK::UWB_ScreenFade_C::StaticClass()) || obj->IsA(SDK::UWB_ScreenTransition_C::StaticClass()) || obj->IsA(SDK::UWB_EventColorFade_C::StaticClass()) || obj->IsA(SDK::UWB_Loading_C::StaticClass()) || obj->IsA(SDK::UWB_EncountScene_C::StaticClass()))
                        {
                            return;
                        }

                        // Center HUD
                        if (ctx.xmm0.f32[0] == 0.00f && ctx.xmm0.f32[1] == 0.00f && ctx.xmm0.f32[2] == 1.00f && ctx.xmm0.f32[3] == 1.00f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm0.f32[0] = (float)fHUDWidthOffset / iCurrentResX;
                                ctx.xmm0.f32[2] = 1.00f - ctx.xmm0.f32[0];
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm0.f32[1] = (float)fHUDHeightOffset / iCurrentResY;
                                ctx.xmm0.f32[3] = 1.00f - ctx.xmm0.f32[1];
                            }
                        }
                    }
                }
            });
    }
    else if (!HUDPositionScanResult)
    {
        spdlog::error("HUD: HUD Position: Pattern scan failed.");
    }
}

void GraphicalTweaks()
{
    // Set CVARs
    uint8_t* SetCVARSScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
    if (SetCVARSScanResult)
    {
        spdlog::info("Set CVARS: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)SetCVARSScanResult - (uintptr_t)baseModule);

        static SafetyHookMid SetCVARSMidHook{};
        SetCVARSMidHook = safetyhook::create_mid(SetCVARSScanResult + 0x3,
            [](SafetyHookContext& ctx)
            {         
                if (bCachedConsoleObjects)
                {
                    if (bEnableTAA)
                    {
                        auto AntiAliasingCVAR = Unreal::FindCVAR("r.DefaultFeature.AntiAliasing", ConsoleObjects);
                        if (AntiAliasingCVAR && AntiAliasingCVAR->GetInt() != 2)
                        {
                            AntiAliasingCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            AntiAliasingCVAR->Set(L"2");
                            spdlog::info("Set CVARS: Set r.DefaultFeature.AntiAliasing to {}", AntiAliasingCVAR->GetInt());
                        }

                        auto VertexMotionVectorsCVAR = Unreal::FindCVAR("r.VertexDeformationOutputsVelocity", ConsoleObjects);
                        if (VertexMotionVectorsCVAR && VertexMotionVectorsCVAR->GetInt() != 1)
                        {
                            VertexMotionVectorsCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            VertexMotionVectorsCVAR->Set(L"1");
                            spdlog::info("Set CVARS: Set r.VertexDeformationOutputsVelocity to {}", VertexMotionVectorsCVAR->GetInt());
                        }

                        auto HalfResAOCVAR = Unreal::FindCVAR("r.AmbientOcclusion.HalfRes", ConsoleObjects);
                        if (HalfResAOCVAR && HalfResAOCVAR->GetInt() != 0)
                        {
                            HalfResAOCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            HalfResAOCVAR->Set(L"0");
                            spdlog::info("Set CVARS: Set r.AmbientOcclusion.HalfRes to {}", HalfResAOCVAR->GetInt());
                        }

                        if (bEnableGen5TAAU)
                        {
                            auto TAAUAlgorithmCVAR = Unreal::FindCVAR("r.TemporalAA.Algorithm", ConsoleObjects);
                            if (TAAUAlgorithmCVAR && TAAUAlgorithmCVAR->GetInt() != 1)
                            {
                                TAAUAlgorithmCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                                TAAUAlgorithmCVAR->Set(L"1");
                                spdlog::info("Set CVARS: Set r.TemporalAA.Algorithm to {}", TAAUAlgorithmCVAR->GetInt());
                            }
                        }
                    }

                    if (bEnableGTAO)
                    {
                        auto AOMethodCVAR = Unreal::FindCVAR("r.AmbientOcclusion.Method", ConsoleObjects);
                        if (AOMethodCVAR && AOMethodCVAR->GetInt() != 1)
                        {
                            AOMethodCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            AOMethodCVAR->Set(L"1");
                            spdlog::info("Set CVARS: Set r.AmbientOcclusion.Method to {}", AOMethodCVAR->GetInt());
                        }

                        if (bGTAOHalfRes)
                        {
                            auto HalfResGTAOCVAR = Unreal::FindCVAR("r.GTAO.Downsample", ConsoleObjects);
                            if (HalfResGTAOCVAR && HalfResGTAOCVAR->GetInt() != 1)
                            {
                                HalfResGTAOCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                                HalfResGTAOCVAR->Set(L"1");
                                spdlog::info("Set CVARS: Set r.GTAO.Downsample to {}", HalfResGTAOCVAR->GetInt());
                            }
                        }
                    }

                    if (bAdjustLOD)
                    {
                        auto FoliageDistanceCVAR = Unreal::FindCVAR("foliage.LODDistanceScale", ConsoleObjects);
                        if (FoliageDistanceCVAR && FoliageDistanceCVAR->GetFloat() != fFoliageDistanceScale)
                        {
                            FoliageDistanceCVAR->SetFlags(ECVF_SetByConstructor);
                            FoliageDistanceCVAR->Set(std::to_wstring(fFoliageDistanceScale).c_str());
                            spdlog::info("Set CVARS: Set foliage.LODDistanceScale to {}", FoliageDistanceCVAR->GetFloat());
                        }

                        auto ViewDistanceCVAR = Unreal::FindCVAR("r.ViewDistanceScale", ConsoleObjects);
                        if (ViewDistanceCVAR && ViewDistanceCVAR->GetFloat() != fViewDistanceScale)
                        {
                            ViewDistanceCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            ViewDistanceCVAR->Set(std::to_wstring(fViewDistanceScale).c_str());
                            spdlog::info("Set CVARS: Set r.ViewDistanceScale to {}", ViewDistanceCVAR->GetFloat());
                        }

                        auto SkeletalMeshLODBiasCVAR = Unreal::FindCVAR("r.SkeletalMeshLODBias", ConsoleObjects);
                        if (SkeletalMeshLODBiasCVAR && SkeletalMeshLODBiasCVAR->GetInt() != -1)
                        {
                            SkeletalMeshLODBiasCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            SkeletalMeshLODBiasCVAR->Set(L"-1");
                            spdlog::info("Set CVARS: Set r.SkeletalMeshLODBias to {}", SkeletalMeshLODBiasCVAR->GetInt());
                        }
                    }

                    if (iSSAOLevel != 1)
                    {
                        auto SSAOLevelsCVAR = Unreal::FindCVAR("r.AmbientOcclusionLevels", ConsoleObjects);
                        if (SSAOLevelsCVAR && SSAOLevelsCVAR->GetInt() != iSSAOLevel)
                        {
                            SSAOLevelsCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            SSAOLevelsCVAR->Set(std::to_wstring(iSSAOLevel).c_str());
                            spdlog::info("Set CVARS: Set r.AmbientOcclusionLevels to {}", SSAOLevelsCVAR->GetInt());
                        }
                    }

                    if (bEnableSSGI)
                    {
                        auto SSGIEnableCVAR = Unreal::FindCVAR("r.SSGI.Enable", ConsoleObjects);
                        if (SSGIEnableCVAR && SSGIEnableCVAR->GetInt() != 1)
                        {
                            SSGIEnableCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            SSGIEnableCVAR->Set(L"1");
                            spdlog::info("Set CVARS: Set r.SSGI.Enable to {}", SSGIEnableCVAR->GetInt());
                        }

                        auto SSGIQualityCVAR = Unreal::FindCVAR("r.SSGI.Quality", ConsoleObjects);
                        if (SSGIQualityCVAR && SSGIQualityCVAR->GetInt() != iSSGIQuality)
                        {
                            SSGIQualityCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            SSGIQualityCVAR->Set(std::to_wstring(iSSGIQuality).c_str());
                            spdlog::info("Set CVARS: Set r.SSGI.Quality to {}", SSGIQualityCVAR->GetInt());
                        }

                        if (bHalfResSSGI)
                        {
                            auto SSGIHalfResCVAR = Unreal::FindCVAR("r.SSGI.HalfRes", ConsoleObjects);
                            if (SSGIHalfResCVAR && SSGIHalfResCVAR->GetInt() != 1)
                            {
                                SSGIHalfResCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                                SSGIHalfResCVAR->Set(L"1");
                                spdlog::info("Set CVARS: Set r.SSGI.HalfRes to {}", SSGIHalfResCVAR->GetInt());
                            }
                        }
                    }

                    if (!bVignette)
                    {
                        auto TonemapperQualityCVAR = Unreal::FindCVAR("r.Tonemapper.Quality", ConsoleObjects);
                        if (TonemapperQualityCVAR && TonemapperQualityCVAR->GetInt() != 0)
                        {
                            TonemapperQualityCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            TonemapperQualityCVAR->Set(L"0");
                            spdlog::info("Set CVARS: Set r.Tonemapper.Quality to {}", TonemapperQualityCVAR->GetInt());
                        }
                    }

                    if (!bUROEnabled)
                    {
                        auto UROEnableCVAR = Unreal::FindCVAR("a.URO.Enable", ConsoleObjects);
                        if (UROEnableCVAR && UROEnableCVAR->GetInt() != 0)
                        {
                            UROEnableCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            UROEnableCVAR->Set(L"0");
                            spdlog::info("Set CVARS: Set a.URO.Enable to {}", UROEnableCVAR->GetInt());
                        }
                    }

                    if (bShadowQuality)
                    {
                        auto MaxShadowCSMResolutionCVAR = Unreal::FindCVAR("r.Shadow.MaxCSMResolution", ConsoleObjects);
                        if (MaxShadowCSMResolutionCVAR && MaxShadowCSMResolutionCVAR->GetInt() != iShadowResolution)
                        {
                            MaxShadowCSMResolutionCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            MaxShadowCSMResolutionCVAR->Set(std::to_wstring(iShadowResolution).c_str());
                            spdlog::info("Set CVARS: Set r.Shadow.MaxCSMResolution to {}", MaxShadowCSMResolutionCVAR->GetInt());
                        }

                        auto MaxShadowResolutionCVAR = Unreal::FindCVAR("r.Shadow.MaxResolution", ConsoleObjects);
                        if (MaxShadowResolutionCVAR && MaxShadowResolutionCVAR->GetInt() != iShadowResolution)
                        {
                            MaxShadowResolutionCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                            MaxShadowResolutionCVAR->Set(std::to_wstring(iShadowResolution).c_str());
                            spdlog::info("Set CVARS: Set r.Shadow.MaxResolution to {}", MaxShadowResolutionCVAR->GetInt());
                        }
                    }
                }
                else {
                    spdlog::error("Set CVARS: ConsoleObjects invalid.");
                }
            });
    }
    else if (!SetCVARSScanResult)
    {
        spdlog::error("Set CVARS: Pattern scan failed.");
    }
}

void EnableConsole()
{
    if (bEnableConsole)
    {
        if (SDK::Offsets::GObjects && SDK::Offsets::AppendString) {
            // Get GEngine
            SDK::UEngine* engine = nullptr;

            int i = 0;
            while (i < 100) { // 10s
                engine = SDK::UEngine::GetEngine();

                if (engine) {
                    if (engine->ConsoleClass && engine->GameViewport) {
                        break;
                    }
                }

                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                i++;
            }

            if (i == 100) {
                spdlog::error("Construct Console: Failed to find GEngine address after 10 seconds.");
                return;
            }

            spdlog::info("Construct Console: GEngine address = {:x}", (uintptr_t)engine);

            // Construct console
            if (engine->ConsoleClass && engine->GameViewport) {
                SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(engine->ConsoleClass, engine->GameViewport);
                if (NewObject) {
                    engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
                    spdlog::info("Construct Console: Console object constructed.");
                }
                else {
                    spdlog::error("Construct Console: Failed to construct console object.");
                    return;
                }
            }
            else {
                spdlog::error("Construct Console: Failed to construct console object - ConsoleClass or GameViewport is null.");
                return;
            }

            // Log console key
            if (SDK::UInputSettings::GetInputSettings()->ConsoleKeys && SDK::UInputSettings::GetInputSettings()->ConsoleKeys.Num() > 0) {
                spdlog::info("Construct Console: Console enabled - access it using key: {}.", SDK::UInputSettings::GetInputSettings()->ConsoleKeys[0].KeyName.ToString());
            }
            else {
                spdlog::error("Console enabled but no console key is bound.\nAdd this to %LOCALAPPDATA%\\SMT5V\\Saved\\Config\\WindowsNoEditor\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde");
            }
        }
    }
}

void Misc()
{
    if (bDisableMenuFPSCap)
    {
        // Disable FrameRateManager changing t.MaxFPS to 60
        uint8_t* FramerateChangeScanResult = Memory::PatternScan(baseModule, "44 ?? ?? ?? 0F ?? ?? ?? ?? 41 ?? ?? ?? 74 ?? 41 ?? ?? ?? 74 ?? 41 ?? ?? ?? 74 ??");
        if (FramerateChangeScanResult)
        {
            spdlog::info("Menu Framerate Cap: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FramerateChangeScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FramerateChangeMidHook{};
            FramerateChangeMidHook = safetyhook::create_mid(FramerateChangeScanResult,
                [](SafetyHookContext& ctx)
                {
                    ctx.rdx = 0;
                });
        }
        else if (!FramerateChangeScanResult)
        {
            spdlog::error("Menu Framerate Cap: Pattern scan failed.");
        }
    }

    if (bForceMovieRes)
    {
        // Always play 4K movies
        // EventFunctionLibrary::IsOriginalMovieResolution()
        uint8_t* MovieResolutionScanResult = Memory::PatternScan(baseModule, "81 ?? ?? D0 07 00 00 0F ?? ?? 48 83 ?? ?? C3");
        if (MovieResolutionScanResult)
        {
            spdlog::info("Movie Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MovieResolutionScanResult - (uintptr_t)baseModule);
            Memory::Write((uintptr_t)MovieResolutionScanResult + 0x3, (int)0);
            spdlog::info("Movie Resolution: Patched instruction.");
        }
        else if (!MovieResolutionScanResult)
        {
            spdlog::error("Movie Resolution: Pattern scan failed.");
        }
    }
}

void IntroSkip()
{
    if (bIntroSkipMovie)
    {
        // Skip intro movie
        uint8_t* IntroSkipScanResult = Memory::PatternScan(baseModule, "0A ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 40 ?? 48 83 ?? ?? 48 8B ?? ?? 33 ??");
        if (IntroSkipScanResult)
        {
            static bool bHasSkippedIntroMovie = false;
            static SafetyHookMid IntroSkipMidHook{};
            IntroSkipMidHook = safetyhook::create_mid((uintptr_t)IntroSkipScanResult + 0x2E,
                [](SafetyHookContext& ctx)
                {
                    // Only skip it once so people can replay it by idling in the main menu.
                    if (!bHasSkippedIntroMovie)
                    {
                        ctx.rax &= ~(0xFF);
                        bHasSkippedIntroMovie = true;
                        spdlog::info("Intro Skip: Skipped intro movie.");
                    }
                });
        }
        else if (!IntroSkipScanResult)
        {
            spdlog::error("Intro Skip: Pattern scan failed.");
        }
    }
}

HWND hWnd;
WNDPROC OldWndProc;
LRESULT __stdcall NewWndProc(HWND window, UINT message_type, WPARAM w_param, LPARAM l_param) {
    switch (message_type) {

    case WM_ACTIVATE:

    case WM_ACTIVATEAPP:
        if (w_param == FALSE)
        {
            return 0;
        }

    case WM_KILLFOCUS:
        return 0;

    default:
        return CallWindowProc(OldWndProc, window, message_type, w_param, l_param);
    }
};

void WindowFocus()
{
    if (!bPauseOnFocusLoss)
    {
        int i = 0;
        while (i < 30 && !IsWindow(hWnd))
        {
            // Wait 1 sec then try again
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            i++;
            hWnd = FindWindowW(sWindowClassName, nullptr);
        }

        // If 30 seconds have passed and we still dont have the handle, give up
        if (i == 30)
        {
            spdlog::error("Window Focus: Failed to find window handle.");
            return;
        }
        else
        {
            // Set new wnd proc
            OldWndProc = (WNDPROC)SetWindowLongPtr(hWnd, GWLP_WNDPROC, (LONG_PTR)NewWndProc);
            spdlog::info("Window Focus: Set new WndProc.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    UpdateOffsets();
    CurrentResolution();
    GetCVARs();
    AspectFOV();
    HUD();
    GraphicalTweaks();
    EnableConsole();
    Misc();
    WindowFocus();
    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle)
        {
            CloseHandle(mainHandle);
        }
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

