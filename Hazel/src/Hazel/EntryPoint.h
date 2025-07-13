#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
	Hazel::Log::Init();
	HZ_CORE_INFO("Hazel Engine Initialized!");
	HZ_TRACE("Application Starting...");

	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
	return 0;
}

#endif