#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HorizontalTabList

#include "Basic.hpp"

#include "HorizontalTabList_classes.hpp"
#include "HorizontalTabList_parameters.hpp"


namespace SDK
{

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::ExecuteUbergraph_HorizontalTabList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "ExecuteUbergraph_HorizontalTabList");

	Params::HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::CustomEvent_0(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "CustomEvent_0");

	Params::HorizontalTabList_C_CustomEvent_0 Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalTabList_C::HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "HandleTabCreated");

	Params::HorizontalTabList_C_HandleTabCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
// (BlueprintCallable, BlueprintEvent)

void UHorizontalTabList_C::Previous_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "Previous Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHorizontalTabList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "PreConstruct");

	Params::HorizontalTabList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHorizontalTabList_C::Handle_OnInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "Handle OnInputMethodChanged");

	Params::HorizontalTabList_C_Handle_OnInputMethodChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NextBinding                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FDataTableRowHandle              PreviousBinding                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UHorizontalTabList_C::ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "ChangeInputBindings");

	Params::HorizontalTabList_C_ChangeInputBindings Parms{};

	Parms.NextBinding = std::move(NextBinding);
	Parms.PreviousBinding = std::move(PreviousBinding);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HorizontalTabList.HorizontalTabList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHorizontalTabList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabNameID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonButton* UHorizontalTabList_C::Get_Tab_From_Id(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HorizontalTabList_C", "Get Tab From Id");

	Params::HorizontalTabList_C_Get_Tab_From_Id Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
