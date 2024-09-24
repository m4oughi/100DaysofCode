#include <iostream>

class MyClass {
public:
    static const int value; // Declaration
};

const int MyClass::value = 100; // Definition

int main() {
    std::cout << MyClass::value << std::endl; // Prints 100
}
