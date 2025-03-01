#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VR_CountDown

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VR_CountDown.VR_CountDown_C
// 0x00E8 (0x0448 - 0x0360)
class UVR_CountDown_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       CountDown_Start;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_1;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_2;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_3;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Round;                                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Finish;                                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Circle00;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Circle01;                                          // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Circle02;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_2;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_5;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_6;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_7;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_12;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_13;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_14;                                       // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_15;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num1;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num12;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num2;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num22;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num3;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num32;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LineBottom;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              LineTop;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Num_Light;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Start_Light;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VR_CountDown_C">();
	}
	static class UVR_CountDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVR_CountDown_C>();
	}
};
static_assert(alignof(UVR_CountDown_C) == 0x000008, "Wrong alignment on UVR_CountDown_C");
static_assert(sizeof(UVR_CountDown_C) == 0x000448, "Wrong size on UVR_CountDown_C");
static_assert(offsetof(UVR_CountDown_C, CountDown_Start) == 0x000360, "Member 'UVR_CountDown_C::CountDown_Start' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, CountDown_1) == 0x000368, "Member 'UVR_CountDown_C::CountDown_1' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, CountDown_2) == 0x000370, "Member 'UVR_CountDown_C::CountDown_2' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, CountDown_3) == 0x000378, "Member 'UVR_CountDown_C::CountDown_3' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, CountDown) == 0x000380, "Member 'UVR_CountDown_C::CountDown' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Round) == 0x000388, "Member 'UVR_CountDown_C::Round' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Finish) == 0x000390, "Member 'UVR_CountDown_C::Finish' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Circle00) == 0x000398, "Member 'UVR_CountDown_C::Circle00' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Circle01) == 0x0003A0, "Member 'UVR_CountDown_C::Circle01' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Circle02) == 0x0003A8, "Member 'UVR_CountDown_C::Circle02' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_2) == 0x0003B0, "Member 'UVR_CountDown_C::EndImage_2' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_5) == 0x0003B8, "Member 'UVR_CountDown_C::EndImage_5' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_6) == 0x0003C0, "Member 'UVR_CountDown_C::EndImage_6' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_7) == 0x0003C8, "Member 'UVR_CountDown_C::EndImage_7' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_12) == 0x0003D0, "Member 'UVR_CountDown_C::EndImage_12' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_13) == 0x0003D8, "Member 'UVR_CountDown_C::EndImage_13' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_14) == 0x0003E0, "Member 'UVR_CountDown_C::EndImage_14' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, EndImage_15) == 0x0003E8, "Member 'UVR_CountDown_C::EndImage_15' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num1) == 0x0003F0, "Member 'UVR_CountDown_C::Img_Num1' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num12) == 0x0003F8, "Member 'UVR_CountDown_C::Img_Num12' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num2) == 0x000400, "Member 'UVR_CountDown_C::Img_Num2' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num22) == 0x000408, "Member 'UVR_CountDown_C::Img_Num22' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num3) == 0x000410, "Member 'UVR_CountDown_C::Img_Num3' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Img_Num32) == 0x000418, "Member 'UVR_CountDown_C::Img_Num32' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, LineBottom) == 0x000420, "Member 'UVR_CountDown_C::LineBottom' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, LineTop) == 0x000428, "Member 'UVR_CountDown_C::LineTop' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Num_Light) == 0x000430, "Member 'UVR_CountDown_C::Num_Light' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Start_Light) == 0x000438, "Member 'UVR_CountDown_C::Start_Light' has a wrong offset!");
static_assert(offsetof(UVR_CountDown_C, Txt_Title) == 0x000440, "Member 'UVR_CountDown_C::Txt_Title' has a wrong offset!");

}

