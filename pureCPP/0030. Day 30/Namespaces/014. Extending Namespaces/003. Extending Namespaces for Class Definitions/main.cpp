#include <iostream>

namespace Graphics {
    class Shape {
    public:
        virtual void draw() = 0;
    };
}

// Extending the Graphics namespace
namespace Graphics {
    class Circle : public Shape {
    public:
        void draw() override {
            std::cout << "Drawing a Circle." << std::endl;
        }
    };

    class Square : public Shape {
    public:
        void draw() override {
            std::cout << "Drawing a Square." << std::endl;
        }
    };
}

int main() {
    Graphics::Circle circle;
    Graphics::Square square;

    circle.draw();   // Drawing a Circle
    square.draw();   // Drawing a Square
    return 0;
}
