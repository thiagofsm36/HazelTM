#pragma once


#ifdef HZ_PLATFORM_WINDOWS

	// To be implemented in Application
	extern HazelTM::Application* HazelTM::CreateApplication();


	int main(int argc, char** argv) {

		auto app = HazelTM::CreateApplication();
		app->Run();
		delete app;

	}
#endif // HZ_PLATFORM_WINDOWS



