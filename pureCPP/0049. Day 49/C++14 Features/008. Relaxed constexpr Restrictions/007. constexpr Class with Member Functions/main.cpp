#include <iostream>

class Rectangle {
    int width, height;
public:
    constexpr Rectangle(int w, int h) : width(w), height(h) {}

    constexpr int area() const {
        return width * height;
    }
};

int main() {
    constexpr Rectangle rect(5, 4);
    constexpr int area = rect.area();
    
    std::cout << "Rectangle Area: " << area << std::endl; // Output: 20
    return 0;
}
