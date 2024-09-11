#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Conversation_VO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C
// 0x0028 (0x0260 - 0x0238)
class UFrontEndRewards_Conversation_VO_C final : public UFortRewardConversationWidget
{
public:
	struct FDataTableRowHandle                    ReplayAction;                                      // 0x0238(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortConversation*                      Conversation;                                      // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                         QuestItemRef;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* ConversationActor;                                 // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PopulateFromConversation(class UFortConversation* Conversation_0);
	void HandleReplayAction(bool* Committed);
	void StopConversation();
	void HandleNewSentence(const struct FFortConversationSentence& Sentence);
	void HandleConversationFinished();
	void PlayConversation(class UFortQuestItem* QuestItem);
	void CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_Conversation_VO_C">();
	}
	static class UFrontEndRewards_Conversation_VO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_Conversation_VO_C>();
	}
};
static_assert(alignof(UFrontEndRewards_Conversation_VO_C) == 0x000008, "Wrong alignment on UFrontEndRewards_Conversation_VO_C");
static_assert(sizeof(UFrontEndRewards_Conversation_VO_C) == 0x000260, "Wrong size on UFrontEndRewards_Conversation_VO_C");
static_assert(offsetof(UFrontEndRewards_Conversation_VO_C, ReplayAction) == 0x000238, "Member 'UFrontEndRewards_Conversation_VO_C::ReplayAction' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Conversation_VO_C, Conversation) == 0x000248, "Member 'UFrontEndRewards_Conversation_VO_C::Conversation' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Conversation_VO_C, QuestItemRef) == 0x000250, "Member 'UFrontEndRewards_Conversation_VO_C::QuestItemRef' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Conversation_VO_C, ConversationActor) == 0x000258, "Member 'UFrontEndRewards_Conversation_VO_C::ConversationActor' has a wrong offset!");

}

