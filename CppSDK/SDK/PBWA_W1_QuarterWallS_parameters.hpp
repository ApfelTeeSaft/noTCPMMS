#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_W1_QuarterWallS

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.ExecuteUbergraph_PBWA_W1_QuarterWallS
// 0x01A8 (0x01A8 - 0x0000)
struct PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetAnimatingMID_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetAnimatingMID_ReturnValue2;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetAnimatingMID_ReturnValue3;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;                // 0x0028(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType2;                // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E3[0x5];                                       // 0x00E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters2;               // 0x00E8(0x00B8)(ContainsInstancedReference)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue2;           // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS) == 0x000008, "Wrong alignment on PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS");
static_assert(sizeof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS) == 0x0001A8, "Wrong size on PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, EntryPoint) == 0x000000, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::EntryPoint' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, CallFunc_GetAnimatingMID_ReturnValue) == 0x000008, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::CallFunc_GetAnimatingMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, CallFunc_GetAnimatingMID_ReturnValue2) == 0x000010, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::CallFunc_GetAnimatingMID_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, CallFunc_GetAnimatingMID_ReturnValue3) == 0x000018, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::CallFunc_GetAnimatingMID_ReturnValue3' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_GameplayCueEvent_EventType) == 0x000020, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_GameplayCueEvent_Parameters) == 0x000028, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_SwitchEnum_CmpSuccess) == 0x0000E0, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000E1, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_GameplayCueEvent_EventType2) == 0x0000E2, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_GameplayCueEvent_EventType2' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_GameplayCueEvent_Parameters2) == 0x0000E8, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_GameplayCueEvent_Parameters2' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, K2Node_SwitchEnum2_CmpSuccess) == 0x0001A0, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::K2Node_SwitchEnum2_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS, CallFunc_IsDedicatedServer_ReturnValue2) == 0x0001A1, "Member 'PBWA_W1_QuarterWallS_C_ExecuteUbergraph_PBWA_W1_QuarterWallS::CallFunc_IsDedicatedServer_ReturnValue2' has a wrong offset!");

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff2
// 0x00C0 (0x00C0 - 0x0000)
struct PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2 final
{
public:
	EGameplayCueEvent                             EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2) == 0x000008, "Wrong alignment on PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2");
static_assert(sizeof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2) == 0x0000C0, "Wrong size on PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2, EventType) == 0x000000, "Member 'PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2::EventType' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2, Parameters) == 0x000008, "Member 'PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff2::Parameters' has a wrong offset!");

// Function PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C.GameplayCue.Abilities.Activation.Generic.BannerWallBuff1
// 0x00C0 (0x00C0 - 0x0000)
struct PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1 final
{
public:
	EGameplayCueEvent                             EventType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};
static_assert(alignof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1) == 0x000008, "Wrong alignment on PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1");
static_assert(sizeof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1) == 0x0000C0, "Wrong size on PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1, EventType) == 0x000000, "Member 'PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1::EventType' has a wrong offset!");
static_assert(offsetof(PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1, Parameters) == 0x000008, "Member 'PBWA_W1_QuarterWallS_C_GameplayCue_Abilities_Activation_Generic_BannerWallBuff1::Parameters' has a wrong offset!");

}

