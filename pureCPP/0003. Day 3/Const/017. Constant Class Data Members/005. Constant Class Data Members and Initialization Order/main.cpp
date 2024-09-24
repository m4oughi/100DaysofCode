#include <iostream>

class MyClass {
public:
    static const int value; // Declaration
    static const int otherValue; // Declaration
};

const int MyClass::value = 10;
const int MyClass::otherValue = value + 5; // Uses `value`

int main() {
    std::cout << "value: " << MyClass::value << std::endl; // Prints 10
    std::cout << "otherValue: " << MyClass::otherValue << std::endl; // Prints 15
}
