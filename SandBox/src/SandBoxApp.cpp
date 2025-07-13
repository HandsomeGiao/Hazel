#include "Hazel.h"

class Sandbox :public Hazel::Application {
public:
	Sandbox() {
		// Initialization code for the sandbox application
	}
	~Sandbox() {
		// Cleanup code for the sandbox application
	}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}