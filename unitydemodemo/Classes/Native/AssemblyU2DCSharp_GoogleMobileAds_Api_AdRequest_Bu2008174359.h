﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen1791139578.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.AdRequest/Builder
struct  Builder_t2008174359  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::testDevices
	List_1_t1398341365 * ___testDevices_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::keywords
	HashSet_1_t362681087 * ___keywords_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::birthday
	Nullable_1_t3251239280  ___birthday_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::gender
	Nullable_1_t1791139578  ___gender_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::tagForChildDirectedTreatment
	Nullable_1_t2088641033  ___tagForChildDirectedTreatment_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::extras
	Dictionary_2_t3943999495 * ___extras_5;

public:
	inline static int32_t get_offset_of_testDevices_0() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___testDevices_0)); }
	inline List_1_t1398341365 * get_testDevices_0() const { return ___testDevices_0; }
	inline List_1_t1398341365 ** get_address_of_testDevices_0() { return &___testDevices_0; }
	inline void set_testDevices_0(List_1_t1398341365 * value)
	{
		___testDevices_0 = value;
		Il2CppCodeGenWriteBarrier(&___testDevices_0, value);
	}

	inline static int32_t get_offset_of_keywords_1() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___keywords_1)); }
	inline HashSet_1_t362681087 * get_keywords_1() const { return ___keywords_1; }
	inline HashSet_1_t362681087 ** get_address_of_keywords_1() { return &___keywords_1; }
	inline void set_keywords_1(HashSet_1_t362681087 * value)
	{
		___keywords_1 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_1, value);
	}

	inline static int32_t get_offset_of_birthday_2() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___birthday_2)); }
	inline Nullable_1_t3251239280  get_birthday_2() const { return ___birthday_2; }
	inline Nullable_1_t3251239280 * get_address_of_birthday_2() { return &___birthday_2; }
	inline void set_birthday_2(Nullable_1_t3251239280  value)
	{
		___birthday_2 = value;
	}

	inline static int32_t get_offset_of_gender_3() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___gender_3)); }
	inline Nullable_1_t1791139578  get_gender_3() const { return ___gender_3; }
	inline Nullable_1_t1791139578 * get_address_of_gender_3() { return &___gender_3; }
	inline void set_gender_3(Nullable_1_t1791139578  value)
	{
		___gender_3 = value;
	}

	inline static int32_t get_offset_of_tagForChildDirectedTreatment_4() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___tagForChildDirectedTreatment_4)); }
	inline Nullable_1_t2088641033  get_tagForChildDirectedTreatment_4() const { return ___tagForChildDirectedTreatment_4; }
	inline Nullable_1_t2088641033 * get_address_of_tagForChildDirectedTreatment_4() { return &___tagForChildDirectedTreatment_4; }
	inline void set_tagForChildDirectedTreatment_4(Nullable_1_t2088641033  value)
	{
		___tagForChildDirectedTreatment_4 = value;
	}

	inline static int32_t get_offset_of_extras_5() { return static_cast<int32_t>(offsetof(Builder_t2008174359, ___extras_5)); }
	inline Dictionary_2_t3943999495 * get_extras_5() const { return ___extras_5; }
	inline Dictionary_2_t3943999495 ** get_address_of_extras_5() { return &___extras_5; }
	inline void set_extras_5(Dictionary_2_t3943999495 * value)
	{
		___extras_5 = value;
		Il2CppCodeGenWriteBarrier(&___extras_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif