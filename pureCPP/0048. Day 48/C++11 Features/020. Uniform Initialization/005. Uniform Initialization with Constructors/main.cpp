#include <iostream>

class Rectangle {
public:
    int width, height;
    
    Rectangle(int w, int h) : width(w), height(h) {}
};

int main() {
    Rectangle r1{30, 40}; // Uniform initialization

    std::cout << "Rectangle Width: " << r1.width << ", Height: " << r1.height << std::endl;
    return 0;
}
