#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PinnedSchematicItemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PinnedSchematicItemWidget.PinnedSchematicItemWidget_C
// 0x0038 (0x0248 - 0x0210)
class UPinnedSchematicItemWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                 FortItemCard_XXSSchematicItemCard;                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         IngredientBox;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextItemName;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSchematicItem*                     PinnedSchematic;                                   // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCraftingIngredient_C*>          CraftingIngredients;                               // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PinnedSchematicItemWidget(int32 EntryPoint);
	void PinButton_Clicked(class UFortBaseButton* NewParam);
	void Refresh();
	void SetPinnedSchematic(class UFortSchematicItem* NewPinnedSchematic);
	void BindDelegates();
	void HandleOnSchematicUnlocked(class UFortSchematicItem* Schematic);
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void SetupIngredients();
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void ClearPinnedSchematic();
	void UnbindDelegates();
	void HandleCursorModeChanged(bool CursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinnedSchematicItemWidget_C">();
	}
	static class UPinnedSchematicItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinnedSchematicItemWidget_C>();
	}
};
static_assert(alignof(UPinnedSchematicItemWidget_C) == 0x000008, "Wrong alignment on UPinnedSchematicItemWidget_C");
static_assert(sizeof(UPinnedSchematicItemWidget_C) == 0x000248, "Wrong size on UPinnedSchematicItemWidget_C");
static_assert(offsetof(UPinnedSchematicItemWidget_C, UberGraphFrame) == 0x000210, "Member 'UPinnedSchematicItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemWidget_C, FortItemCard_XXSSchematicItemCard) == 0x000218, "Member 'UPinnedSchematicItemWidget_C::FortItemCard_XXSSchematicItemCard' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemWidget_C, IngredientBox) == 0x000220, "Member 'UPinnedSchematicItemWidget_C::IngredientBox' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemWidget_C, TextItemName) == 0x000228, "Member 'UPinnedSchematicItemWidget_C::TextItemName' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemWidget_C, PinnedSchematic) == 0x000230, "Member 'UPinnedSchematicItemWidget_C::PinnedSchematic' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemWidget_C, CraftingIngredients) == 0x000238, "Member 'UPinnedSchematicItemWidget_C::CraftingIngredients' has a wrong offset!");

}

