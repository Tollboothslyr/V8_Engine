#pragma once

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