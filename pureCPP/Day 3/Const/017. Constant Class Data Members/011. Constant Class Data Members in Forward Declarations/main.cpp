#include <iostream>

class MyClass; // Forward declaration

class AnotherClass {
public:
    static const int value;
};

const int AnotherClass::value = 300; // Definition

int main() {
    std::cout << AnotherClass::value << std::endl; // Prints 300
}
