#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Lights

#include "Basic.hpp"

#include "WM_Lights_classes.hpp"
#include "WM_Lights_parameters.hpp"


namespace SDK
{

// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_Lights_C::ExecuteUbergraph_WM_Lights(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Lights_C", "ExecuteUbergraph_WM_Lights");

	Params::WM_Lights_C_ExecuteUbergraph_WM_Lights Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TurnOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWM_Lights_C::WMMinusLightcontrol(bool TurnOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Lights_C", "WM-Lightcontrol");

	Params::WM_Lights_C_WMMinusLightcontrol Parms{};

	Parms.TurnOn = TurnOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWM_Lights_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Lights_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_Lights.WM_Lights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWM_Lights_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_Lights_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

