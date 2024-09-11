#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BannerSelectionWidget

#include "Basic.hpp"

#include "BannerSelectionWidget_classes.hpp"
#include "BannerSelectionWidget_parameters.hpp"


namespace SDK
{

// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::ExecuteUbergraph_BannerSelectionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "ExecuteUbergraph_BannerSelectionWidget");

	Params::BannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox
// (BlueprintCallable, BlueprintEvent)

void UBannerSelectionWidget_C::GainFocusOfTextBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "GainFocusOfTextBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded
// (Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitSucceeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "OnHomebaseNameCommitSucceeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed
// (Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "OnHomebaseNameCommitFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");

	Params::BannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBannerSelectionWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             IconId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ColorId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");

	Params::BannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature Parms{};

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBannerSelectionWidget_C::HandlePreviousCategoryAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "HandlePreviousCategoryAction");

	Params::BannerSelectionWidget_C_HandlePreviousCategoryAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBannerSelectionWidget_C::HandleNextCategoryAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerSelectionWidget_C", "HandleNextCategoryAction");

	Params::BannerSelectionWidget_C_HandleNextCategoryAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

}
