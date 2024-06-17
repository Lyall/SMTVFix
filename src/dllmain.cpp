#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

#include "SDK/Engine_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/ProjectPlayerCameraManager_classes.hpp"
#include "SDK/WBP_LogoScreen_classes.hpp"
#include "SDK/WB_ScreenFade_classes.hpp"
#include "SDK/WB_ScreenTransition_classes.hpp"
#include "SDK/WB_EventColorFade_classes.hpp"
#include "SDK/WB_Loading_classes.hpp"

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
std::string sFixName = "SMTVFix";
std::string sFixVer = "0.8.3";
std::string sLogFile = "SMTVFix.log";
std::string sConfigFile = "SMTVFix.ini";
std::string sExeName;
std::filesystem::path sExePath;
std::filesystem::path sThisModulePath;
std::pair DesktopDimensions = { 0,0 };

// Ini variables
bool bFixAspect;
bool bFixHUD;
bool bFixFOV;
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
bool bShadowQuality;
int iShadowResolution;
bool bEnableGTAO;
bool bGTAOHalfRes;

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

// CVAR addresses
uintptr_t AntiAliasingCVARAddr;
uintptr_t HalfResAOCVARAddr;
uintptr_t TAAUAlgorithmCVARAddr;
uintptr_t VertexMotionVectorsCVARAddr;
uintptr_t MaxShadowCSMResolutionCVARAddr;
uintptr_t AOMethodCVARAddr;

void Logging()
{
    // Get this module path
    WCHAR thisModulePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, thisModulePath, MAX_PATH);
    sThisModulePath = thisModulePath;
    sThisModulePath = sThisModulePath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(baseModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // spdlog initialisation
    {
        try
        {
            logger = spdlog::basic_logger_st(sFixName.c_str(), sThisModulePath.string() + sLogFile, true);
            spdlog::set_default_logger(logger);

            spdlog::flush_on(spdlog::level::debug);
            spdlog::info("----------");
            spdlog::info("{} v{} loaded.", sFixName.c_str(), sFixVer.c_str());
            spdlog::info("----------");
            spdlog::info("Path to logfile: {}", sThisModulePath.string() + sLogFile);
            spdlog::info("----------");

            // Log module details
            spdlog::info("Module Name: {0:s}", sExeName.c_str());
            spdlog::info("Module Path: {0:s}", sExePath.string());
            spdlog::info("Module Address: 0x{0:x}", (uintptr_t)baseModule);
            spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(baseModule));
            spdlog::info("----------");
        }
        catch (const spdlog::spdlog_ex& ex)
        {
            AllocConsole();
            FILE* dummy;
            freopen_s(&dummy, "CONOUT$", "w", stdout);
            std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        }
    }
}

void ReadConfig()
{
    // Initialise config
    std::ifstream iniFile(sThisModulePath.string() + sConfigFile);
    if (!iniFile)
    {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVer.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sThisModulePath.string().c_str() << std::endl;
    }
    else
    {
        spdlog::info("Path to config file: {}", sThisModulePath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Read ini file
    inipp::get_value(ini.sections["Intro Skip"], "Enabled", bIntroSkip);
    inipp::get_value(ini.sections["Intro Skip"], "SkipMovie", bIntroSkipMovie);
    inipp::get_value(ini.sections["Enable Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Remove 60FPS Cap"], "Enabled", bDisableMenuFPSCap);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Enabled", bAdjustCam);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Distance", fAdjustDist);
    inipp::get_value(ini.sections["Adjust Player Camera"], "FOV", fAdjustFOV);
    inipp::get_value(ini.sections["Adjust Player Camera"], "Height", fAdjustHeight);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", fScreenPercentage);
    inipp::get_value(ini.sections["Enable TAA"], "Enabled", bEnableTAA);
    inipp::get_value(ini.sections["Enable TAA"], "TAAU_Gen5", bEnableGen5TAAU);
    inipp::get_value(ini.sections["Shadow Quality"], "Enabled", bShadowQuality);
    inipp::get_value(ini.sections["Shadow Quality"], "Resolution", iShadowResolution);
    inipp::get_value(ini.sections["GTAO Ambient Occlusion"], "Enabled", bEnableGTAO);
    inipp::get_value(ini.sections["GTAO Ambient Occlusion"], "HalfRes", bGTAOHalfRes);

    // Log config parse
    spdlog::info("Config Parse: bIntroSkip: {}", bIntroSkip);
    spdlog::info("Config Parse: bIntroSkipMovie: {}", bIntroSkipMovie);
    spdlog::info("Config Parse: bEnableConsole: {}", bEnableConsole);
    spdlog::info("Config Parse: bDisableMenuFPSCap: {}", bDisableMenuFPSCap);
    spdlog::info("Config Parse: bFixAspect: {}", bFixAspect);
    spdlog::info("Config Parse: bFixHUD: {}", bFixHUD);
    spdlog::info("Config Parse: bFixFOV: {}", bFixFOV);
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
    spdlog::info("Config Parse: bEnableGTAO: {}", bEnableGTAO);
    spdlog::info("Config Parse: bGTAOHalfRes: {}", bGTAOHalfRes);
    spdlog::info("----------");

    // Grab desktop resolution/aspect
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
    iCurrentResX = DesktopDimensions.first;
    iCurrentResY = DesktopDimensions.second;

    // Calculate aspect ratio
    fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD variables
    fHUDWidth = iCurrentResY * fNativeAspect;
    fHUDHeight = (float)iCurrentResY;
    fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2;
    fHUDHeightOffset = 0;
    if (fAspectRatio < fNativeAspect)
    {
        fHUDWidth = (float)iCurrentResX;
        fHUDHeight = (float)iCurrentResX / fNativeAspect;
        fHUDWidthOffset = 0;
        fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2;
    }
}

void CurrentResolution()
{
    // Get current resolution
    uint8_t* CurrResolutionScanResult = Memory::PatternScan(baseModule, "42 ?? ?? ?? ?? ?? ?? ?? 41 ?? ?? 42 ?? ?? ?? ?? ?? ?? ?? 0F ?? ?? 41 ?? ?? 42 ?? ?? ?? ?? ?? ?? ??");
    if (CurrResolutionScanResult)
    {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CurrResolutionScanResult - (uintptr_t)baseModule);

        static SafetyHookMid CurrResolutionMidHook{};
        CurrResolutionMidHook = safetyhook::create_mid(CurrResolutionScanResult,
            [](SafetyHookContext& ctx)
            {
                // Get ResX and ResY
                iCurrentResX = (int)ctx.r10;
                iCurrentResY = (int)ctx.r9;

                iCurrentResX /= fScreenPercentage / 100;
                iCurrentResY /= fScreenPercentage / 100;

                // Calculate aspect ratio
                fAspectRatio = (float)iCurrentResX / (float)iCurrentResY;
                fAspectMultiplier = fAspectRatio / fNativeAspect;

                // HUD variables
                fHUDWidth = iCurrentResY * fNativeAspect;
                fHUDHeight = (float)iCurrentResY;
                fHUDWidthOffset = (float)(iCurrentResX - fHUDWidth) / 2;
                fHUDHeightOffset = 0;
                if (fAspectRatio < fNativeAspect)
                {
                    fHUDWidth = (float)iCurrentResX;
                    fHUDHeight = (float)iCurrentResX / fNativeAspect;
                    fHUDWidthOffset = 0;
                    fHUDHeightOffset = (float)(iCurrentResY - fHUDHeight) / 2;
                }

                // Only log on resolution change since this function runs all the time.
                if (iCurrentResX != iOldResX || iCurrentResY != iOldResY)
                {
                    iOldResX = iCurrentResX;
                    iOldResY = iCurrentResY;

                    // Log details about current resolution
                    spdlog::info("----------");
                    spdlog::info("Current Resolution: Resolution: {}x{}", iCurrentResX, iCurrentResY);
                    spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
                    spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
                    spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
                    spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
                    spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
                    spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
                    spdlog::info("----------");
                }
            });
    }
    else if (!CurrResolutionScanResult)
    {
        spdlog::error("Current Resolution: Pattern scan failed.");
    }
}

void AspectFOV()
{
    if (bFixFOV)
    {
        // Field of View
        uint8_t* FOVScanResult = Memory::PatternScan(baseModule, "E9 ?? ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 45 ?? ?? ??") + 0xA;
        if (FOVScanResult)
        {
            spdlog::info("FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(FOVScanResult,
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
                        SDK::UObject* obj = (SDK::UObject*)(ctx.rdi);
                        if (obj->IsA(SDK::AProjectPlayerCameraManager_C::StaticClass()))
                        {
                            SDK::AProjectPlayerCameraManager_C* camManager = (SDK::AProjectPlayerCameraManager_C*)(ctx.rdi);
                            // Check if "Standard" camera angle
                            if (camManager->DEF_Distance == 580.00f && camManager->DEF_FOV == 60.00f && camManager->DEF_Height == 73.00f)
                            {
                                camManager->Camera_Standard_Preset.M_CameraDistance = fAdjustDist;              // Default = 580
                                camManager->Camera_Standard_Preset.M_CameraFOV = fAdjustFOV;                    // Default = 60
                                camManager->Camera_Standard_Preset.M_CameraRootHeight = fAdjustHeight;          // Default = 73
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
        uint8_t* AspectRatioScanResult = Memory::PatternScan(baseModule, "74 ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? EB ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B") + 0xA;
        if (AspectRatioScanResult)
        {
            spdlog::info("Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AspectRatioScanResult - (uintptr_t)baseModule);

            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioScanResult + 0x1D,
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
        uint8_t* FreecamAspectRatioScanResult = Memory::PatternScan(baseModule, "4C 89 ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ??") + 0x25;
        if (FreecamAspectRatioScanResult)
        {
            spdlog::info("Freecam Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FreecamAspectRatioScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FreecamAspectRatioMidHook{};
            FreecamAspectRatioMidHook = safetyhook::create_mid(FreecamAspectRatioScanResult,
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
    // Center HUD
    uint8_t* HUDPositionScanResult = Memory::PatternScan(baseModule, "FF ?? 48 ?? ?? ?? ?? 0F ?? ?? 48 ?? ?? 0F ?? ?? 48 ?? ?? ?? 5F C3") + 0xA;
    if (HUDPositionScanResult)
    {
        spdlog::info("HUD: HUD Position: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDPositionScanResult - (uintptr_t)baseModule);
        static bool bHasSkippedIntro = false;

        static SafetyHookMid HUDPositionMidHook{};
        HUDPositionMidHook = safetyhook::create_mid(HUDPositionScanResult,
            [](SafetyHookContext& ctx)
            {
                if (ctx.rcx)
                {
                    SDK::UObject* obj = (SDK::UObject*)(ctx.rcx);

                    // Intro Skip
                    if (bIntroSkip && !bHasSkippedIntro)
                    {
                        if (obj->IsA(SDK::UWBP_LogoScreen_C::StaticClass()))
                        {
                            auto LogoScreen = (SDK::UWBP_LogoScreen_C*)(ctx.rcx);
                            LogoScreen->bComplete = true;
                            bHasSkippedIntro = true;
                        }
                    }

                    // Center HUD
                    if (bFixHUD)
                    { 
                        // Check for whitelisted classes and skip centering them
                        if (obj->IsA(SDK::UWB_ScreenFade_C::StaticClass()) || obj->IsA(SDK::UWB_ScreenTransition_C::StaticClass()) || obj->IsA(SDK::UWB_EventColorFade_C::StaticClass()) || obj->IsA(SDK::UWB_Loading_C::StaticClass()))
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

    if (bFixHUD)
    {
        // Fix offset markers (i.e map icons etc)
        uint8_t* MarkersScanResult = Memory::PatternScan(baseModule, "0F ?? ?? 66 ?? ?? ?? 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? ?? F3 0F ?? ?? 4C") + 0xA;
        if (MarkersScanResult)
        {
            spdlog::info("HUD: Markers: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MarkersScanResult - (uintptr_t)baseModule);

            static SafetyHookMid MarkersMidHook{};
            MarkersMidHook = safetyhook::create_mid(MarkersScanResult,
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
    }
}

void GraphicalTweaks()
{
    // CVARs
    uint8_t* AntiAliasingCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? 4C ?? ?? ?? ?? 74 ?? FF 15 ?? ?? ?? ?? 33 ?? 3B ?? ?? ?? ?? ?? 0F ?? ?? EB ?? 33 ??");
    uint8_t* HalfResAOCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 83 ?? ?? 00 7E ??");
    uint8_t* TAAUAlgorithmCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? B9 0A 00 00 00 0F ?? ?? ?? ?? ?? ?? 83 ?? ?? 00");
    uint8_t* VertexMotionVectorsCVARScanResult = Memory::PatternScan(baseModule, "48 8B ?? ?? ?? ?? ?? 83 ?? ?? 00 7E ?? 48 ?? ?? 48 ?? ?? ?? 00 74 ??");
    uint8_t* MaxShadowCSMResolutionCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? 44 ?? ?? 42 ?? ?? ?? 39 ?? ?? ?? ?? ?? 44 ?? ?? ?? ?? 0F ?? ?? ?? ?? ?? 42 ?? ?? ?? 39 ?? ?? ?? ?? ??");
    uint8_t* AOMethodCVARScanResult = Memory::PatternScan(baseModule, "48 8B ?? ?? ?? ?? ?? 83 ?? ?? 01 75 ?? 83 ?? ?? ?? ?? ?? 03");
    if (AntiAliasingCVARScanResult && HalfResAOCVARScanResult && TAAUAlgorithmCVARScanResult && VertexMotionVectorsCVARScanResult)
    {
        AntiAliasingCVARAddr = Memory::GetAbsolute((uintptr_t)AntiAliasingCVARScanResult + 0x3);
        spdlog::info("CVARS: r.DefaultFeature.AntiAliasing: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AntiAliasingCVARAddr - (uintptr_t)baseModule);

        HalfResAOCVARAddr = Memory::GetAbsolute((uintptr_t)HalfResAOCVARScanResult + 0x3);
        spdlog::info("CVARS: r.AmbientOcclusion.HalfRes: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HalfResAOCVARAddr - (uintptr_t)baseModule);

        TAAUAlgorithmCVARAddr = Memory::GetAbsolute((uintptr_t)TAAUAlgorithmCVARScanResult + 0x3);
        spdlog::info("CVARS: r.TemporalAA.Algorithm: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)TAAUAlgorithmCVARAddr - (uintptr_t)baseModule);

        VertexMotionVectorsCVARAddr = Memory::GetAbsolute((uintptr_t)VertexMotionVectorsCVARScanResult + 0x3);
        spdlog::info("CVARS: r.VertexDeformationOutputsVelocity: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)VertexMotionVectorsCVARScanResult - (uintptr_t)baseModule);

        MaxShadowCSMResolutionCVARAddr = Memory::GetAbsolute((uintptr_t)MaxShadowCSMResolutionCVARScanResult + 0x3);
        spdlog::info("CVARS: r.Shadow.MaxCSMResolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MaxShadowCSMResolutionCVARScanResult - (uintptr_t)baseModule);

        AOMethodCVARAddr = Memory::GetAbsolute((uintptr_t)AOMethodCVARScanResult + 0x3);
        spdlog::info("CVARS: r.AmbientOcclusion.Method: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AOMethodCVARScanResult - (uintptr_t)baseModule);

    }
    else if (!AntiAliasingCVARScanResult || !HalfResAOCVARScanResult || !TAAUAlgorithmCVARScanResult || !VertexMotionVectorsCVARScanResult)
    {
        spdlog::error("CVARS: Pattern scan failed.");
    }

    // Screen Percentage + Set CVARs
    uint8_t* ScreenPercentageScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
    if (ScreenPercentageScanResult)
    {
        spdlog::info("Screen Percentage: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ScreenPercentageScanResult - (uintptr_t)baseModule);

        static SafetyHookMid ScreenPercentageMidHook{};
        ScreenPercentageMidHook = safetyhook::create_mid(ScreenPercentageScanResult + 0x3,
            [](SafetyHookContext& ctx)
            {
                if (bEnableTAA && HalfResAOCVARAddr && AntiAliasingCVARAddr && TAAUAlgorithmCVARAddr && VertexMotionVectorsCVARAddr)
                {
                    // r.AmbientOcclusion.HalfRes=0
                    *reinterpret_cast<int*>(*(uintptr_t*)(HalfResAOCVARAddr)) = 0;
                    *reinterpret_cast<int*>(*(uintptr_t*)(HalfResAOCVARAddr)+0x4) = 0;
                    // r.DefaultFeature.AntiAliasing=2
                    *reinterpret_cast<int*>(*(uintptr_t*)(AntiAliasingCVARAddr)) = 2;
                    *reinterpret_cast<int*>(*(uintptr_t*)(AntiAliasingCVARAddr)+0x4) = 2;
                    // r.VolumetricClouds - 0x230 = r.VertexDeformationOutputsVelocity
                    *reinterpret_cast<int*>(*(uintptr_t*)(VertexMotionVectorsCVARAddr)-0x230) = 1;
                    *reinterpret_cast<int*>(*(uintptr_t*)(VertexMotionVectorsCVARAddr)-0x22C) = 1;

                    if (bEnableGen5TAAU)
                    {
                        // r.TemporalAA.R11G11B10History - 0x320 = r.TemporalAA.Algorithm
                        *reinterpret_cast<int*>(*(uintptr_t*)(TAAUAlgorithmCVARAddr)-0x320) = 1;
                        *reinterpret_cast<int*>(*(uintptr_t*)(TAAUAlgorithmCVARAddr)-0x31C) = 1;
                    }
                }

                if (MaxShadowCSMResolutionCVARAddr && bShadowQuality)
                {
                    // r.Shadow.MaxCSMResolution
                    *reinterpret_cast<int*>(*(uintptr_t*)(MaxShadowCSMResolutionCVARAddr)) = iShadowResolution;
                    *reinterpret_cast<int*>(*(uintptr_t*)(MaxShadowCSMResolutionCVARAddr)) = iShadowResolution;
                    // r.Shadow.MaxCSMResolution - 0x50 = r.Shadow.MaxResolution
                    *reinterpret_cast<int*>(*(uintptr_t*)(MaxShadowCSMResolutionCVARAddr)-0x50) = iShadowResolution;
                    *reinterpret_cast<int*>(*(uintptr_t*)(MaxShadowCSMResolutionCVARAddr)-0x4C) = iShadowResolution;
                }

                if (AOMethodCVARAddr && bEnableGTAO)
                {
                    // r.AmbientOcclusion.Method	
                    *reinterpret_cast<int*>(*(uintptr_t*)(AOMethodCVARAddr)) = 1;
                    *reinterpret_cast<int*>(*(uintptr_t*)(AOMethodCVARAddr)) = 1;
                    if (bGTAOHalfRes)
                    {
                        // r.AmbientOcclusion.Method	 - 0x5A0 = r.GTAO.Downsample
                        *reinterpret_cast<int*>(*(uintptr_t*)(AOMethodCVARAddr)-0x5A0) = 1;
                        *reinterpret_cast<int*>(*(uintptr_t*)(AOMethodCVARAddr)-0x59C) = 1;
                    }
                }

                if (bScreenPercentage)
                {
                    *reinterpret_cast<float*>(ctx.rdi + (ctx.rbx * 4)) = (float)fScreenPercentage;
                }
                else
                {
                    // Grab screen percentage value if not applied by user.
                    fScreenPercentage = *reinterpret_cast<float*>(ctx.rdi + (ctx.rbx * 4));
                }
            });
    }
    else if (!ScreenPercentageScanResult)
    {
        spdlog::error("Screen Percentage: Pattern scan failed.");
    }
}

void Misc()
{
    if (bEnableConsole)
    {
        // Construct Console
        uint8_t* ConstructConsoleScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? 57 48 ?? ?? ?? ?? ?? ?? 80 ?? ?? ?? ?? ?? 00 48 ?? ?? 48 ?? ?? 0F ?? ?? ?? ?? ?? 8B ?? ??");
        if (ConstructConsoleScanResult)
        {
            spdlog::info("Construct Console: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ConstructConsoleScanResult - (uintptr_t)baseModule);

            static SafetyHookMid ConstructConsoleMidHook{};
            ConstructConsoleMidHook = safetyhook::create_mid(ConstructConsoleScanResult,
                [](SafetyHookContext& ctx)
                {
                    SDK::UGameViewportClient* viewport = (SDK::UGameViewportClient*)(ctx.rcx);

                    if (viewport->ViewportConsole)
                    {
                        return;
                    }

                    // Get console key
                    if (SDK::UInputSettings::GetInputSettings()->ConsoleKeys)
                    {
                        spdlog::info("Console enabled: Access it using key: {}.", SDK::UInputSettings::GetInputSettings()->ConsoleKeys[0].KeyName.ToString());
                    }
                    else if (!SDK::UInputSettings::GetInputSettings()->ConsoleKeys)
                    {
                        spdlog::info("Console enabled but no console key is bound.\nAdd this: \n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde\nto %LOCALAPPDATA%\\SMT5V\\Saved\\Config\\WindowsNoEditor\\Input.ini");
                    }

                    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
                    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
                    viewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
                });
        }
        else if (!ConstructConsoleScanResult)
        {
            spdlog::error("Construct Console: Pattern scan failed.");
        }
    }

    if (bDisableMenuFPSCap)
    {
        // Disable FrameRateManager changing t.MaxFPS to 60
        uint8_t* FramerateChangeScanResult = Memory::PatternScan(baseModule, "44 ?? ?? ?? 0F ?? ?? ?? ?? 41 ?? ?? ?? 74 ?? 41 ?? ?? ?? 74 ?? 41 ?? ?? ?? 74 ?? ");
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
}

void IntroSkip()
{
    if (bIntroSkipMovie)
    {
        // Skip intro movie
        SDK::UFunction* IntroMovie_fn = SDK::UObject::FindObject<SDK::UFunction>("Function Project.BPL_Title.SetRequestTitleMovie");

        int i = 0;
        while(!IntroMovie_fn)
        {
            Sleep(500);
            IntroMovie_fn = SDK::UObject::FindObject<SDK::UFunction>("Function Project.BPL_Title.SetRequestTitleMovie");
            i++;
            if (i == 20)
            {
                break;
            }
        }

        static bool bHasSkippedIntroMovie = false;
        static SafetyHookMid AspectRatioMidHook{};
        AspectRatioMidHook = safetyhook::create_mid((uintptr_t)(IntroMovie_fn->ExecFunction) + 0x67,
            [](SafetyHookContext& ctx)
            {
                // Only skip it once so people can replay it by idling in the main menu.
                if (!bHasSkippedIntroMovie)
                {
                    ctx.rcx = 0;
                    bHasSkippedIntroMovie = true;
                    spdlog::info("Intro Skip: Skipped intro movie.");
                }
            });
    }
    
}

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    CurrentResolution();
    AspectFOV();
    HUD();
    GraphicalTweaks();
    Misc();
    IntroSkip();
    return true; //end thread
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
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle)
        {
            CloseHandle(mainHandle);
        }
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

