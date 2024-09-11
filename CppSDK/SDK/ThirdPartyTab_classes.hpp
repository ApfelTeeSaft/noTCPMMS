#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThirdPartyTab

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ThirdPartyTab.ThirdPartyTab_C
// 0x0010 (0x0220 - 0x0210)
class UThirdPartyTab_C final : public UCommonUserWidget
{
public:
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_2;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Activate_Scroll_Box();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThirdPartyTab_C">();
	}
	static class UThirdPartyTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThirdPartyTab_C>();
	}
};
static_assert(alignof(UThirdPartyTab_C) == 0x000008, "Wrong alignment on UThirdPartyTab_C");
static_assert(sizeof(UThirdPartyTab_C) == 0x000220, "Wrong size on UThirdPartyTab_C");
static_assert(offsetof(UThirdPartyTab_C, FortRichTextBlock_0) == 0x000210, "Member 'UThirdPartyTab_C::FortRichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UThirdPartyTab_C, ScrollBox_2) == 0x000218, "Member 'UThirdPartyTab_C::ScrollBox_2' has a wrong offset!");

}

