#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatNumericTextBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatNumericTextBlock.StatNumericTextBlock_C
// 0x0028 (0x0238 - 0x0210)
class UStatNumericTextBlock_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ComparisonArrowImage;                              // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericText;                                       // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortBuffState                                Buff_State;                                        // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Numeric_Text_Style;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatNumericTextBlock(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateComparison();
	void SetComparisonState(EFortBuffState Buff_State_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatNumericTextBlock_C">();
	}
	static class UStatNumericTextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatNumericTextBlock_C>();
	}
};
static_assert(alignof(UStatNumericTextBlock_C) == 0x000008, "Wrong alignment on UStatNumericTextBlock_C");
static_assert(sizeof(UStatNumericTextBlock_C) == 0x000238, "Wrong size on UStatNumericTextBlock_C");
static_assert(offsetof(UStatNumericTextBlock_C, UberGraphFrame) == 0x000210, "Member 'UStatNumericTextBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatNumericTextBlock_C, ComparisonArrowImage) == 0x000218, "Member 'UStatNumericTextBlock_C::ComparisonArrowImage' has a wrong offset!");
static_assert(offsetof(UStatNumericTextBlock_C, NumericText) == 0x000220, "Member 'UStatNumericTextBlock_C::NumericText' has a wrong offset!");
static_assert(offsetof(UStatNumericTextBlock_C, Buff_State) == 0x000228, "Member 'UStatNumericTextBlock_C::Buff_State' has a wrong offset!");
static_assert(offsetof(UStatNumericTextBlock_C, Numeric_Text_Style) == 0x000230, "Member 'UStatNumericTextBlock_C::Numeric_Text_Style' has a wrong offset!");

}
