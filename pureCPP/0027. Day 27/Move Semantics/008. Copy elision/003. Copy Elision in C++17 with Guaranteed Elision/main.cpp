#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createObject() {
    return {};  // Guaranteed copy elision (C++17)
}

int main() {
    MyClass obj = createObject();  // No copy or move
}
