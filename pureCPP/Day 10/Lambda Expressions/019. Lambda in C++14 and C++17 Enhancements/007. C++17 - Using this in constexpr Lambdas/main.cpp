#include <iostream>

class Rectangle {
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    constexpr auto area() const {
        return [this]() constexpr {
            return width * height;
        };
    }
};

int main() {
    constexpr Rectangle rect(5, 10);
    constexpr int rectArea = rect.area()(); // Compile-time calculation

    std::cout << "Area of rectangle: " << rectArea << std::endl; // Outputs: 50
    return 0;
}
