#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBarToolTip

#include "Basic.hpp"

#include "XpBarToolTip_classes.hpp"
#include "XpBarToolTip_parameters.hpp"


namespace SDK
{

// Function XpBarToolTip.XpBarToolTip_C.GetHeaderText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetHeaderText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetHeaderText");

	Params::XpBarToolTip_C_GetHeaderText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetCommanderXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetCommanderXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetCommanderXPText");

	Params::XpBarToolTip_C_GetCommanderXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetBoostXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetBoostXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBoostXPText");

	Params::XpBarToolTip_C_GetBoostXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetRestedXPText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetRestedXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetRestedXPText");

	Params::XpBarToolTip_C_GetRestedXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBarToolTip.XpBarToolTip_C.GetBodyText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UXpBarToolTip_C::GetBodyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBodyText");

	Params::XpBarToolTip_C_GetBodyText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
