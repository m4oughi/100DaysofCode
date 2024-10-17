#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass makeObject() {
    MyClass obj;
    return obj;  // NRVO prevents move or copy constructor from being called
}

int main() {
    MyClass obj = makeObject();  // No move or copy constructor
}
