#include <iostream>

class MyClass {
public:
    int x;
    double y;

    // Default constructor with multiple member initialization
    MyClass() : x(0), y(0.0) {
        std::cout << "Default constructor called, x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor
    return 0;
}
