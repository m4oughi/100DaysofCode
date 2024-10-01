#include <iostream>

class MyClass {
public:
    int x;
    double y;

    // Default constructor with initialization list
    MyClass() : x(10), y(5.5) {
        std::cout << "Default constructor called, x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    MyClass obj;  // Calls the default constructor
    return 0;
}
