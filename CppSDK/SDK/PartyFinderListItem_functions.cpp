#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyFinderListItem

#include "Basic.hpp"

#include "PartyFinderListItem_classes.hpp"
#include "PartyFinderListItem_parameters.hpp"


namespace SDK
{

// Function PartyFinderListItem.PartyFinderListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::InviteJoinChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "InviteJoinChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.ExecuteUbergraph_PartyFinderListItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinderListItem_C::ExecuteUbergraph_PartyFinderListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "ExecuteUbergraph_PartyFinderListItem");

	Params::PartyFinderListItem_C_ExecuteUbergraph_PartyFinderListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinderListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyFinderListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::ExpansionChanged(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "ExpansionChanged");

	Params::PartyFinderListItem_C_ExpansionChanged Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.OnSocialItemSet
// (Event, Protected, BlueprintEvent)

void UPartyFinderListItem_C::OnSocialItemSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "OnSocialItemSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.InitializeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::InitializeItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "InitializeItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.BindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::BindSocialItemDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "BindSocialItemDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.HandlePresenceUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::HandlePresenceUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "HandlePresenceUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Expanded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinderListItem_C::SetupExpansion(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "SetupExpansion");

	Params::PartyFinderListItem_C_SetupExpansion Parms{};

	Parms.Expanded = Expanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyFinderListItem.PartyFinderListItem_C.UpdateStateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::UpdateStateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "UpdateStateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyFinderListItem.PartyFinderListItem_C.UnbindSocialItemDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyFinderListItem_C::UnbindSocialItemDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyFinderListItem_C", "UnbindSocialItemDelegates");

	UObject::ProcessEvent(Func, nullptr);
}

}

