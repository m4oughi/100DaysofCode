#include <iostream>

class Rectangle {
public:
    constexpr Rectangle(int l, int w) : length(l), width(w) {}

    constexpr int getArea() const { return length * width; }
    constexpr int getPerimeter() const { return 2 * (length + width); }

private:
    int length, width;
};

int main() {
    constexpr Rectangle rect(5, 10); // Compile-time construction
    std::cout << rect.getArea() << " " << rect.getPerimeter() << std::endl; // Prints 50 30
}
