#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndSceneManager
struct  EndSceneManager_t191154970  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text EndSceneManager::lastScoreText
	Text_t356221433 * ___lastScoreText_2;
	// UnityEngine.UI.Text EndSceneManager::highScoreText
	Text_t356221433 * ___highScoreText_3;
	// UnityEngine.GameObject EndSceneManager::GekokuzyouText
	GameObject_t1756533147 * ___GekokuzyouText_4;
	// System.Int32 EndSceneManager::lastScore
	int32_t ___lastScore_5;
	// System.Int32 EndSceneManager::highScore
	int32_t ___highScore_6;
	// System.Int32 EndSceneManager::KobanCount
	int32_t ___KobanCount_7;
	// UnityEngine.UI.Text EndSceneManager::KobanScoreText
	Text_t356221433 * ___KobanScoreText_8;
	// UnityEngine.GameObject EndSceneManager::player
	GameObject_t1756533147 * ___player_9;
	// System.Boolean EndSceneManager::Isappearing
	bool ___Isappearing_10;
	// UnityEngine.UI.Text EndSceneManager::MibunText
	Text_t356221433 * ___MibunText_11;

public:
	inline static int32_t get_offset_of_lastScoreText_2() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___lastScoreText_2)); }
	inline Text_t356221433 * get_lastScoreText_2() const { return ___lastScoreText_2; }
	inline Text_t356221433 ** get_address_of_lastScoreText_2() { return &___lastScoreText_2; }
	inline void set_lastScoreText_2(Text_t356221433 * value)
	{
		___lastScoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___lastScoreText_2, value);
	}

	inline static int32_t get_offset_of_highScoreText_3() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___highScoreText_3)); }
	inline Text_t356221433 * get_highScoreText_3() const { return ___highScoreText_3; }
	inline Text_t356221433 ** get_address_of_highScoreText_3() { return &___highScoreText_3; }
	inline void set_highScoreText_3(Text_t356221433 * value)
	{
		___highScoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_3, value);
	}

	inline static int32_t get_offset_of_GekokuzyouText_4() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___GekokuzyouText_4)); }
	inline GameObject_t1756533147 * get_GekokuzyouText_4() const { return ___GekokuzyouText_4; }
	inline GameObject_t1756533147 ** get_address_of_GekokuzyouText_4() { return &___GekokuzyouText_4; }
	inline void set_GekokuzyouText_4(GameObject_t1756533147 * value)
	{
		___GekokuzyouText_4 = value;
		Il2CppCodeGenWriteBarrier(&___GekokuzyouText_4, value);
	}

	inline static int32_t get_offset_of_lastScore_5() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___lastScore_5)); }
	inline int32_t get_lastScore_5() const { return ___lastScore_5; }
	inline int32_t* get_address_of_lastScore_5() { return &___lastScore_5; }
	inline void set_lastScore_5(int32_t value)
	{
		___lastScore_5 = value;
	}

	inline static int32_t get_offset_of_highScore_6() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___highScore_6)); }
	inline int32_t get_highScore_6() const { return ___highScore_6; }
	inline int32_t* get_address_of_highScore_6() { return &___highScore_6; }
	inline void set_highScore_6(int32_t value)
	{
		___highScore_6 = value;
	}

	inline static int32_t get_offset_of_KobanCount_7() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___KobanCount_7)); }
	inline int32_t get_KobanCount_7() const { return ___KobanCount_7; }
	inline int32_t* get_address_of_KobanCount_7() { return &___KobanCount_7; }
	inline void set_KobanCount_7(int32_t value)
	{
		___KobanCount_7 = value;
	}

	inline static int32_t get_offset_of_KobanScoreText_8() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___KobanScoreText_8)); }
	inline Text_t356221433 * get_KobanScoreText_8() const { return ___KobanScoreText_8; }
	inline Text_t356221433 ** get_address_of_KobanScoreText_8() { return &___KobanScoreText_8; }
	inline void set_KobanScoreText_8(Text_t356221433 * value)
	{
		___KobanScoreText_8 = value;
		Il2CppCodeGenWriteBarrier(&___KobanScoreText_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___player_9)); }
	inline GameObject_t1756533147 * get_player_9() const { return ___player_9; }
	inline GameObject_t1756533147 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1756533147 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_Isappearing_10() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___Isappearing_10)); }
	inline bool get_Isappearing_10() const { return ___Isappearing_10; }
	inline bool* get_address_of_Isappearing_10() { return &___Isappearing_10; }
	inline void set_Isappearing_10(bool value)
	{
		___Isappearing_10 = value;
	}

	inline static int32_t get_offset_of_MibunText_11() { return static_cast<int32_t>(offsetof(EndSceneManager_t191154970, ___MibunText_11)); }
	inline Text_t356221433 * get_MibunText_11() const { return ___MibunText_11; }
	inline Text_t356221433 ** get_address_of_MibunText_11() { return &___MibunText_11; }
	inline void set_MibunText_11(Text_t356221433 * value)
	{
		___MibunText_11 = value;
		Il2CppCodeGenWriteBarrier(&___MibunText_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
