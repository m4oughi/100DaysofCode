#include <iostream>
#include <vector>

class MyClass {
public:
    std::vector<int> data;

    MyClass() : data(10000, 1) { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createLargeObject() {
    MyClass obj;
    return obj;  // NRVO prevents copying large data
}

int main() {
    MyClass obj = createLargeObject();  // No copy or move constructor is called
}
