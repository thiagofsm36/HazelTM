#pragma once
#include "core.h"


namespace HazelTM {
	class HAZEL_API Application {

	public:
		Application();
		virtual ~Application();
		void Run();
	};
	
	//To be defined in CLIENT
	Application* CreateApplication();

}


