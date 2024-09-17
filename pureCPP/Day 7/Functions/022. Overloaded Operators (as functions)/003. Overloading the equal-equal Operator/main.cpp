#include <iostream>

class Rectangle {
public:
    int width, height;

    Rectangle(int w, int h) : width(w), height(h) {}

    // Overload the == operator
    bool operator==(const Rectangle& other) const {
        return (width == other.width) && (height == other.height);
    }
};

int main() {
    Rectangle r1(5, 10);
    Rectangle r2(5, 10);
    Rectangle r3(6, 10);

    std::cout << (r1 == r2 ? "Equal" : "Not equal") << std::endl;  // Output: Equal
    std::cout << (r1 == r3 ? "Equal" : "Not equal") << std::endl;  // Output: Not equal

    return 0;
}
