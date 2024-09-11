#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionRewardWidget

#include "Basic.hpp"

#include "CollectionBookSectionRewardWidget_classes.hpp"
#include "CollectionBookSectionRewardWidget_parameters.hpp"


namespace SDK
{

// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.ExecuteUbergraph_CollectionBookSectionRewardWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionRewardWidget_C::ExecuteUbergraph_CollectionBookSectionRewardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "ExecuteUbergraph_CollectionBookSectionRewardWidget");

	Params::CollectionBookSectionRewardWidget_C_ExecuteUbergraph_CollectionBookSectionRewardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECollectionBookRewardStatus             NewStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionRewardWidget_C::OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "OnRewardStatusChanged");

	Params::CollectionBookSectionRewardWidget_C_OnRewardStatusChanged Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}

