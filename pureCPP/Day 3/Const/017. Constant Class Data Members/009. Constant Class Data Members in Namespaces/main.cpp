#include <iostream>

namespace MyNamespace {
    class MyClass {
    public:
        static const int value = 500;
    };
}

int main() {
    std::cout << MyNamespace::MyClass::value << std::endl; // Prints 500
}
