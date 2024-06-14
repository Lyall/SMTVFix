#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
std::string sFixName = "SMTVFix";
std::string sFixVer = "0.8.0";
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
uintptr_t UIManager;
uintptr_t ScreenFade;
uintptr_t ScreenTransitionWidget;

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
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bFixAspect);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bFixHUD);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFixFOV);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", fScreenPercentage);

    // Log config parse
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
    if (bFixHUD)
    {
        // Center HUD
        uint8_t* HUDPositionScanResult = Memory::PatternScan(baseModule, "FF ?? 48 ?? ?? ?? ?? 0F ?? ?? 48 ?? ?? 0F ?? ?? 48 ?? ?? ?? 5F C3") + 0xA;
        if (HUDPositionScanResult)
        {
            spdlog::info("HUD: HUD Position: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDPositionScanResult - (uintptr_t)baseModule);

            static SafetyHookMid HUDPositionMidHook{};
            HUDPositionMidHook = safetyhook::create_mid(HUDPositionScanResult,
                [](SafetyHookContext& ctx)
                {
                    // Check for marker and don't center the UI element.
                    if (ctx.rcx + 0x160)
                    {
                        if (*reinterpret_cast<float*>(ctx.rcx + 0x160) == 12345.00f)
                        {
                            return;
                        }
                    }

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
                });
        }
        else if (!HUDPositionScanResult)
        {
            spdlog::error("HUD: HUD Position: Pattern scan failed.");
        }

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

        // UIManager
        uint8_t* UIManagerScanResult = Memory::PatternScan(baseModule, "E9 ?? ?? ?? ?? 09 ?? ?? ?? ?? ?? CC E2 ?? 9D");
        if (UIManagerScanResult)
        {
            spdlog::info("HUD: UIManager: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)UIManagerScanResult - (uintptr_t)baseModule);
            uintptr_t UIManagerGetAddr = Memory::GetAbsolute((uintptr_t)UIManagerScanResult + 0x1);
            spdlog::info("HUD: UIManager: Func address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)UIManagerGetAddr - (uintptr_t)baseModule);

            static SafetyHookMid UIManagerMidHook{};
            UIManagerMidHook = safetyhook::create_mid(UIManagerGetAddr + 0x78,
                [](SafetyHookContext& ctx)
                {
                    UIManager = ctx.rax;

                    if (UIManager + 0x48 && UIManager + 0xE8)
                    {
                        // Screen Fades
                        ScreenFade = *(uintptr_t*)(UIManager + 0x48);
                        if (ScreenFade + 0x160)
                        {
                            // Set marker
                            *reinterpret_cast<float*>(ScreenFade + 0x160) = 12345.00f;
                        }

                        // Screen Transitions
                        uintptr_t ScreenTransition = *(uintptr_t*)(UIManager + 0xE8);
                        if (ScreenTransition)
                        {
                            ScreenTransitionWidget = *(uintptr_t*)(ScreenTransition + 0x238);
                            if (ScreenTransitionWidget)
                            {
                                if (ScreenTransitionWidget + 0x160)
                                {
                                    // Set marker
                                    *reinterpret_cast<float*>(ScreenTransitionWidget + 0x160) = 12345.00f;
                                }
                            }
                        }
                    }
                });
        }
        else if (!UIManagerScanResult)
        {
            spdlog::error("HUD: UIManager: Pattern scan failed.");
        }
    }
}

void GraphicalTweaks()
{
    // Screen Percentage
    uint8_t* ScreenPercentageScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
    if (ScreenPercentageScanResult)
    {
        spdlog::info("Screen Percentage: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ScreenPercentageScanResult - (uintptr_t)baseModule);

        static SafetyHookMid ScreenPercentageMidHook{};
        ScreenPercentageMidHook = safetyhook::create_mid(ScreenPercentageScanResult + 0x3,
            [](SafetyHookContext& ctx)
            {
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

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    CurrentResolution();
    AspectFOV();
    HUD();
    GraphicalTweaks();
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

