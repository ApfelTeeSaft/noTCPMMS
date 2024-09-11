#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroNotificationHandler

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HeroNotificationHandler.HeroNotificationHandler_C
// 0x0000 (0x01D0 - 0x01D0)
class UHeroNotificationHandler_C final : public UFortHeroNotificationHandler
{
public:
	class UUserWidget* CreateWidget(class APlayerController* OwningPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroNotificationHandler_C">();
	}
	static class UHeroNotificationHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroNotificationHandler_C>();
	}
};
static_assert(alignof(UHeroNotificationHandler_C) == 0x000010, "Wrong alignment on UHeroNotificationHandler_C");
static_assert(sizeof(UHeroNotificationHandler_C) == 0x0001D0, "Wrong size on UHeroNotificationHandler_C");

}

