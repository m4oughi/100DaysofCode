#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createObject() {
    MyClass obj;
    return std::move(obj);  // Move constructor is invoked, no NRVO
}

int main() {
    MyClass obj = createObject();  // Move constructor is called
}
