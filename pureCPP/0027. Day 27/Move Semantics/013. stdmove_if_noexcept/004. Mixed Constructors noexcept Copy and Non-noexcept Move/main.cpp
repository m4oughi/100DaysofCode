#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    
    // Move constructor that may throw
    MyClass(MyClass&&) { std::cout << "Move constructor (may throw)\n"; }
    
    // Copy constructor that is noexcept
    MyClass(const MyClass&) noexcept { std::cout << "Copy constructor (noexcept)\n"; }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move_if_noexcept(obj1);  // Will copy since move may throw, but copy is noexcept
}
