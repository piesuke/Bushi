#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyTriggerScript
struct  EnemyTriggerScript_t1932637815  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody EnemyTriggerScript::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_2;
	// UnityEngine.GameObject EnemyTriggerScript::player
	GameObject_t1756533147 * ___player_3;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(EnemyTriggerScript_t1932637815, ___rigidbody_2)); }
	inline Rigidbody_t4233889191 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody_t4233889191 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(EnemyTriggerScript_t1932637815, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
