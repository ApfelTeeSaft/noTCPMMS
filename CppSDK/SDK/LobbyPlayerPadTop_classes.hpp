#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerPadTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyPlayerPadTop.LobbyPlayerPadTop_C
// 0x01F8 (0x0408 - 0x0210)
class ULobbyPlayerPadTop_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 LeaderImage;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayInputAction;                                // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner_92;                                   // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PowerBox;                                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ReadyStatusBox;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ReadyUpStatusText;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextHomeBasePower;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0258(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PlayerIndex;                                       // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LobbyPlayerPadTop(int32 EntryPoint);
	void OnLobbyDisconnected();
	void OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady);
	void OnLobbyStarted();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void RefreshHomeBasePower();
	void RefreshPlayerName();
	void Refresh();
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo_0);
	void OnLobbyPlayerHovered(int32 PlayerIndex_0);
	void InitializeContextEvents();
	void Initialize(int32 PlayerIndex_0);
	void OnLobbyPlayerUnhovered(int32 PlayerIndex_0);
	void OnAthenaReadyStateChanged(struct FUniqueNetIdRepl& Member_Id, bool Ready);
	void RefreshReadyState(bool Ready);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerPadTop_C">();
	}
	static class ULobbyPlayerPadTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerPadTop_C>();
	}
};
static_assert(alignof(ULobbyPlayerPadTop_C) == 0x000008, "Wrong alignment on ULobbyPlayerPadTop_C");
static_assert(sizeof(ULobbyPlayerPadTop_C) == 0x000408, "Wrong size on ULobbyPlayerPadTop_C");
static_assert(offsetof(ULobbyPlayerPadTop_C, UberGraphFrame) == 0x000210, "Member 'ULobbyPlayerPadTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, LeaderImage) == 0x000218, "Member 'ULobbyPlayerPadTop_C::LeaderImage' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, OverlayInputAction) == 0x000220, "Member 'ULobbyPlayerPadTop_C::OverlayInputAction' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, PlayerBanner_92) == 0x000228, "Member 'ULobbyPlayerPadTop_C::PlayerBanner_92' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, PowerBox) == 0x000230, "Member 'ULobbyPlayerPadTop_C::PowerBox' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, ReadyStatusBox) == 0x000238, "Member 'ULobbyPlayerPadTop_C::ReadyStatusBox' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, ReadyUpStatusText) == 0x000240, "Member 'ULobbyPlayerPadTop_C::ReadyUpStatusText' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, TextHomeBasePower) == 0x000248, "Member 'ULobbyPlayerPadTop_C::TextHomeBasePower' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, TextPlayerName) == 0x000250, "Member 'ULobbyPlayerPadTop_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, TeamMemberInfo) == 0x000258, "Member 'ULobbyPlayerPadTop_C::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, PlayerIndex) == 0x000400, "Member 'ULobbyPlayerPadTop_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerPadTop_C, bHovered) == 0x000404, "Member 'ULobbyPlayerPadTop_C::bHovered' has a wrong offset!");

}

