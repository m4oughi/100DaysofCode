#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

template <typename... Args>
MyClass createObject(Args&&... args) {
    MyClass obj;
    return obj;  // NRVO in a variadic template function
}

int main() {
    MyClass obj = createObject();  // NRVO prevents move or copy constructor
}
