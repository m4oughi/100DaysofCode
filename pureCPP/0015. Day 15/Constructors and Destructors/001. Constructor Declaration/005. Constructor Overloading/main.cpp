#include <iostream>

class Box {
private:
    double length, width, height;
public:
    // Default constructor
    Box() : length(1.0), width(1.0), height(1.0) {
        std::cout << "Box created with default dimensions." << std::endl;
    }

    // Parameterized constructor
    Box(double l, double w, double h) : length(l), width(w), height(h) {
        std::cout << "Box created with dimensions: " << length << "x" << width << "x" << height << std::endl;
    }

    // Single parameter constructor
    Box(double size) : length(size), width(size), height(size) {
        std::cout << "Cube created with size: " << size << std::endl;
    }
};

int main() {
    Box b1;
    Box b2(3.0, 4.0, 5.0);
    Box b3(2.0);  // Cube with equal dimensions
    return 0;
}
