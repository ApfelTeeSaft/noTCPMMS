#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleProfileWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleProfileWidget.ConsoleProfileWidget_C
// 0x0010 (0x0218 - 0x0208)
class UConsoleProfileWidget_C final : public UUserWidget
{
public:
	class UCommonTextBlock*                       DisplayName;                                       // 0x0208(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Prefix;                                            // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDisplayName(const class FText& DisplayName_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleProfileWidget_C">();
	}
	static class UConsoleProfileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleProfileWidget_C>();
	}
};
static_assert(alignof(UConsoleProfileWidget_C) == 0x000008, "Wrong alignment on UConsoleProfileWidget_C");
static_assert(sizeof(UConsoleProfileWidget_C) == 0x000218, "Wrong size on UConsoleProfileWidget_C");
static_assert(offsetof(UConsoleProfileWidget_C, DisplayName) == 0x000208, "Member 'UConsoleProfileWidget_C::DisplayName' has a wrong offset!");
static_assert(offsetof(UConsoleProfileWidget_C, Prefix) == 0x000210, "Member 'UConsoleProfileWidget_C::Prefix' has a wrong offset!");

}

