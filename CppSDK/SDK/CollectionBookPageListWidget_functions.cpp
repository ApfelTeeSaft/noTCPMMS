#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPageListWidget

#include "Basic.hpp"

#include "CollectionBookPageListWidget_classes.hpp"
#include "CollectionBookPageListWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "ExecuteUbergraph_CollectionBookPageListWidget");

	Params::CollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    ThisButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnSelectionChanged");

	Params::CollectionBookPageListWidget_C_OnSelectionChanged Parms{};

	Parms.ThisButton = ThisButton;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   NumAvailableSlots                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCollectionBookState                State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int32 NumAvailableSlots, EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnPageDetailsUpdated");

	Params::CollectionBookPageListWidget_C_OnPageDetailsUpdated Parms{};

	Parms.NumAvailableSlots = NumAvailableSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "PreConstruct");

	Params::CollectionBookPageListWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPageListWidget_C::OnExpansionChanged(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "OnExpansionChanged");

	Params::CollectionBookPageListWidget_C_OnExpansionChanged Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage*          Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage* Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsPage");

	Params::CollectionBookPageListWidget_C_SetupAsPage Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory*      Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory* Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "SetupAsCategory");

	Params::CollectionBookPageListWidget_C_SetupAsCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "UpdateAvailableSlotsBorderColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.Update Available Slots Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumAvailableSlots                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageListWidget_C::Update_Available_Slots_Widget(int32 NumAvailableSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPageListWidget_C", "Update Available Slots Widget");

	Params::CollectionBookPageListWidget_C_Update_Available_Slots_Widget Parms{};

	Parms.NumAvailableSlots = NumAvailableSlots;

	UObject::ProcessEvent(Func, &Parms);
}

}
