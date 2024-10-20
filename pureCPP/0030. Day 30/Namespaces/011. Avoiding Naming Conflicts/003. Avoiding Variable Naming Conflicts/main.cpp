#include <iostream>

namespace Graphics {
    int resolution = 1080;
}

namespace Audio {
    int resolution = 44100;
}

int main() {
    std::cout << "Graphics resolution: " << Graphics::resolution << std::endl;
    std::cout << "Audio resolution: " << Audio::resolution << std::endl;
    return 0;
}
