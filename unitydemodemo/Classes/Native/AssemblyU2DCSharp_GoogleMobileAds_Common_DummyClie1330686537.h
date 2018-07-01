﻿#pragma once

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
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t344857101;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleMobileAds.Common.DummyClient
struct  DummyClient_t1330686537  : public Il2CppObject
{
public:
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdLoaded
	EventHandler_1_t1880931879 * ___OnAdLoaded_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Common.DummyClient::OnAdFailedToLoad
	EventHandler_1_t347919082 * ___OnAdFailedToLoad_1;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdOpening
	EventHandler_1_t1880931879 * ___OnAdOpening_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdStarted
	EventHandler_1_t1880931879 * ___OnAdStarted_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdClosed
	EventHandler_1_t1880931879 * ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Common.DummyClient::OnAdRewarded
	EventHandler_1_t344857101 * ___OnAdRewarded_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::OnAdLeavingApplication
	EventHandler_1_t1880931879 * ___OnAdLeavingApplication_6;

public:
	inline static int32_t get_offset_of_OnAdLoaded_0() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdLoaded_0)); }
	inline EventHandler_1_t1880931879 * get_OnAdLoaded_0() const { return ___OnAdLoaded_0; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLoaded_0() { return &___OnAdLoaded_0; }
	inline void set_OnAdLoaded_0(EventHandler_1_t1880931879 * value)
	{
		___OnAdLoaded_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLoaded_0, value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdFailedToLoad_1)); }
	inline EventHandler_1_t347919082 * get_OnAdFailedToLoad_1() const { return ___OnAdFailedToLoad_1; }
	inline EventHandler_1_t347919082 ** get_address_of_OnAdFailedToLoad_1() { return &___OnAdFailedToLoad_1; }
	inline void set_OnAdFailedToLoad_1(EventHandler_1_t347919082 * value)
	{
		___OnAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdFailedToLoad_1, value);
	}

	inline static int32_t get_offset_of_OnAdOpening_2() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdOpening_2)); }
	inline EventHandler_1_t1880931879 * get_OnAdOpening_2() const { return ___OnAdOpening_2; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdOpening_2() { return &___OnAdOpening_2; }
	inline void set_OnAdOpening_2(EventHandler_1_t1880931879 * value)
	{
		___OnAdOpening_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdOpening_2, value);
	}

	inline static int32_t get_offset_of_OnAdStarted_3() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdStarted_3)); }
	inline EventHandler_1_t1880931879 * get_OnAdStarted_3() const { return ___OnAdStarted_3; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdStarted_3() { return &___OnAdStarted_3; }
	inline void set_OnAdStarted_3(EventHandler_1_t1880931879 * value)
	{
		___OnAdStarted_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdStarted_3, value);
	}

	inline static int32_t get_offset_of_OnAdClosed_4() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdClosed_4)); }
	inline EventHandler_1_t1880931879 * get_OnAdClosed_4() const { return ___OnAdClosed_4; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdClosed_4() { return &___OnAdClosed_4; }
	inline void set_OnAdClosed_4(EventHandler_1_t1880931879 * value)
	{
		___OnAdClosed_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdClosed_4, value);
	}

	inline static int32_t get_offset_of_OnAdRewarded_5() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdRewarded_5)); }
	inline EventHandler_1_t344857101 * get_OnAdRewarded_5() const { return ___OnAdRewarded_5; }
	inline EventHandler_1_t344857101 ** get_address_of_OnAdRewarded_5() { return &___OnAdRewarded_5; }
	inline void set_OnAdRewarded_5(EventHandler_1_t344857101 * value)
	{
		___OnAdRewarded_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdRewarded_5, value);
	}

	inline static int32_t get_offset_of_OnAdLeavingApplication_6() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537, ___OnAdLeavingApplication_6)); }
	inline EventHandler_1_t1880931879 * get_OnAdLeavingApplication_6() const { return ___OnAdLeavingApplication_6; }
	inline EventHandler_1_t1880931879 ** get_address_of_OnAdLeavingApplication_6() { return &___OnAdLeavingApplication_6; }
	inline void set_OnAdLeavingApplication_6(EventHandler_1_t1880931879 * value)
	{
		___OnAdLeavingApplication_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnAdLeavingApplication_6, value);
	}
};

struct DummyClient_t1330686537_StaticFields
{
public:
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache0
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache0_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache1
	EventHandler_1_t347919082 * ___U3CU3Ef__amU24cache1_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache2
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache2_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache3
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache3_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache4
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache4_11;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Common.DummyClient::<>f__am$cache5
	EventHandler_1_t344857101 * ___U3CU3Ef__amU24cache5_12;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyClient::<>f__am$cache6
	EventHandler_1_t1880931879 * ___U3CU3Ef__amU24cache6_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline EventHandler_1_t347919082 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline EventHandler_1_t347919082 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(EventHandler_1_t347919082 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_10() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache3_10)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache3_10() const { return ___U3CU3Ef__amU24cache3_10; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache3_10() { return &___U3CU3Ef__amU24cache3_10; }
	inline void set_U3CU3Ef__amU24cache3_10(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_11() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache4_11)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache4_11() const { return ___U3CU3Ef__amU24cache4_11; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache4_11() { return &___U3CU3Ef__amU24cache4_11; }
	inline void set_U3CU3Ef__amU24cache4_11(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache4_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_12() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache5_12)); }
	inline EventHandler_1_t344857101 * get_U3CU3Ef__amU24cache5_12() const { return ___U3CU3Ef__amU24cache5_12; }
	inline EventHandler_1_t344857101 ** get_address_of_U3CU3Ef__amU24cache5_12() { return &___U3CU3Ef__amU24cache5_12; }
	inline void set_U3CU3Ef__amU24cache5_12(EventHandler_1_t344857101 * value)
	{
		___U3CU3Ef__amU24cache5_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_13() { return static_cast<int32_t>(offsetof(DummyClient_t1330686537_StaticFields, ___U3CU3Ef__amU24cache6_13)); }
	inline EventHandler_1_t1880931879 * get_U3CU3Ef__amU24cache6_13() const { return ___U3CU3Ef__amU24cache6_13; }
	inline EventHandler_1_t1880931879 ** get_address_of_U3CU3Ef__amU24cache6_13() { return &___U3CU3Ef__amU24cache6_13; }
	inline void set_U3CU3Ef__amU24cache6_13(EventHandler_1_t1880931879 * value)
	{
		___U3CU3Ef__amU24cache6_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
