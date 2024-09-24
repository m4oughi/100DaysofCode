#include <iostream>

class MyClass {
public:
    static const int value;
    static const int computedValue;
};

const int MyClass::value = 5;
const int MyClass::computedValue = value * 2;

int main() {
    std::cout << "value: " << MyClass::value << std::endl; // Prints 5
    std::cout << "computedValue: " << MyClass::computedValue << std::endl; // Prints 10
}
