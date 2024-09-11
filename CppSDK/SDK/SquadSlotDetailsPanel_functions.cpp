#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotDetailsPanel

#include "Basic.hpp"

#include "SquadSlotDetailsPanel_classes.hpp"
#include "SquadSlotDetailsPanel_parameters.hpp"


namespace SDK
{

// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.ExecuteUbergraph_SquadSlotDetailsPanel
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::ExecuteUbergraph_SquadSlotDetailsPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "ExecuteUbergraph_SquadSlotDetailsPanel");

	Params::SquadSlotDetailsPanel_C_ExecuteUbergraph_SquadSlotDetailsPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotRestrictionFactorsChangedBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotRestrictionFactorsChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadSlotDetailsPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotDetailsPanel_C::BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::SquadSlotDetailsPanel_C_BndEvt__ShowInSkillTreeButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleSquadSlotStateChangedBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleSquadSlotStateChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleSquadSlotStateChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.HandleDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void USquadSlotDetailsPanel_C::HandleDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "HandleDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.UpdateSkillTreeButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotDetailsPanel_C::UpdateSkillTreeButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "UpdateSkillTreeButtonVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.GetRestrictionReasonsAsText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EFortSquadSlottingRestrictionReason>Reasons                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                             Text                                                   (Parm, OutParm)

void USquadSlotDetailsPanel_C::GetRestrictionReasonsAsText(TArray<EFortSquadSlottingRestrictionReason>& Reasons, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "GetRestrictionReasonsAsText");

	Params::SquadSlotDetailsPanel_C_GetRestrictionReasonsAsText Parms{};

	Parms.Reasons = std::move(Reasons);

	UObject::ProcessEvent(Func, &Parms);

	Reasons = std::move(Parms.Reasons);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function SquadSlotDetailsPanel.SquadSlotDetailsPanel_C.Set Scroll Box to Nav Scroll Widget
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotDetailsPanel_C::Set_Scroll_Box_to_Nav_Scroll_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotDetailsPanel_C", "Set Scroll Box to Nav Scroll Widget");

	UObject::ProcessEvent(Func, nullptr);
}

}
