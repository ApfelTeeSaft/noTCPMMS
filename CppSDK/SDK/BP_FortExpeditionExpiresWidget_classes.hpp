#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionExpiresWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionExpiresWidget.BP_FortExpeditionExpiresWidget_C
// 0x0018 (0x0238 - 0x0220)
class UBP_FortExpeditionExpiresWidget_C final : public UFortExpeditionExpiresWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       ExpeditionExpires;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Style;                                             // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortExpeditionExpiresWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnExpeditionExpirationUpdated();
	void SetData(class UFortExpeditionItem* InItem);
	void Refresh_Expiration_Timer(class UFortExpeditionItem* Item_0);
	void Get_Mcp_Relative_Utc_Now(struct FDateTime* UtcNow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionExpiresWidget_C">();
	}
	static class UBP_FortExpeditionExpiresWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionExpiresWidget_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionExpiresWidget_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionExpiresWidget_C");
static_assert(sizeof(UBP_FortExpeditionExpiresWidget_C) == 0x000238, "Wrong size on UBP_FortExpeditionExpiresWidget_C");
static_assert(offsetof(UBP_FortExpeditionExpiresWidget_C, UberGraphFrame) == 0x000220, "Member 'UBP_FortExpeditionExpiresWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionExpiresWidget_C, ExpeditionExpires) == 0x000228, "Member 'UBP_FortExpeditionExpiresWidget_C::ExpeditionExpires' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionExpiresWidget_C, Style) == 0x000230, "Member 'UBP_FortExpeditionExpiresWidget_C::Style' has a wrong offset!");

}

