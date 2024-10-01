#include <iostream>

class Triangle {
private:
    double base, height;
public:
    // Delegating constructor to default values
    Triangle() : Triangle(1, 1) {
        std::cout << "Default constructor (delegated) called." << std::endl;
    }

    // Main constructor
    Triangle(double b, double h) : base(b), height(h) {
        std::cout << "Main constructor called." << std::endl;
    }

    void display() const {
        std::cout << "Triangle(base=" << base << ", height=" << height << ")" << std::endl;
    }
};

int main() {
    Triangle t1;              // Default constructor, delegates to the main constructor
    Triangle t2(3, 6);         // Main constructor
    t1.display();
    t2.display();
    return 0;
}
