#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyNinjaScript
struct  EnemyNinjaScript_t3256356245  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EnemyNinjaScript::isMoving
	bool ___isMoving_2;
	// System.Single EnemyNinjaScript::speed
	float ___speed_3;
	// System.Single EnemyNinjaScript::speed2
	float ___speed2_4;

public:
	inline static int32_t get_offset_of_isMoving_2() { return static_cast<int32_t>(offsetof(EnemyNinjaScript_t3256356245, ___isMoving_2)); }
	inline bool get_isMoving_2() const { return ___isMoving_2; }
	inline bool* get_address_of_isMoving_2() { return &___isMoving_2; }
	inline void set_isMoving_2(bool value)
	{
		___isMoving_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(EnemyNinjaScript_t3256356245, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_speed2_4() { return static_cast<int32_t>(offsetof(EnemyNinjaScript_t3256356245, ___speed2_4)); }
	inline float get_speed2_4() const { return ___speed2_4; }
	inline float* get_address_of_speed2_4() { return &___speed2_4; }
	inline void set_speed2_4(float value)
	{
		___speed2_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
