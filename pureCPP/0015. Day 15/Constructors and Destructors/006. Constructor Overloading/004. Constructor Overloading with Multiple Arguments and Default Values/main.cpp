#include <iostream>

class Box {
private:
    double length, width, height;
public:
    // Default constructor
    Box() : length(1), width(1), height(1) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Constructor with two parameters
    Box(double l, double w) : length(l), width(w), height(1) {
        std::cout << "Constructor with two parameters called." << std::endl;
    }

    // Constructor with three parameters
    Box(double l, double w, double h) : length(l), width(w), height(h) {
        std::cout << "Constructor with three parameters called." << std::endl;
    }

    void display() const {
        std::cout << "Box(" << length << ", " << width << ", " << height << ")" << std::endl;
    }
};

int main() {
    Box b1;               // Default constructor
    Box b2(5, 10);         // Constructor with two parameters
    Box b3(4, 8, 12);      // Constructor with three parameters
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
