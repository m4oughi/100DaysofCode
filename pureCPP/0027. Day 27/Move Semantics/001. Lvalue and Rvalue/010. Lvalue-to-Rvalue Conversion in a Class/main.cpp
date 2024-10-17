#include <iostream>
#include <utility>

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}
};

int main() {
    MyClass obj(10);  // obj is an Lvalue
    MyClass &&rref = std::move(obj);  // obj is cast to Rvalue reference
    std::cout << "Rvalue reference: " << rref.value << std::endl;
    return 0;
}
