#include <iostream>

namespace Graphics {
    void render() {
        std::cout << "Rendering 2D graphics" << std::endl;
    }
}

namespace Physics {
    void render() {
        std::cout << "Rendering physics simulation" << std::endl;
    }
}

int main() {
    // using namespace Graphics;  // Avoid using directives to prevent conflict
    // using namespace Physics;  // This would cause ambiguity

    Graphics::render();  // Full qualification to avoid conflict
    Physics::render();
    return 0;
}
