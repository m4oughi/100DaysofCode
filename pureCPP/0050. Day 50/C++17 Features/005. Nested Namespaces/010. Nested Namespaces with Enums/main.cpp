#include <iostream>

namespace Graphics::Rendering {
    enum class Mode { OpenGL, Vulkan, DirectX };
}

int main() {
    Graphics::Rendering::Mode mode = Graphics::Rendering::Mode::Vulkan;
    std::cout << "Selected Rendering Mode: Vulkan\n";
    return 0;
}
