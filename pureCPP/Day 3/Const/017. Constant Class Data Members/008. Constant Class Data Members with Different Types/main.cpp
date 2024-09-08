#include <iostream>

class MyClass {
public:
    static const int intValue = 10;
    static const double doubleValue;
};

const double MyClass::doubleValue = 20.5; // Definition

int main() {
    std::cout << "intValue: " << MyClass::intValue << std::endl; // Prints 10
    std::cout << "doubleValue: " << MyClass::doubleValue << std::endl; // Prints 20.5
}
