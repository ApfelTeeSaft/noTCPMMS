#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreBarsScoreMessageItem

#include "Basic.hpp"

#include "ScoreBarsScoreMessageItem_classes.hpp"
#include "ScoreBarsScoreMessageItem_parameters.hpp"


namespace SDK
{

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::ExecuteUbergraph_ScoreBarsScoreMessageItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ExecuteUbergraph_ScoreBarsScoreMessageItem");

	Params::ScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnBeginRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnBeginRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OldStackSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnStackSizeChanged");

	Params::ScoreBarsScoreMessageItem_C_OnStackSizeChanged Parms{};

	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::UpdateValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "UpdateValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Base_Delta_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Name_Text                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UScoreMessageNumber_C*            In_Score_Widget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::Setup(int32 Base_Delta_0, const class FText& Name_Text, class UScoreMessageNumber_C* In_Score_Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "Setup");

	Params::ScoreBarsScoreMessageItem_C_Setup Parms{};

	Parms.Base_Delta_0 = Base_Delta_0;
	Parms.Name_Text = std::move(Name_Text);
	Parms.In_Score_Widget = In_Score_Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::ClearScoreValueWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ClearScoreValueWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::GetScoreValueWidget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "GetScoreValueWidget");

	Params::ScoreBarsScoreMessageItem_C_GetScoreValueWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnAppearAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnAppearAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}

