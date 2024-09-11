#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemTransformKeyInfo.ItemTransformKeyInfo_C
// 0x0048 (0x0258 - 0x0210)
class UItemTransformKeyInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                 KeyCard;                                           // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       KeyDescriptionText;                                // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  KeyInfoSwitcher;                                   // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           KeyInfoWidget;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       KeyNameText;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       KeyRarityText;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NoKeyInfoWidget;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RarityDescriptionText;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemTransformKeyInfo(int32 EntryPoint);
	void Construct();
	void SetKeyToRepresent(class UFortItem* Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemTransformKeyInfo_C">();
	}
	static class UItemTransformKeyInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemTransformKeyInfo_C>();
	}
};
static_assert(alignof(UItemTransformKeyInfo_C) == 0x000008, "Wrong alignment on UItemTransformKeyInfo_C");
static_assert(sizeof(UItemTransformKeyInfo_C) == 0x000258, "Wrong size on UItemTransformKeyInfo_C");
static_assert(offsetof(UItemTransformKeyInfo_C, UberGraphFrame) == 0x000210, "Member 'UItemTransformKeyInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyCard) == 0x000218, "Member 'UItemTransformKeyInfo_C::KeyCard' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyDescriptionText) == 0x000220, "Member 'UItemTransformKeyInfo_C::KeyDescriptionText' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyInfoSwitcher) == 0x000228, "Member 'UItemTransformKeyInfo_C::KeyInfoSwitcher' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyInfoWidget) == 0x000230, "Member 'UItemTransformKeyInfo_C::KeyInfoWidget' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyNameText) == 0x000238, "Member 'UItemTransformKeyInfo_C::KeyNameText' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, KeyRarityText) == 0x000240, "Member 'UItemTransformKeyInfo_C::KeyRarityText' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, NoKeyInfoWidget) == 0x000248, "Member 'UItemTransformKeyInfo_C::NoKeyInfoWidget' has a wrong offset!");
static_assert(offsetof(UItemTransformKeyInfo_C, RarityDescriptionText) == 0x000250, "Member 'UItemTransformKeyInfo_C::RarityDescriptionText' has a wrong offset!");

}
