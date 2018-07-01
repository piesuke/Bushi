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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t321581343  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyScript::arrow
	GameObject_t1756533147 * ___arrow_2;
	// UnityEngine.GameObject EnemyScript::player
	GameObject_t1756533147 * ___player_3;
	// System.Single EnemyScript::attackInterval
	float ___attackInterval_4;
	// System.Single EnemyScript::timer
	float ___timer_5;
	// System.Boolean EnemyScript::isAttacking
	bool ___isAttacking_6;
	// UnityEngine.GameObject EnemyScript::EnemyAttackSound
	GameObject_t1756533147 * ___EnemyAttackSound_7;
	// UnityEngine.GameObject EnemyScript::EnemyAttackSound2
	GameObject_t1756533147 * ___EnemyAttackSound2_8;

public:
	inline static int32_t get_offset_of_arrow_2() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___arrow_2)); }
	inline GameObject_t1756533147 * get_arrow_2() const { return ___arrow_2; }
	inline GameObject_t1756533147 ** get_address_of_arrow_2() { return &___arrow_2; }
	inline void set_arrow_2(GameObject_t1756533147 * value)
	{
		___arrow_2 = value;
		Il2CppCodeGenWriteBarrier(&___arrow_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_attackInterval_4() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___attackInterval_4)); }
	inline float get_attackInterval_4() const { return ___attackInterval_4; }
	inline float* get_address_of_attackInterval_4() { return &___attackInterval_4; }
	inline void set_attackInterval_4(float value)
	{
		___attackInterval_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_isAttacking_6() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___isAttacking_6)); }
	inline bool get_isAttacking_6() const { return ___isAttacking_6; }
	inline bool* get_address_of_isAttacking_6() { return &___isAttacking_6; }
	inline void set_isAttacking_6(bool value)
	{
		___isAttacking_6 = value;
	}

	inline static int32_t get_offset_of_EnemyAttackSound_7() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___EnemyAttackSound_7)); }
	inline GameObject_t1756533147 * get_EnemyAttackSound_7() const { return ___EnemyAttackSound_7; }
	inline GameObject_t1756533147 ** get_address_of_EnemyAttackSound_7() { return &___EnemyAttackSound_7; }
	inline void set_EnemyAttackSound_7(GameObject_t1756533147 * value)
	{
		___EnemyAttackSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyAttackSound_7, value);
	}

	inline static int32_t get_offset_of_EnemyAttackSound2_8() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___EnemyAttackSound2_8)); }
	inline GameObject_t1756533147 * get_EnemyAttackSound2_8() const { return ___EnemyAttackSound2_8; }
	inline GameObject_t1756533147 ** get_address_of_EnemyAttackSound2_8() { return &___EnemyAttackSound2_8; }
	inline void set_EnemyAttackSound2_8(GameObject_t1756533147 * value)
	{
		___EnemyAttackSound2_8 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyAttackSound2_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
