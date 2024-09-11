#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider_Light

#include "Basic.hpp"

#include "OptionsMenuSlider_Light_classes.hpp"
#include "OptionsMenuSlider_Light_parameters.hpp"


namespace SDK
{

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.SliderChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSlider_Light_C::SliderChanged__DelegateSignature(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "SliderChanged__DelegateSignature");

	Params::OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.ExecuteUbergraph_OptionsMenuSlider_Light
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSlider_Light_C::ExecuteUbergraph_OptionsMenuSlider_Light(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "ExecuteUbergraph_OptionsMenuSlider_Light");

	Params::OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	Params::OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuSlider_Light_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSlider_Light_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "OnMouseEnter");

	Params::OptionsMenuSlider_Light_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSlider_Light_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "OnMouseLeave");

	Params::OptionsMenuSlider_Light_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuSlider_Light_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Update Slider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Slider_Text                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Hover_Text_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*                 Tooltip_Text_Block                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSlider_Light_C::Update_Slider(const class FText& Slider_Text, float Slider_Value, const class FText& Hover_Text_0, class UCommonTextBlock* Tooltip_Text_Block)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "Update Slider");

	Params::OptionsMenuSlider_Light_C_Update_Slider Parms{};

	Parms.Slider_Text = std::move(Slider_Text);
	Parms.Slider_Value = Slider_Value;
	Parms.Hover_Text_0 = std::move(Hover_Text_0);
	Parms.Tooltip_Text_Block = Tooltip_Text_Block;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSlider_Light_C::Center_on_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuSlider_Light_C", "Center on Widget");

	UObject::ProcessEvent(Func, nullptr);
}

}

