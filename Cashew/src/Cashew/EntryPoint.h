#pragma once

#ifdef CSH_PLATFORM_WINDOWS

extern Cashew::Application* Cashew::CreateApplication();

int main(int argc, char** argv)
{
	printf("Cashew Engine");
	auto app = Cashew::CreateApplication();
	app->Run();
	delete app;
}


#endif