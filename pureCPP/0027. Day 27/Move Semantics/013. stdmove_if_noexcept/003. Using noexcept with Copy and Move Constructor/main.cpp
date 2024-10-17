#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    
    // Move constructor
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor (noexcept)\n"; }
    
    // Copy constructor
    MyClass(const MyClass&) noexcept { std::cout << "Copy constructor (noexcept)\n"; }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move_if_noexcept(obj1);  // Will move because both constructors are noexcept
}
