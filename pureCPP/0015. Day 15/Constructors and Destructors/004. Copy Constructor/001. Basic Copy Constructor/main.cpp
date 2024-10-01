#include <iostream>

class MyClass {
public:
    int value;

    // Basic copy constructor
    MyClass(const MyClass& other) {
        value = other.value;
        std::cout << "Copy constructor called, copied value: " << value << std::endl;
    }

    MyClass(int v) : value(v) {}
};

int main() {
    MyClass obj1(10);   // Regular constructor
    MyClass obj2 = obj1; // Copy constructor is called
    return 0;
}
