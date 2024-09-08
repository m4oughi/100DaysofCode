#include <iostream>

class Base {
public:
    static const int baseValue = 50;
};

class Derived : public Base {
public:
    static const int derivedValue = 100;
};

int main() {
    std::cout << "Base value: " << Base::baseValue << std::endl; // Prints 50
    std::cout << "Derived value: " << Derived::derivedValue << std::endl; // Prints 100
}
