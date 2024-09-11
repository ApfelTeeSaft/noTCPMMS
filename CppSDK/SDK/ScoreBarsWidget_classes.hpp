#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreBarsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CollectionMissionBadgeDisplayInfo_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScoreBarsWidget.ScoreBarsWidget_C
// 0x0958 (0x0B90 - 0x0238)
class UScoreBarsWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UCollectionMultiProgressBar_C*          BuildingMultiProgressBar;                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                  BuildingScoreMessageNumber;                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCollectionMultiProgressBar_C*          CombatMultiProgressBar;                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                  CombatScoreMessageNumber;                          // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ScoreBarElement;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ScoreMessageBox;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ScoreNumberPaddingBox;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCollectionMultiProgressBar_C*          UtilityMultiProgressBar;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreMessageNumber_C*                  UtilityScoreMessageNumber;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortMission*                           TrackedMission;                                    // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCollectionMissionBadgeDisplayInfo> CombatBadgeInfos;                                  // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCollectionMissionBadgeDisplayInfo> BuildingBadgeInfos;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCollectionMissionBadgeDisplayInfo> UtilityBadgeInfos;                                 // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CurrentCombatScore;                                // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentBuildingScore;                              // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentUtilityScore;                               // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowTopBarIcons;                                  // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bShowSideBarIcons;                                 // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOnlyShowIconsForTopCategory;                      // 0x02CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOnlyShowBarsWithCountInRange;                     // 0x02CF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortMultiSizeBrush                    CombatCategoryIcon;                                // 0x02D0(0x02D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                    BuildingCategoryIcon;                              // 0x05A0(0x02D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                    UtilityCategoryIcon;                               // 0x0870(0x02D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	EFortBrushSize                                CategoryIconSize;                                  // 0x0B40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBrushSize                                BadgeIconSize;                                     // 0x0B41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B42[0x2];                                      // 0x0B42(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                CategoriesMargin;                                  // 0x0B44(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FMargin                                BarsMargin;                                        // 0x0B54(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FMargin                                BarsIconMargin;                                    // 0x0B64(0x0010)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_B74[0x4];                                      // 0x0B74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIMessageManager*                  MessageManager;                                    // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxScoreMessagesDisplayed;                         // 0x0B80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisplayScoreStream;                               // 0x0B84(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B85[0x3];                                      // 0x0B85(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BarHeightOverride;                                 // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ScoreBarsWidget(int32 EntryPoint);
	void Destruct();
	void Construct();
	void HandleMissionsUpdated();
	void InitializeScoreBars();
	void HasValidBadgeInfos(bool* bHasValidBadgeInfos);
	void UpdateScoreTotals();
	void HandleUpdateUI(class AFortMissionState* Mission);
	void UpdateScoreBars();
	void InitializeIcons();
	void HandleScoreStatChanged(int32 Delta, class FText& Name_0, EFortReplicatedStat StatType, EStatCategory StatCategory);
	void TryGetNextScoreMessage();
	void HandleScoreMessageExpired(class UFortUIMessageItemWidget* Expired_Message);
	void RegisterForScoreStreamEvents();
	void HideScoreMessageSlots();
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* ItemWidget);
	void HandleScoreNumberChanged(EStatCategory ScoreCategory);
	void UnregisterForScoreStreamEvents();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScoreBarsWidget_C">();
	}
	static class UScoreBarsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreBarsWidget_C>();
	}
};
static_assert(alignof(UScoreBarsWidget_C) == 0x000008, "Wrong alignment on UScoreBarsWidget_C");
static_assert(sizeof(UScoreBarsWidget_C) == 0x000B90, "Wrong size on UScoreBarsWidget_C");
static_assert(offsetof(UScoreBarsWidget_C, UberGraphFrame) == 0x000238, "Member 'UScoreBarsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BuildingMultiProgressBar) == 0x000240, "Member 'UScoreBarsWidget_C::BuildingMultiProgressBar' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BuildingScoreMessageNumber) == 0x000248, "Member 'UScoreBarsWidget_C::BuildingScoreMessageNumber' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CombatMultiProgressBar) == 0x000250, "Member 'UScoreBarsWidget_C::CombatMultiProgressBar' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CombatScoreMessageNumber) == 0x000258, "Member 'UScoreBarsWidget_C::CombatScoreMessageNumber' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, ScoreBarElement) == 0x000260, "Member 'UScoreBarsWidget_C::ScoreBarElement' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, ScoreMessageBox) == 0x000268, "Member 'UScoreBarsWidget_C::ScoreMessageBox' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, ScoreNumberPaddingBox) == 0x000270, "Member 'UScoreBarsWidget_C::ScoreNumberPaddingBox' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, UtilityMultiProgressBar) == 0x000278, "Member 'UScoreBarsWidget_C::UtilityMultiProgressBar' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, UtilityScoreMessageNumber) == 0x000280, "Member 'UScoreBarsWidget_C::UtilityScoreMessageNumber' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, TrackedMission) == 0x000288, "Member 'UScoreBarsWidget_C::TrackedMission' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CombatBadgeInfos) == 0x000290, "Member 'UScoreBarsWidget_C::CombatBadgeInfos' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BuildingBadgeInfos) == 0x0002A0, "Member 'UScoreBarsWidget_C::BuildingBadgeInfos' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, UtilityBadgeInfos) == 0x0002B0, "Member 'UScoreBarsWidget_C::UtilityBadgeInfos' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CurrentCombatScore) == 0x0002C0, "Member 'UScoreBarsWidget_C::CurrentCombatScore' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CurrentBuildingScore) == 0x0002C4, "Member 'UScoreBarsWidget_C::CurrentBuildingScore' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CurrentUtilityScore) == 0x0002C8, "Member 'UScoreBarsWidget_C::CurrentUtilityScore' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, bShowTopBarIcons) == 0x0002CC, "Member 'UScoreBarsWidget_C::bShowTopBarIcons' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, bShowSideBarIcons) == 0x0002CD, "Member 'UScoreBarsWidget_C::bShowSideBarIcons' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, bOnlyShowIconsForTopCategory) == 0x0002CE, "Member 'UScoreBarsWidget_C::bOnlyShowIconsForTopCategory' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, bOnlyShowBarsWithCountInRange) == 0x0002CF, "Member 'UScoreBarsWidget_C::bOnlyShowBarsWithCountInRange' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CombatCategoryIcon) == 0x0002D0, "Member 'UScoreBarsWidget_C::CombatCategoryIcon' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BuildingCategoryIcon) == 0x0005A0, "Member 'UScoreBarsWidget_C::BuildingCategoryIcon' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, UtilityCategoryIcon) == 0x000870, "Member 'UScoreBarsWidget_C::UtilityCategoryIcon' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CategoryIconSize) == 0x000B40, "Member 'UScoreBarsWidget_C::CategoryIconSize' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BadgeIconSize) == 0x000B41, "Member 'UScoreBarsWidget_C::BadgeIconSize' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, CategoriesMargin) == 0x000B44, "Member 'UScoreBarsWidget_C::CategoriesMargin' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BarsMargin) == 0x000B54, "Member 'UScoreBarsWidget_C::BarsMargin' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BarsIconMargin) == 0x000B64, "Member 'UScoreBarsWidget_C::BarsIconMargin' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, MessageManager) == 0x000B78, "Member 'UScoreBarsWidget_C::MessageManager' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, MaxScoreMessagesDisplayed) == 0x000B80, "Member 'UScoreBarsWidget_C::MaxScoreMessagesDisplayed' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, bDisplayScoreStream) == 0x000B84, "Member 'UScoreBarsWidget_C::bDisplayScoreStream' has a wrong offset!");
static_assert(offsetof(UScoreBarsWidget_C, BarHeightOverride) == 0x000B88, "Member 'UScoreBarsWidget_C::BarHeightOverride' has a wrong offset!");

}

