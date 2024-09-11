#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberIndicator

#include "Basic.hpp"

#include "AthenaTeamMemberIndicator_classes.hpp"
#include "AthenaTeamMemberIndicator_parameters.hpp"


namespace SDK
{

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "ExecuteUbergraph_AthenaTeamMemberIndicator");

	Params::AthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.CapturePlayerName
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::CapturePlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "CapturePlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Update Pawn
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Update_Pawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Update Pawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Tick");

	Params::AthenaTeamMemberIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team DBNO Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            DBNOStates                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_DBNO_Changed(TArray<bool>& DBNOStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team DBNO Changed");

	Params::AthenaTeamMemberIndicator_C_On_Team_DBNO_Changed Parms{};

	Parms.DBNOStates = std::move(DBNOStates);

	UObject::ProcessEvent(Func, &Parms);

	DBNOStates = std::move(Parms.DBNOStates);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Reviving Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            Team_Reviving                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_Reviving_Changed(TArray<bool>& Team_Reviving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Reviving Changed");

	Params::AthenaTeamMemberIndicator_C_On_Team_Reviving_Changed Parms{};

	Parms.Team_Reviving = std::move(Team_Reviving);

	UObject::ProcessEvent(Func, &Parms);

	Team_Reviving = std::move(Parms.Team_Reviving);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Talking Changed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                            Team_Talking                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaTeamMemberIndicator_C::On_Team_Talking_Changed(TArray<bool>& Team_Talking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Talking Changed");

	Params::AthenaTeamMemberIndicator_C_On_Team_Talking_Changed Parms{};

	Parms.Team_Talking = std::move(Team_Talking);

	UObject::ProcessEvent(Func, &Parms);

	Team_Talking = std::move(Parms.Team_Talking);
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.On Team Player Names Changed
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberIndicator_C::On_Team_Player_Names_Changed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTeamMemberIndicator_C", "On Team Player Names Changed");

	UObject::ProcessEvent(Func, nullptr);
}

}
