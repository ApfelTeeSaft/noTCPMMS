#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreItemCardFront

#include "Basic.hpp"

#include "StoreItemCardFront_classes.hpp"
#include "StoreItemCardFront_parameters.hpp"


namespace SDK
{

// Function StoreItemCardFront.StoreItemCardFront_C.ExecuteUbergraph_StoreItemCardFront
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::ExecuteUbergraph_StoreItemCardFront(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "ExecuteUbergraph_StoreItemCardFront");

	Params::StoreItemCardFront_C_ExecuteUbergraph_StoreItemCardFront Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InitObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::InitFromObject(class UObject* InitObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "InitFromObject");

	Params::StoreItemCardFront_C_InitFromObject Parms{};

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.OnFortStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortStoreState                         NewStoreState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreItemCardFront_C::OnFortStoreStateChanged(EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "OnFortStoreStateChanged");

	Params::StoreItemCardFront_C_OnFortStoreStateChanged Parms{};

	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreItemCardFront_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Initialize_Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCard                            InCard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UStoreItemCardFront_C::Initialize_Card(const struct FCard& InCard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Initialize_Card");

	Params::StoreItemCardFront_C_Initialize_Card Parms{};

	Parms.InCard = std::move(InCard);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Draw_Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreItemCardFront_C::Draw_Card()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Draw_Card");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Card Name Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UStoreItemCardFront_C::Get_Card_Name_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Get Card Name Text");

	Params::StoreItemCardFront_C_Get_Card_Name_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function StoreItemCardFront.StoreItemCardFront_C.Get Type Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)

void UStoreItemCardFront_C::Get_Type_Text(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreItemCardFront_C", "Get Type Text");

	Params::StoreItemCardFront_C_Get_Type_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}

}
