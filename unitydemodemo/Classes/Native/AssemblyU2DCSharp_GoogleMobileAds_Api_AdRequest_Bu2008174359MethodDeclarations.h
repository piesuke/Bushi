﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t2008174359;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Gender3528073263.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen1791139578.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
extern "C"  void Builder__ctor_m2706200954 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
extern "C"  Builder_t2008174359 * Builder_AddKeyword_m2273492952 (Builder_t2008174359 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
extern "C"  Builder_t2008174359 * Builder_AddTestDevice_m297937113 (Builder_t2008174359 * __this, String_t* ___deviceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
extern "C"  AdRequest_t3179524098 * Builder_Build_m2983611542 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetBirthday(System.DateTime)
extern "C"  Builder_t2008174359 * Builder_SetBirthday_m1078405913 (Builder_t2008174359 * __this, DateTime_t693205669  ___birthday0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetGender(GoogleMobileAds.Api.Gender)
extern "C"  Builder_t2008174359 * Builder_SetGender_m767866501 (Builder_t2008174359 * __this, int32_t ___gender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
extern "C"  Builder_t2008174359 * Builder_TagForChildDirectedTreatment_m2245190556 (Builder_t2008174359 * __this, bool ___tagForChildDirectedTreatment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
extern "C"  Builder_t2008174359 * Builder_AddExtra_m1022426627 (Builder_t2008174359 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
extern "C"  List_1_t1398341365 * Builder_get_TestDevices_m1145988453 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
extern "C"  HashSet_1_t362681087 * Builder_get_Keywords_m254636616 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::get_Birthday()
extern "C"  Nullable_1_t3251239280  Builder_get_Birthday_m2421545498 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::get_Gender()
extern "C"  Nullable_1_t1791139578  Builder_get_Gender_m3016422556 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::get_ChildDirectedTreatmentTag()
extern "C"  Nullable_1_t2088641033  Builder_get_ChildDirectedTreatmentTag_m1645390006 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
extern "C"  Dictionary_2_t3943999495 * Builder_get_Extras_m1039505344 (Builder_t2008174359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
