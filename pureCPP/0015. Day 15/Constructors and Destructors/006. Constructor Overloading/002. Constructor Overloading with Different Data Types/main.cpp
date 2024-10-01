#include <iostream>

class Rectangle {
private:
    double width, height;
public:
    // Default constructor
    Rectangle() : width(1), height(1) {
        std::cout << "Default constructor called." << std::endl;
    }

    // Constructor for int
    Rectangle(int w, int h) : width(w), height(h) {
        std::cout << "Constructor with int called." << std::endl;
    }

    // Constructor for double
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Constructor with double called." << std::endl;
    }

    void display() const {
        std::cout << "Rectangle(" << width << ", " << height << ")" << std::endl;
    }
};

int main() {
    Rectangle r1;            // Default constructor
    Rectangle r2(5, 10);      // Constructor with int
    Rectangle r3(4.5, 8.2);   // Constructor with double
    r1.display();
    r2.display();
    r3.display();
    return 0;
}
