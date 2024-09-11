#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend

#include "Basic.hpp"

#include "Frontend_classes.hpp"
#include "Frontend_parameters.hpp"


namespace SDK
{

// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_C", "ExecuteUbergraph_FrontEnd");

	Params::FrontEnd_C_ExecuteUbergraph_FrontEnd Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::EnableTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_C", "EnableTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AFrontEnd_C::OnMatchStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_C", "OnMatchStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEnd_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

