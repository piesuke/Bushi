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
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageGenerator
struct  StageGenerator_t1242492285  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] StageGenerator::stages
	GameObjectU5BU5D_t3057952154* ___stages_2;
	// UnityEngine.Transform StageGenerator::nextEndPos
	Transform_t3275118058 * ___nextEndPos_3;
	// System.Single StageGenerator::spawnDistance
	float ___spawnDistance_4;
	// System.Single StageGenerator::distanceBetweenStages
	float ___distanceBetweenStages_5;
	// System.Single StageGenerator::randomHeight
	float ___randomHeight_6;
	// UnityEngine.GameObject[] StageGenerator::enemies
	GameObjectU5BU5D_t3057952154* ___enemies_7;
	// UnityEngine.GameObject[] StageGenerator::Koban
	GameObjectU5BU5D_t3057952154* ___Koban_8;
	// UnityEngine.GameObject StageGenerator::BigEnemy
	GameObject_t1756533147 * ___BigEnemy_9;
	// UnityEngine.GameObject StageGenerator::player
	GameObject_t1756533147 * ___player_10;
	// System.Boolean StageGenerator::isGenerating
	bool ___isGenerating_11;
	// System.Single StageGenerator::timer
	float ___timer_12;
	// UnityEngine.GameObject StageGenerator::EnemyNinja
	GameObject_t1756533147 * ___EnemyNinja_13;
	// System.Single StageGenerator::ranbomGenerate
	float ___ranbomGenerate_14;
	// System.Single StageGenerator::randomHeightNinja
	float ___randomHeightNinja_15;

public:
	inline static int32_t get_offset_of_stages_2() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___stages_2)); }
	inline GameObjectU5BU5D_t3057952154* get_stages_2() const { return ___stages_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_stages_2() { return &___stages_2; }
	inline void set_stages_2(GameObjectU5BU5D_t3057952154* value)
	{
		___stages_2 = value;
		Il2CppCodeGenWriteBarrier(&___stages_2, value);
	}

	inline static int32_t get_offset_of_nextEndPos_3() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___nextEndPos_3)); }
	inline Transform_t3275118058 * get_nextEndPos_3() const { return ___nextEndPos_3; }
	inline Transform_t3275118058 ** get_address_of_nextEndPos_3() { return &___nextEndPos_3; }
	inline void set_nextEndPos_3(Transform_t3275118058 * value)
	{
		___nextEndPos_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextEndPos_3, value);
	}

	inline static int32_t get_offset_of_spawnDistance_4() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___spawnDistance_4)); }
	inline float get_spawnDistance_4() const { return ___spawnDistance_4; }
	inline float* get_address_of_spawnDistance_4() { return &___spawnDistance_4; }
	inline void set_spawnDistance_4(float value)
	{
		___spawnDistance_4 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenStages_5() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___distanceBetweenStages_5)); }
	inline float get_distanceBetweenStages_5() const { return ___distanceBetweenStages_5; }
	inline float* get_address_of_distanceBetweenStages_5() { return &___distanceBetweenStages_5; }
	inline void set_distanceBetweenStages_5(float value)
	{
		___distanceBetweenStages_5 = value;
	}

	inline static int32_t get_offset_of_randomHeight_6() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___randomHeight_6)); }
	inline float get_randomHeight_6() const { return ___randomHeight_6; }
	inline float* get_address_of_randomHeight_6() { return &___randomHeight_6; }
	inline void set_randomHeight_6(float value)
	{
		___randomHeight_6 = value;
	}

	inline static int32_t get_offset_of_enemies_7() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___enemies_7)); }
	inline GameObjectU5BU5D_t3057952154* get_enemies_7() const { return ___enemies_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_enemies_7() { return &___enemies_7; }
	inline void set_enemies_7(GameObjectU5BU5D_t3057952154* value)
	{
		___enemies_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_7, value);
	}

	inline static int32_t get_offset_of_Koban_8() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___Koban_8)); }
	inline GameObjectU5BU5D_t3057952154* get_Koban_8() const { return ___Koban_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Koban_8() { return &___Koban_8; }
	inline void set_Koban_8(GameObjectU5BU5D_t3057952154* value)
	{
		___Koban_8 = value;
		Il2CppCodeGenWriteBarrier(&___Koban_8, value);
	}

	inline static int32_t get_offset_of_BigEnemy_9() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___BigEnemy_9)); }
	inline GameObject_t1756533147 * get_BigEnemy_9() const { return ___BigEnemy_9; }
	inline GameObject_t1756533147 ** get_address_of_BigEnemy_9() { return &___BigEnemy_9; }
	inline void set_BigEnemy_9(GameObject_t1756533147 * value)
	{
		___BigEnemy_9 = value;
		Il2CppCodeGenWriteBarrier(&___BigEnemy_9, value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___player_10)); }
	inline GameObject_t1756533147 * get_player_10() const { return ___player_10; }
	inline GameObject_t1756533147 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_t1756533147 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier(&___player_10, value);
	}

	inline static int32_t get_offset_of_isGenerating_11() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___isGenerating_11)); }
	inline bool get_isGenerating_11() const { return ___isGenerating_11; }
	inline bool* get_address_of_isGenerating_11() { return &___isGenerating_11; }
	inline void set_isGenerating_11(bool value)
	{
		___isGenerating_11 = value;
	}

	inline static int32_t get_offset_of_timer_12() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___timer_12)); }
	inline float get_timer_12() const { return ___timer_12; }
	inline float* get_address_of_timer_12() { return &___timer_12; }
	inline void set_timer_12(float value)
	{
		___timer_12 = value;
	}

	inline static int32_t get_offset_of_EnemyNinja_13() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___EnemyNinja_13)); }
	inline GameObject_t1756533147 * get_EnemyNinja_13() const { return ___EnemyNinja_13; }
	inline GameObject_t1756533147 ** get_address_of_EnemyNinja_13() { return &___EnemyNinja_13; }
	inline void set_EnemyNinja_13(GameObject_t1756533147 * value)
	{
		___EnemyNinja_13 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyNinja_13, value);
	}

	inline static int32_t get_offset_of_ranbomGenerate_14() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___ranbomGenerate_14)); }
	inline float get_ranbomGenerate_14() const { return ___ranbomGenerate_14; }
	inline float* get_address_of_ranbomGenerate_14() { return &___ranbomGenerate_14; }
	inline void set_ranbomGenerate_14(float value)
	{
		___ranbomGenerate_14 = value;
	}

	inline static int32_t get_offset_of_randomHeightNinja_15() { return static_cast<int32_t>(offsetof(StageGenerator_t1242492285, ___randomHeightNinja_15)); }
	inline float get_randomHeightNinja_15() const { return ___randomHeightNinja_15; }
	inline float* get_address_of_randomHeightNinja_15() { return &___randomHeightNinja_15; }
	inline void set_randomHeightNinja_15(float value)
	{
		___randomHeightNinja_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
