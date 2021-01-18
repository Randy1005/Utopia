#include <Utopia.h>


class MyGameApp : public Utopia::Application {
public:
	MyGameApp() {

	}

	~MyGameApp() {

	}
};

Utopia::Application* Utopia::CreateApplication() {
	return new MyGameApp();
}