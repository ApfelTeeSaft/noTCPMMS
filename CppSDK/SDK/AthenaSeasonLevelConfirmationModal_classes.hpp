#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelConfirmationModal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSeasonLevelConfirmationModal.AthenaSeasonLevelConfirmationModal_C
// 0x00E0 (0x02F0 - 0x0210)
class UAthenaSeasonLevelConfirmationModal_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           ConfirmState;                                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DeclineBtn;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider;                                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemRewardsSB;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReversed_C*              Less;                                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      More;                                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseBtn;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PurchasingState;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  StateSwitcher;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuckIcon;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       VBuckPurchasePrice;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, class UFortSeasonPassLevelInfo*>  AllBattlePassLevels;                               // 0x0278(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSeasonPassLevelInfo*               BaseLevel;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BuyExtraLevels;                                    // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxBattlePassLevel;                                // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 BuyTierOfferID;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         MaxExtraLevelsYouCanBuyInOneGo;                    // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSeasonLevelConfirmationModal(int32 EntryPoint);
	void BindInput();
	void BndEvt__Less_K2Node_ComponentBoundEvent_355_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__More_K2Node_ComponentBoundEvent_342_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_162_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_1_K2Node_ComponentBoundEvent_145_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPurchaseFinished(bool bSuccess);
	void BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void InitWidgets();
	void Setup(class UFortSeasonPassLevelInfo* Level, TMap<int32, class UFortSeasonPassLevelInfo*>& AllLevels, int32 MaxLevel);
	void GetHeaderText(class FText* Result);
	void GetRewards(TArray<class UFortItem*>* Output_Get);
	class FText GetVBuckPrice();
	int32 GetNumberOfTiersBuying();
	void GenerateItemWidgets();
	void ModifyNumberOfTiersToBuy(int32 Delta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonLevelConfirmationModal_C">();
	}
	static class UAthenaSeasonLevelConfirmationModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonLevelConfirmationModal_C>();
	}
};
static_assert(alignof(UAthenaSeasonLevelConfirmationModal_C) == 0x000008, "Wrong alignment on UAthenaSeasonLevelConfirmationModal_C");
static_assert(sizeof(UAthenaSeasonLevelConfirmationModal_C) == 0x0002F0, "Wrong size on UAthenaSeasonLevelConfirmationModal_C");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, UberGraphFrame) == 0x000210, "Member 'UAthenaSeasonLevelConfirmationModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, ConfirmState) == 0x000218, "Member 'UAthenaSeasonLevelConfirmationModal_C::ConfirmState' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, DeclineBtn) == 0x000220, "Member 'UAthenaSeasonLevelConfirmationModal_C::DeclineBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, Divider) == 0x000228, "Member 'UAthenaSeasonLevelConfirmationModal_C::Divider' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, HeaderText) == 0x000230, "Member 'UAthenaSeasonLevelConfirmationModal_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, ItemRewardsSB) == 0x000238, "Member 'UAthenaSeasonLevelConfirmationModal_C::ItemRewardsSB' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, Less) == 0x000240, "Member 'UAthenaSeasonLevelConfirmationModal_C::Less' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, More) == 0x000248, "Member 'UAthenaSeasonLevelConfirmationModal_C::More' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, PurchaseBtn) == 0x000250, "Member 'UAthenaSeasonLevelConfirmationModal_C::PurchaseBtn' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, PurchasingState) == 0x000258, "Member 'UAthenaSeasonLevelConfirmationModal_C::PurchasingState' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, StateSwitcher) == 0x000260, "Member 'UAthenaSeasonLevelConfirmationModal_C::StateSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, VBuckIcon) == 0x000268, "Member 'UAthenaSeasonLevelConfirmationModal_C::VBuckIcon' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, VBuckPurchasePrice) == 0x000270, "Member 'UAthenaSeasonLevelConfirmationModal_C::VBuckPurchasePrice' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, AllBattlePassLevels) == 0x000278, "Member 'UAthenaSeasonLevelConfirmationModal_C::AllBattlePassLevels' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, BaseLevel) == 0x0002C8, "Member 'UAthenaSeasonLevelConfirmationModal_C::BaseLevel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, BuyExtraLevels) == 0x0002D0, "Member 'UAthenaSeasonLevelConfirmationModal_C::BuyExtraLevels' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, MaxBattlePassLevel) == 0x0002D4, "Member 'UAthenaSeasonLevelConfirmationModal_C::MaxBattlePassLevel' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, BuyTierOfferID) == 0x0002D8, "Member 'UAthenaSeasonLevelConfirmationModal_C::BuyTierOfferID' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonLevelConfirmationModal_C, MaxExtraLevelsYouCanBuyInOneGo) == 0x0002E8, "Member 'UAthenaSeasonLevelConfirmationModal_C::MaxExtraLevelsYouCanBuyInOneGo' has a wrong offset!");

}

