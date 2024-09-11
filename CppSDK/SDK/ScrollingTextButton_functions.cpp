#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollingTextButton

#include "Basic.hpp"

#include "ScrollingTextButton_classes.hpp"
#include "ScrollingTextButton_parameters.hpp"


namespace SDK
{

// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollingTextButton_C::ExecuteUbergraph_ScrollingTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "ExecuteUbergraph_ScrollingTextButton");

	Params::ScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScrollingTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UScrollingTextButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HeldPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollingTextButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnActionProgress");

	Params::ScrollingTextButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NewTriggeredAction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UScrollingTextButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnTriggeredInputActionChanged");

	Params::ScrollingTextButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScrollingTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::ScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo          TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UScrollingTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetTabLabelInfo");

	Params::ScrollingTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScrollingTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "PreConstruct");

	Params::ScrollingTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UScrollingTextButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollingTextButton_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Set Text");

	Params::ScrollingTextButton_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      IconBrush_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollingTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "Set Icon");

	Params::ScrollingTextButton_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollingTextButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScrollingTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateTextAndStyle");

	Params::ScrollingTextButton_C_UpdateTextAndStyle Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ControllerInputStyle_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollingTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetControllerStyle");

	Params::ScrollingTextButton_C_SetControllerStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScrollingTextButton_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScrollingTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateStyle");

	Params::ScrollingTextButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ControllerInputStyle_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollingTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetMouseKeyboardStyle");

	Params::ScrollingTextButton_C_SetMouseKeyboardStyle Parms{};

	Parms.ControllerInputStyle_0 = ControllerInputStyle_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UScrollingTextButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    ContentAlignment_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScrollingTextButton_C::SetContentAlignment(EHorizontalAlignment ContentAlignment_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetContentAlignment");

	Params::ScrollingTextButton_C_SetContentAlignment Parms{};

	Parms.ContentAlignment_0 = ContentAlignment_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollingTextButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollingTextButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScrollingTextButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}
