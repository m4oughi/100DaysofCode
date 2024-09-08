#include <iostream>

class MyClass {
public:
    enum { value = 10 }; // Enum value as constant class member
};

int main() {
    std::cout << MyClass::value << std::endl; // Prints 10
}
