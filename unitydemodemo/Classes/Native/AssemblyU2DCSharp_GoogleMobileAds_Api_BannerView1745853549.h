﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t1603488524;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Api.BannerView
struct  BannerView_t1745853549  : public Il2CppObject
{
public:
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	Il2CppObject * ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_5;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___client_0)); }
	inline Il2CppObject * get_client_0() const { return ___client_0; }
	inline Il2CppObject ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(Il2CppObject * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier(&___client_0, value);
	}

	inline static int32_t get_offset_of_OnAdLoaded_1() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___OnAdLoaded_1)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_1() const { return ___OnAdLoaded_1; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_1() { return &___OnAdLoaded_1; }
	inline void set_OnAdLoaded_1(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_1, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_2() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___OnAdFailedToLoad_2)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_2() const { return ___OnAdFailedToLoad_2; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_2() { return &___OnAdFailedToLoad_2; }
	inline void set_OnAdFailedToLoad_2(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_2, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_3() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___OnAdOpening_3)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_3() const { return ___OnAdOpening_3; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_3() { return &___OnAdOpening_3; }
	inline void set_OnAdOpening_3(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_3, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___OnAdClosed_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_4, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_5() { return static_cast<int32_t>(offsetof(BannerView_t1745853549, ___OnAdLeavingApplication_5)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_5() const { return ___OnAdLeavingApplication_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_5() { return &___OnAdLeavingApplication_5; }
	inline void set_OnAdLeavingApplication_5(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_5, value);
	}
};

struct BannerView_t1745853549_StaticFields
{
public:
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache0
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache0_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache1
	EventHandler_1_t347919082 * ___U3CU3Ef__amU24cache1_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache2
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache2_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache3
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache3_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::<>f__am$cache4
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache4_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(BannerView_t1745853549_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(BannerView_t1745853549_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline EventHandler_1_t347919082 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline EventHandler_1_t347919082 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(EventHandler_1_t347919082 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_8() { return static_cast<int32_t>(offsetof(BannerView_t1745853549_StaticFields, ___U3CU3Ef__amU24cache2_8)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache2_8() const { return ___U3CU3Ef__amU24cache2_8; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache2_8() { return &___U3CU3Ef__amU24cache2_8; }
	inline void set_U3CU3Ef__amU24cache2_8(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache2_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_9() { return static_cast<int32_t>(offsetof(BannerView_t1745853549_StaticFields, ___U3CU3Ef__amU24cache3_9)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache3_9() const { return ___U3CU3Ef__amU24cache3_9; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache3_9() { return &___U3CU3Ef__amU24cache3_9; }
	inline void set_U3CU3Ef__amU24cache3_9(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache3_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_10() { return static_cast<int32_t>(offsetof(BannerView_t1745853549_StaticFields, ___U3CU3Ef__amU24cache4_10)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache4_10() const { return ___U3CU3Ef__amU24cache4_10; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache4_10() { return &___U3CU3Ef__amU24cache4_10; }
	inline void set_U3CU3Ef__amU24cache4_10(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache4_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
