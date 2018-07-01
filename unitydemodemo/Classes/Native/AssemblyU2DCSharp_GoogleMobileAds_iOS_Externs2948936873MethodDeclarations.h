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

// GoogleMobileAds.iOS.Externs
struct Externs_t2948936873;
// System.String
struct String_t;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_t3611450851;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t2294077762;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_t2607757429;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_t2257715507;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_t1946169147;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_t3343584307;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t387623197;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_t4025611083;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_t216612155;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t4169257859;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t862929376;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t587935421;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t25341677;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_t2453903099;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t129051320;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_t2167763867;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient3611450851.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient2294077762.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient2607757429.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient2257715507.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_BannerClient1946169147.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial3343584307.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial1829207408.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC387623197.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_Interstitial4025611083.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_InterstitialC216612155.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV4169257859.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi862929376.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi587935421.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVid25341677.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV2453903099.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedVi129051320.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_iOS_RewardBasedV2167763867.h"

// System.Void GoogleMobileAds.iOS.Externs::.ctor()
extern "C"  void Externs__ctor_m747600966 (Externs_t2948936873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
extern "C"  IntPtr_t Externs_GADUCreateRequest_m186728553 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddTestDevice_m4092615724 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___deviceId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
extern "C"  void Externs_GADUAddKeyword_m2695335653 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___keyword1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C"  void Externs_GADUSetBirthday_m1736627929 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
extern "C"  void Externs_GADUSetGender_m1291605563 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, int32_t ___genderCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
extern "C"  void Externs_GADUTagForChildDirectedTreatment_m781435999 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, bool ___childDirectedTreatment1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
extern "C"  void Externs_GADUSetExtra_m1949804207 (Il2CppObject * __this /* static, unused */, IntPtr_t ___request0, String_t* ___key1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURelease(System.IntPtr)
extern "C"  void Externs_GADURelease_m239039392 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateBannerView(System.IntPtr,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateBannerView_m958862972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___adUnitId1, int32_t ___width2, int32_t ___height3, int32_t ___positionAtTop4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateSmartBannerView(System.IntPtr,System.String,System.Int32)
extern "C"  IntPtr_t Externs_GADUCreateSmartBannerView_m122769273 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerClient0, String_t* ___adUnitId1, int32_t ___positionAtTop2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBannerCallbacks(System.IntPtr,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback,GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetBannerCallbacks_m2084042627 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, GADUAdViewDidReceiveAdCallback_t3611450851 * ___adReceivedCallback1, GADUAdViewDidFailToReceiveAdWithErrorCallback_t2294077762 * ___adFailedCallback2, GADUAdViewWillPresentScreenCallback_t2607757429 * ___willPresentCallback3, GADUAdViewDidDismissScreenCallback_t2257715507 * ___didDismissCallback4, GADUAdViewWillLeaveApplicationCallback_t1946169147 * ___willLeaveCallback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUHideBannerView(System.IntPtr)
extern "C"  void Externs_GADUHideBannerView_m402621106 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowBannerView(System.IntPtr)
extern "C"  void Externs_GADUShowBannerView_m1766184533 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURemoveBannerView(System.IntPtr)
extern "C"  void Externs_GADURemoveBannerView_m1215524142 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestBannerAd(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestBannerAd_m433551545 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateInterstitial(System.IntPtr,System.String)
extern "C"  IntPtr_t Externs_GADUCreateInterstitial_m1719262436 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitialClient0, String_t* ___adUnitId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetInterstitialCallbacks(System.IntPtr,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback,GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetInterstitialCallbacks_m247229013 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, GADUInterstitialDidReceiveAdCallback_t3343584307 * ___adReceivedCallback1, GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408 * ___adFailedCallback2, GADUInterstitialWillPresentScreenCallback_t387623197 * ___willPresentCallback3, GADUInterstitialDidDismissScreenCallback_t4025611083 * ___didDismissCallback4, GADUInterstitialWillLeaveApplicationCallback_t216612155 * ___willLeaveCallback5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADUInterstitialReady(System.IntPtr)
extern "C"  bool Externs_GADUInterstitialReady_m4221703410 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowInterstitial(System.IntPtr)
extern "C"  void Externs_GADUShowInterstitial_m2142468906 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestInterstitial(System.IntPtr,System.IntPtr)
extern "C"  void Externs_GADURequestInterstitial_m816595426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___interstitial0, IntPtr_t ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRewardBasedVideoAd(System.IntPtr)
extern "C"  IntPtr_t Externs_GADUCreateRewardBasedVideoAd_m3334359302 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.iOS.Externs::GADURewardBasedVideoAdReady(System.IntPtr)
extern "C"  bool Externs_GADURewardBasedVideoAdReady_m3999277472 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUShowRewardBasedVideoAd(System.IntPtr)
extern "C"  void Externs_GADUShowRewardBasedVideoAd_m1811537128 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADURequestRewardBasedVideoAd(System.IntPtr,System.IntPtr,System.String,System.String)
extern "C"  void Externs_GADURequestRewardBasedVideoAd_m1935238144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___bannerView0, IntPtr_t ___request1, String_t* ___adUnitId2, String_t* ___userId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRewardBasedVideoAdCallbacks(System.IntPtr,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback,GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback)
extern "C"  void Externs_GADUSetRewardBasedVideoAdCallbacks_m761410542 (Il2CppObject * __this /* static, unused */, IntPtr_t ___rewardBasedVideo0, GADURewardBasedVideoAdDidReceiveAdCallback_t4169257859 * ___adReceivedCallback1, GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t862929376 * ___adFailedCallback2, GADURewardBasedVideoAdDidOpenCallback_t587935421 * ___didOpenCallback3, GADURewardBasedVideoAdDidStartCallback_t25341677 * ___didStartCallback4, GADURewardBasedVideoAdDidCloseCallback_t2453903099 * ___didCloseCallback5, GADURewardBasedVideoAdDidRewardCallback_t129051320 * ___didRewardcallback6, GADURewardBasedVideoAdWillLeaveApplicationCallback_t2167763867 * ___willLeaveCallback7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
