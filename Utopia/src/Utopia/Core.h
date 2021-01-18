#pragma once

#ifdef UTOPIA_PLATFORMS_WINDOWS
	#ifdef UTOPIA_BUILD_DLL
		#define UTOPIA_API __declspec(dllexport)
	#else
		#define UTOPIA_API __declspec(dllimport)
	#endif
#else
	#error only Windows build support for now.
#endif


