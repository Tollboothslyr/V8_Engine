#pragma once

// these lines are for dll export/import macros.(MACROS IN THIS CASE ARE DEFINITIONS)
//ive set V8_PLATFROM_WINDOWS;V8_BUILD_DLL;   as my preprossesor definitions for now. this is for inheritance and referencing 

	#ifdef V8_PLATFROM_WINDOWS //this dll reference only works on windows (declspec dll export /import)...
	//...find a conversion later for building on  a linux system.
		#ifdef  V8_BUILD_DLL 
			#define V8_API __declspec(dllexport) //for sandbox and V8 communication of dlls
		#else
			#define V8_API __declspec(dllimport) //this would allow for importing into sandbox
																				//if im wrong and wasted your time please delete this
		#endif
	#else

		//#error DECL INCOMPATIBLE WITH NON-WINDOWS OPERATING SYSTEMS   ...maybe nothing will happen?
	
		#endif




