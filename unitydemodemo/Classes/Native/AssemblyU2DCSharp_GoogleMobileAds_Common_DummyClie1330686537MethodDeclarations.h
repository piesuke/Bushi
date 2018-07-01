#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.Common.DummyClient
struct DummyClient_t1330686537;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t344857101;
// System.String
struct String_t;
// GoogleMobileAds.Api.AdSize
struct AdSize_t3231673570;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor
struct IDefaultInAppPurchaseProcessor_t115417181;
// GoogleMobileAds.Api.ICustomInAppPurchaseProcessor
struct ICustomInAppPurchaseProcessor_t3097491683;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t1756611910;
// GoogleMobileAds.Api.Reward
struct Reward_t1753549929;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdSize3231673570.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdPosition2595513602.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo1756611910.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Reward1753549929.h"

// System.Void GoogleMobileAds.Common.DummyClient::.ctor()
extern "C"  void DummyClient__ctor_m799812436 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdLoaded_m2318855105 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdLoaded_m3105775116 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void DummyClient_add_OnAdFailedToLoad_m1172409091 (DummyClient_t1330686537 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void DummyClient_remove_OnAdFailedToLoad_m4204962934 (DummyClient_t1330686537 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdOpening_m1791953256 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdOpening_m2080495509 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdStarted_m3188060671 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdStarted_m476213412 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdClosed_m4189951846 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdClosed_m3790529587 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void DummyClient_add_OnAdRewarded_m1189394490 (DummyClient_t1330686537 * __this, EventHandler_1_t344857101 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void DummyClient_remove_OnAdRewarded_m328379031 (DummyClient_t1330686537 * __this, EventHandler_1_t344857101 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_add_OnAdLeavingApplication_m952207304 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void DummyClient_remove_OnAdLeavingApplication_m1302818641 (DummyClient_t1330686537 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAds.Common.DummyClient::get_UserId()
extern "C"  String_t* DummyClient_get_UserId_m3397805744 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::set_UserId(System.String)
extern "C"  void DummyClient_set_UserId_m228933671 (DummyClient_t1330686537 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateBannerView(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
extern "C"  void DummyClient_CreateBannerView_m1649703447 (DummyClient_t1330686537 * __this, String_t* ___adUnitId0, AdSize_t3231673570 * ___adSize1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest)
extern "C"  void DummyClient_LoadAd_m95061214 (DummyClient_t1330686537 * __this, AdRequest_t3179524098 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowBannerView()
extern "C"  void DummyClient_ShowBannerView_m305572224 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::HideBannerView()
extern "C"  void DummyClient_HideBannerView_m3035862181 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyBannerView()
extern "C"  void DummyClient_DestroyBannerView_m3912447035 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateInterstitialAd(System.String)
extern "C"  void DummyClient_CreateInterstitialAd_m1680826917 (DummyClient_t1330686537 * __this, String_t* ___adUnitId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Common.DummyClient::IsLoaded()
extern "C"  bool DummyClient_IsLoaded_m2547765645 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowInterstitial()
extern "C"  void DummyClient_ShowInterstitial_m1234395325 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyInterstitial()
extern "C"  void DummyClient_DestroyInterstitial_m3774979568 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::CreateRewardBasedVideoAd()
extern "C"  void DummyClient_CreateRewardBasedVideoAd_m3788514334 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetUserId(System.String)
extern "C"  void DummyClient_SetUserId_m2338154196 (DummyClient_t1330686537 * __this, String_t* ___userId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::LoadAd(GoogleMobileAds.Api.AdRequest,System.String)
extern "C"  void DummyClient_LoadAd_m2283221770 (DummyClient_t1330686537 * __this, AdRequest_t3179524098 * ___request0, String_t* ___adUnitId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::DestroyRewardBasedVideoAd()
extern "C"  void DummyClient_DestroyRewardBasedVideoAd_m1097589582 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::ShowRewardBasedVideoAd()
extern "C"  void DummyClient_ShowRewardBasedVideoAd_m2189438553 (DummyClient_t1330686537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetDefaultInAppPurchaseProcessor(GoogleMobileAds.Api.IDefaultInAppPurchaseProcessor)
extern "C"  void DummyClient_SetDefaultInAppPurchaseProcessor_m3543387644 (DummyClient_t1330686537 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::SetCustomInAppPurchaseProcessor(GoogleMobileAds.Api.ICustomInAppPurchaseProcessor)
extern "C"  void DummyClient_SetCustomInAppPurchaseProcessor_m562770264 (DummyClient_t1330686537 * __this, Il2CppObject * ___processor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdLoaded>m__0(System.Object,System.EventArgs)
extern "C"  void DummyClient_U3COnAdLoadedU3Em__0_m3041017292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdFailedToLoad>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void DummyClient_U3COnAdFailedToLoadU3Em__1_m1446098033 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, AdFailedToLoadEventArgs_t1756611910 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdOpening>m__2(System.Object,System.EventArgs)
extern "C"  void DummyClient_U3COnAdOpeningU3Em__2_m3003492651 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdStarted>m__3(System.Object,System.EventArgs)
extern "C"  void DummyClient_U3COnAdStartedU3Em__3_m3935209767 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdClosed>m__4(System.Object,System.EventArgs)
extern "C"  void DummyClient_U3COnAdClosedU3Em__4_m821490055 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdRewarded>m__5(System.Object,GoogleMobileAds.Api.Reward)
extern "C"  void DummyClient_U3COnAdRewardedU3Em__5_m438434000 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Reward_t1753549929 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Common.DummyClient::<OnAdLeavingApplication>m__6(System.Object,System.EventArgs)
extern "C"  void DummyClient_U3COnAdLeavingApplicationU3Em__6_m2918067659 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, EventArgs_t3289624707 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
