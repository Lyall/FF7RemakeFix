#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Options_Btn3

#include "Basic.hpp"

#include "MainMenu_Options_Btn3_classes.hpp"
#include "MainMenu_Options_Btn3_parameters.hpp"


namespace SDK
{

// Function MainMenu_Options_Btn3.MainMenu_Options_Btn3_C.ExecuteUbergraph_MainMenu_Options_Btn3
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_Options_Btn3_C::ExecuteUbergraph_MainMenu_Options_Btn3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_Options_Btn3_C", "ExecuteUbergraph_MainMenu_Options_Btn3");

	Params::MainMenu_Options_Btn3_C_ExecuteUbergraph_MainMenu_Options_Btn3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainMenu_Options_Btn3.MainMenu_Options_Btn3_C.BndEvt__SelectBtn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenu_Options_Btn3_C::BndEvt__SelectBtn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_Options_Btn3_C", "BndEvt__SelectBtn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenu_Options_Btn3.MainMenu_Options_Btn3_C.BndEvt__SelectBtn_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenu_Options_Btn3_C::BndEvt__SelectBtn_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_Options_Btn3_C", "BndEvt__SelectBtn_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

