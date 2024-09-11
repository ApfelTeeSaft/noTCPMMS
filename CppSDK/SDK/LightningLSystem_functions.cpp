#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightningLSystem

#include "Basic.hpp"

#include "LightningLSystem_classes.hpp"
#include "LightningLSystem_parameters.hpp"


namespace SDK
{

// Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightningLsystem_C::ExecuteUbergraph_LightningLsystem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "ExecuteUbergraph_LightningLsystem");

	Params::LightningLsystem_C_ExecuteUbergraph_LightningLsystem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LightningLSystem.LightningLsystem_C.EndLightning
// (BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::EndLightning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "EndLightning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.OnLightingInitialized
// (Event, Public, BlueprintEvent)

void ALightningLsystem_C::OnLightingInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "OnLightingInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.DebugStrike
// (BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::DebugStrike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "DebugStrike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.SetupLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Start_Location_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          End_Location_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightningLsystem_C::SetupLightning(const struct FVector& Start_Location_0, const struct FVector& End_Location_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "SetupLightning");

	Params::LightningLsystem_C_SetupLightning Parms{};

	Parms.Start_Location_0 = std::move(Start_Location_0);
	Parms.End_Location_0 = std::move(End_Location_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LightningLSystem.LightningLsystem_C.OnLightingCleanup
// (Event, Public, BlueprintEvent)

void ALightningLsystem_C::OnLightingCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "OnLightingCleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.CleanupMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::CleanupMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "CleanupMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightningLSystem.LightningLsystem_C.GetRandomMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::GetRandomMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightningLsystem_C", "GetRandomMesh");

	UObject::ProcessEvent(Func, nullptr);
}

}

