#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createRecursiveObject(int depth) {
    if (depth == 0) {
        return MyClass();  // Copy elision
    } else {
        return createRecursiveObject(depth - 1);  // NRVO in recursion
    }
}

int main() {
    MyClass obj = createRecursiveObject(5);  // No copy or move constructor called
}
