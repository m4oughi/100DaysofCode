#include <iostream>

namespace Graphics {
    namespace Shapes {
        class Circle {
        public:
            void draw() {
                std::cout << "Drawing a Circle." << std::endl;
            }
        };
    }
}

int main() {
    Graphics::Shapes::Circle circle; // Accessing the nested class
    circle.draw();                   // Calling the draw method
    return 0;
}
