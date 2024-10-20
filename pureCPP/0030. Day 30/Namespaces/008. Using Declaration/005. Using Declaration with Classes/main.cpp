#include <iostream>

namespace Shapes {
    class Circle {
    public:
        void draw() {
            std::cout << "Drawing a circle" << std::endl;
        }
    };
}

int main() {
    using Shapes::Circle;  // Importing the Circle class into the global scope

    Circle circle;
    circle.draw();  // Directly using Circle without `Shapes::Circle`
    return 0;
}
