#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCompass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
// 0x0030 (0x0280 - 0x0250)
class UAthenaCompass_C final : public UAthenaCompassBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 CompassImage;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker0;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker1;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker2;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker3;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaCompass(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCompass_C">();
	}
	static class UAthenaCompass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCompass_C>();
	}
};
static_assert(alignof(UAthenaCompass_C) == 0x000008, "Wrong alignment on UAthenaCompass_C");
static_assert(sizeof(UAthenaCompass_C) == 0x000280, "Wrong size on UAthenaCompass_C");
static_assert(offsetof(UAthenaCompass_C, UberGraphFrame) == 0x000250, "Member 'UAthenaCompass_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, CompassImage) == 0x000258, "Member 'UAthenaCompass_C::CompassImage' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, Marker0) == 0x000260, "Member 'UAthenaCompass_C::Marker0' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, Marker1) == 0x000268, "Member 'UAthenaCompass_C::Marker1' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, Marker2) == 0x000270, "Member 'UAthenaCompass_C::Marker2' has a wrong offset!");
static_assert(offsetof(UAthenaCompass_C, Marker3) == 0x000278, "Member 'UAthenaCompass_C::Marker3' has a wrong offset!");

}

