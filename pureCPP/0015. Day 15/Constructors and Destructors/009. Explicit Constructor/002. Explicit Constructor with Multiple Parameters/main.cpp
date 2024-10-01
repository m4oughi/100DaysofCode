#include <iostream>

class Rectangle {
private:
    int length;
    int width;
public:
    // Explicit constructor with two parameters
    explicit Rectangle(int l, int w) : length(l), width(w) {
        std::cout << "Rectangle created with length = " << length << ", width = " << width << std::endl;
    }
    
    int area() const {
        return length * width;
    }
};

int main() {
    Rectangle r1(5, 10);  // Allowed
    std::cout << "Area: " << r1.area() << std::endl;

    // Rectangle r2 = {6, 8};  // Error: Cannot implicitly convert initializer list to Rectangle
    return 0;
}
