#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryFortItemTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C
// 0x0020 (0x07D0 - 0x07B0)
class UAthenaInventoryFortItemTileButton_C final : public UAthenaInventoryFortItemTileButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B0(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 DropTarget;                                        // 0x07B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InputActionWrapper;                                // 0x07C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ItemWidgetHolder;                                  // 0x07C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaInventoryFortItemTileButton(int32 EntryPoint);
	void OnSelected();
	void Destruct();
	void Construct();
	void OnInventoryItemSelected_Event_0(class UFortItem* Item_0);
	void UpdateStyle();
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void UpdateInteractionWidgetVisibility();
	struct FEventReply On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaInventoryFortItemTileButton_C">();
	}
	static class UAthenaInventoryFortItemTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryFortItemTileButton_C>();
	}
};
static_assert(alignof(UAthenaInventoryFortItemTileButton_C) == 0x000008, "Wrong alignment on UAthenaInventoryFortItemTileButton_C");
static_assert(sizeof(UAthenaInventoryFortItemTileButton_C) == 0x0007D0, "Wrong size on UAthenaInventoryFortItemTileButton_C");
static_assert(offsetof(UAthenaInventoryFortItemTileButton_C, UberGraphFrame) == 0x0007B0, "Member 'UAthenaInventoryFortItemTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryFortItemTileButton_C, DropTarget) == 0x0007B8, "Member 'UAthenaInventoryFortItemTileButton_C::DropTarget' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryFortItemTileButton_C, InputActionWrapper) == 0x0007C0, "Member 'UAthenaInventoryFortItemTileButton_C::InputActionWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaInventoryFortItemTileButton_C, ItemWidgetHolder) == 0x0007C8, "Member 'UAthenaInventoryFortItemTileButton_C::ItemWidgetHolder' has a wrong offset!");

}

