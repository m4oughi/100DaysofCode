#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor called" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor called" << std::endl; }
};

void processObject(MyClass obj) {
    std::cout << "Processing object" << std::endl;
}

int main() {
    MyClass obj;
    processObject(std::move(obj));  // Forces move constructor instead of copy
}
