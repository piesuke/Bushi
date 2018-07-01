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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BigEnemyScript
struct  BigEnemyScript_t3309142643  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BigEnemyScript::speed
	float ___speed_2;
	// System.Boolean BigEnemyScript::isAttacking
	bool ___isAttacking_3;
	// System.Single BigEnemyScript::timer
	float ___timer_4;
	// System.Single BigEnemyScript::attackInterval
	float ___attackInterval_5;
	// UnityEngine.GameObject BigEnemyScript::enemyweapon
	GameObject_t1756533147 * ___enemyweapon_6;
	// System.Int32 BigEnemyScript::MaxHP
	int32_t ___MaxHP_7;
	// System.Int32 BigEnemyScript::currentHP
	int32_t ___currentHP_8;
	// UnityEngine.UI.Slider BigEnemyScript::HPSlider
	Slider_t297367283 * ___HPSlider_9;
	// UnityEngine.GameObject BigEnemyScript::player
	GameObject_t1756533147 * ___player_10;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_isAttacking_3() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___isAttacking_3)); }
	inline bool get_isAttacking_3() const { return ___isAttacking_3; }
	inline bool* get_address_of_isAttacking_3() { return &___isAttacking_3; }
	inline void set_isAttacking_3(bool value)
	{
		___isAttacking_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_attackInterval_5() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___attackInterval_5)); }
	inline float get_attackInterval_5() const { return ___attackInterval_5; }
	inline float* get_address_of_attackInterval_5() { return &___attackInterval_5; }
	inline void set_attackInterval_5(float value)
	{
		___attackInterval_5 = value;
	}

	inline static int32_t get_offset_of_enemyweapon_6() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___enemyweapon_6)); }
	inline GameObject_t1756533147 * get_enemyweapon_6() const { return ___enemyweapon_6; }
	inline GameObject_t1756533147 ** get_address_of_enemyweapon_6() { return &___enemyweapon_6; }
	inline void set_enemyweapon_6(GameObject_t1756533147 * value)
	{
		___enemyweapon_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemyweapon_6, value);
	}

	inline static int32_t get_offset_of_MaxHP_7() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___MaxHP_7)); }
	inline int32_t get_MaxHP_7() const { return ___MaxHP_7; }
	inline int32_t* get_address_of_MaxHP_7() { return &___MaxHP_7; }
	inline void set_MaxHP_7(int32_t value)
	{
		___MaxHP_7 = value;
	}

	inline static int32_t get_offset_of_currentHP_8() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___currentHP_8)); }
	inline int32_t get_currentHP_8() const { return ___currentHP_8; }
	inline int32_t* get_address_of_currentHP_8() { return &___currentHP_8; }
	inline void set_currentHP_8(int32_t value)
	{
		___currentHP_8 = value;
	}

	inline static int32_t get_offset_of_HPSlider_9() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___HPSlider_9)); }
	inline Slider_t297367283 * get_HPSlider_9() const { return ___HPSlider_9; }
	inline Slider_t297367283 ** get_address_of_HPSlider_9() { return &___HPSlider_9; }
	inline void set_HPSlider_9(Slider_t297367283 * value)
	{
		___HPSlider_9 = value;
		Il2CppCodeGenWriteBarrier(&___HPSlider_9, value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(BigEnemyScript_t3309142643, ___player_10)); }
	inline GameObject_t1756533147 * get_player_10() const { return ___player_10; }
	inline GameObject_t1756533147 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_t1756533147 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier(&___player_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
