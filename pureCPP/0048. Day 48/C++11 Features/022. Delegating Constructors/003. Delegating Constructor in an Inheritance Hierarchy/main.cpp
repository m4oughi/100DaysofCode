#include <iostream>

class Base {
    int value;
public:
    Base() : Base(0) {} // Delegating constructor

    Base(int v) : value(v) {
        std::cout << "Base initialized with value: " << value << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() : Base(100) {} // Calls Base constructor with value 100
};

int main() {
    Derived d; // Calls Base(100) before constructing Derived

    return 0;
}
