#pragma once

#ifdef LA_PLATFORM_WINDOWS

extern Lluna::Application* Lluna::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lluna::CreateApplication();
	app->Run();
	delete app;
}

#endif