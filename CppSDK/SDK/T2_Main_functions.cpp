#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: T2_Main

#include "Basic.hpp"

#include "T2_Main_classes.hpp"
#include "T2_Main_parameters.hpp"


namespace SDK
{

// Function T2_Main.T2_Main_C.ExecuteUbergraph_T2_Main
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UT2_Main_C::ExecuteUbergraph_T2_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T2_Main_C", "ExecuteUbergraph_T2_Main");

	Params::T2_Main_C_ExecuteUbergraph_T2_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function T2_Main.T2_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT2_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T2_Main_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function T2_Main.T2_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UT2_Main_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("T2_Main_C", "PreConstruct");

	Params::T2_Main_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
