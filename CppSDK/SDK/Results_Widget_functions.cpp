#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_Widget

#include "Basic.hpp"

#include "Results_Widget_classes.hpp"
#include "Results_Widget_parameters.hpp"


namespace SDK
{

// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::ExecuteUbergraph_Results_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "ExecuteUbergraph_Results_Widget");

	Params::Results_Widget_C_ExecuteUbergraph_Results_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UResults_Widget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_Widget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Wait for Replication
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Wait_for_Replication()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Wait for Replication");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_Widget_C::HandleClientEvent_PlayerLeftEvent(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "HandleClientEvent_PlayerLeftEvent");

	Params::Results_Widget_C_HandleClientEvent_PlayerLeftEvent Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResults_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.OnMediaOpened
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::OnMediaOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "OnMediaOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.SkipVideo
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::SkipVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "SkipVideo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.OnVideoEndReached
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::OnVideoEndReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "OnVideoEndReached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.VideoSequenceStart
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::VideoSequenceStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "VideoSequenceStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.PreResults Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::PreResults_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "PreResults Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Team Score Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Team_Score_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Team Score Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsCommanderXP_K2Node_ComponentBoundEvent_6_Finished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Commander XP Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Commander_XP_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Commander XP Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Badge_Loot_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Badge Loot Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature");

	Params::Results_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 TargetId                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           TargetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature");

	Params::Results_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetName = std::move(TargetName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
// (BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Teleport_Scene_Sequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Teleport Scene Sequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
// (BlueprintEvent)

void UResults_Widget_C::BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Initialize Video
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Initialize_Video()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Initialize Video");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Toggle Chat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Chat(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Toggle Chat");

	Params::Results_Widget_C_Toggle_Chat Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::SpawnResultsMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "SpawnResultsMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Top_Level_Tab_Controls(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Toggle Top Level Tab Controls");

	Params::Results_Widget_C_Toggle_Top_Level_Tab_Controls Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::PlayMissionResultSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "PlayMissionResultSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.LogAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ScreenName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bSkipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::LogAnalytics(const class FString& ScreenName, bool bSkipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "LogAnalytics");

	Params::Results_Widget_C_LogAnalytics Parms{};

	Parms.ScreenName = std::move(ScreenName);
	Parms.bSkipped = bSkipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Results_Widget.Results_Widget_C.OnInputSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCommited                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::OnInputSkip(bool* bCommited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "OnInputSkip");

	Params::Results_Widget_C_OnInputSkip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;
}


// Function Results_Widget.Results_Widget_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::InitializeInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "InitializeInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UResults_Widget_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Results_Widget.Results_Widget_C.UseVideos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bVideos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::UseVideos(bool* bVideos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Results_Widget_C", "UseVideos");

	Params::Results_Widget_C_UseVideos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bVideos != nullptr)
		*bVideos = Parms.bVideos;
}

}

