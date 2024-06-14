#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>
#include "SDK/Engine_classes.hpp"
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
std::string sFixVer = "0.8.2";
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
bool bEnableConsole;
bool bDisableMenuFPSCap;
bool bEnableTAA;
bool bEnableGen5TAAU;
bool bScreenPercentage;
float fScreenPercentage = 100.0f;

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
uintptr_t AntiAliasingCVARAddr;
uintptr_t HalfResAOCVARAddr;
uintptr_t TAAUAlgorithmCVARAddr;

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
    inipp::get_value(ini.sections["Enable Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Remove 60FPS Cap"], "Enabled", bDisableMenuFPSCap);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", fScreenPercentage);
    inipp::get_value(ini.sections["Enable TAA"], "Enabled", bEnableTAA);
    inipp::get_value(ini.sections["Enable TAA"], "TAAU_Gen5", bEnableGen5TAAU);

    // Log config parse
    spdlog::info("Config Parse: bIntroSkip: {}", bIntroSkip);
    spdlog::info("Config Parse: bEnableConsole: {}", bEnableConsole);
    spdlog::info("Config Parse: bDisableMenuFPSCap: {}", bDisableMenuFPSCap);
    spdlog::info("Config Parse: bFixAspect: {}", bFixAspect);
    spdlog::info("Config Parse: bFixHUD: {}", bFixHUD);
    spdlog::info("Config Parse: bFixFOV: {}", bFixFOV);
    spdlog::info("Config Parse: bScreenPercentage: {}", bScreenPercentage);
    spdlog::info("Config Parse: fScreenPercentage: {}", fScreenPercentage);
    if (fScreenPercentage < (float)10 || fScreenPercentage >(float)400)
    {
        fScreenPercentage = std::clamp(fScreenPercentage, (float)10, (float)400);
        spdlog::warn("Config Parse: fScreenPercentage value invalid, clamped to {}", fScreenPercentage);
    }
    spdlog::info("Config Parse: bEnableTAA: {}", bEnableTAA);
    spdlog::info("Config Parse: bEnableGen5TAAU: {}", bEnableGen5TAAU);
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
    // Aspect Ratio / FOV
    uint8_t* AspectFOVScanResult = Memory::PatternScan(baseModule, "74 ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? ?? ?? ?? EB ?? F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B") + 0xA;
    if (AspectFOVScanResult)
    {
        spdlog::info("Aspect Ratio/FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AspectFOVScanResult - (uintptr_t)baseModule);

        if (bFixFOV)
        {
            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(AspectFOVScanResult + 0x12,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                });
        }

        if (bFixAspect)
        {
            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectFOVScanResult + 0x1D,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)&fAspectRatio;
                });
        }
    }
    else if (!AspectFOVScanResult)
    {
        spdlog::error("Aspect Ratio/FOV: Pattern scan failed.");
    }
}

void HUD()
{
    // Center HUD + Intro Skip
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
    // Enabling TAA requires half res AO to be disabled
    uint8_t* AntiAliasingCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? 4C ?? ?? ?? ?? 74 ?? FF 15 ?? ?? ?? ?? 33 ?? 3B ?? ?? ?? ?? ?? 0F ?? ?? EB ?? 33 ??");
    uint8_t* HalfResAOCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 83 ?? ?? 00 7E ??");
    uint8_t* TAAUAlgorithmCVARScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? ?? ?? ?? B9 0A 00 00 00 0F ?? ?? ?? ?? ?? ?? 83 ?? ?? 00");
    if (AntiAliasingCVARScanResult && HalfResAOCVARScanResult && TAAUAlgorithmCVARScanResult)
    {
        AntiAliasingCVARAddr = Memory::GetAbsolute((uintptr_t)AntiAliasingCVARScanResult + 0x3);
        spdlog::info("CVARS: r.DefaultFeature.AntiAliasing: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AntiAliasingCVARAddr - (uintptr_t)baseModule);
        HalfResAOCVARAddr = Memory::GetAbsolute((uintptr_t)HalfResAOCVARScanResult + 0x3);
        spdlog::info("CVARS: r.AmbientOcclusion.HalfRes: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HalfResAOCVARAddr - (uintptr_t)baseModule);
        TAAUAlgorithmCVARAddr = Memory::GetAbsolute((uintptr_t)TAAUAlgorithmCVARScanResult + 0x3);
        spdlog::info("CVARS: r.TemporalAA.Algorithm: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)TAAUAlgorithmCVARAddr - (uintptr_t)baseModule);
    }
    else if (!AntiAliasingCVARScanResult || !HalfResAOCVARScanResult || !TAAUAlgorithmCVARScanResult)
    {
        spdlog::error("CVARS: Pattern scan failed.");
    }

    // Screen Percentage
    uint8_t* ScreenPercentageScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
    if (ScreenPercentageScanResult)
    {
        spdlog::info("Screen Percentage: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ScreenPercentageScanResult - (uintptr_t)baseModule);

        static SafetyHookMid ScreenPercentageMidHook{};
        ScreenPercentageMidHook = safetyhook::create_mid(ScreenPercentageScanResult + 0x3,
            [](SafetyHookContext& ctx)
            {
                if (bEnableTAA)
                {
                    if (HalfResAOCVARAddr && AntiAliasingCVARAddr && TAAUAlgorithmCVARAddr)
                    {
                        // r.AmbientOcclusion.HalfRes=0
                        *reinterpret_cast<int*>(*(uintptr_t*)(HalfResAOCVARAddr)) = 0;
                        *reinterpret_cast<int*>(*(uintptr_t*)(HalfResAOCVARAddr)+0x4) = 0;
                        // r.DefaultFeature.AntiAliasing=2
                        *reinterpret_cast<int*>(*(uintptr_t*)(AntiAliasingCVARAddr)) = 2;
                        *reinterpret_cast<int*>(*(uintptr_t*)(AntiAliasingCVARAddr)+0x4) = 2;

                        if (bEnableGen5TAAU)
                        {
                            // r.TemporalAA.R11G11B10History - 0x320 = r.TemporalAA.Algorithm
                            *reinterpret_cast<int*>(*(uintptr_t*)(TAAUAlgorithmCVARAddr)-0x320) = 1;
                            *reinterpret_cast<int*>(*(uintptr_t*)(TAAUAlgorithmCVARAddr)-0x31C) = 1;
                        }
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

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    CurrentResolution();
    AspectFOV();
    HUD();
    GraphicalTweaks();
    Misc();
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

