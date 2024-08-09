#include "stdafx.h"
#include "SDK/Basic.hpp"
#include "SDK/ConsoleVariable.h"

namespace Memory
{
    template<typename T>
    void Write(uintptr_t writeAddress, T value)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), PAGE_EXECUTE_WRITECOPY, &oldProtect);
        *(reinterpret_cast<T*>(writeAddress)) = value;
        VirtualProtect((LPVOID)(writeAddress), sizeof(T), oldProtect, &oldProtect);
    }

    void PatchBytes(uintptr_t address, const char* pattern, unsigned int numBytes)
    {
        DWORD oldProtect;
        VirtualProtect((LPVOID)address, numBytes, PAGE_EXECUTE_READWRITE, &oldProtect);
        memcpy((LPVOID)address, pattern, numBytes);
        VirtualProtect((LPVOID)address, numBytes, oldProtect, &oldProtect);
    }

    // CSGOSimple's pattern scan
    // https://github.com/OneshotGH/CSGOSimple-master/blob/master/CSGOSimple/helpers/utils.cpp
    std::uint8_t* PatternScan(void* module, const char* signature)
    {
        static auto pattern_to_byte = [](const char* pattern) {
            auto bytes = std::vector<int>{};
            auto start = const_cast<char*>(pattern);
            auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current) {
                if (*current == '?') {
                    ++current;
                    if (*current == '?')
                        ++current;
                    bytes.push_back(-1);
                }
                else {
                    bytes.push_back(strtoul(current, &current, 16));
                }
            }
            return bytes;
            };

        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);

        auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto patternBytes = pattern_to_byte(signature);
        auto scanBytes = reinterpret_cast<std::uint8_t*>(module);

        auto s = patternBytes.size();
        auto d = patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - s; ++i) {
            bool found = true;
            for (auto j = 0ul; j < s; ++j) {
                if (scanBytes[i + j] != d[j] && d[j] != -1) {
                    found = false;
                    break;
                }
            }
            if (found) {
                return &scanBytes[i];
            }
        }
        return nullptr;
    }

    static HMODULE GetThisDllHandle()
    {
        MEMORY_BASIC_INFORMATION info;
        size_t len = VirtualQueryEx(GetCurrentProcess(), (void*)GetThisDllHandle, &info, sizeof(info));
        assert(len == sizeof(info));
        return len ? (HMODULE)info.AllocationBase : NULL;
    }

    uint32_t ModuleTimestamp(void* module)
    {
        auto dosHeader = (PIMAGE_DOS_HEADER)module;
        auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)module + dosHeader->e_lfanew);
        return ntHeaders->FileHeader.TimeDateStamp;
    }

    uintptr_t GetAbsolute(uintptr_t address) noexcept
    {
        return (address + 4 + *reinterpret_cast<std::int32_t*>(address));
    }
}

namespace Util
{
    std::pair<int, int> GetPhysicalDesktopDimensions() {
        if (DEVMODE devMode{ .dmSize = sizeof(DEVMODE) }; EnumDisplaySettings(nullptr, ENUM_CURRENT_SETTINGS, &devMode))
            return { devMode.dmPelsWidth, devMode.dmPelsHeight };

        return {};
    }

    int HexStringToInt(const std::string& hexString) {
        int num;
        std::stringstream ss;
        ss << std::hex << hexString;
        ss >> num;
        return num;
    }

    std::wstring StringToWString(std::string Str) {
        std::vector<wchar_t> buf(Str.size());
        std::use_facet<std::ctype<wchar_t>>(std::locale()).widen(Str.data(),
            Str.data() + Str.size(),
            buf.data());
        return std::wstring(buf.data(), buf.size());
    }
}

namespace Unreal
{
    struct FConsoleObject
    {
        void* Vft;
        SDK::FString Description;
    };

    SDK::TMap<SDK::FString, FConsoleObject*> GetConsoleObjects(uintptr_t singletonAddr)
    {
        if (singletonAddr == 0)
        {
            return SDK::TMap<SDK::FString, FConsoleObject*>();
        }

        SDK::uint8** Singleton = reinterpret_cast<SDK::uint8**>(singletonAddr);

        if (Singleton == nullptr || *Singleton == nullptr )
        {
            return SDK::TMap<SDK::FString, FConsoleObject*>();
        }

        return *reinterpret_cast<SDK::TMap<SDK::FString, FConsoleObject*>*>(*Singleton + 8);
    }

    SDK::IConsoleVariable* FindCVAR(std::string CVAR, SDK::TMap<SDK::FString, FConsoleObject*> ConsoleObjects)
    {
        if (CVAR.empty() || ConsoleObjects.Num() == 0)
        {
            return nullptr;
        }

        for (const auto& Pair : ConsoleObjects)
        {
            if (Pair.Value() == nullptr)
            {
                continue;
            }

            if (Pair.Key().ToString() == CVAR)
            {
                return reinterpret_cast<SDK::IConsoleVariable*>(Pair.Value());
            }
        }

        return nullptr;
    }
}