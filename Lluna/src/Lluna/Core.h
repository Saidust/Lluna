#pragma once

#ifdef LA_PLATFORM_WINDOWS
	#ifdef LA_BUILD_DLL
		#define LLUNA_API __declspec(dllexport)
	#else
		#define LLUNA_API __declspec(dllimport)
	#endif
#else
	#error LLuna only supports Windows!
#endif