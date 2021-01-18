#pragma once
#include "Core.h"

namespace Utopia {

	class UTOPIA_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in client-side
	Application* CreateApplication();

}

