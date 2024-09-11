#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGamePhaseWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaGamePhaseWidget.AthenaGamePhaseWidget_C
// 0x0010 (0x0258 - 0x0248)
class UAthenaGamePhaseWidget_C final : public UAthenaGamePhaseWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaGamePhaseWidget(int32 EntryPoint);
	void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGamePhaseWidget_C">();
	}
	static class UAthenaGamePhaseWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGamePhaseWidget_C>();
	}
};
static_assert(alignof(UAthenaGamePhaseWidget_C) == 0x000008, "Wrong alignment on UAthenaGamePhaseWidget_C");
static_assert(sizeof(UAthenaGamePhaseWidget_C) == 0x000258, "Wrong size on UAthenaGamePhaseWidget_C");
static_assert(offsetof(UAthenaGamePhaseWidget_C, UberGraphFrame) == 0x000248, "Member 'UAthenaGamePhaseWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaGamePhaseWidget_C, Icon) == 0x000250, "Member 'UAthenaGamePhaseWidget_C::Icon' has a wrong offset!");

}
