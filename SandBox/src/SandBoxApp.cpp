#include "Hazel.h"

class ExampleLayer : public Hazel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		HZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(Hazel::Event& event) override
	{
		HZ_TRACE("{0}", event);
	}

};

class Sandbox :public Hazel::Application {
public:
	Sandbox() {
		// Initialization code for the sandbox application
		PushLayer(new ExampleLayer());
	}
	~Sandbox() {
		// Cleanup code for the sandbox application
	}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}