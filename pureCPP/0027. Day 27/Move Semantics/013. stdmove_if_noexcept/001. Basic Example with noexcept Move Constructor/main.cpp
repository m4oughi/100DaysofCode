#include <iostream>
#include <utility>  // For std::move_if_noexcept

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor (noexcept)\n"; }
    MyClass(const MyClass&) { std::cout << "Copy constructor\n"; }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move_if_noexcept(obj1);  // Will move because move constructor is noexcept
}
