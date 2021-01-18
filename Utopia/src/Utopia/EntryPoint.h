#pragma once
#ifdef UTOPIA_PLATFORMS_WINDOWS

extern Utopia::Application* Utopia::CreateApplication();

int main(int argc, char** argv) {
	auto app = Utopia::CreateApplication();
	app->Run();
	delete app;
}

#endif