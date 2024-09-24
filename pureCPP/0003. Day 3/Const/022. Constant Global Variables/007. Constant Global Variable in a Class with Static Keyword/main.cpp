#include <iostream>

class MyClass {
public:
    static const int GLOBAL_CONSTANT = 700; // Static constant global variable in class
};

int main() {
    std::cout << "Global constant in class: " << MyClass::GLOBAL_CONSTANT << std::endl; // Prints 700
}
