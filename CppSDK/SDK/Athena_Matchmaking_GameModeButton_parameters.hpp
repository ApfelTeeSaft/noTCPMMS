#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Matchmaking_GameModeButton

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature final
{
public:
	class UAthena_Matchmaking_GameModeButton_C*   SelectedGameModeButton;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature) == 0x000008, "Wrong size on Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature, SelectedGameModeButton) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature::SelectedGameModeButton' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature final
{
public:
	class UAthena_Matchmaking_GameModeButton_C*   HoveredButton;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature) == 0x000008, "Wrong size on Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature, HoveredButton) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature::HoveredButton' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
// 0x0038 (0x0038 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton) == 0x000038, "Wrong size on Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, EntryPoint) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_bool_Variable) == 0x000004, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_byte_Variable) == 0x000005, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_byte_Variable2) == 0x000006, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_bool_Variable2) == 0x000007, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_byte_Variable3) == 0x000008, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, Temp_byte_Variable4) == 0x000009, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_Event_IsDesignTime) == 0x00000A, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_Select_Default) == 0x00000B, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_Select2_Default) == 0x000018, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_CustomEvent_Button) == 0x000020, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Athena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
// 0x0008 (0x0008 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered) == 0x000008, "Wrong size on Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered, Button) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_OnModeButtonHovered::Button' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_PreConstruct) == 0x000001, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_PreConstruct");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_PreConstruct) == 0x000001, "Wrong size on Athena_Matchmaking_GameModeButton_C_PreConstruct");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
// 0x0038 (0x0038 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_SetupGameModeButton final
{
public:
	class FText                                   ModeDisplayName;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bHasExtraInfo;                                     // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsEnabled_0;                                      // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ExtraInfoText;                                     // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_SetupGameModeButton");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton) == 0x000038, "Wrong size on Athena_Matchmaking_GameModeButton_C_SetupGameModeButton");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton, ModeDisplayName) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_SetupGameModeButton::ModeDisplayName' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton, bHasExtraInfo) == 0x000018, "Member 'Athena_Matchmaking_GameModeButton_C_SetupGameModeButton::bHasExtraInfo' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton, bIsEnabled_0) == 0x000019, "Member 'Athena_Matchmaking_GameModeButton_C_SetupGameModeButton::bIsEnabled_0' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetupGameModeButton, ExtraInfoText) == 0x000020, "Member 'Athena_Matchmaking_GameModeButton_C_SetupGameModeButton::ExtraInfoText' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
// 0x0268 (0x0268 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
	struct FEventReply                            CallFunc_SetUserFocus_ReturnValue;                 // 0x01B0(0x00B8)()
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_OnFocusReceived");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived) == 0x000268, "Wrong size on Athena_Matchmaking_GameModeButton_C_OnFocusReceived");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'Athena_Matchmaking_GameModeButton_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'Athena_Matchmaking_GameModeButton_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'Athena_Matchmaking_GameModeButton_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_OnFocusReceived, CallFunc_SetUserFocus_ReturnValue) == 0x0001B0, "Member 'Athena_Matchmaking_GameModeButton_C_OnFocusReceived::CallFunc_SetUserFocus_ReturnValue' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
// 0x0030 (0x0030 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable final
{
public:
	EFortAthenaPlaylist                           InMode;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Available;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFortAthenaPlaylist>                   Debug;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<EFortAthenaPlaylist>                   CallFunc_GetActivePlaylists_ReturnValue;           // 0x0018(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable) == 0x000030, "Wrong size on Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable, InMode) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable::InMode' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable, Available) == 0x000001, "Member 'Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable::Available' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable, Debug) == 0x000008, "Member 'Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable::Debug' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable, CallFunc_GetActivePlaylists_ReturnValue) == 0x000018, "Member 'Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable::CallFunc_GetActivePlaylists_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable, CallFunc_Array_Contains_ReturnValue) == 0x000028, "Member 'Athena_Matchmaking_GameModeButton_C_IsGameModeAvailable::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
// 0x0005 (0x0005 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage) == 0x000001, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage) == 0x000005, "Wrong size on Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage, Show) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage::Show' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage, Temp_bool_Variable) == 0x000001, "Member 'Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage, Temp_byte_Variable) == 0x000002, "Member 'Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage, Temp_byte_Variable2) == 0x000003, "Member 'Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage, K2Node_Select_Default) == 0x000004, "Member 'Athena_Matchmaking_GameModeButton_C_ShowDisabledMessage::K2Node_Select_Default' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
// 0x0002 (0x0002 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty final
{
public:
	bool                                          CallFunc_SetMissionGenData_Success;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGameModeAvailable_Available;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty) == 0x000001, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty) == 0x000002, "Wrong size on Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty, CallFunc_SetMissionGenData_Success) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty::CallFunc_SetMissionGenData_Success' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty, CallFunc_IsGameModeAvailable_Available) == 0x000001, "Member 'Athena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty::CallFunc_IsGameModeAvailable_Available' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
// 0x0008 (0x0008 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget final
{
public:
	class UAthenaMatchmakingOptionsDisplay_v2_C*  OwningDisplay;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget) == 0x000008, "Wrong size on Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget, OwningDisplay) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget::OwningDisplay' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetMissionGenData
// 0x0018 (0x0018 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_SetMissionGenData final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortAthenaPlaylist                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_SetMissionGenData");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData) == 0x000018, "Wrong size on Athena_Matchmaking_GameModeButton_C_SetMissionGenData");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData, Success) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_SetMissionGenData::Success' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData, Temp_byte_Variable) == 0x000001, "Member 'Athena_Matchmaking_GameModeButton_C_SetMissionGenData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'Athena_Matchmaking_GameModeButton_C_SetMissionGenData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData, K2Node_Select_Default) == 0x000008, "Member 'Athena_Matchmaking_GameModeButton_C_SetMissionGenData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_SetMissionGenData, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'Athena_Matchmaking_GameModeButton_C_SetMissionGenData::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ConfigButtonWithMissionGen
// 0x0048 (0x0048 - 0x0000)
struct Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen final
{
public:
	class UClass*                                 InMission;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0030(0x0018)()
};
static_assert(alignof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen) == 0x000008, "Wrong alignment on Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen");
static_assert(sizeof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen) == 0x000048, "Wrong size on Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen, InMission) == 0x000000, "Member 'Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen::InMission' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen, Temp_bool_Variable) == 0x000008, "Member 'Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen, Temp_text_Variable) == 0x000010, "Member 'Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen, CallFunc_TextIsEmpty_ReturnValue) == 0x000028, "Member 'Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen, K2Node_Select_Default) == 0x000030, "Member 'Athena_Matchmaking_GameModeButton_C_ConfigButtonWithMissionGen::K2Node_Select_Default' has a wrong offset!");

}
