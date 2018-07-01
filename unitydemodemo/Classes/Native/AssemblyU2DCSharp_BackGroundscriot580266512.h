#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackGroundscriot
struct  BackGroundscriot_t580266512  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] BackGroundscriot::backgrounds
	GameObjectU5BU5D_t3057952154* ___backgrounds_2;
	// UnityEngine.Transform BackGroundscriot::nextEndPos
	Transform_t3275118058 * ___nextEndPos_3;
	// System.Single BackGroundscriot::spawnDistance
	float ___spawnDistance_4;

public:
	inline static int32_t get_offset_of_backgrounds_2() { return static_cast<int32_t>(offsetof(BackGroundscriot_t580266512, ___backgrounds_2)); }
	inline GameObjectU5BU5D_t3057952154* get_backgrounds_2() const { return ___backgrounds_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_backgrounds_2() { return &___backgrounds_2; }
	inline void set_backgrounds_2(GameObjectU5BU5D_t3057952154* value)
	{
		___backgrounds_2 = value;
		Il2CppCodeGenWriteBarrier(&___backgrounds_2, value);
	}

	inline static int32_t get_offset_of_nextEndPos_3() { return static_cast<int32_t>(offsetof(BackGroundscriot_t580266512, ___nextEndPos_3)); }
	inline Transform_t3275118058 * get_nextEndPos_3() const { return ___nextEndPos_3; }
	inline Transform_t3275118058 ** get_address_of_nextEndPos_3() { return &___nextEndPos_3; }
	inline void set_nextEndPos_3(Transform_t3275118058 * value)
	{
		___nextEndPos_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextEndPos_3, value);
	}

	inline static int32_t get_offset_of_spawnDistance_4() { return static_cast<int32_t>(offsetof(BackGroundscriot_t580266512, ___spawnDistance_4)); }
	inline float get_spawnDistance_4() const { return ___spawnDistance_4; }
	inline float* get_address_of_spawnDistance_4() { return &___spawnDistance_4; }
	inline void set_spawnDistance_4(float value)
	{
		___spawnDistance_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
