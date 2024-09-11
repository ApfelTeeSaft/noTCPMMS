#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementInventoryLimitStatusIndicator

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C
// 0x0028 (0x0238 - 0x0210)
class UItemManagementInventoryLimitStatusIndicator_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       InventoryLabel;                                    // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemStorageCountLabel;                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemStorageLimitLabel;                             // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortInventoryType                            InventoryTypeTracked;                              // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDeployableBase;                                  // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseTypeSpecificLabel;                              // 0x0232(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator(int32 EntryPoint);
	void HandleMcpOutpostItemsChanged();
	void HandleMcpWorldItemsChanged();
	void HandleDeployableBaseInventoryChanged(class ADeployableBasePlot* Plot);
	void HandleOutpostItemListChanged(const TArray<class UFortWorldItem*>& ItemsAdded, const TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleWorldItemListChanged(const TArray<class UFortWorldItem*>& ItemsAdded, const TArray<class UFortWorldItem*>& ItemsRemoved);
	void Destruct();
	void Construct();
	void HandleVaultItemLimitStateChanged();
	void TrackWorldInventory();
	void TrackAccountInventory();
	void RefreshWorldInventoryStatus();
	void TrackStorageInventory();
	void RefreshStorageInventoryStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemManagementInventoryLimitStatusIndicator_C">();
	}
	static class UItemManagementInventoryLimitStatusIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemManagementInventoryLimitStatusIndicator_C>();
	}
};
static_assert(alignof(UItemManagementInventoryLimitStatusIndicator_C) == 0x000008, "Wrong alignment on UItemManagementInventoryLimitStatusIndicator_C");
static_assert(sizeof(UItemManagementInventoryLimitStatusIndicator_C) == 0x000238, "Wrong size on UItemManagementInventoryLimitStatusIndicator_C");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, UberGraphFrame) == 0x000210, "Member 'UItemManagementInventoryLimitStatusIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, InventoryLabel) == 0x000218, "Member 'UItemManagementInventoryLimitStatusIndicator_C::InventoryLabel' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, ItemStorageCountLabel) == 0x000220, "Member 'UItemManagementInventoryLimitStatusIndicator_C::ItemStorageCountLabel' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, ItemStorageLimitLabel) == 0x000228, "Member 'UItemManagementInventoryLimitStatusIndicator_C::ItemStorageLimitLabel' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, InventoryTypeTracked) == 0x000230, "Member 'UItemManagementInventoryLimitStatusIndicator_C::InventoryTypeTracked' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, IsDeployableBase) == 0x000231, "Member 'UItemManagementInventoryLimitStatusIndicator_C::IsDeployableBase' has a wrong offset!");
static_assert(offsetof(UItemManagementInventoryLimitStatusIndicator_C, UseTypeSpecificLabel) == 0x000232, "Member 'UItemManagementInventoryLimitStatusIndicator_C::UseTypeSpecificLabel' has a wrong offset!");

}

