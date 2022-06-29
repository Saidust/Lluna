#pragma once
#include "Core.h"

namespace Lluna
{
	class LLUNA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

