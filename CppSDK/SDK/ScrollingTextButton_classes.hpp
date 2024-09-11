#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollingTextButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScrollingTextButton.ScrollingTextButton_C
// 0x00D8 (0x0858 - 0x0780)
class UScrollingTextButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0788(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x0790(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x07A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x07B8(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ButtonClickAction;                                 // 0x0840(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseKeyboardStyleSet;                            // 0x0851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ScrollingTextButton(int32 EntryPoint);
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

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScrollingTextButton_C">();
	}
	static class UScrollingTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollingTextButton_C>();
	}
};
static_assert(alignof(UScrollingTextButton_C) == 0x000008, "Wrong alignment on UScrollingTextButton_C");
static_assert(sizeof(UScrollingTextButton_C) == 0x000858, "Wrong size on UScrollingTextButton_C");
static_assert(offsetof(UScrollingTextButton_C, UberGraphFrame) == 0x000780, "Member 'UScrollingTextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, CenterButtonTextWidget) == 0x000788, "Member 'UScrollingTextButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ContentBorder) == 0x000790, "Member 'UScrollingTextButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, LeftSideImage) == 0x000798, "Member 'UScrollingTextButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ButtonText) == 0x0007A0, "Member 'UScrollingTextButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, IconBrush) == 0x0007B8, "Member 'UScrollingTextButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ControllerInputStyle) == 0x000830, "Member 'UScrollingTextButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, MouseKeyboardStyle) == 0x000838, "Member 'UScrollingTextButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ButtonClickAction) == 0x000840, "Member 'UScrollingTextButton_C::ButtonClickAction' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ContentAlignment) == 0x000850, "Member 'UScrollingTextButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, bMouseKeyboardStyleSet) == 0x000851, "Member 'UScrollingTextButton_C::bMouseKeyboardStyleSet' has a wrong offset!");

}
