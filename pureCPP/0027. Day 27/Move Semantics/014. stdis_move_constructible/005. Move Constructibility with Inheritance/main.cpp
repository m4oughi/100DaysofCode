#include <iostream>
#include <type_traits>

class Base {
public:
    Base() = default;
    Base(Base&&) = default;  // Move constructor for the base class
};

class Derived : public Base {
public:
    Derived() = default;
    // No explicit move constructor, but inherits move constructor from Base
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is Derived move constructible? "
              << std::is_move_constructible<Derived>::value << std::endl;
}
