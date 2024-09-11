#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IconTextButtonReversed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconTextButtonReversed.IconTextButtonReversed_C
// 0x00E8 (0x0868 - 0x0780)
class UIconTextButtonReversed_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0788(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x0790(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             LeftExtraContentSlot;                              // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RightSideImage;                                    // 0x07A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x07A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x07C0(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseKeyboardStyleSet;                            // 0x0849(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84A[0x6];                                      // 0x084A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OverrideButtonText;                                // 0x0850(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_IconTextButtonReversed(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(const class FText& ButtonText_0);
	void Set_Icon(const struct FSlateBrush& IconBrush_0);
	void InitializeButton();
	void UpdateTextAndStyle(bool bUsingGamepad);
	void SetControllerStyle(class UClass* ControllerInputStyle_0);
	void UpdateText();
	void UpdateStyle(bool UsingGamepad);
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle_0);
	void UpdateContentAlignment();
	void SetContentAlignment(EHorizontalAlignment ContentAlignment_0);
	void UpdateTextStyle();
	void SetInitialMouseKeyboardStyle();
	void SetTextInternal(const class FText& InButtonText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconTextButtonReversed_C">();
	}
	static class UIconTextButtonReversed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconTextButtonReversed_C>();
	}
};
static_assert(alignof(UIconTextButtonReversed_C) == 0x000008, "Wrong alignment on UIconTextButtonReversed_C");
static_assert(sizeof(UIconTextButtonReversed_C) == 0x000868, "Wrong size on UIconTextButtonReversed_C");
static_assert(offsetof(UIconTextButtonReversed_C, UberGraphFrame) == 0x000780, "Member 'UIconTextButtonReversed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, CenterButtonTextWidget) == 0x000788, "Member 'UIconTextButtonReversed_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, ContentBorder) == 0x000790, "Member 'UIconTextButtonReversed_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, LeftExtraContentSlot) == 0x000798, "Member 'UIconTextButtonReversed_C::LeftExtraContentSlot' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, RightSideImage) == 0x0007A0, "Member 'UIconTextButtonReversed_C::RightSideImage' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, ButtonText) == 0x0007A8, "Member 'UIconTextButtonReversed_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, IconBrush) == 0x0007C0, "Member 'UIconTextButtonReversed_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, ControllerInputStyle) == 0x000838, "Member 'UIconTextButtonReversed_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, MouseKeyboardStyle) == 0x000840, "Member 'UIconTextButtonReversed_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, ContentAlignment) == 0x000848, "Member 'UIconTextButtonReversed_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, bMouseKeyboardStyleSet) == 0x000849, "Member 'UIconTextButtonReversed_C::bMouseKeyboardStyleSet' has a wrong offset!");
static_assert(offsetof(UIconTextButtonReversed_C, OverrideButtonText) == 0x000850, "Member 'UIconTextButtonReversed_C::OverrideButtonText' has a wrong offset!");

}
