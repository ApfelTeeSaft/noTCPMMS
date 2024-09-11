#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyInfo

#include "Basic.hpp"

#include "ItemTransformKeyInfo_classes.hpp"
#include "ItemTransformKeyInfo_parameters.hpp"


namespace SDK
{

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyInfo_C::ExecuteUbergraph_ItemTransformKeyInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyInfo_C", "ExecuteUbergraph_ItemTransformKeyInfo");

	Params::ItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformKeyInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyInfo_C::SetKeyToRepresent(class UFortItem* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyInfo_C", "SetKeyToRepresent");

	Params::ItemTransformKeyInfo_C_SetKeyToRepresent Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);
}

}
