#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_BtnLight

#include "Basic.hpp"

#include "Shop_BtnLight_classes.hpp"
#include "Shop_BtnLight_parameters.hpp"


namespace SDK
{

// Function Shop_BtnLight.Shop_BtnLight_C.ExecuteUbergraph_Shop_BtnLight
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShop_BtnLight_C::ExecuteUbergraph_Shop_BtnLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shop_BtnLight_C", "ExecuteUbergraph_Shop_BtnLight");

	Params::Shop_BtnLight_C_ExecuteUbergraph_Shop_BtnLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shop_BtnLight.Shop_BtnLight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShop_BtnLight_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shop_BtnLight_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

