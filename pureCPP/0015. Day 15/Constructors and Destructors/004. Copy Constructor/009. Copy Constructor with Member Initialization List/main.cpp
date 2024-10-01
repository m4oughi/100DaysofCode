#include <iostream>

class MyClass {
public:
    int x;
    int y;

    // Constructor
    MyClass(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Copy constructor with member initialization list
    MyClass(const MyClass& other) : x(other.x), y(other.y) {
        std::cout << "Copy constructor called, copied x = " << x << ", y = " << y << std::endl;
    }
};

int main() {
    MyClass obj1(1, 2);
    MyClass obj2 = obj1;  // Copy constructor is called
    return 0;
}
