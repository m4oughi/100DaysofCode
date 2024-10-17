#include <iostream>
#include <utility>  // For std::move_if_noexcept

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    
    // Move constructor that may throw
    MyClass(MyClass&&) { std::cout << "Move constructor (may throw)\n"; }
    
    MyClass(const MyClass&) { std::cout << "Copy constructor\n"; }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move_if_noexcept(obj1);  // Will copy since move constructor may throw
}
