#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaFPS

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaFPS.AthenaFPS_C.ExecuteUbergraph_AthenaFPS
// 0x00B8 (0x00B8 - 0x0000)
struct AthenaFPS_C_ExecuteUbergraph_AthenaFPS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bShowFPS)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFPSForHUD_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena2; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_BuildString_Int_ReturnValue;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS) == 0x000008, "Wrong alignment on AthenaFPS_C_ExecuteUbergraph_AthenaFPS");
static_assert(sizeof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS) == 0x0000B8, "Wrong size on AthenaFPS_C_ExecuteUbergraph_AthenaFPS");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, EntryPoint) == 0x000000, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_Event_MyGeometry) == 0x000018, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_Event_InDeltaTime) == 0x000050, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000060, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, CallFunc_GetOwningPlayer_ReturnValue2) == 0x000070, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, CallFunc_GetFPSForHUD_ReturnValue) == 0x000078, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::CallFunc_GetFPSForHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_DynamicCast_AsFort_Player_Controller_Athena2) == 0x000080, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_DynamicCast_AsFort_Player_Controller_Athena2' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, K2Node_DynamicCast_bSuccess2) == 0x000088, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, CallFunc_BuildString_Int_ReturnValue) == 0x000090, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::CallFunc_BuildString_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ExecuteUbergraph_AthenaFPS, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'AthenaFPS_C_ExecuteUbergraph_AthenaFPS::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function AthenaFPS.AthenaFPS_C.Tick
// 0x003C (0x003C - 0x0000)
struct AthenaFPS_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaFPS_C_Tick) == 0x000004, "Wrong alignment on AthenaFPS_C_Tick");
static_assert(sizeof(AthenaFPS_C_Tick) == 0x00003C, "Wrong size on AthenaFPS_C_Tick");
static_assert(offsetof(AthenaFPS_C_Tick, MyGeometry) == 0x000000, "Member 'AthenaFPS_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_Tick, InDeltaTime) == 0x000038, "Member 'AthenaFPS_C_Tick::InDeltaTime' has a wrong offset!");

// Function AthenaFPS.AthenaFPS_C.ShowFPSChanged
// 0x0005 (0x0005 - 0x0000)
struct AthenaFPS_C_ShowFPSChanged final
{
public:
	bool                                          bShowFPS;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaFPS_C_ShowFPSChanged) == 0x000001, "Wrong alignment on AthenaFPS_C_ShowFPSChanged");
static_assert(sizeof(AthenaFPS_C_ShowFPSChanged) == 0x000005, "Wrong size on AthenaFPS_C_ShowFPSChanged");
static_assert(offsetof(AthenaFPS_C_ShowFPSChanged, bShowFPS) == 0x000000, "Member 'AthenaFPS_C_ShowFPSChanged::bShowFPS' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ShowFPSChanged, Temp_bool_Variable) == 0x000001, "Member 'AthenaFPS_C_ShowFPSChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ShowFPSChanged, Temp_byte_Variable) == 0x000002, "Member 'AthenaFPS_C_ShowFPSChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ShowFPSChanged, Temp_byte_Variable2) == 0x000003, "Member 'AthenaFPS_C_ShowFPSChanged::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaFPS_C_ShowFPSChanged, K2Node_Select_Default) == 0x000004, "Member 'AthenaFPS_C_ShowFPSChanged::K2Node_Select_Default' has a wrong offset!");

}

