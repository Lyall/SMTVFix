#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadAssetByAssetData

#include "Basic.hpp"

#include "LoadAssetByAssetData_classes.hpp"
#include "LoadAssetByAssetData_parameters.hpp"


namespace SDK
{

// Function LoadAssetByAssetData.AssetDataAsyncLoader.LoadAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                       AssetData                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(class UObject* Loaded)>  OnLoaded                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo                LatentInfo                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAssetDataAsyncLoader::LoadAssetData(class UObject* WorldContextObject, const struct FAssetData& AssetData, TDelegate<void(class UObject* Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetDataAsyncLoader", "LoadAssetData");

	Params::AssetDataAsyncLoader_LoadAssetData Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssetData = std::move(AssetData);
	Parms.OnLoaded = OnLoaded;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LoadAssetByAssetData.AssetDataAsyncLoader.LoadClassAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                       AssetData                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(TSubclassOf<class UObject> Loaded)>OnLoaded                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo                LatentInfo                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAssetDataAsyncLoader::LoadClassAssetData(class UObject* WorldContextObject, const struct FAssetData& AssetData, TDelegate<void(TSubclassOf<class UObject> Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AssetDataAsyncLoader", "LoadClassAssetData");

	Params::AssetDataAsyncLoader_LoadClassAssetData Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssetData = std::move(AssetData);
	Parms.OnLoaded = OnLoaded;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction LoadAssetByAssetData.AssetDataAsyncLoader.OnAssetDataLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                          Loaded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssetDataAsyncLoader::OnAssetDataLoaded__DelegateSignature(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetDataAsyncLoader", "OnAssetDataLoaded__DelegateSignature");

	Params::AssetDataAsyncLoader_OnAssetDataLoaded__DelegateSignature Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction LoadAssetByAssetData.AssetDataAsyncLoader.OnAssetClassDataLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAssetDataAsyncLoader::OnAssetClassDataLoaded__DelegateSignature(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AssetDataAsyncLoader", "OnAssetClassDataLoaded__DelegateSignature");

	Params::AssetDataAsyncLoader_OnAssetClassDataLoaded__DelegateSignature Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

