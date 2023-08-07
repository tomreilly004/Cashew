#include <Cashew.h>

class Sandbox : public Cashew::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cashew::Application* Cashew::CreateApplication()
{
	return new Sandbox();
}