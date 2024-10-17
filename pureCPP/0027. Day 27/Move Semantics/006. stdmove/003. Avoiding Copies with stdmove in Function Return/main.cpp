#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor called" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor called" << std::endl; }
};

MyClass createObject() {
    MyClass obj;
    return std::move(obj);  // Forces a move instead of a copy
}

int main() {
    MyClass obj = createObject();
}
