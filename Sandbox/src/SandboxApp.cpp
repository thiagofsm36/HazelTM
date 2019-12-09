#include <HazelTM.h>


class Sandbox: public HazelTM::Application {
public:
	Sandbox() {
	
	}
	~Sandbox()
	{

	}
};

HazelTM::Application* HazelTM::CreateApplication() {
	return new Sandbox();
}




