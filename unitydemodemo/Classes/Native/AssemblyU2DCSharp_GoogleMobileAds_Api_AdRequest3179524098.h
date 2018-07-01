#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
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

// GoogleMobileAds.Api.AdRequest
struct  AdRequest_t3179524098  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::testDevices
	List_1_t1398341365 * ___testDevices_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::keywords
	HashSet_1_t362681087 * ___keywords_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::birthday
	Nullable_1_t3251239280  ___birthday_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::gender
	Nullable_1_t1791139578  ___gender_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::tagForChildDirectedTreatment
	Nullable_1_t2088641033  ___tagForChildDirectedTreatment_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::extras
	Dictionary_2_t3943999495 * ___extras_7;

public:
	inline static int32_t get_offset_of_testDevices_2() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___testDevices_2)); }
	inline List_1_t1398341365 * get_testDevices_2() const { return ___testDevices_2; }
	inline List_1_t1398341365 ** get_address_of_testDevices_2() { return &___testDevices_2; }
	inline void set_testDevices_2(List_1_t1398341365 * value)
	{
		___testDevices_2 = value;
		Il2CppCodeGenWriteBarrier(&___testDevices_2, value);
	}

	inline static int32_t get_offset_of_keywords_3() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___keywords_3)); }
	inline HashSet_1_t362681087 * get_keywords_3() const { return ___keywords_3; }
	inline HashSet_1_t362681087 ** get_address_of_keywords_3() { return &___keywords_3; }
	inline void set_keywords_3(HashSet_1_t362681087 * value)
	{
		___keywords_3 = value;
		Il2CppCodeGenWriteBarrier(&___keywords_3, value);
	}

	inline static int32_t get_offset_of_birthday_4() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___birthday_4)); }
	inline Nullable_1_t3251239280  get_birthday_4() const { return ___birthday_4; }
	inline Nullable_1_t3251239280 * get_address_of_birthday_4() { return &___birthday_4; }
	inline void set_birthday_4(Nullable_1_t3251239280  value)
	{
		___birthday_4 = value;
	}

	inline static int32_t get_offset_of_gender_5() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___gender_5)); }
	inline Nullable_1_t1791139578  get_gender_5() const { return ___gender_5; }
	inline Nullable_1_t1791139578 * get_address_of_gender_5() { return &___gender_5; }
	inline void set_gender_5(Nullable_1_t1791139578  value)
	{
		___gender_5 = value;
	}

	inline static int32_t get_offset_of_tagForChildDirectedTreatment_6() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___tagForChildDirectedTreatment_6)); }
	inline Nullable_1_t2088641033  get_tagForChildDirectedTreatment_6() const { return ___tagForChildDirectedTreatment_6; }
	inline Nullable_1_t2088641033 * get_address_of_tagForChildDirectedTreatment_6() { return &___tagForChildDirectedTreatment_6; }
	inline void set_tagForChildDirectedTreatment_6(Nullable_1_t2088641033  value)
	{
		___tagForChildDirectedTreatment_6 = value;
	}

	inline static int32_t get_offset_of_extras_7() { return static_cast<int32_t>(offsetof(AdRequest_t3179524098, ___extras_7)); }
	inline Dictionary_2_t3943999495 * get_extras_7() const { return ___extras_7; }
	inline Dictionary_2_t3943999495 ** get_address_of_extras_7() { return &___extras_7; }
	inline void set_extras_7(Dictionary_2_t3943999495 * value)
	{
		___extras_7 = value;
		Il2CppCodeGenWriteBarrier(&___extras_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
