#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass getObject() {
    MyClass obj;
    return obj;  // Named Return Value Optimization (NRVO) applies here
}

int main() {
    MyClass obj = getObject();  // No copy constructor is called
}
