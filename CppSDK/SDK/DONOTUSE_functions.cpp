#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DONOTUSE

#include "Basic.hpp"

#include "DONOTUSE_classes.hpp"
#include "DONOTUSE_parameters.hpp"


namespace SDK
{

// Function DONOTUSE.DONOTUSE_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDONOTUSE_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DONOTUSE_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DONOTUSE.DONOTUSE_C.ExecuteUbergraph_DONOTUSE
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDONOTUSE_C::ExecuteUbergraph_DONOTUSE(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DONOTUSE_C", "ExecuteUbergraph_DONOTUSE");

	Params::DONOTUSE_C_ExecuteUbergraph_DONOTUSE Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DONOTUSE.DONOTUSE_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UDONOTUSE_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DONOTUSE_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

