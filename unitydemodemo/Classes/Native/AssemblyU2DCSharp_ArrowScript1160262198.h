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

// ArrowScript
struct  ArrowScript_t1160262198  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody ArrowScript::rigidbody
	Rigidbody_t4233889191 * ___rigidbody_2;
	// System.Single ArrowScript::maxSpeedX
	float ___maxSpeedX_3;
	// System.Single ArrowScript::minSpeedX
	float ___minSpeedX_4;
	// System.Single ArrowScript::maxSpeedY
	float ___maxSpeedY_5;
	// System.Single ArrowScript::minSpeedY
	float ___minSpeedY_6;
	// UnityEngine.GameObject ArrowScript::player
	GameObject_t1756533147 * ___player_7;
	// System.Single ArrowScript::velocityX
	float ___velocityX_8;
	// System.Single ArrowScript::velocityY
	float ___velocityY_9;
	// UnityEngine.GameObject ArrowScript::MyDamageSound
	GameObject_t1756533147 * ___MyDamageSound_10;

public:
	inline static int32_t get_offset_of_rigidbody_2() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___rigidbody_2)); }
	inline Rigidbody_t4233889191 * get_rigidbody_2() const { return ___rigidbody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidbody_2() { return &___rigidbody_2; }
	inline void set_rigidbody_2(Rigidbody_t4233889191 * value)
	{
		___rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_2, value);
	}

	inline static int32_t get_offset_of_maxSpeedX_3() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___maxSpeedX_3)); }
	inline float get_maxSpeedX_3() const { return ___maxSpeedX_3; }
	inline float* get_address_of_maxSpeedX_3() { return &___maxSpeedX_3; }
	inline void set_maxSpeedX_3(float value)
	{
		___maxSpeedX_3 = value;
	}

	inline static int32_t get_offset_of_minSpeedX_4() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___minSpeedX_4)); }
	inline float get_minSpeedX_4() const { return ___minSpeedX_4; }
	inline float* get_address_of_minSpeedX_4() { return &___minSpeedX_4; }
	inline void set_minSpeedX_4(float value)
	{
		___minSpeedX_4 = value;
	}

	inline static int32_t get_offset_of_maxSpeedY_5() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___maxSpeedY_5)); }
	inline float get_maxSpeedY_5() const { return ___maxSpeedY_5; }
	inline float* get_address_of_maxSpeedY_5() { return &___maxSpeedY_5; }
	inline void set_maxSpeedY_5(float value)
	{
		___maxSpeedY_5 = value;
	}

	inline static int32_t get_offset_of_minSpeedY_6() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___minSpeedY_6)); }
	inline float get_minSpeedY_6() const { return ___minSpeedY_6; }
	inline float* get_address_of_minSpeedY_6() { return &___minSpeedY_6; }
	inline void set_minSpeedY_6(float value)
	{
		___minSpeedY_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___player_7)); }
	inline GameObject_t1756533147 * get_player_7() const { return ___player_7; }
	inline GameObject_t1756533147 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t1756533147 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_velocityX_8() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___velocityX_8)); }
	inline float get_velocityX_8() const { return ___velocityX_8; }
	inline float* get_address_of_velocityX_8() { return &___velocityX_8; }
	inline void set_velocityX_8(float value)
	{
		___velocityX_8 = value;
	}

	inline static int32_t get_offset_of_velocityY_9() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___velocityY_9)); }
	inline float get_velocityY_9() const { return ___velocityY_9; }
	inline float* get_address_of_velocityY_9() { return &___velocityY_9; }
	inline void set_velocityY_9(float value)
	{
		___velocityY_9 = value;
	}

	inline static int32_t get_offset_of_MyDamageSound_10() { return static_cast<int32_t>(offsetof(ArrowScript_t1160262198, ___MyDamageSound_10)); }
	inline GameObject_t1756533147 * get_MyDamageSound_10() const { return ___MyDamageSound_10; }
	inline GameObject_t1756533147 ** get_address_of_MyDamageSound_10() { return &___MyDamageSound_10; }
	inline void set_MyDamageSound_10(GameObject_t1756533147 * value)
	{
		___MyDamageSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___MyDamageSound_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
