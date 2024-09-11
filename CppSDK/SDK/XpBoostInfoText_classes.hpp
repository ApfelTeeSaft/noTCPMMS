#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostInfoText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpBoostInfoText.XpBoostInfoText_C
// 0x0018 (0x0228 - 0x0210)
class UXpBoostInfoText_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       BoostText;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Description;                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_XpBoostInfoText(int32 EntryPoint);
	void Xp_Boost_Changed(int32 BoostAmount);
	void HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo);
	void Construct();
	void Update_Available_Boosts();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBoostInfoText_C">();
	}
	static class UXpBoostInfoText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBoostInfoText_C>();
	}
};
static_assert(alignof(UXpBoostInfoText_C) == 0x000008, "Wrong alignment on UXpBoostInfoText_C");
static_assert(sizeof(UXpBoostInfoText_C) == 0x000228, "Wrong size on UXpBoostInfoText_C");
static_assert(offsetof(UXpBoostInfoText_C, UberGraphFrame) == 0x000210, "Member 'UXpBoostInfoText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpBoostInfoText_C, BoostText) == 0x000218, "Member 'UXpBoostInfoText_C::BoostText' has a wrong offset!");
static_assert(offsetof(UXpBoostInfoText_C, ScrollBox_Description) == 0x000220, "Member 'UXpBoostInfoText_C::ScrollBox_Description' has a wrong offset!");

}

