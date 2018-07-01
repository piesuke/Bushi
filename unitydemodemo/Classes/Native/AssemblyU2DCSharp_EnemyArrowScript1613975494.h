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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyArrowScript
struct  EnemyArrowScript_t1613975494  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody EnemyArrowScript::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_2;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(EnemyArrowScript_t1613975494, ___rigidbody_2)); }
	inline Rigidbody_t4233889191 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody_t4233889191 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
