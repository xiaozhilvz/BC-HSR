#pragma once
#pragma comment(lib,"MinHook.lib")
#pragma comment(lib,"mihok.lib")
#include <windows.h>

namespace hook {
	namespace game {
		int get_currect_phase();
	}

	void init();
}