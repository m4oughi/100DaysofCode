#include <iostream>
#include <string>

class MyClass {
public:
    std::string name;
    MyClass(std::string n) : name(n) { std::cout << "Constructor: " << name << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
};

MyClass makeObject() {
    MyClass obj("Temporary");
    return obj;  // NRVO likely applied, no copy
}

int main() {
    MyClass obj = makeObject();  // "Temporary" is constructed directly in obj
}
