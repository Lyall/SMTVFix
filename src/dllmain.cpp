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
#include "SDK/WB_EncountScene_classes.hpp"
#include "SDK/WB_MsgWindow_classes.hpp"
#include "SDK/WB_MsgSelectMenu_classes.hpp"
#include "SDK/SpriteStudio6_classes.hpp"
#include "SDK/ConsoleVariable.h"

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
std::string sFixName = "SMTVFix";
std::string sFixVer = "0.8.6";
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
bool bShadowQuality;
int iShadowResolution;
bool bEnableGTAO;
bool bGTAOHalfRes;
bool bAdjustLOD;
float fFoliageDistanceScale;
float fViewDistanceScale;

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
UTextureRenderTarget2D* battleTransitionTex;

// CVAR addresses
SDK::TMap<SDK::FString, Unreal::FConsoleObject*> ConsoleObjects;

SafetyHookInline RenTexPostLoad{};
void* RenTexPostLoad_Hooked(uint8_t* thisptr)
{
    auto renTex = (SDK::UTextureRenderTarget2D*)thisptr;

    spdlog::info("Render Texture 2D Resolution: {}: Old render texture resolution = {}x{}", renTex->GetName(), renTex->SizeX, renTex->SizeY);

    if (renTex->SizeX == 1280 && renTex->SizeY == 720)
    {
        battleTransitionTex = renTex;
    }

    if (bFixBattleTransition)
    {
        renTex->SizeX = DesktopDimensions.first;
        renTex->SizeY = DesktopDimensions.second;
        spdlog::info("Render Texture 2D Resolution: {}: New render texture resolution = {}x{}", renTex->GetName(), renTex->SizeX, renTex->SizeY);
    }

    // Run original function
    return RenTexPostLoad.stdcall<void*>(thisptr);
}

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
    inipp::get_value(ini.sections["Fix Battle Transition"], "Enabled", bFixBattleTransition);
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
    inipp::get_value(ini.sections["Level of Detail"], "Enabled", bAdjustLOD);
    inipp::get_value(ini.sections["Level of Detail"], "Foliage", fFoliageDistanceScale);
    inipp::get_value(ini.sections["Level of Detail"], "ViewDistance", fViewDistanceScale);
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
    spdlog::info("----------");

    // Grab desktop resolution/aspect
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();
}

void CalculateAspectRatio(int ResX, int ResY)
{
    // Get screen percentage
    auto ScreenPercentageCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.ScreenPercentage", ConsoleObjects));
    if (ScreenPercentageCVAR)
    {
        fScreenPercentage = ScreenPercentageCVAR->GetFloat();
    }

    iCurrentResX = ResX;
    iCurrentResY = ResY;

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

    // Log details about current resolution
    spdlog::info("----------");
    spdlog::info("Current Resolution: Base Resolution: {}x{}", iCurrentResX, iCurrentResY);
    spdlog::info("Current Resolution: fScreenPercentage: {}", fScreenPercentage);
    spdlog::info("Current Resolution: Scaled Resolution: {}x{}", iCurrentResX * fScreenPercentage / 100, iCurrentResY * fScreenPercentage / 100);
    spdlog::info("Current Resolution: fAspectRatio: {}", fAspectRatio);
    spdlog::info("Current Resolution: fAspectMultiplier: {}", fAspectMultiplier);
    spdlog::info("Current Resolution: fHUDWidth: {}", fHUDWidth);
    spdlog::info("Current Resolution: fHUDHeight: {}", fHUDHeight);
    spdlog::info("Current Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
    spdlog::info("Current Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
    spdlog::info("----------");
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
                int iResX = (int)ctx.r10;
                int iResY = (int)ctx.r9;

                // Only log on resolution change since this function runs all the time.
                if (iResX != iCurrentResX || iResY != iCurrentResY)
                {
                    CalculateAspectRatio(iResX, iResY);
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
                            spdlog::info("Intro Skip: Skipped intro logos.");
                            bHasSkippedIntro = true;
                        }
                    }

                    // Center HUD
                    if (bFixHUD)
                    { 
                        if (obj->IsA(SDK::UWB_MsgWindow_C::StaticClass()))
                        {
                            auto messageWindow = (SDK::UWB_MsgWindow_C*)obj;
                            auto selectWidget = messageWindow->MsgSelectMenu->SsPlayerWidgetIcon;
                            selectWidget->bScissor = true;
                        }

                        // Check for whitelisted classes and skip centering them
                        if (obj->IsA(SDK::UWB_ScreenFade_C::StaticClass()) || obj->IsA(SDK::UWB_ScreenTransition_C::StaticClass()) || obj->IsA(SDK::UWB_EventColorFade_C::StaticClass()) || obj->IsA(SDK::UWB_Loading_C::StaticClass()) || obj->IsA(SDK::UWB_EncountScene_C::StaticClass()))
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
        // Fix offset markers (i.e speech bubbles etc)
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

        // HUD Backgrounds
        uint8_t* HUDBackgroundsScanResult = Memory::PatternScan(baseModule, "C3 F2 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? F2 0F ?? ?? ?? ?? F2 0F ?? ?? 48 ?? ??") + 0x9;
        if (HUDBackgroundsScanResult)
        {
            spdlog::info("HUD: HUDBackgrounds: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDBackgroundsScanResult - (uintptr_t)baseModule);

            static SafetyHookMid HUDBackgroundsMidHook{};
            HUDBackgroundsMidHook = safetyhook::create_mid(HUDBackgroundsScanResult,
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
        uint8_t* PauseBGScanResult = Memory::PatternScan(baseModule, "F3 0F ?? ?? ?? ?? ?? ?? 48 8D ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ??") + 0x15;
        if (PauseBGScanResult)
        {
            spdlog::info("HUD: PauseBG: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)PauseBGScanResult - (uintptr_t)baseModule);

            static SafetyHookMid PauseBGMidHook{};
            PauseBGMidHook = safetyhook::create_mid(PauseBGScanResult,
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
}

void GraphicalTweaks()
{
    // Set CVARs
    // GameplayStatics::OpenLevel
    uint8_t* SetCVARSScanResult = Memory::PatternScan(baseModule, "48 8B ?? ?? 4C 8D ?? ?? 48 8B ?? ?? 44 0F ?? ?? E8 ?? ?? ?? ?? 48 8B ?? ?? 48 85 ?? 74 ?? E8 ?? ?? ?? ??");
    if (SetCVARSScanResult)
    {
        spdlog::info("Set CVARS: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)SetCVARSScanResult - (uintptr_t)baseModule);

        static SafetyHookMid SetCVARSMidHook{};
        SetCVARSMidHook = safetyhook::create_mid(SetCVARSScanResult,
            [](SafetyHookContext& ctx)
            {
                auto ScreenPercentageCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.ScreenPercentage", ConsoleObjects));
                if (ScreenPercentageCVAR)
                {
                    if (bScreenPercentage && ScreenPercentageCVAR->GetFloat() != fScreenPercentage)
                    {
                        ScreenPercentageCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                        ScreenPercentageCVAR->Set(std::to_wstring(fScreenPercentage).c_str());
                        spdlog::info("Set CVARS: Set r.ScreenPercentage to {}", ScreenPercentageCVAR->GetFloat());
                    }

                    // Grab screen percentage in case it was set by the user
                    fScreenPercentage = ScreenPercentageCVAR->GetFloat();
                }
         
                if (bEnableTAA)
                {
                    auto AntiAliasingCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.DefaultFeature.AntiAliasing", ConsoleObjects));
                    if (AntiAliasingCVAR && AntiAliasingCVAR->GetInt() != 2)
                    {
                        AntiAliasingCVAR->SetFlags(ECVF_SetByConstructor);
                        AntiAliasingCVAR->Set(L"2");
                        spdlog::info("Set CVARS: Set r.DefaultFeature.AntiAliasing to {}", AntiAliasingCVAR->GetInt());
                    }

                    auto VertexMotionVectorsCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.VertexDeformationOutputsVelocity", ConsoleObjects));
                    if (VertexMotionVectorsCVAR && VertexMotionVectorsCVAR->GetInt() != 1)
                    {
                        VertexMotionVectorsCVAR->SetFlags(ECVF_SetByConstructor);
                        VertexMotionVectorsCVAR->Set(L"1");
                        spdlog::info("Set CVARS: Set r.VertexDeformationOutputsVelocity to {}", VertexMotionVectorsCVAR->GetInt());
                    }

                    auto HalfResAOCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.AmbientOcclusion.HalfRes", ConsoleObjects));
                    if (HalfResAOCVAR && HalfResAOCVAR->GetInt() != 0)
                    {
                        HalfResAOCVAR->SetFlags(ECVF_SetByConstructor);
                        HalfResAOCVAR->Set(L"0");
                        spdlog::info("Set CVARS: Set r.AmbientOcclusion.HalfRes to {}", HalfResAOCVAR->GetInt());
                    }

                    if (bEnableGen5TAAU)
                    {
                        auto TAAUAlgorithmCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.TemporalAA.Algorithm", ConsoleObjects));
                        if (TAAUAlgorithmCVAR && TAAUAlgorithmCVAR->GetInt() != 1)
                        {
                            TAAUAlgorithmCVAR->SetFlags(ECVF_SetByConstructor);
                            TAAUAlgorithmCVAR->Set(L"1");
                            spdlog::info("Set CVARS: Set r.TemporalAA.Algorithm to {}", TAAUAlgorithmCVAR->GetInt());
                        }
                    }
                }

                if (bEnableGTAO)
                {
                    auto AOMethodCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.AmbientOcclusion.Method", ConsoleObjects));
                    if (AOMethodCVAR && AOMethodCVAR->GetInt() != 1)
                    {
                        AOMethodCVAR->SetFlags(ECVF_SetByConstructor);
                        AOMethodCVAR->Set(L"1");
                        spdlog::info("Set CVARS: Set r.AmbientOcclusion.Method to {}", AOMethodCVAR->GetInt());
                    }

                    if (bGTAOHalfRes)
                    {
                        auto HalfResGTAOCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.GTAO.Downsample", ConsoleObjects));
                        if (HalfResGTAOCVAR && HalfResGTAOCVAR->GetInt() != 1)
                        {
                            HalfResGTAOCVAR->SetFlags(ECVF_SetByConstructor);
                            HalfResGTAOCVAR->Set(L"1");
                            spdlog::info("Set CVARS: Set r.GTAO.Downsample to {}", HalfResGTAOCVAR->GetInt());
                        }
                    }
                }

                if (bAdjustLOD)
                {
                    auto FoliageDistanceCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("foliage.LODDistanceScale", ConsoleObjects));
                    if (FoliageDistanceCVAR && FoliageDistanceCVAR->GetFloat() != fFoliageDistanceScale)
                    {
                        FoliageDistanceCVAR->SetFlags(ECVF_SetByConstructor);
                        FoliageDistanceCVAR->Set(std::to_wstring(fFoliageDistanceScale).c_str());
                        spdlog::info("Set CVARS: Set foliage.LODDistanceScale to {}", FoliageDistanceCVAR->GetFloat());
                    }

                    auto ViewDistanceCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.ViewDistanceScale", ConsoleObjects));
                    if (ViewDistanceCVAR && ViewDistanceCVAR->GetFloat() != fViewDistanceScale)
                    {
                        ViewDistanceCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                        ViewDistanceCVAR->Set(std::to_wstring(fViewDistanceScale).c_str());
                        spdlog::info("Set CVARS: Set r.ViewDistanceScale to {}", ViewDistanceCVAR->GetFloat());
                    }

                    auto SkeletalMeshLODBiasCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.SkeletalMeshLODBias", ConsoleObjects));
                    if (SkeletalMeshLODBiasCVAR && SkeletalMeshLODBiasCVAR->GetInt() != -1)
                    {
                        SkeletalMeshLODBiasCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                        SkeletalMeshLODBiasCVAR->Set(L"-1");
                        spdlog::info("Set CVARS: Set r.SkeletalMeshLODBias to {}", SkeletalMeshLODBiasCVAR->GetInt());
                    }
                }

                if (bShadowQuality)
                {
                    auto MaxShadowCSMResolutionCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.Shadow.MaxCSMResolution", ConsoleObjects));
                    if (MaxShadowCSMResolutionCVAR && MaxShadowCSMResolutionCVAR->GetInt() != iShadowResolution)
                    {
                        MaxShadowCSMResolutionCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                        MaxShadowCSMResolutionCVAR->Set(std::to_wstring(iShadowResolution).c_str());
                        spdlog::info("Set CVARS: Set r.Shadow.MaxCSMResolution to {}", MaxShadowCSMResolutionCVAR->GetInt());
                    }

                    auto MaxShadowResolutionCVAR = reinterpret_cast<IConsoleVariable*>(Unreal::FindCVAR("r.Shadow.MaxResolution", ConsoleObjects));
                    if (MaxShadowResolutionCVAR && MaxShadowResolutionCVAR->GetInt() != iShadowResolution)
                    {
                        MaxShadowResolutionCVAR->SetFlags(SDK::ECVF_SetByConstructor);
                        MaxShadowResolutionCVAR->Set(std::to_wstring(iShadowResolution).c_str());
                        spdlog::info("Set CVARS: Set r.Shadow.MaxResolution to {}", MaxShadowResolutionCVAR->GetInt());
                    }
                }
            });
    }
    else if (!SetCVARSScanResult)
    {
        spdlog::error("Set CVARS: Pattern scan failed.");
    }
}

void Misc()
{
    // IConsoleManager Singleton
    uint8_t* ConsoleManagerSingletonScanResult = Memory::PatternScan(baseModule, "48 83 ?? ?? 48 83 3D ?? ?? ?? ?? 00 0F 85 ?? ?? ?? ?? B9 ?? ?? ?? ?? 48 89 ?? ?? ?? E8 ?? ?? ?? ?? 48 ?? ?? 48 ?? ??");
    if (ConsoleManagerSingletonScanResult)
    {
        spdlog::info("IConsoleManager Singleton: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ConsoleManagerSingletonScanResult - (uintptr_t)baseModule);
        uintptr_t SingletonAddr = Memory::GetAbsolute((uintptr_t)ConsoleManagerSingletonScanResult + 0x7) + 0x1;
        spdlog::info("IConsoleManager Singleton: Singleton address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)SingletonAddr - (uintptr_t)baseModule);

        // Cache all console objects
        ConsoleObjects = Unreal::GetConsoleObjects(SingletonAddr);
    }
    else if (!ConsoleManagerSingletonScanResult)
    {
        spdlog::error("IConsoleManager Singleton: Pattern scan failed.");
    }

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
                    if (ctx.rcx)
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
                    }
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
                spdlog::info("Intro Skip: Failed to find intro movie function.");
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

