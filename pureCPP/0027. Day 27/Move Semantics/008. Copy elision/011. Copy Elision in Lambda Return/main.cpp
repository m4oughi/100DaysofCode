#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

auto createLambda() {
    return [] {
        MyClass obj;
        return obj;  // NRVO still applies in lambda return
    };
}

int main() {
    auto lambda = createLambda();
    MyClass obj = lambda();  // No copy, NRVO is applied
}
