#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationPickerTileButton

#include "Basic.hpp"

#include "AthenaCustomizationPickerTileButton_classes.hpp"
#include "AthenaCustomizationPickerTileButton_parameters.hpp"


namespace SDK
{

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	Params::AthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationPickerTileButton_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "SetSelected");

	Params::AthenaCustomizationPickerTileButton_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationPickerTileButton_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "SetData");

	Params::AthenaCustomizationPickerTileButton_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::UpdateBangState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "UpdateBangState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::MarkCosmeticAsSeen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationPickerTileButton_C", "MarkCosmeticAsSeen");

	UObject::ProcessEvent(Func, nullptr);
}

}

