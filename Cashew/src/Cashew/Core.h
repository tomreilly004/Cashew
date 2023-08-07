#pragma once

#ifdef CSH_PLATFORM_WINDOWS
	#ifdef CSH_BUILD_DLL
		#define CASHEW_API _declspec(dllexport)
	#else 
		#define CASHEW_API _declspec(dllimport)
	#endif
#else 
	#error Cashew only supports windows
#endif