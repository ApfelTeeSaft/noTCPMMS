#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBarTopIcon

#include "Basic.hpp"

#include "CollectionBarTopIcon_classes.hpp"
#include "CollectionBarTopIcon_parameters.hpp"


namespace SDK
{

// Function CollectionBarTopIcon.CollectionBarTopIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBarTopIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBarTopIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.ExecuteUbergraph_CollectionBarTopIcon
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBarTopIcon_C::ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBarTopIcon_C", "ExecuteUbergraph_CollectionBarTopIcon");

	Params::CollectionBarTopIcon_C_ExecuteUbergraph_CollectionBarTopIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

