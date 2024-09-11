#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerAddPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// 0x0028 (0x0238 - 0x0210)
class ULobbyPlayerAddPlayer_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UPanelButton_C*                         ButtonEmptySpot;                                   // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayEmptySlot;                                  // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayInputAction;                                // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PlayerID;                                          // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonEmptySpot_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerAddPlayer_C">();
	}
	static class ULobbyPlayerAddPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerAddPlayer_C>();
	}
};
static_assert(alignof(ULobbyPlayerAddPlayer_C) == 0x000008, "Wrong alignment on ULobbyPlayerAddPlayer_C");
static_assert(sizeof(ULobbyPlayerAddPlayer_C) == 0x000238, "Wrong size on ULobbyPlayerAddPlayer_C");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, UberGraphFrame) == 0x000210, "Member 'ULobbyPlayerAddPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, ButtonEmptySpot) == 0x000218, "Member 'ULobbyPlayerAddPlayer_C::ButtonEmptySpot' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, OverlayEmptySlot) == 0x000220, "Member 'ULobbyPlayerAddPlayer_C::OverlayEmptySlot' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, OverlayInputAction) == 0x000228, "Member 'ULobbyPlayerAddPlayer_C::OverlayInputAction' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerAddPlayer_C, PlayerID) == 0x000230, "Member 'ULobbyPlayerAddPlayer_C::PlayerID' has a wrong offset!");

}
