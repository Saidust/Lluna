// Easy way to include header files
#include "Lluna.h"

class Sandbox : public Lluna::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Lluna::Application* Lluna::CreateApplication()
{
	return new Sandbox();
}