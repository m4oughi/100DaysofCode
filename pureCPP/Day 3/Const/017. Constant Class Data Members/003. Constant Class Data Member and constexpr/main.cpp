#include <iostream>

class MyClass {
public:
    static constexpr int value = 123; // constexpr for compile-time evaluation
};

int main() {
    std::cout << MyClass::value << std::endl; // Prints 123
}
