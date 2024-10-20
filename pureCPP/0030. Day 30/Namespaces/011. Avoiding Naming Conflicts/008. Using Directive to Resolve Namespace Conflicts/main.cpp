#include <iostream>

namespace Graphics {
    void initialize() {
        std::cout << "Graphics initialized" << std::endl;
    }
}

namespace Audio {
    void initialize() {
        std::cout << "Audio initialized" << std::endl;
    }
}

int main() {
    using namespace Graphics;
    initialize();  // Calls Graphics::initialize

    // Fully qualify to avoid naming conflict
    Audio::initialize();  // Calls Audio::initialize
    return 0;
}
