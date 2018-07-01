#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::speed
	float ___speed_2;
	// System.Single PlayerScript::jumppower
	float ___jumppower_3;
	// System.Single PlayerScript::timer
	float ___timer_4;
	// System.Single PlayerScript::attackInterval
	float ___attackInterval_5;
	// UnityEngine.GameObject PlayerScript::arrow
	GameObject_t1756533147 * ___arrow_6;
	// System.Int32 PlayerScript::jumpcount
	int32_t ___jumpcount_7;
	// System.Boolean PlayerScript::isAttacking
	bool ___isAttacking_8;
	// UnityEngine.GameObject PlayerScript::player
	GameObject_t1756533147 * ___player_9;
	// System.Int32 PlayerScript::MaxHP
	int32_t ___MaxHP_10;
	// System.Int32 PlayerScript::currentHP
	int32_t ___currentHP_11;
	// UnityEngine.UI.Slider PlayerScript::HPSlider
	Slider_t297367283 * ___HPSlider_12;
	// System.Int32 PlayerScript::count
	int32_t ___count_13;
	// UnityEngine.UI.Text PlayerScript::countText
	Text_t356221433 * ___countText_14;
	// UnityEngine.UI.Text PlayerScript::timer2Text
	Text_t356221433 * ___timer2Text_15;
	// System.Single PlayerScript::timer2
	float ___timer2_16;
	// System.Single PlayerScript::timer3
	float ___timer3_17;
	// UnityEngine.GameObject PlayerScript::KobanSound
	GameObject_t1756533147 * ___KobanSound_18;
	// UnityEngine.GameObject PlayerScript::ArrowAttackSound
	GameObject_t1756533147 * ___ArrowAttackSound_19;
	// UnityEngine.GameObject PlayerScript::EnemyDamageSound
	GameObject_t1756533147 * ___EnemyDamageSound_20;
	// UnityEngine.GameObject PlayerScript::CureSound
	GameObject_t1756533147 * ___CureSound_21;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_jumppower_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___jumppower_3)); }
	inline float get_jumppower_3() const { return ___jumppower_3; }
	inline float* get_address_of_jumppower_3() { return &___jumppower_3; }
	inline void set_jumppower_3(float value)
	{
		___jumppower_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_attackInterval_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___attackInterval_5)); }
	inline float get_attackInterval_5() const { return ___attackInterval_5; }
	inline float* get_address_of_attackInterval_5() { return &___attackInterval_5; }
	inline void set_attackInterval_5(float value)
	{
		___attackInterval_5 = value;
	}

	inline static int32_t get_offset_of_arrow_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___arrow_6)); }
	inline GameObject_t1756533147 * get_arrow_6() const { return ___arrow_6; }
	inline GameObject_t1756533147 ** get_address_of_arrow_6() { return &___arrow_6; }
	inline void set_arrow_6(GameObject_t1756533147 * value)
	{
		___arrow_6 = value;
		Il2CppCodeGenWriteBarrier(&___arrow_6, value);
	}

	inline static int32_t get_offset_of_jumpcount_7() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___jumpcount_7)); }
	inline int32_t get_jumpcount_7() const { return ___jumpcount_7; }
	inline int32_t* get_address_of_jumpcount_7() { return &___jumpcount_7; }
	inline void set_jumpcount_7(int32_t value)
	{
		___jumpcount_7 = value;
	}

	inline static int32_t get_offset_of_isAttacking_8() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___isAttacking_8)); }
	inline bool get_isAttacking_8() const { return ___isAttacking_8; }
	inline bool* get_address_of_isAttacking_8() { return &___isAttacking_8; }
	inline void set_isAttacking_8(bool value)
	{
		___isAttacking_8 = value;
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___player_9)); }
	inline GameObject_t1756533147 * get_player_9() const { return ___player_9; }
	inline GameObject_t1756533147 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1756533147 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_MaxHP_10() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___MaxHP_10)); }
	inline int32_t get_MaxHP_10() const { return ___MaxHP_10; }
	inline int32_t* get_address_of_MaxHP_10() { return &___MaxHP_10; }
	inline void set_MaxHP_10(int32_t value)
	{
		___MaxHP_10 = value;
	}

	inline static int32_t get_offset_of_currentHP_11() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___currentHP_11)); }
	inline int32_t get_currentHP_11() const { return ___currentHP_11; }
	inline int32_t* get_address_of_currentHP_11() { return &___currentHP_11; }
	inline void set_currentHP_11(int32_t value)
	{
		___currentHP_11 = value;
	}

	inline static int32_t get_offset_of_HPSlider_12() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___HPSlider_12)); }
	inline Slider_t297367283 * get_HPSlider_12() const { return ___HPSlider_12; }
	inline Slider_t297367283 ** get_address_of_HPSlider_12() { return &___HPSlider_12; }
	inline void set_HPSlider_12(Slider_t297367283 * value)
	{
		___HPSlider_12 = value;
		Il2CppCodeGenWriteBarrier(&___HPSlider_12, value);
	}

	inline static int32_t get_offset_of_count_13() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___count_13)); }
	inline int32_t get_count_13() const { return ___count_13; }
	inline int32_t* get_address_of_count_13() { return &___count_13; }
	inline void set_count_13(int32_t value)
	{
		___count_13 = value;
	}

	inline static int32_t get_offset_of_countText_14() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___countText_14)); }
	inline Text_t356221433 * get_countText_14() const { return ___countText_14; }
	inline Text_t356221433 ** get_address_of_countText_14() { return &___countText_14; }
	inline void set_countText_14(Text_t356221433 * value)
	{
		___countText_14 = value;
		Il2CppCodeGenWriteBarrier(&___countText_14, value);
	}

	inline static int32_t get_offset_of_timer2Text_15() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___timer2Text_15)); }
	inline Text_t356221433 * get_timer2Text_15() const { return ___timer2Text_15; }
	inline Text_t356221433 ** get_address_of_timer2Text_15() { return &___timer2Text_15; }
	inline void set_timer2Text_15(Text_t356221433 * value)
	{
		___timer2Text_15 = value;
		Il2CppCodeGenWriteBarrier(&___timer2Text_15, value);
	}

	inline static int32_t get_offset_of_timer2_16() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___timer2_16)); }
	inline float get_timer2_16() const { return ___timer2_16; }
	inline float* get_address_of_timer2_16() { return &___timer2_16; }
	inline void set_timer2_16(float value)
	{
		___timer2_16 = value;
	}

	inline static int32_t get_offset_of_timer3_17() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___timer3_17)); }
	inline float get_timer3_17() const { return ___timer3_17; }
	inline float* get_address_of_timer3_17() { return &___timer3_17; }
	inline void set_timer3_17(float value)
	{
		___timer3_17 = value;
	}

	inline static int32_t get_offset_of_KobanSound_18() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___KobanSound_18)); }
	inline GameObject_t1756533147 * get_KobanSound_18() const { return ___KobanSound_18; }
	inline GameObject_t1756533147 ** get_address_of_KobanSound_18() { return &___KobanSound_18; }
	inline void set_KobanSound_18(GameObject_t1756533147 * value)
	{
		___KobanSound_18 = value;
		Il2CppCodeGenWriteBarrier(&___KobanSound_18, value);
	}

	inline static int32_t get_offset_of_ArrowAttackSound_19() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___ArrowAttackSound_19)); }
	inline GameObject_t1756533147 * get_ArrowAttackSound_19() const { return ___ArrowAttackSound_19; }
	inline GameObject_t1756533147 ** get_address_of_ArrowAttackSound_19() { return &___ArrowAttackSound_19; }
	inline void set_ArrowAttackSound_19(GameObject_t1756533147 * value)
	{
		___ArrowAttackSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___ArrowAttackSound_19, value);
	}

	inline static int32_t get_offset_of_EnemyDamageSound_20() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___EnemyDamageSound_20)); }
	inline GameObject_t1756533147 * get_EnemyDamageSound_20() const { return ___EnemyDamageSound_20; }
	inline GameObject_t1756533147 ** get_address_of_EnemyDamageSound_20() { return &___EnemyDamageSound_20; }
	inline void set_EnemyDamageSound_20(GameObject_t1756533147 * value)
	{
		___EnemyDamageSound_20 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyDamageSound_20, value);
	}

	inline static int32_t get_offset_of_CureSound_21() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___CureSound_21)); }
	inline GameObject_t1756533147 * get_CureSound_21() const { return ___CureSound_21; }
	inline GameObject_t1756533147 ** get_address_of_CureSound_21() { return &___CureSound_21; }
	inline void set_CureSound_21(GameObject_t1756533147 * value)
	{
		___CureSound_21 = value;
		Il2CppCodeGenWriteBarrier(&___CureSound_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
