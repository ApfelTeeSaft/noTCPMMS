#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChoiceCardName

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChoiceCardName.ChoiceCardName_C
// 0x0030 (0x0240 - 0x0210)
class UChoiceCardName_C final : public UCommonUserWidget
{
public:
	class UCommonBorder*                          RarityBG;                                          // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RarityBorder;                                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DisplayText;                                       // 0x0228(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void UpdateText(const class FText& DisplayText_0, EFortRarity Rarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChoiceCardName_C">();
	}
	static class UChoiceCardName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChoiceCardName_C>();
	}
};
static_assert(alignof(UChoiceCardName_C) == 0x000008, "Wrong alignment on UChoiceCardName_C");
static_assert(sizeof(UChoiceCardName_C) == 0x000240, "Wrong size on UChoiceCardName_C");
static_assert(offsetof(UChoiceCardName_C, RarityBG) == 0x000210, "Member 'UChoiceCardName_C::RarityBG' has a wrong offset!");
static_assert(offsetof(UChoiceCardName_C, RarityBorder) == 0x000218, "Member 'UChoiceCardName_C::RarityBorder' has a wrong offset!");
static_assert(offsetof(UChoiceCardName_C, TextName) == 0x000220, "Member 'UChoiceCardName_C::TextName' has a wrong offset!");
static_assert(offsetof(UChoiceCardName_C, DisplayText) == 0x000228, "Member 'UChoiceCardName_C::DisplayText' has a wrong offset!");

}

