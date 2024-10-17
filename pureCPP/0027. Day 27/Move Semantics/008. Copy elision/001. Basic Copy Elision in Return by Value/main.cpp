#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createObject() {
    return MyClass();  // Copy elision happens here (no copy constructor is called)
}

int main() {
    MyClass obj = createObject();  // No copy, elision is performed
}
