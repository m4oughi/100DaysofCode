#include <iostream>

struct Rectangle {
    int width, height;

    consteval Rectangle(int w, int h) : width(w), height(h) {} // Always at compile-time

    consteval int area() const {
        return width * height;
    }
};

int main() {
    constexpr Rectangle r(4, 5);  // OK, compile-time
    constexpr int area = r.area();  // OK

    std::cout << "Rectangle Area: " << area << '\n';
    return 0;
}
