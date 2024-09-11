#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckFrontEndRewardsAction

#include "Basic.hpp"

#include "FrontEndRewards_Definition_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C
// 0x0060 (0x0428 - 0x03C8)
class ACheckFrontEndRewardsAction_C final : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFrontEndRewards_Definition            RewardsDefinition;                                 // 0x03D8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ShowRewardsWidget;                                 // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         NewVar_0;                                          // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CheckFrontEndRewardsAction(int32 EntryPoint);
	void Execute(const struct FFortScriptedActionParams& Params_0);
	void UserConstructionScript();
	void CompleteRewardsAction();
	void PopulateMissionRewards();
	void PopulateQuestRewards();
	void PopulateNewQuests();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void PopulateUnseenQuests(EFortQuestType QuestType);
	void OpenFrontEndRewards();
	void PopulateRewards();
	void PopulateCollectionBookRewards();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateMissionAlertRewards();
	void Is_FrontEndRewards_Running(bool* bRunning);
	bool CanShowFrontendRewards();
	void HandleRewardsIgnored(class UFrontEndRewards_Widget_C* RewardsWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckFrontEndRewardsAction_C">();
	}
	static class ACheckFrontEndRewardsAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACheckFrontEndRewardsAction_C>();
	}
};
static_assert(alignof(ACheckFrontEndRewardsAction_C) == 0x000008, "Wrong alignment on ACheckFrontEndRewardsAction_C");
static_assert(sizeof(ACheckFrontEndRewardsAction_C) == 0x000428, "Wrong size on ACheckFrontEndRewardsAction_C");
static_assert(offsetof(ACheckFrontEndRewardsAction_C, UberGraphFrame) == 0x0003C8, "Member 'ACheckFrontEndRewardsAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndRewardsAction_C, DefaultSceneRoot) == 0x0003D0, "Member 'ACheckFrontEndRewardsAction_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndRewardsAction_C, RewardsDefinition) == 0x0003D8, "Member 'ACheckFrontEndRewardsAction_C::RewardsDefinition' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndRewardsAction_C, ShowRewardsWidget) == 0x000420, "Member 'ACheckFrontEndRewardsAction_C::ShowRewardsWidget' has a wrong offset!");
static_assert(offsetof(ACheckFrontEndRewardsAction_C, NewVar_0) == 0x000421, "Member 'ACheckFrontEndRewardsAction_C::NewVar_0' has a wrong offset!");

}
