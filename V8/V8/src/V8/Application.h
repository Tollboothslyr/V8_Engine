#pragma once


#ifdef _WIN32
	#include "core.h"

		namespace V8 {


			class V8_API  Application  //__declspec(dllexport) is now V8_API
				//V8 api is from core.h
			{
			public:
				Application();
				virtual ~Application();

				void run();

			};



		};
#else   // linux version has no need to use core.h, 
			//it can acsess files dynamically on the fly without the need of specific declerations of something being needed to be exported

	namespace V8 {


		class Application  
		{
		public:
			Application();
			virtual ~Application(); //Virtual allows this to be treated as

			void run();

		};

};

#endif