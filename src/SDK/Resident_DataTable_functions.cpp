#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Resident_DataTable

#include "Basic.hpp"

#include "Resident_DataTable_classes.hpp"
#include "Resident_DataTable_parameters.hpp"


namespace SDK
{

// Function Resident_DataTable.Resident_DataTable_C.ExecuteUbergraph_Resident_DataTable
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AResident_DataTable_C::ExecuteUbergraph_Resident_DataTable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Resident_DataTable_C", "ExecuteUbergraph_Resident_DataTable");

	Params::Resident_DataTable_C_ExecuteUbergraph_Resident_DataTable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Resident_DataTable.Resident_DataTable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResident_DataTable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Resident_DataTable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

