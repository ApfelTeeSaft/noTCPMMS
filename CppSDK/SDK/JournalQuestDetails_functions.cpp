#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JournalQuestDetails

#include "Basic.hpp"

#include "JournalQuestDetails_classes.hpp"
#include "JournalQuestDetails_parameters.hpp"


namespace SDK
{

// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::OnSpokenDialogEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "OnSpokenDialogEnded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::ExecuteUbergraph_JournalQuestDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "ExecuteUbergraph_JournalQuestDetails");

	Params::JournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)

void UJournalQuestDetails_C::HandleCurrentQuestChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "HandleCurrentQuestChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalQuestDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Subtitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference      DisplayPreference                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const class FText& Title, const class FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "HandleOnBeginSpokenDialog");

	Params::JournalQuestDetails_C_HandleOnBeginSpokenDialog Parms{};

	Parms.Image = Image;
	Parms.Title = std::move(Title);
	Parms.Subtitle = std::move(Subtitle);
	Parms.DisplayPreference = DisplayPreference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::HandleOnEndSpokenDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "HandleOnEndSpokenDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdateButtonStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "UpdateButtonStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdatePlayButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "UpdatePlayButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdatePanelInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "UpdatePanelInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   QuestToAbandon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    QuestAbandoned_                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::AbandonQuest(class UFortQuestItem* QuestToAbandon, bool* QuestAbandoned_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "AbandonQuest");

	Params::JournalQuestDetails_C_AbandonQuest Parms{};

	Parms.QuestToAbandon = QuestToAbandon;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestAbandoned_ != nullptr)
		*QuestAbandoned_ = Parms.QuestAbandoned_;
}


// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::StopConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "StopConversation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*                Conversation_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*                   QuestItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOutro_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::StartConversation(class UFortConversation* Conversation_0, class UFortQuestItem* QuestItem, bool IsOutro_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "StartConversation");

	Params::JournalQuestDetails_C_StartConversation Parms{};

	Parms.Conversation_0 = Conversation_0;
	Parms.QuestItem = QuestItem;
	Parms.IsOutro_ = IsOutro_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsQuestAudioPlaying_0                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::IsQuestAudioPlaying(bool* IsQuestAudioPlaying_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "IsQuestAudioPlaying");

	Params::JournalQuestDetails_C_IsQuestAudioPlaying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsQuestAudioPlaying_0 != nullptr)
		*IsQuestAudioPlaying_0 = Parms.IsQuestAudioPlaying_0;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UJournalQuestDetails_C::Set_Quest_Display_Name(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Set Quest Display Name");

	Params::JournalQuestDetails_C_Set_Quest_Display_Name Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition*         AsFort_Quest_Item_Definition                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJournalQuestDetails_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Get Quest Item Def");

	Params::JournalQuestDetails_C_Get_Quest_Item_Def Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = Parms.AsFort_Quest_Item_Definition;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bStreamingQuest                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJournalQuestDetails_C::Is_Streaming_Quest(bool* bStreamingQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Is Streaming Quest");

	Params::JournalQuestDetails_C_Is_Streaming_Quest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bStreamingQuest != nullptr)
		*bStreamingQuest = Parms.bStreamingQuest;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UJournalQuestDetails_C::Get_Streaming_Attached_Quest_Name()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JournalQuestDetails_C", "Get Streaming Attached Quest Name");

	Params::JournalQuestDetails_C_Get_Streaming_Attached_Quest_Name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

