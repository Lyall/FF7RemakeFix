#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_System_Test

#include "Basic.hpp"

#include "MainMenu_System_Test_classes.hpp"
#include "MainMenu_System_Test_parameters.hpp"


namespace SDK
{

// Function MainMenu_System_Test.MainMenu_System_Test_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_System_Test_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_System_Test_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainMenu_System_Test.MainMenu_System_Test_C.ExecuteUbergraph_MainMenu_System_Test
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenu_System_Test_C::ExecuteUbergraph_MainMenu_System_Test(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_System_Test_C", "ExecuteUbergraph_MainMenu_System_Test");

	Params::MainMenu_System_Test_C_ExecuteUbergraph_MainMenu_System_Test Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

