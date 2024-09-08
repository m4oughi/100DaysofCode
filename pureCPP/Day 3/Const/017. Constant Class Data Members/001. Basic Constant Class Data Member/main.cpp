#include <iostream>

class MyClass {
public:
    static const int value = 42; // Constant class data member
};

int main() {
    std::cout << MyClass::value << std::endl; // Prints 42
}
