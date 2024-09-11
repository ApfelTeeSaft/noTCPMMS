#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StockBattleBus

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// 0x0028 (0x0028 - 0x0000)
struct B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue2;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetFlightLoopingSound_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CallFunc_GetFlightLoopingMusic_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus) == 0x000008, "Wrong alignment on B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus");
static_assert(sizeof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus) == 0x000028, "Wrong size on B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus");
static_assert(offsetof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus, EntryPoint) == 0x000000, "Member 'B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus, CallFunc_SpawnSoundAttached_ReturnValue2) == 0x000010, "Member 'B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus::CallFunc_SpawnSoundAttached_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus, CallFunc_GetFlightLoopingSound_ReturnValue) == 0x000018, "Member 'B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus::CallFunc_GetFlightLoopingSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus, CallFunc_GetFlightLoopingMusic_ReturnValue) == 0x000020, "Member 'B_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus::CallFunc_GetFlightLoopingMusic_ReturnValue' has a wrong offset!");

}
