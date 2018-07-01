#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
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

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.iOS.InterstitialClient
struct  InterstitialClient_t2538051773  : public Il2CppObject
{
public:
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdClosing
	EventHandler_1_t1880931879 * ___OnAdClosing_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_5;
	// System.IntPtr GoogleMobileAds.iOS.InterstitialClient::interstitialPtr
	IntPtr_t ___interstitialPtr_6;

public:
	inline static int32_t get_offset_of_OnAdLoaded_0() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdLoaded_0)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_0() const { return ___OnAdLoaded_0; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_0() { return &___OnAdLoaded_0; }
	inline void set_OnAdLoaded_0(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_0, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdFailedToLoad_1)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_1() const { return ___OnAdFailedToLoad_1; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_1() { return &___OnAdFailedToLoad_1; }
	inline void set_OnAdFailedToLoad_1(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_1, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_2() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdOpening_2)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_2() const { return ___OnAdOpening_2; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_2() { return &___OnAdOpening_2; }
	inline void set_OnAdOpening_2(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_2, value);
	}

	inline static int32_t get_offset_of_OnAdClosing_3() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdClosing_3)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosing_3() const { return ___OnAdClosing_3; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosing_3() { return &___OnAdClosing_3; }
	inline void set_OnAdClosing_3(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosing_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosing_3, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdClosed_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_4, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_5() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___OnAdLeavingApplication_5)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_5() const { return ___OnAdLeavingApplication_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_5() { return &___OnAdLeavingApplication_5; }
	inline void set_OnAdLeavingApplication_5(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_5, value);
	}

	inline static int32_t get_offset_of_interstitialPtr_6() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773, ___interstitialPtr_6)); }
	inline IntPtr_t get_interstitialPtr_6() const { return ___interstitialPtr_6; }
	inline IntPtr_t* get_address_of_interstitialPtr_6() { return &___interstitialPtr_6; }
	inline void set_interstitialPtr_6(IntPtr_t value)
	{
		___interstitialPtr_6 = value;
	}
};

struct InterstitialClient_t2538051773_StaticFields
{
public:
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache0
	GADUInterstitialDidReceiveAdCallback_t3343584307 * ___U3CU3Ef__mgU24cache0_7;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache1
	GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408 * ___U3CU3Ef__mgU24cache1_8;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache2
	GADUInterstitialWillPresentScreenCallback_t387623197 * ___U3CU3Ef__mgU24cache2_9;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache3
	GADUInterstitialDidDismissScreenCallback_t4025611083 * ___U3CU3Ef__mgU24cache3_10;
	// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback GoogleMobileAds.iOS.InterstitialClient::<>f__mg$cache4
	GADUInterstitialWillLeaveApplicationCallback_t216612155 * ___U3CU3Ef__mgU24cache4_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache0
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache0_12;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache1
	EventHandler_1_t347919082 * ___U3CU3Ef__amU24cache1_13;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache2
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache2_14;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache3
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache3_15;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache4
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache4_16;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.iOS.InterstitialClient::<>f__am$cache5
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache5_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline GADUInterstitialDidReceiveAdCallback_t3343584307 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline GADUInterstitialDidReceiveAdCallback_t3343584307 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(GADUInterstitialDidReceiveAdCallback_t3343584307 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_8() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__mgU24cache1_8)); }
	inline GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408 * get_U3CU3Ef__mgU24cache1_8() const { return ___U3CU3Ef__mgU24cache1_8; }
	inline GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408 ** get_address_of_U3CU3Ef__mgU24cache1_8() { return &___U3CU3Ef__mgU24cache1_8; }
	inline void set_U3CU3Ef__mgU24cache1_8(GADUInterstitialDidFailToReceiveAdWithErrorCallback_t1829207408 * value)
	{
		___U3CU3Ef__mgU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_9() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__mgU24cache2_9)); }
	inline GADUInterstitialWillPresentScreenCallback_t387623197 * get_U3CU3Ef__mgU24cache2_9() const { return ___U3CU3Ef__mgU24cache2_9; }
	inline GADUInterstitialWillPresentScreenCallback_t387623197 ** get_address_of_U3CU3Ef__mgU24cache2_9() { return &___U3CU3Ef__mgU24cache2_9; }
	inline void set_U3CU3Ef__mgU24cache2_9(GADUInterstitialWillPresentScreenCallback_t387623197 * value)
	{
		___U3CU3Ef__mgU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_10() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__mgU24cache3_10)); }
	inline GADUInterstitialDidDismissScreenCallback_t4025611083 * get_U3CU3Ef__mgU24cache3_10() const { return ___U3CU3Ef__mgU24cache3_10; }
	inline GADUInterstitialDidDismissScreenCallback_t4025611083 ** get_address_of_U3CU3Ef__mgU24cache3_10() { return &___U3CU3Ef__mgU24cache3_10; }
	inline void set_U3CU3Ef__mgU24cache3_10(GADUInterstitialDidDismissScreenCallback_t4025611083 * value)
	{
		___U3CU3Ef__mgU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_11() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__mgU24cache4_11)); }
	inline GADUInterstitialWillLeaveApplicationCallback_t216612155 * get_U3CU3Ef__mgU24cache4_11() const { return ___U3CU3Ef__mgU24cache4_11; }
	inline GADUInterstitialWillLeaveApplicationCallback_t216612155 ** get_address_of_U3CU3Ef__mgU24cache4_11() { return &___U3CU3Ef__mgU24cache4_11; }
	inline void set_U3CU3Ef__mgU24cache4_11(GADUInterstitialWillLeaveApplicationCallback_t216612155 * value)
	{
		___U3CU3Ef__mgU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_13() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache1_13)); }
	inline EventHandler_1_t347919082 * get_U3CU3Ef__amU24cache1_13() const { return ___U3CU3Ef__amU24cache1_13; }
	inline EventHandler_1_t347919082 ** get_address_of_U3CU3Ef__amU24cache1_13() { return &___U3CU3Ef__amU24cache1_13; }
	inline void set_U3CU3Ef__amU24cache1_13(EventHandler_1_t347919082 * value)
	{
		___U3CU3Ef__amU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_14() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache2_14)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache2_14() const { return ___U3CU3Ef__amU24cache2_14; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache2_14() { return &___U3CU3Ef__amU24cache2_14; }
	inline void set_U3CU3Ef__amU24cache2_14(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_15() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache3_15)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache3_15() const { return ___U3CU3Ef__amU24cache3_15; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache3_15() { return &___U3CU3Ef__amU24cache3_15; }
	inline void set_U3CU3Ef__amU24cache3_15(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache3_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_16() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache4_16)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache4_16() const { return ___U3CU3Ef__amU24cache4_16; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache4_16() { return &___U3CU3Ef__amU24cache4_16; }
	inline void set_U3CU3Ef__amU24cache4_16(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache4_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_17() { return static_cast<int32_t>(offsetof(InterstitialClient_t2538051773_StaticFields, ___U3CU3Ef__amU24cache5_17)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache5_17() const { return ___U3CU3Ef__amU24cache5_17; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache5_17() { return &___U3CU3Ef__amU24cache5_17; }
	inline void set_U3CU3Ef__amU24cache5_17(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache5_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
