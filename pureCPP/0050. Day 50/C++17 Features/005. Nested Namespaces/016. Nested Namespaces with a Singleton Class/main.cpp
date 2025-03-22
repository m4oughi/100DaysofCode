#include <iostream>

namespace Engine::Core {
    class Singleton {
    public:
        static Singleton& getInstance() {
            static Singleton instance;
            return instance;
        }

        void printMessage() {
            std::cout << "Singleton Instance Active!\n";
        }

    private:
        Singleton() = default;
    };
}

int main() {
    Engine::Core::Singleton::getInstance().printMessage();
    return 0;
}
