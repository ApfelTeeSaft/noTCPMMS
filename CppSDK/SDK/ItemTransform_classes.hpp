#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransform

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransform.ItemTransform_C
// 0x00A8 (0x0468 - 0x03C0)
class UItemTransform_C final : public UFortItemTransform
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UItemTransformKeyScreen_C*              KeyScreen;                                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemTransformSlotScreen_C*             SlotScreen;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  TransformScreenSwitcher;                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortItem*>                      SelectedSacrificeItems;                            // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         SacrificePoints;                                   // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentTier;                                       // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackInputAction;                                   // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SelectKeyInputAction;                              // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    TransformInputAction;                              // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    SelectItemInputAction;                             // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InspectItemInputAction;                            // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsItemPickerOpen;                                  // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    ClosePickerInputAction;                            // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ItemTransform(int32 EntryPoint);
	void OnRequestCloseItemPicker();
	void Construct();
	void BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive);
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature();
	void OnActivated();
	void BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key);
	void OpenItemTransform();
	void OpenKeyScreen();
	void OpenSlotScreen();
	void SetupActionHandlers();
	void HandleBack(bool* Passthrough);
	void HandleSelect(bool* Passthrough);
	void OpenConfirmation();
	void HandleTransformCancel();
	void HandleTransformConfirm();
	void OpenResult(TArray<struct FFortItemInstanceQuantityPair>& RewardItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificeItems);
	void HandleTransformContinue();
	void HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>& RewardedItems, TArray<struct FFortItemInstanceQuantityPair>& SacrificedItems);
	void HandleTransformFailed(class FText& ErrorMessage);
	void ResetItemTransform();
	void HandleTransformAction(bool* Passthrough);
	void HandleSelectKeyAction(bool* Passthrough);
	void ShowSelectKeyAction();
	void HideSelectKeyAction();
	void DisableSelectKeyAction();
	void UpdateSelectKeyAction();
	void ShowTransformAction();
	void HideTransformAction();
	void DisableTransformAction();
	void Handle_Select_Key_Activated();
	void Handle_Transform_Activated();
	void UpdateTransformAction(bool TransformActive);
	void OnItemPickerClosed();
	void OnItemPickerOpened();
	void HandleClosePicker(bool* Passthrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransform_C">();
	}
	static class UItemTransform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransform_C>();
	}
};
static_assert(alignof(UItemTransform_C) == 0x000008, "Wrong alignment on UItemTransform_C");
static_assert(sizeof(UItemTransform_C) == 0x000468, "Wrong size on UItemTransform_C");
static_assert(offsetof(UItemTransform_C, UberGraphFrame) == 0x0003C0, "Member 'UItemTransform_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, KeyScreen) == 0x0003C8, "Member 'UItemTransform_C::KeyScreen' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SafeZone_1) == 0x0003D0, "Member 'UItemTransform_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SlotScreen) == 0x0003D8, "Member 'UItemTransform_C::SlotScreen' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, TransformScreenSwitcher) == 0x0003E0, "Member 'UItemTransform_C::TransformScreenSwitcher' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SelectedSacrificeItems) == 0x0003E8, "Member 'UItemTransform_C::SelectedSacrificeItems' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SacrificePoints) == 0x0003F8, "Member 'UItemTransform_C::SacrificePoints' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, CurrentTier) == 0x0003FC, "Member 'UItemTransform_C::CurrentTier' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, BackInputAction) == 0x000400, "Member 'UItemTransform_C::BackInputAction' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SelectKeyInputAction) == 0x000410, "Member 'UItemTransform_C::SelectKeyInputAction' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, TransformInputAction) == 0x000420, "Member 'UItemTransform_C::TransformInputAction' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, SelectItemInputAction) == 0x000430, "Member 'UItemTransform_C::SelectItemInputAction' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, InspectItemInputAction) == 0x000440, "Member 'UItemTransform_C::InspectItemInputAction' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, IsItemPickerOpen) == 0x000450, "Member 'UItemTransform_C::IsItemPickerOpen' has a wrong offset!");
static_assert(offsetof(UItemTransform_C, ClosePickerInputAction) == 0x000458, "Member 'UItemTransform_C::ClosePickerInputAction' has a wrong offset!");

}
