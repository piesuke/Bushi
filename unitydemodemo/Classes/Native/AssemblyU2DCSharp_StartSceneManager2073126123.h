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
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartSceneManager
struct  StartSceneManager_t2073126123  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject StartSceneManager::StartSound
	GameObject_t1756533147 * ___StartSound_2;
	// UnityEngine.GameObject StartSceneManager::StartPlayer
	GameObject_t1756533147 * ___StartPlayer_3;
	// System.Single StartSceneManager::speed
	float ___speed_4;
	// UnityEngine.Animator StartSceneManager::animator
	Animator_t69676727 * ___animator_5;
	// System.Boolean StartSceneManager::PlayerWalk
	bool ___PlayerWalk_6;

public:
	inline static int32_t get_offset_of_StartSound_2() { return static_cast<int32_t>(offsetof(StartSceneManager_t2073126123, ___StartSound_2)); }
	inline GameObject_t1756533147 * get_StartSound_2() const { return ___StartSound_2; }
	inline GameObject_t1756533147 ** get_address_of_StartSound_2() { return &___StartSound_2; }
	inline void set_StartSound_2(GameObject_t1756533147 * value)
	{
		___StartSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___StartSound_2, value);
	}

	inline static int32_t get_offset_of_StartPlayer_3() { return static_cast<int32_t>(offsetof(StartSceneManager_t2073126123, ___StartPlayer_3)); }
	inline GameObject_t1756533147 * get_StartPlayer_3() const { return ___StartPlayer_3; }
	inline GameObject_t1756533147 ** get_address_of_StartPlayer_3() { return &___StartPlayer_3; }
	inline void set_StartPlayer_3(GameObject_t1756533147 * value)
	{
		___StartPlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___StartPlayer_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(StartSceneManager_t2073126123, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(StartSceneManager_t2073126123, ___animator_5)); }
	inline Animator_t69676727 * get_animator_5() const { return ___animator_5; }
	inline Animator_t69676727 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t69676727 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___animator_5, value);
	}

	inline static int32_t get_offset_of_PlayerWalk_6() { return static_cast<int32_t>(offsetof(StartSceneManager_t2073126123, ___PlayerWalk_6)); }
	inline bool get_PlayerWalk_6() const { return ___PlayerWalk_6; }
	inline bool* get_address_of_PlayerWalk_6() { return &___PlayerWalk_6; }
	inline void set_PlayerWalk_6(bool value)
	{
		___PlayerWalk_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
