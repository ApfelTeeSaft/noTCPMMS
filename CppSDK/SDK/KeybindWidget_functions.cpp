#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeybindWidget

#include "Basic.hpp"

#include "KeybindWidget_classes.hpp"
#include "KeybindWidget_parameters.hpp"


namespace SDK
{

// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "ExecuteUbergraph_KeybindWidget");

	Params::KeybindWidget_C_ExecuteUbergraph_KeybindWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeybindWidget.KeybindWidget_C.UpdateFrameSize
// (BlueprintCallable, BlueprintEvent)

void UKeybindWidget_C::UpdateFrameSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "UpdateFrameSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeybindWidget.KeybindWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeybindWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "PreConstruct");

	Params::KeybindWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeybindWidget.KeybindWidget_C.Update
// (Event, Protected, BlueprintEvent)

void UKeybindWidget_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeybindWidget.KeybindWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeybindWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeybindWidget.KeybindWidget_C.Get Brush Size
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBrushSize                          Brush_Size_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Get_Brush_Size(EFortBrushSize* Brush_Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Get Brush Size");

	Params::KeybindWidget_C_Get_Brush_Size Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Brush_Size_0 != nullptr)
		*Brush_Size_0 = Parms.Brush_Size_0;
}


// Function KeybindWidget.KeybindWidget_C.Set Brush Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBrushSize                          Brush_Size_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Set_Brush_Size(EFortBrushSize Brush_Size_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Set Brush Size");

	Params::KeybindWidget_C_Set_Brush_Size Parms{};

	Parms.Brush_Size_0 = Brush_Size_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeybindWidget.KeybindWidget_C.Get Bound Action
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Action                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeybindWidget_C::Get_Bound_Action(class FName* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Get Bound Action");

	Params::KeybindWidget_C_Get_Bound_Action Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;
}


// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
// (Public, BlueprintCallable, BlueprintEvent)

void UKeybindWidget_C::ShowHoldBackPlate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "ShowHoldBackPlate");

	UObject::ProcessEvent(Func, nullptr);
}

}
