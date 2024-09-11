#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyMemberAthena

#include "Basic.hpp"

#include "FullPartyMemberAthena_classes.hpp"
#include "FullPartyMemberAthena_parameters.hpp"


namespace SDK
{

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "ExecuteUbergraph_FullPartyMemberAthena");

	Params::FullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnPlayerInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMemberAthena_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "OnPlayerInfoChanged");

	Params::FullPartyMemberAthena_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMemberAthena_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "PreConstruct");

	Params::FullPartyMemberAthena_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMemberAthena_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewMemberInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMemberAthena_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateMemberInfo");

	Params::FullPartyMemberAthena_C_UpdateMemberInfo Parms{};

	Parms.NewMemberInfo = std::move(NewMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowConnecting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowConnecting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "ShowConnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        NewDimensions                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateDimensions");

	Params::FullPartyMemberAthena_C_UpdateDimensions Parms{};

	Parms.NewDimensions = std::move(NewDimensions);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFullPartyMemberConnected_C* UFullPartyMemberAthena_C::DuplicateConnectedWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "DuplicateConnectedWidget");

	Params::FullPartyMemberAthena_C_DuplicateConnectedWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::UpdateLocalPlayerAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateLocalPlayerAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::HandleLocalPlayerActionsResult(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleLocalPlayerActionsResult");

	Params::FullPartyMemberAthena_C_HandleLocalPlayerActionsResult Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    LocalPlayerAlone                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FConfirmationDialogAction>OutConfirmActions                                      (Parm, OutParm, ZeroConstructor)

void UFullPartyMemberAthena_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "MakeLocalPlayerConfirmActions");

	Params::FullPartyMemberAthena_C_MakeLocalPlayerConfirmActions Parms{};

	Parms.LocalPlayerAlone = LocalPlayerAlone;

	UObject::ProcessEvent(Func, &Parms);

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = std::move(Parms.OutConfirmActions);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C*      ConnectedWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "InitializeConnectedWidget");

	Params::FullPartyMemberAthena_C_InitializeConnectedWidget Parms{};

	Parms.ConnectedWidget = ConnectedWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            Mutes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberMuteChanged(TArray<bool>& Mutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberMuteChanged");

	Params::FullPartyMemberAthena_C_HandleAthenaTeamMemberMuteChanged Parms{};

	Parms.Mutes = std::move(Mutes);

	UObject::ProcessEvent(Func, &Parms);

	Mutes = std::move(Parms.Mutes);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            Talking                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberTalkingChanged(TArray<bool>& Talking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberTalkingChanged");

	Params::FullPartyMemberAthena_C_HandleAthenaTeamMemberTalkingChanged Parms{};

	Parms.Talking = std::move(Talking);

	UObject::ProcessEvent(Func, &Parms);

	Talking = std::move(Parms.Talking);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetTeamMemberIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::SetTeamMemberIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "SetTeamMemberIndex");

	Params::FullPartyMemberAthena_C_SetTeamMemberIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BannerIsHighlighted                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::HighlightEmptyBanner(bool BannerIsHighlighted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HighlightEmptyBanner");

	Params::FullPartyMemberAthena_C_HighlightEmptyBanner Parms{};

	Parms.BannerIsHighlighted = BannerIsHighlighted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::UpdateMicIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "UpdateMicIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           Kills                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberKillsChanged(TArray<int32>& Kills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "HandleAthenaTeamMemberKillsChanged");

	Params::FullPartyMemberAthena_C_HandleAthenaTeamMemberKillsChanged Parms{};

	Parms.Kills = std::move(Kills);

	UObject::ProcessEvent(Func, &Parms);

	Kills = std::move(Parms.Kills);
}

}

