#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DeathWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function DeathWidget.DeathWidget_C.ExecuteUbergraph_DeathWidget
// 0x0030 (0x0030 - 0x0000)
struct DeathWidget_C_ExecuteUbergraph_DeathWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FFortPlayerDeathReport& DeathReport)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(DeathWidget_C_ExecuteUbergraph_DeathWidget) == 0x000008, "Wrong alignment on DeathWidget_C_ExecuteUbergraph_DeathWidget");
static_assert(sizeof(DeathWidget_C_ExecuteUbergraph_DeathWidget) == 0x000030, "Wrong size on DeathWidget_C_ExecuteUbergraph_DeathWidget");
static_assert(offsetof(DeathWidget_C_ExecuteUbergraph_DeathWidget, EntryPoint) == 0x000000, "Member 'DeathWidget_C_ExecuteUbergraph_DeathWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ExecuteUbergraph_DeathWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'DeathWidget_C_ExecuteUbergraph_DeathWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ExecuteUbergraph_DeathWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'DeathWidget_C_ExecuteUbergraph_DeathWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ExecuteUbergraph_DeathWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'DeathWidget_C_ExecuteUbergraph_DeathWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.OnPawnSpawned
// 0x0020 (0x0020 - 0x0000)
struct DeathWidget_C_OnPawnSpawned final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DeathWidget_C_OnPawnSpawned) == 0x000008, "Wrong alignment on DeathWidget_C_OnPawnSpawned");
static_assert(sizeof(DeathWidget_C_OnPawnSpawned) == 0x000020, "Wrong size on DeathWidget_C_OnPawnSpawned");
static_assert(offsetof(DeathWidget_C_OnPawnSpawned, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'DeathWidget_C_OnPawnSpawned::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnSpawned, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000008, "Member 'DeathWidget_C_OnPawnSpawned::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnSpawned, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'DeathWidget_C_OnPawnSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnSpawned, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'DeathWidget_C_OnPawnSpawned::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.OnPawnDied
// 0x0168 (0x0168 - 0x0000)
struct DeathWidget_C_OnPawnDied final
{
public:
	struct FFortPlayerDeathReport                 DeathReport;                                       // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortKillerVisualInfo                  CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue; // 0x0088(0x0090)()
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHeroManagementContext*             CallFunc_GetContext_ReturnValue4;                  // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     CallFunc_GetGameStateZone_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHeroUIData                            CallFunc_GetHeroData_HeroData;                     // 0x0130(0x0020)(NoDestructor)
	bool                                          CallFunc_GetHeroData_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x3];                                      // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0160(0x0008)(NoDestructor)
};
static_assert(alignof(DeathWidget_C_OnPawnDied) == 0x000008, "Wrong alignment on DeathWidget_C_OnPawnDied");
static_assert(sizeof(DeathWidget_C_OnPawnDied) == 0x000168, "Wrong size on DeathWidget_C_OnPawnDied");
static_assert(offsetof(DeathWidget_C_OnPawnDied, DeathReport) == 0x000000, "Member 'DeathWidget_C_OnPawnDied::DeathReport' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000058, "Member 'DeathWidget_C_OnPawnDied::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'DeathWidget_C_OnPawnDied::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'DeathWidget_C_OnPawnDied::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetContext_ReturnValue) == 0x000078, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetContext_ReturnValue2) == 0x000080, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue) == 0x000088, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetKillerVisualInfoFromDeathReport_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetContext_ReturnValue3) == 0x000118, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetContext_ReturnValue4) == 0x000120, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetContext_ReturnValue4' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetGameStateZone_ReturnValue) == 0x000128, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetGameStateZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetHeroData_HeroData) == 0x000130, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetHeroData_HeroData' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetHeroData_ReturnValue) == 0x000150, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetHeroData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000154, "Member 'DeathWidget_C_OnPawnDied::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000158, "Member 'DeathWidget_C_OnPawnDied::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnPawnDied, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000160, "Member 'DeathWidget_C_OnPawnDied::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.ConfigureRespawnTimer
// 0x00A8 (0x00A8 - 0x0000)
struct DeathWidget_C_ConfigureRespawnTimer final
{
public:
	float                                         ServerRespawnTime;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ServerResurrectTime;                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResurrectTimeRemainingFloat;                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReleaseTimeRemainingFloat;                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimerDelay;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class AFortGameStateZone*                     CallFunc_GetGameStateZone_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue3;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     CallFunc_GetGameStateZone_ReturnValue2;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     CallFunc_GetGameStateZone_ReturnValue3;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue2;   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue3;   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue3;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor)
	int32                                         CallFunc_FCeil_ReturnValue2;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue2;         // 0x00A0(0x0008)(NoDestructor)
};
static_assert(alignof(DeathWidget_C_ConfigureRespawnTimer) == 0x000008, "Wrong alignment on DeathWidget_C_ConfigureRespawnTimer");
static_assert(sizeof(DeathWidget_C_ConfigureRespawnTimer) == 0x0000A8, "Wrong size on DeathWidget_C_ConfigureRespawnTimer");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, ServerRespawnTime) == 0x000000, "Member 'DeathWidget_C_ConfigureRespawnTimer::ServerRespawnTime' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, ServerResurrectTime) == 0x000004, "Member 'DeathWidget_C_ConfigureRespawnTimer::ServerResurrectTime' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, ResurrectTimeRemainingFloat) == 0x000008, "Member 'DeathWidget_C_ConfigureRespawnTimer::ResurrectTimeRemainingFloat' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, ReleaseTimeRemainingFloat) == 0x00000C, "Member 'DeathWidget_C_ConfigureRespawnTimer::ReleaseTimeRemainingFloat' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, TimerDelay) == 0x000010, "Member 'DeathWidget_C_ConfigureRespawnTimer::TimerDelay' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'DeathWidget_C_ConfigureRespawnTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetGameStateZone_ReturnValue) == 0x000030, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetGameStateZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000038, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Fraction_ReturnValue) == 0x00003C, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000040, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000044, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Greater_IntInt_ReturnValue) == 0x000045, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_FCeil_ReturnValue) == 0x000048, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetContext_ReturnValue2) == 0x000050, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetContext_ReturnValue3) == 0x000058, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetGameStateZone_ReturnValue2) == 0x000060, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetGameStateZone_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetGameStateZone_ReturnValue3) == 0x000068, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetGameStateZone_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetServerWorldTimeSeconds_ReturnValue2) == 0x000070, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetServerWorldTimeSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_GetServerWorldTimeSeconds_ReturnValue3) == 0x000074, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_GetServerWorldTimeSeconds_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Subtract_FloatFloat_ReturnValue2) == 0x000078, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Subtract_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_Subtract_FloatFloat_ReturnValue3) == 0x00007C, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_Subtract_FloatFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_FCeil_ReturnValue2) == 0x000088, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_FCeil_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, K2Node_CreateDelegate_OutputDelegate2) == 0x000090, "Member 'DeathWidget_C_ConfigureRespawnTimer::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ConfigureRespawnTimer, CallFunc_K2_SetTimerDelegate_ReturnValue2) == 0x0000A0, "Member 'DeathWidget_C_ConfigureRespawnTimer::CallFunc_K2_SetTimerDelegate_ReturnValue2' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.OnRespawnTimerUpdate
// 0x0028 (0x0028 - 0x0000)
struct DeathWidget_C_OnRespawnTimerUpdate final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue2;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeathWidget_C_OnRespawnTimerUpdate) == 0x000008, "Wrong alignment on DeathWidget_C_OnRespawnTimerUpdate");
static_assert(sizeof(DeathWidget_C_OnRespawnTimerUpdate) == 0x000028, "Wrong size on DeathWidget_C_OnRespawnTimerUpdate");
static_assert(offsetof(DeathWidget_C_OnRespawnTimerUpdate, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'DeathWidget_C_OnRespawnTimerUpdate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnRespawnTimerUpdate, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'DeathWidget_C_OnRespawnTimerUpdate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnRespawnTimerUpdate, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'DeathWidget_C_OnRespawnTimerUpdate::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnRespawnTimerUpdate, CallFunc_Subtract_IntInt_ReturnValue2) == 0x000020, "Member 'DeathWidget_C_OnRespawnTimerUpdate::CallFunc_Subtract_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_OnRespawnTimerUpdate, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'DeathWidget_C_OnRespawnTimerUpdate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.SetRespawnTimerText
// 0x0130 (0x0130 - 0x0000)
struct DeathWidget_C_SetRespawnTimerText final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)()
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue2;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x00F0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0118(0x0018)()
};
static_assert(alignof(DeathWidget_C_SetRespawnTimerText) == 0x000008, "Wrong alignment on DeathWidget_C_SetRespawnTimerText");
static_assert(sizeof(DeathWidget_C_SetRespawnTimerText) == 0x000130, "Wrong size on DeathWidget_C_SetRespawnTimerText");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'DeathWidget_C_SetRespawnTimerText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Max_ReturnValue) == 0x000028, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Max_ReturnValue2) == 0x00002C, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Max_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Conv_IntToText_ReturnValue2) == 0x000048, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'DeathWidget_C_SetRespawnTimerText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, K2Node_MakeStruct_FormatArgumentData2) == 0x0000A0, "Member 'DeathWidget_C_SetRespawnTimerText::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, K2Node_MakeArray_Array) == 0x0000E0, "Member 'DeathWidget_C_SetRespawnTimerText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, K2Node_MakeArray_Array2) == 0x0000F0, "Member 'DeathWidget_C_SetRespawnTimerText::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Format_ReturnValue) == 0x000100, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_SetRespawnTimerText, CallFunc_Format_ReturnValue2) == 0x000118, "Member 'DeathWidget_C_SetRespawnTimerText::CallFunc_Format_ReturnValue2' has a wrong offset!");

// Function DeathWidget.DeathWidget_C.ShowExtraLivesText
// 0x0150 (0x0150 - 0x0000)
struct DeathWidget_C_ShowExtraLivesText final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue2;             // 0x0018(0x0018)()
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateZone*                   CallFunc_GetPlayerStateZone_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute; // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0100(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor2;                     // 0x0128(0x0028)()
};
static_assert(alignof(DeathWidget_C_ShowExtraLivesText) == 0x000008, "Wrong alignment on DeathWidget_C_ShowExtraLivesText");
static_assert(sizeof(DeathWidget_C_ShowExtraLivesText) == 0x000150, "Wrong size on DeathWidget_C_ShowExtraLivesText");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_MakeLiteralText_ReturnValue2) == 0x000018, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_MakeLiteralText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_GetContext_ReturnValue) == 0x000030, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_GetPlayerStateZone_ReturnValue) == 0x000038, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_GetPlayerStateZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000040, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000048, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000058, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000059, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x00005C, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_FTrunc_ReturnValue) == 0x000060, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'DeathWidget_C_ShowExtraLivesText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000C0, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, K2Node_MakeArray_Array) == 0x0000C8, "Member 'DeathWidget_C_ShowExtraLivesText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, CallFunc_BooleanAND_ReturnValue2) == 0x0000F8, "Member 'DeathWidget_C_ShowExtraLivesText::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, K2Node_MakeStruct_SlateColor) == 0x000100, "Member 'DeathWidget_C_ShowExtraLivesText::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DeathWidget_C_ShowExtraLivesText, K2Node_MakeStruct_SlateColor2) == 0x000128, "Member 'DeathWidget_C_ShowExtraLivesText::K2Node_MakeStruct_SlateColor2' has a wrong offset!");

}

