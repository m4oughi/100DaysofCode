#include <iostream>

class Rectangle {
public:
    // Constructor with default parameters
    Rectangle(int w = 5, int h = 10) : width(w), height(h) {}

    // Member function with default parameter
    void printArea() const {
        std::cout << "Area: " << width * height << std::endl;
    }

private:
    int width, height;
};

int main() {
    Rectangle r1;           // Uses default width and height
    Rectangle r2(8);        // Uses default height
    Rectangle r3(7, 15);    // No default values used
    r1.printArea();
    r2.printArea();
    r3.printArea();
    return 0;
}
