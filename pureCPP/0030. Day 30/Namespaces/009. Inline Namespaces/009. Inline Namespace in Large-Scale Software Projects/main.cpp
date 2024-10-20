#include <iostream>

namespace Graphics {
    inline namespace Version1 {
        void render() {
            std::cout << "Rendering with Version 1" << std::endl;
        }
    }

    inline namespace Version2 {
        void render() {
            std::cout << "Rendering with Version 2" << std::endl;
        }
    }

    namespace Experimental {
        void render() {
            std::cout << "Rendering with experimental features" << std::endl;
        }
    }
}

int main() {
    Graphics::render();  // Calls Version2 by default (latest inline)
    Graphics::Experimental::render();  // Explicit call to Experimental version
    return 0;
}
