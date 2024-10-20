#include <iostream>

namespace Engine {
    inline namespace Version1 {
        void start() {
            std::cout << "Starting Engine - Version 1" << std::endl;
        }
    }

    namespace Version2 {
        void start() {
            std::cout << "Starting Engine - Version 2" << std::endl;
        }
    }
}

int main() {
    Engine::start();  // Calls the inline Version1
    Engine::Version2::start();  // Calls Version2 explicitly
    return 0;
}
