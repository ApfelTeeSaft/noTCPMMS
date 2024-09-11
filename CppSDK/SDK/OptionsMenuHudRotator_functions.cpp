#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuHudRotator

#include "Basic.hpp"

#include "OptionsMenuHudRotator_classes.hpp"
#include "OptionsMenuHudRotator_parameters.hpp"


namespace SDK
{

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selected_Index                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     Gameplay_Tag_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::Selection_Changed__DelegateSignature(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Selection Changed__DelegateSignature");

	Params::OptionsMenuHudRotator_C_Selection_Changed__DelegateSignature Parms{};

	Parms.Selected_Index = Selected_Index;
	Parms.Gameplay_Tag_0 = std::move(Gameplay_Tag_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::ExecuteUbergraph_OptionsMenuHudRotator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "ExecuteUbergraph_OptionsMenuHudRotator");

	Params::OptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetData");

	Params::OptionsMenuHudRotator_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	Params::OptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnMouseEnter");

	Params::OptionsMenuHudRotator_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnMouseLeave");

	Params::OptionsMenuHudRotator_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuHudRotator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::ToggleExpansion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "ToggleExpansion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuHudRotator_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetSelected");

	Params::OptionsMenuHudRotator_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndexInList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::SetIndexInList(int32 InIndexInList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetIndexInList");

	Params::OptionsMenuHudRotator_C_SetIndexInList Parms{};

	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExpanded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuHudRotator_C::SetExpanded(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "SetExpanded");

	Params::OptionsMenuHudRotator_C_SetExpanded Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(class UUserWidget* Widget)>Callback                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UOptionsMenuHudRotator_C::RegisterOnClicked(const TDelegate<void(class UUserWidget* Widget)>& Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "RegisterOnClicked");

	Params::OptionsMenuHudRotator_C_RegisterOnClicked Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Private_OnExpanderArrowShiftClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Private_OnExpanderArrowShiftClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UOptionsMenuHudRotator_C::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnReleaseToPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UOptionsMenuHudRotator_C::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnAcquireFromPool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Currently_Selected                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuHudRotator_C::Update_Row_Selector(int32 Currently_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Update Row Selector");

	Params::OptionsMenuHudRotator_C_Update_Row_Selector Parms{};

	Parms.Currently_Selected = Currently_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Center_on_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Center on Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenuHudRotator_C::Update_Options(TArray<class FText>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "Update Options");

	Params::OptionsMenuHudRotator_C_Update_Options Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);

	NewParam = std::move(Parms.NewParam);
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenuHudRotator_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "OnFocusReceived");

	Params::OptionsMenuHudRotator_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuHudRotator_C::GetData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "GetData");

	Params::OptionsMenuHudRotator_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionsMenuHudRotator_C::IsItemExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "IsItemExpanded");

	Params::OptionsMenuHudRotator_C_IsItemExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuHudRotator_C::DoesItemHaveChildren() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "DoesItemHaveChildren");

	Params::OptionsMenuHudRotator_C_DoesItemHaveChildren Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuHudRotator_C::GetIndentLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuHudRotator_C", "GetIndentLevel");

	Params::OptionsMenuHudRotator_C_GetIndentLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

