#include <iostream>

namespace Graphics {
    void draw(int x) {
        std::cout << "Drawing with integer coordinates: " << x << std::endl;
    }

    void draw(double x) {
        std::cout << "Drawing with floating-point coordinates: " << x << std::endl;
    }
}

int main() {
    using Graphics::draw;  // Brings both overloaded versions into scope

    draw(5);       // Calls the integer version
    draw(5.5);     // Calls the double version
    return 0;
}
