#include <iostream>

namespace Graphics {
    namespace Shapes {
        class Circle {
        public:
            void draw() {
                std::cout << "Drawing a circle" << std::endl;
            }
        };
    }
}

int main() {
    Graphics::Shapes::Circle circle;  // Accessing class in nested namespace
    circle.draw();
    return 0;
}
