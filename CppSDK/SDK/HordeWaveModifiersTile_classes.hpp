#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveModifiersTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HordeWaveModifiersTile.HordeWaveModifiersTile_C
// 0x0038 (0x0250 - 0x0218)
class UHordeWaveModifiersTile_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ModifierDesc;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModifierImage;                                     // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ModifierName;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnReadyForNextModifierPresentation;                // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnReadyForNextModifierPresentation__DelegateSignature();
	void ExecuteUbergraph_HordeWaveModifiersTile(int32 EntryPoint);
	void SetData(class UObject* InData);
	void OnAnimReadyForNextModifier();
	void SetModifierItem(class UFortItem* ModifierItem);
	void PlayIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HordeWaveModifiersTile_C">();
	}
	static class UHordeWaveModifiersTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHordeWaveModifiersTile_C>();
	}
};
static_assert(alignof(UHordeWaveModifiersTile_C) == 0x000008, "Wrong alignment on UHordeWaveModifiersTile_C");
static_assert(sizeof(UHordeWaveModifiersTile_C) == 0x000250, "Wrong size on UHordeWaveModifiersTile_C");
static_assert(offsetof(UHordeWaveModifiersTile_C, UberGraphFrame) == 0x000218, "Member 'UHordeWaveModifiersTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHordeWaveModifiersTile_C, Intro) == 0x000220, "Member 'UHordeWaveModifiersTile_C::Intro' has a wrong offset!");
static_assert(offsetof(UHordeWaveModifiersTile_C, ModifierDesc) == 0x000228, "Member 'UHordeWaveModifiersTile_C::ModifierDesc' has a wrong offset!");
static_assert(offsetof(UHordeWaveModifiersTile_C, ModifierImage) == 0x000230, "Member 'UHordeWaveModifiersTile_C::ModifierImage' has a wrong offset!");
static_assert(offsetof(UHordeWaveModifiersTile_C, ModifierName) == 0x000238, "Member 'UHordeWaveModifiersTile_C::ModifierName' has a wrong offset!");
static_assert(offsetof(UHordeWaveModifiersTile_C, OnReadyForNextModifierPresentation) == 0x000240, "Member 'UHordeWaveModifiersTile_C::OnReadyForNextModifierPresentation' has a wrong offset!");

}

