#include <iostream>

class MyClass {
public:
    inline static const int value = 200; // Inline variable (C++17)
};

int main() {
    std::cout << MyClass::value << std::endl; // Prints 200
}
